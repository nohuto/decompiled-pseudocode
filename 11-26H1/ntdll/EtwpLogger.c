/*
 * XREFs of EtwpLogger @ 0x180066820
 * Callers:
 *     <none>
 * Callees:
 *     EtwpAddLogHeaderToLogFile @ 0x18003FCD0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpSendSessionNotification @ 0x180064890 (EtwpSendSessionNotification.c)
 *     EtwpFlushActiveBuffers @ 0x180066A60 (EtwpFlushActiveBuffers.c)
 *     EtwpStopLoggerInstance @ 0x180066C2C (EtwpStopLoggerInstance.c)
 *     EtwpFinalizeLogFileHeader @ 0x180067224 (EtwpFinalizeLogFileHeader.c)
 *     EtwpFreeLoggerContext @ 0x180067A78 (EtwpFreeLoggerContext.c)
 *     RtlExitUserThread @ 0x18007DD10 (RtlExitUserThread.c)
 *     NtWaitForSingleObject @ 0x18015EEC0 (NtWaitForSingleObject.c)
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 *     ZwSetEvent @ 0x18015F000 (ZwSetEvent.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 */

void __fastcall __noreturn EtwpLogger(char *BaseAddress)
{
  LARGE_INTEGER *v2; // r8
  NTSTATUS v3; // eax
  BOOL v4; // esi
  int active; // eax
  __int64 v6; // rdx
  int v7; // edi
  int v8; // eax
  int v9; // eax
  void *v10; // rcx
  signed int v11; // edi
  void *v12; // rcx
  void *v13; // rsi
  NTSTATUS v14; // eax
  bool v15; // zf
  int v16; // eax
  int ThreadInformation; // [rsp+40h] [rbp+8h] BYREF

  *((_QWORD *)BaseAddress + 3) = NtCurrentTeb()->ClientId.UniqueThread;
  *((_DWORD *)BaseAddress + 10) = 0;
  ThreadInformation = 2;
  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasePriority, &ThreadInformation, 4u);
  while ( *((_DWORD *)BaseAddress + 78) )
  {
    v2 = 0LL;
    if ( *((_QWORD *)BaseAddress + 41) )
      v2 = (LARGE_INTEGER *)(BaseAddress + 328);
    v3 = NtWaitForSingleObject(*((HANDLE *)BaseAddress + 14), 0, v2);
    v4 = v3 == 258 || !v3 && (BaseAddress[316] & 2) != 0;
    active = EtwpFlushActiveBuffers(BaseAddress, v4);
    v7 = active;
    if ( (BaseAddress[316] & 1) != 0 && active >= 0 && !v4 )
      v7 = EtwpFlushActiveBuffers(BaseAddress, 1LL);
    v8 = *((_DWORD *)BaseAddress + 79);
    if ( (v8 & 4) != 0 || (v8 & 1) != 0 )
    {
      EtwpFinalizeLogFileHeader(BaseAddress, 0LL);
      v13 = (void *)*((_QWORD *)BaseAddress + 16);
      *((_QWORD *)BaseAddress + 16) = 0LL;
      v14 = EtwpAddLogHeaderToLogFile((__int64)BaseAddress, 0LL, 0, 0);
      *((_DWORD *)BaseAddress + 10) = v14;
      v7 = v14;
      if ( v14 >= 0 )
      {
        NtClose(v13);
        if ( (BaseAddress[316] & 1) != 0 )
          EtwpSendSessionNotification((__int64)BaseAddress, 1, 0);
      }
      else
      {
        v15 = (BaseAddress[316] & 4) == 0;
        v16 = 0;
        *((_QWORD *)BaseAddress + 16) = v13;
        if ( v15 )
          v16 = v7;
        v7 = v16;
      }
      *((_DWORD *)BaseAddress + 79) &= ~1u;
      v8 = *((_DWORD *)BaseAddress + 79);
    }
    if ( (v8 & 0x10) != 0 )
    {
      v15 = *((_QWORD *)BaseAddress + 16) == 0LL;
      *((_DWORD *)BaseAddress + 79) = v8 & 0xFFFFFFEF;
      if ( !v15 )
      {
        LOBYTE(v6) = 1;
        EtwpFinalizeLogFileHeader(BaseAddress, v6);
      }
    }
    v9 = *((_DWORD *)BaseAddress + 79);
    if ( (v9 & 6) != 0 )
    {
      v10 = (void *)*((_QWORD *)BaseAddress + 15);
      *((_DWORD *)BaseAddress + 79) = v9 & 0xFFFFFFF9;
      ZwSetEvent(v10, 0LL);
    }
    if ( v7 < 0 )
      EtwpStopLoggerInstance(BaseAddress);
  }
  EtwpFlushActiveBuffers(BaseAddress, 1LL);
  v11 = EtwpFinalizeLogFileHeader(BaseAddress, 0LL);
  NtClose(*((HANDLE *)BaseAddress + 16));
  *((_QWORD *)BaseAddress + 16) = 0LL;
  if ( v11 > 0 )
    v11 = (unsigned __int16)v11 | 0xC0070000;
  v12 = (void *)*((_QWORD *)BaseAddress + 15);
  *((_DWORD *)BaseAddress + 10) = v11;
  ZwSetEvent(v12, 0LL);
  EtwpFreeLoggerContext(BaseAddress);
  RtlExitUserThread(0);
}
