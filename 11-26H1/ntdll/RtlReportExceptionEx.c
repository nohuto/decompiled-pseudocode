/*
 * XREFs of RtlReportExceptionEx @ 0x18013A710
 * Callers:
 *     WerReportExceptionWorker @ 0x18013AB70 (WerReportExceptionWorker.c)
 * Callees:
 *     ReportExceptionInternal @ 0x18007F9F4 (ReportExceptionInternal.c)
 *     WerpProcessId @ 0x18007FB30 (WerpProcessId.c)
 *     WerpThreadId @ 0x18007FB80 (WerpThreadId.c)
 *     WerpWaitForCrashReporting @ 0x18007FBD0 (WerpWaitForCrashReporting.c)
 *     RtlReportException @ 0x18010B740 (RtlReportException.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x18010B7E4 (WerpBreakIntoDebuggerIfPresent.c)
 *     WerpCreateCompletionEvent @ 0x18010FF48 (WerpCreateCompletionEvent.c)
 *     WerpSetProcessFaultInformation @ 0x180111320 (WerpSetProcessFaultInformation.c)
 *     WerpCreateCrashDataSection @ 0x180111754 (WerpCreateCrashDataSection.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18015F380 (NtUnmapViewOfSection.c)
 *     ZwTerminateProcess @ 0x18015F3C0 (ZwTerminateProcess.c)
 *     ZwDuplicateObject @ 0x18015F5C0 (ZwDuplicateObject.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlReportExceptionEx(
        PEXCEPTION_RECORD ExceptionRecord,
        PCONTEXT ContextRecord,
        ULONG Flags,
        PLARGE_INTEGER Timeout)
{
  char *v8; // rsi
  int v9; // r14d
  int v10; // eax
  NTSTATUS v12; // ebx
  int v13; // ebx
  _OWORD *v14; // r9
  __int64 v15; // rax
  HANDLE v16; // [rsp+40h] [rbp-88h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-80h] BYREF
  HANDLE v18; // [rsp+50h] [rbp-78h] BYREF
  HANDLE TargetHandle; // [rsp+58h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-68h] BYREF
  HANDLE v21; // [rsp+68h] [rbp-60h] BYREF
  int v22; // [rsp+70h] [rbp-58h]
  int v23; // [rsp+74h] [rbp-54h]
  __int128 v24; // [rsp+78h] [rbp-50h] BYREF
  __int128 v25; // [rsp+88h] [rbp-40h]
  HANDLE SourceHandle; // [rsp+F0h] [rbp+28h]

  v24 = 0LL;
  v25 = 0LL;
  TargetHandle = 0LL;
  v18 = 0LL;
  v16 = 0LL;
  Handle = 0LL;
  v21 = 0LL;
  v8 = 0LL;
  BaseAddress = 0LL;
  v9 = WerpProcessId(Timeout);
  v22 = v9;
  v10 = WerpThreadId(SourceHandle);
  v23 = v10;
  if ( v9 == (unsigned int)NtCurrentTeb()->ClientId.UniqueProcess
    && v10 == (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
  {
    return RtlReportException(ExceptionRecord, ContextRecord, Flags);
  }
  if ( v9 == (unsigned int)NtCurrentTeb()->ClientId.UniqueProcess )
    WerpBreakIntoDebuggerIfPresent(ExceptionRecord, ContextRecord, Flags);
  if ( (Flags & 4) != 0 || (v12 = WerpSetProcessFaultInformation(Timeout), v12 >= 0) )
  {
    v12 = WerpCreateCompletionEvent(&v16);
    if ( v12 >= 0 )
    {
      v12 = WerpCreateCrashDataSection(&v21, &BaseAddress);
      if ( v12 < 0
        || (v12 = ZwDuplicateObject(
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    Timeout,
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    &TargetHandle,
                    0x1FFFFFu,
                    2u,
                    0),
            v12 < 0)
        || (v12 = ZwDuplicateObject(
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    SourceHandle,
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    &v18,
                    0x1FFFFFu,
                    2u,
                    0),
            v12 < 0) )
      {
        v8 = (char *)BaseAddress;
      }
      else
      {
        v8 = (char *)BaseAddress;
        *(_DWORD *)BaseAddress = 248;
        *((_QWORD *)v8 + 21) = 1LL;
        v13 = v22;
        *((_DWORD *)v8 + 1) = v22;
        *((_DWORD *)v8 + 2) = v23;
        *((_QWORD *)v8 + 23) = TargetHandle;
        *((_QWORD *)v8 + 24) = v18;
        *((_QWORD *)v8 + 26) = v16;
        *((_QWORD *)v8 + 28) = 0LL;
        *((_DWORD *)v8 + 58) = -1073741823;
        *((_DWORD *)v8 + 59) = Flags;
        *((_DWORD *)v8 + 60) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
        v14 = v8 + 416;
        *((_QWORD *)v8 + 31) = 1LL;
        *(_OWORD *)(v8 + 264) = *(_OWORD *)&ExceptionRecord->ExceptionCode;
        *(_OWORD *)(v8 + 280) = *(_OWORD *)&ExceptionRecord->ExceptionAddress;
        *(_OWORD *)(v8 + 296) = *(_OWORD *)ExceptionRecord->ExceptionInformation;
        *(_OWORD *)(v8 + 312) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[2];
        *(_OWORD *)(v8 + 328) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[4];
        *(_OWORD *)(v8 + 344) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[6];
        *(_OWORD *)(v8 + 360) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[8];
        *(_OWORD *)(v8 + 376) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[10];
        *(_OWORD *)(v8 + 392) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[12];
        *((_QWORD *)v8 + 51) = ExceptionRecord->ExceptionInformation[14];
        if ( ((unsigned __int64)ContextRecord & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
        {
          *((_QWORD *)v8 + 32) = 1LL;
          v15 = 9LL;
          do
          {
            *v14 = *(_OWORD *)&ContextRecord->P1Home;
            v14[1] = *(_OWORD *)&ContextRecord->P3Home;
            v14[2] = *(_OWORD *)&ContextRecord->P5Home;
            v14[3] = *(_OWORD *)&ContextRecord->ContextFlags;
            v14[4] = *(_OWORD *)&ContextRecord->SegGs;
            v14[5] = *(_OWORD *)&ContextRecord->Dr1;
            v14[6] = *(_OWORD *)&ContextRecord->Dr3;
            v14 += 8;
            *(v14 - 1) = *(_OWORD *)&ContextRecord->Dr7;
            ContextRecord = (PCONTEXT)((char *)ContextRecord + 128);
            --v15;
          }
          while ( v15 );
          *v14 = *(_OWORD *)&ContextRecord->P1Home;
          v14[1] = *(_OWORD *)&ContextRecord->P3Home;
          v14[2] = *(_OWORD *)&ContextRecord->P5Home;
          v14[3] = *(_OWORD *)&ContextRecord->ContextFlags;
          v14[4] = *(_OWORD *)&ContextRecord->SegGs;
        }
        else
        {
          *((_QWORD *)v8 + 32) = 2LL;
          memset_thunk_772440563353939046(v8 + 416, 0, 0x4D0uLL);
        }
        *(_QWORD *)&v24 = v16;
        *((_QWORD *)&v24 + 1) = v21;
        *(_QWORD *)&v25 = TargetHandle;
        *((_QWORD *)&v25 + 1) = v18;
        v12 = ReportExceptionInternal(v13, (__int64)v21, &v24, 4u, Flags, &Handle);
        if ( v12 >= 0 )
        {
          if ( !Handle || (v12 = WerpWaitForCrashReporting(Timeout, v16, Handle, 0LL), v12 >= 0) )
          {
            if ( (Flags & 4) != 0 || (v12 = ZwTerminateProcess(Timeout, ExceptionRecord->ExceptionCode), v12 >= 0) )
              v12 = 0;
          }
        }
      }
    }
  }
  if ( Handle )
    NtClose(Handle);
  if ( v8 )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v8);
  if ( v21 )
    NtClose(v21);
  if ( v16 )
  {
    NtClose(v16);
    v16 = 0LL;
  }
  if ( v18 )
    NtClose(v18);
  if ( TargetHandle )
    NtClose(TargetHandle);
  return v12;
}
