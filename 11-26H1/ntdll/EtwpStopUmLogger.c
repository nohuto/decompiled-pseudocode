/*
 * XREFs of EtwpStopUmLogger @ 0x180076678
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180076830 (EtwProcessPrivateLoggerRequest.c)
 *     EtwpShutdownPrivateLoggers @ 0x180087608 (EtwpShutdownPrivateLoggers.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180056660 (RtlNtStatusToDosError.c)
 *     EtwpGetUmLoggerInfoFromContext @ 0x180076484 (EtwpGetUmLoggerInfoFromContext.c)
 *     EtwpSynchronizeWithLogger @ 0x1800774FC (EtwpSynchronizeWithLogger.c)
 *     EtwpGetPrivateLoggerContext @ 0x180077F10 (EtwpGetPrivateLoggerContext.c)
 *     EtwpStopLoggerInstance @ 0x18007840C (EtwpStopLoggerInstance.c)
 *     EtwpFreeLoggerContext @ 0x180079258 (EtwpFreeLoggerContext.c)
 *     NtWaitForSingleObject @ 0x18015EFC0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 */

__int64 __fastcall EtwpStopUmLogger(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r13d
  char v6; // r12
  ULONG PrivateLoggerContext; // edi
  __int64 v8; // rbx
  char v9; // r15
  int v10; // ebp
  void *v11; // r14
  unsigned int v12; // esi
  int v14; // eax
  NTSTATUS v15; // eax
  unsigned int v16; // [rsp+60h] [rbp+8h]
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF
  int v18; // [rsp+70h] [rbp+18h]
  int v19; // [rsp+74h] [rbp+1Ch]

  v19 = HIDWORD(a3);
  v4 = 0;
  v17 = 0LL;
  v18 = 0;
  v6 = 0;
  PrivateLoggerContext = EtwpGetPrivateLoggerContext(a4, &v17);
  if ( PrivateLoggerContext )
    return PrivateLoggerContext;
  v8 = v17;
  v9 = 1;
  v10 = *(_DWORD *)(v17 + 308) & 0x400;
  v11 = *(void **)(v17 + 32);
  v16 = *(_DWORD *)(v17 + 20);
  if ( (*(_DWORD *)(a4 + 64) & 0x10000) != 0 )
  {
    v6 = 1;
    v4 = *(_DWORD *)(v17 + 368);
    v18 = *(_DWORD *)(v17 + 372);
    *(_DWORD *)(v17 + 368) = *(_DWORD *)(a4 + 104);
    *(_DWORD *)(v8 + 372) = *(_DWORD *)(a4 + 112);
    if ( (*(_DWORD *)(a4 + 64) & 0x1000) != 0 )
      *(_QWORD *)(v8 + 360) = *(_QWORD *)(a4 + 16);
  }
  PrivateLoggerContext = EtwpStopLoggerInstance(v8);
  if ( !PrivateLoggerContext )
  {
    if ( v10 || (v15 = EtwpSynchronizeWithLogger(v8, 8LL), v15 >= 0) )
    {
      EtwpGetUmLoggerInfoFromContext(a4, v8, 0LL);
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
    *(_DWORD *)(v8 + 368) = v4;
    *(_DWORD *)(v8 + 372) = v14;
  }
  if ( v9 )
    _InterlockedDecrement((volatile signed __int32 *)(16LL * v12 + EtwpLoggerArray + 8));
  return PrivateLoggerContext;
}
