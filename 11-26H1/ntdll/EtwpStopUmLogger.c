/*
 * XREFs of EtwpStopUmLogger @ 0x180064E98
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180065050 (EtwProcessPrivateLoggerRequest.c)
 *     EtwpShutdownPrivateLoggers @ 0x18007E988 (EtwpShutdownPrivateLoggers.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180040BE0 (RtlNtStatusToDosError.c)
 *     EtwpGetUmLoggerInfoFromContext @ 0x180064CA4 (EtwpGetUmLoggerInfoFromContext.c)
 *     EtwpSynchronizeWithLogger @ 0x180065D1C (EtwpSynchronizeWithLogger.c)
 *     EtwpGetPrivateLoggerContext @ 0x180066730 (EtwpGetPrivateLoggerContext.c)
 *     EtwpStopLoggerInstance @ 0x180066C2C (EtwpStopLoggerInstance.c)
 *     EtwpFreeLoggerContext @ 0x180067A78 (EtwpFreeLoggerContext.c)
 *     NtWaitForSingleObject @ 0x18015EEC0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 */

__int64 __fastcall EtwpStopUmLogger(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r13d
  char v6; // r12
  ULONG PrivateLoggerContext; // edi
  _DWORD *v8; // rbx
  char v9; // r15
  int v10; // ebp
  void *v11; // r14
  unsigned int v12; // esi
  int v14; // eax
  NTSTATUS v15; // eax
  unsigned int v16; // [rsp+60h] [rbp+8h]
  PVOID BaseAddress; // [rsp+68h] [rbp+10h] BYREF
  int v18; // [rsp+70h] [rbp+18h]
  int v19; // [rsp+74h] [rbp+1Ch]

  v19 = HIDWORD(a3);
  v4 = 0;
  BaseAddress = 0LL;
  v18 = 0;
  v6 = 0;
  PrivateLoggerContext = EtwpGetPrivateLoggerContext(a4, &BaseAddress);
  if ( PrivateLoggerContext )
    return PrivateLoggerContext;
  v8 = BaseAddress;
  v9 = 1;
  v10 = *((_DWORD *)BaseAddress + 77) & 0x400;
  v11 = (void *)*((_QWORD *)BaseAddress + 4);
  v16 = *((_DWORD *)BaseAddress + 5);
  if ( (*(_DWORD *)(a4 + 64) & 0x10000) != 0 )
  {
    v6 = 1;
    v4 = *((_DWORD *)BaseAddress + 92);
    v18 = *((_DWORD *)BaseAddress + 93);
    *((_DWORD *)BaseAddress + 92) = *(_DWORD *)(a4 + 104);
    v8[93] = *(_DWORD *)(a4 + 112);
    if ( (*(_DWORD *)(a4 + 64) & 0x1000) != 0 )
      *((_QWORD *)v8 + 45) = *(_QWORD *)(a4 + 16);
  }
  PrivateLoggerContext = EtwpStopLoggerInstance(v8);
  if ( !PrivateLoggerContext )
  {
    if ( v10 || (v15 = EtwpSynchronizeWithLogger(v8, 8LL), v15 >= 0) )
    {
      EtwpGetUmLoggerInfoFromContext(a4, (__int64)v8, 0LL);
      v12 = v16;
      v9 = 0;
      _InterlockedDecrement((volatile signed __int32 *)(16LL * v16 + EtwpLoggerArray + 8));
      if ( v10 )
        EtwpFreeLoggerContext(v8);
      v8 = 0LL;
      if ( v11 )
      {
        NtWaitForSingleObject(v11, 0, 0LL);
        NtClose(v11);
      }
      goto LABEL_9;
    }
    PrivateLoggerContext = RtlNtStatusToDosError(v15);
  }
  v12 = v16;
LABEL_9:
  if ( v6 && v8 )
  {
    v14 = v18;
    v8[92] = v4;
    v8[93] = v14;
  }
  if ( v9 )
    _InterlockedDecrement((volatile signed __int32 *)(16LL * v12 + EtwpLoggerArray + 8));
  return PrivateLoggerContext;
}
