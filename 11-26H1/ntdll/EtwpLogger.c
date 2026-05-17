/*
 * XREFs of EtwpLogger @ 0x180078000
 * Callers:
 *     <none>
 * Callees:
 *     EtwpAddLogHeaderToLogFile @ 0x180055750 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpSendSessionNotification @ 0x180076070 (EtwpSendSessionNotification.c)
 *     EtwpFlushActiveBuffers @ 0x180078240 (EtwpFlushActiveBuffers.c)
 *     EtwpStopLoggerInstance @ 0x18007840C (EtwpStopLoggerInstance.c)
 *     EtwpFinalizeLogFileHeader @ 0x180078A04 (EtwpFinalizeLogFileHeader.c)
 *     EtwpFreeLoggerContext @ 0x180079258 (EtwpFreeLoggerContext.c)
 *     RtlExitUserThread @ 0x180086970 (RtlExitUserThread.c)
 *     NtWaitForSingleObject @ 0x18015EFC0 (NtWaitForSingleObject.c)
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 *     ZwSetEvent @ 0x18015F100 (ZwSetEvent.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 */

void __fastcall __noreturn EtwpLogger(__int64 a1)
{
  LARGE_INTEGER *v2; // r8
  NTSTATUS v3; // eax
  BOOL v4; // esi
  int active; // eax
  __int64 v6; // rdx
  int v7; // edi
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  signed int v11; // edi
  __int64 v12; // rcx
  void *v13; // rsi
  NTSTATUS v14; // eax
  bool v15; // zf
  int v16; // eax
  int v17; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)(a1 + 24) = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(a1 + 40) = 0;
  v17 = 2;
  NtSetInformationThread(-2LL, 3LL, &v17, 4LL);
  while ( *(_DWORD *)(a1 + 312) )
  {
    v2 = 0LL;
    if ( *(_QWORD *)(a1 + 328) )
      v2 = (LARGE_INTEGER *)(a1 + 328);
    v3 = NtWaitForSingleObject(*(HANDLE *)(a1 + 112), 0, v2);
    v4 = v3 == 258 || !v3 && (*(_BYTE *)(a1 + 316) & 2) != 0;
    active = EtwpFlushActiveBuffers(a1, v4);
    v7 = active;
    if ( (*(_BYTE *)(a1 + 316) & 1) != 0 && active >= 0 && !v4 )
      v7 = EtwpFlushActiveBuffers(a1, 1LL);
    v8 = *(_DWORD *)(a1 + 316);
    if ( (v8 & 4) != 0 || (v8 & 1) != 0 )
    {
      EtwpFinalizeLogFileHeader(a1, 0LL);
      v13 = *(void **)(a1 + 128);
      *(_QWORD *)(a1 + 128) = 0LL;
      v14 = EtwpAddLogHeaderToLogFile(a1, 0LL, 0, 0);
      *(_DWORD *)(a1 + 40) = v14;
      v7 = v14;
      if ( v14 >= 0 )
      {
        NtClose(v13);
        if ( (*(_BYTE *)(a1 + 316) & 1) != 0 )
          EtwpSendSessionNotification(a1, 1, 0);
      }
      else
      {
        v15 = (*(_BYTE *)(a1 + 316) & 4) == 0;
        v16 = 0;
        *(_QWORD *)(a1 + 128) = v13;
        if ( v15 )
          v16 = v7;
        v7 = v16;
      }
      *(_DWORD *)(a1 + 316) &= ~1u;
      v8 = *(_DWORD *)(a1 + 316);
    }
    if ( (v8 & 0x10) != 0 )
    {
      v15 = *(_QWORD *)(a1 + 128) == 0LL;
      *(_DWORD *)(a1 + 316) = v8 & 0xFFFFFFEF;
      if ( !v15 )
      {
        LOBYTE(v6) = 1;
        EtwpFinalizeLogFileHeader(a1, v6);
      }
    }
    v9 = *(_DWORD *)(a1 + 316);
    if ( (v9 & 6) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 120);
      *(_DWORD *)(a1 + 316) = v9 & 0xFFFFFFF9;
      ZwSetEvent(v10, 0LL);
    }
    if ( v7 < 0 )
      EtwpStopLoggerInstance(a1);
  }
  EtwpFlushActiveBuffers(a1, 1LL);
  v11 = EtwpFinalizeLogFileHeader(a1, 0LL);
  NtClose(*(HANDLE *)(a1 + 128));
  *(_QWORD *)(a1 + 128) = 0LL;
  if ( v11 > 0 )
    v11 = (unsigned __int16)v11 | 0xC0070000;
  v12 = *(_QWORD *)(a1 + 120);
  *(_DWORD *)(a1 + 40) = v11;
  ZwSetEvent(v12, 0LL);
  EtwpFreeLoggerContext(a1);
  RtlExitUserThread(0LL);
  __debugbreak();
}
