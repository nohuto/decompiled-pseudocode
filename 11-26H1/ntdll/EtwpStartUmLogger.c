/*
 * XREFs of EtwpStartUmLogger @ 0x180076EBC
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180076830 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     EtwpAddLogHeaderToLogFile @ 0x180055750 (EtwpAddLogHeaderToLogFile.c)
 *     RtlNtStatusToDosError @ 0x180056660 (RtlNtStatusToDosError.c)
 *     EtwpInitializeCompression @ 0x180075FD0 (EtwpInitializeCompression.c)
 *     EtwpSendSessionNotification @ 0x180076070 (EtwpSendSessionNotification.c)
 *     EtwpCreateEtwThread @ 0x180076130 (EtwpCreateEtwThread.c)
 *     EtwpGetUmLoggerInfoFromContext @ 0x180076484 (EtwpGetUmLoggerInfoFromContext.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x180077320 (EtwpGetPrivateLoggerContextByName.c)
 *     EtwpGetNextAvailableLoggerId @ 0x1800773FC (EtwpGetNextAvailableLoggerId.c)
 *     EtwpInitLoggerContext @ 0x180077550 (EtwpInitLoggerContext.c)
 *     EtwpAllocateTraceBufferPool @ 0x1800790B4 (EtwpAllocateTraceBufferPool.c)
 *     EtwpFreeLoggerContext @ 0x180079258 (EtwpFreeLoggerContext.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtQuerySystemInformation @ 0x18015F600 (NtQuerySystemInformation.c)
 *     NtTraceControl @ 0x180162A10 (NtTraceControl.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

ULONG __fastcall EtwpStartUmLogger(__int64 a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  void *v6; // r15
  unsigned int v7; // r12d
  int v8; // edx
  __int64 v9; // rcx
  int v10; // eax
  ULONG result; // eax
  unsigned int v12; // edx
  unsigned int NumberOfProcessors; // r8d
  __int64 v14; // r14
  __int64 inited; // rbx
  int v16; // eax
  NTSTATUS v17; // eax
  int v18; // ecx
  ULONG TraceBufferPool; // esi
  __int64 v20; // r14
  __int64 EtwThread; // rax
  _DWORD *v22; // rcx
  void *v23; // rcx
  NTSTATUS v24; // eax
  unsigned __int16 v25; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-41h] BYREF
  __int64 v27; // [rsp+40h] [rbp-39h] BYREF
  _DWORD *v28; // [rsp+48h] [rbp-31h]
  char SystemInformation[8]; // [rsp+50h] [rbp-29h] BYREF
  int v30; // [rsp+58h] [rbp-21h]

  v28 = a3;
  v27 = 0LL;
  v26 = 0;
  v25 = 0;
  v6 = 0LL;
  v7 = 0;
  memset_thunk_772440563353939046(SystemInformation, 0, 0x40uLL);
  if ( *(_DWORD *)a4 < 0xB0u )
    return 87;
  v8 = *(_DWORD *)(a4 + 64);
  v9 = *(unsigned __int16 *)(a4 + 146) + 176LL;
  *(_QWORD *)(a4 + 152) = a4 + 176;
  *(_QWORD *)(a4 + 136) = a4 + v9;
  if ( (v8 & 0x40B) != 0 )
  {
    if ( (unsigned int)__popcnt(v8 & 0x40B) == 1 )
      goto LABEL_4;
    return 87;
  }
  v8 |= 1u;
  *(_DWORD *)(a4 + 64) = v8;
LABEL_4:
  if ( (v8 & 0x2000000) != 0
    || (v8 & 0x400) != 0 && (*(_WORD *)(a4 + 128) || *(_DWORD *)(a4 + 68) || *(_DWORD *)(a4 + 76)) )
  {
    return 87;
  }
  v10 = *(_DWORD *)(a4 + 76);
  if ( v10 )
  {
    if ( *(_DWORD *)(a4 + 68) || v10 < 0 )
      return 87;
  }
  if ( (v8 & 2) != 0 && (v8 & 4) != 0
    || (v8 & 0xC000) == 0xC000
    || (v8 & 0x4000000) != 0 && ((v8 & 2) != 0 || (v8 & 4) != 0 || (v8 & 0x20) != 0 || (v8 & 0x400) != 0) )
  {
    return 87;
  }
  if ( !(unsigned int)EtwpGetPrivateLoggerContextByName(a4 + 144, &v27) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(16LL * *(unsigned int *)(v27 + 20) + EtwpLoggerArray + 8));
    return 183;
  }
  result = EtwpGetNextAvailableLoggerId(a4, &v26);
  if ( !result )
  {
    if ( (*(_DWORD *)(a4 + 64) & 0x10000) != 0 )
    {
      v12 = (*(unsigned __int16 *)(a4 + 146) + *(unsigned __int16 *)(a4 + 130) + 183) & 0xFFFFFFF8;
      v7 = *(_DWORD *)a4 - v12;
      v6 = (void *)(a4 + v12);
      NumberOfProcessors = -1;
    }
    else if ( (*(_DWORD *)(a4 + 64) & 0x10000000) != 0 )
    {
      NumberOfProcessors = 1;
    }
    else
    {
      NumberOfProcessors = NtCurrentPeb()->NumberOfProcessors;
    }
    v14 = v26;
    inited = EtwpInitLoggerContext(a4, v26, NumberOfProcessors, (_DWORD)v6, v7);
    if ( !inited )
    {
      _InterlockedDecrement((volatile signed __int32 *)(16 * v14 + EtwpLoggerArray + 8));
      return 8;
    }
    v16 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    if ( v16 < 0 )
      return RtlNtStatusToDosError(v16);
    *(_DWORD *)(inited + 192) = ~(v30 - 1) & (v30 - 1 + *(_DWORD *)(inited + 192));
    if ( (*(_DWORD *)(inited + 308) & 0x4000000) != 0 )
    {
      v24 = EtwpInitializeCompression(inited);
      if ( v24 )
      {
        TraceBufferPool = RtlNtStatusToDosError(v24);
        if ( TraceBufferPool )
          goto LABEL_45;
      }
    }
    if ( (*(_DWORD *)(inited + 308) & 0x400) == 0 )
    {
      v17 = EtwpAddLogHeaderToLogFile(inited, v6, v7, (*(_DWORD *)(inited + 308) & 4) != 0);
      if ( v17 )
      {
        TraceBufferPool = RtlNtStatusToDosError(v17);
        if ( TraceBufferPool )
          goto LABEL_45;
      }
    }
    v18 = 0xFFFF;
    if ( (unsigned __int64)*(unsigned int *)(inited + 192) - 72 < 0xFFFF )
      v18 = *(_DWORD *)(inited + 192) - 72;
    *(_DWORD *)(inited + 196) = v18 & 0xFFFFFFF8;
    TraceBufferPool = EtwpAllocateTraceBufferPool(inited);
    if ( TraceBufferPool )
      goto LABEL_45;
    if ( (*(_DWORD *)(inited + 308) & 0x20000) == 0 )
    {
      v25 = *(_WORD *)(inited + 20);
      v27 = 0LL;
      v26 = 0;
      TraceBufferPool = NtTraceControl(39LL, &v25, 2LL, &v27, 8, &v26);
      if ( TraceBufferPool )
        goto LABEL_45;
      v25 = WORD2(v27);
      *(_QWORD *)(inited + 544) = (unsigned int)v27;
    }
    v20 = 16 * v14;
    _InterlockedIncrement((volatile signed __int32 *)(v20 + EtwpLoggerArray + 8));
    if ( (*(_DWORD *)(inited + 308) & 0x400) == 0 )
    {
      EtwThread = EtwpCreateEtwThread();
      if ( !EtwThread )
      {
        TraceBufferPool = NtCurrentTeb()->LastErrorValue;
        goto LABEL_34;
      }
      *(_QWORD *)(inited + 32) = EtwThread;
    }
    EtwpGetUmLoggerInfoFromContext(a4, inited, &v25);
    _InterlockedExchange64((volatile __int64 *)(v20 + EtwpLoggerArray), inited);
    EtwpSendSessionNotification(inited, 5, 0);
LABEL_34:
    _InterlockedDecrement((volatile signed __int32 *)(v20 + EtwpLoggerArray + 8));
    if ( !TraceBufferPool )
    {
      v22 = v28;
      *a2 = *(_DWORD *)a4;
      *v22 = *(_DWORD *)a4;
      return TraceBufferPool;
    }
LABEL_45:
    v23 = *(void **)(inited + 128);
    if ( v23 )
    {
      NtClose(v23);
      *(_QWORD *)(inited + 128) = 0LL;
    }
    EtwpFreeLoggerContext(inited);
    return TraceBufferPool;
  }
  return result;
}
