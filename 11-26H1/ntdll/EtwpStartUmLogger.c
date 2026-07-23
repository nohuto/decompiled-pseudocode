/*
 * XREFs of EtwpStartUmLogger @ 0x1800656DC
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180065050 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     EtwpAddLogHeaderToLogFile @ 0x18003FCD0 (EtwpAddLogHeaderToLogFile.c)
 *     RtlNtStatusToDosError @ 0x180040BE0 (RtlNtStatusToDosError.c)
 *     EtwpInitializeCompression @ 0x1800647F0 (EtwpInitializeCompression.c)
 *     EtwpSendSessionNotification @ 0x180064890 (EtwpSendSessionNotification.c)
 *     EtwpCreateEtwThread @ 0x180064950 (EtwpCreateEtwThread.c)
 *     EtwpGetUmLoggerInfoFromContext @ 0x180064CA4 (EtwpGetUmLoggerInfoFromContext.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x180065B40 (EtwpGetPrivateLoggerContextByName.c)
 *     EtwpGetNextAvailableLoggerId @ 0x180065C1C (EtwpGetNextAvailableLoggerId.c)
 *     EtwpInitLoggerContext @ 0x180065D70 (EtwpInitLoggerContext.c)
 *     EtwpAllocateTraceBufferPool @ 0x1800678D4 (EtwpAllocateTraceBufferPool.c)
 *     EtwpFreeLoggerContext @ 0x180067A78 (EtwpFreeLoggerContext.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtQuerySystemInformation @ 0x18015F500 (NtQuerySystemInformation.c)
 *     NtTraceControl @ 0x180162910 (NtTraceControl.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
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
  unsigned __int32 TraceBufferPool; // esi
  __int64 v20; // r14
  HANDLE EtwThread; // rax
  _DWORD *v22; // rcx
  void *v23; // rcx
  NTSTATUS v24; // eax
  unsigned __int16 InputBuffer; // [rsp+30h] [rbp-49h] BYREF
  ULONG ReturnLength; // [rsp+38h] [rbp-41h] BYREF
  __int64 OutputBuffer; // [rsp+40h] [rbp-39h] BYREF
  _DWORD *v28; // [rsp+48h] [rbp-31h]
  char SystemInformation[8]; // [rsp+50h] [rbp-29h] BYREF
  int v30; // [rsp+58h] [rbp-21h]

  v28 = a3;
  OutputBuffer = 0LL;
  ReturnLength = 0;
  InputBuffer = 0;
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
  if ( !(unsigned int)EtwpGetPrivateLoggerContextByName((PUNICODE_STRING)(a4 + 144)) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(16LL * *(unsigned int *)(OutputBuffer + 20) + EtwpLoggerArray + 8));
    return 183;
  }
  result = EtwpGetNextAvailableLoggerId(a4, &ReturnLength);
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
    v14 = ReturnLength;
    inited = EtwpInitLoggerContext(a4, ReturnLength, NumberOfProcessors, (_DWORD)v6, v7);
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
      InputBuffer = *(_WORD *)(inited + 20);
      OutputBuffer = 0LL;
      ReturnLength = 0;
      TraceBufferPool = NtTraceControl(EtwRegisterPrivateSession, &InputBuffer, 2u, &OutputBuffer, 8u, &ReturnLength);
      if ( TraceBufferPool )
        goto LABEL_45;
      InputBuffer = WORD2(OutputBuffer);
      *(_QWORD *)(inited + 544) = (unsigned int)OutputBuffer;
    }
    v20 = 16 * v14;
    _InterlockedIncrement((volatile signed __int32 *)(v20 + EtwpLoggerArray + 8));
    if ( (*(_DWORD *)(inited + 308) & 0x400) == 0 )
    {
      EtwThread = EtwpCreateEtwThread((NTSTATUS (__cdecl *)(PVOID))EtwpLogger, (void *)inited);
      if ( !EtwThread )
      {
        TraceBufferPool = NtCurrentTeb()->LastErrorValue;
        goto LABEL_34;
      }
      *(_QWORD *)(inited + 32) = EtwThread;
    }
    EtwpGetUmLoggerInfoFromContext(a4, inited, &InputBuffer);
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
    EtwpFreeLoggerContext((PVOID)inited);
    return TraceBufferPool;
  }
  return result;
}
