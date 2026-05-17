/*
 * XREFs of RtlReportExceptionEx @ 0x18013A9A0
 * Callers:
 *     WerReportExceptionWorker @ 0x18013AE00 (WerReportExceptionWorker.c)
 * Callees:
 *     ReportExceptionInternal @ 0x180088674 (ReportExceptionInternal.c)
 *     WerpProcessId @ 0x1800887B0 (WerpProcessId.c)
 *     WerpThreadId @ 0x180088800 (WerpThreadId.c)
 *     WerpWaitForCrashReporting @ 0x180088850 (WerpWaitForCrashReporting.c)
 *     RtlReportException @ 0x18010BBF0 (RtlReportException.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x18010BC94 (WerpBreakIntoDebuggerIfPresent.c)
 *     WerpCreateCompletionEvent @ 0x1801103B8 (WerpCreateCompletionEvent.c)
 *     WerpSetProcessFaultInformation @ 0x1801117A0 (WerpSetProcessFaultInformation.c)
 *     WerpCreateCrashDataSection @ 0x180111BE4 (WerpCreateCrashDataSection.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     ZwTerminateProcess @ 0x18015F4C0 (ZwTerminateProcess.c)
 *     ZwDuplicateObject @ 0x18015F6C0 (ZwDuplicateObject.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlReportExceptionEx(unsigned int *a1, __int64 a2, unsigned int a3, void *a4, __int64 a5)
{
  _DWORD *v9; // rsi
  int v10; // r14d
  int v11; // eax
  int v13; // ebx
  int v14; // ebx
  _OWORD *v15; // r9
  __int64 v16; // rax
  HANDLE v17; // [rsp+40h] [rbp-88h] BYREF
  _DWORD *v18; // [rsp+48h] [rbp-80h] BYREF
  HANDLE v19; // [rsp+50h] [rbp-78h] BYREF
  HANDLE v20; // [rsp+58h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-68h] BYREF
  HANDLE v22; // [rsp+68h] [rbp-60h] BYREF
  int v23; // [rsp+70h] [rbp-58h]
  int v24; // [rsp+74h] [rbp-54h]
  __int128 v25; // [rsp+78h] [rbp-50h] BYREF
  __int128 v26; // [rsp+88h] [rbp-40h]

  v25 = 0LL;
  v26 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  Handle = 0LL;
  v22 = 0LL;
  v9 = 0LL;
  v18 = 0LL;
  v10 = WerpProcessId(a4);
  v23 = v10;
  v11 = WerpThreadId(a5);
  v24 = v11;
  if ( v10 == (unsigned int)NtCurrentTeb()->ClientId.UniqueProcess
    && v11 == (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
  {
    return RtlReportException(a1, a2, a3);
  }
  if ( v10 == (unsigned int)NtCurrentTeb()->ClientId.UniqueProcess )
    WerpBreakIntoDebuggerIfPresent(a1, a2, a3);
  if ( (a3 & 4) != 0 || (v13 = WerpSetProcessFaultInformation((__int64)a4), v13 >= 0) )
  {
    v13 = WerpCreateCompletionEvent(&v17);
    if ( v13 >= 0 )
    {
      v13 = WerpCreateCrashDataSection(&v22, (void **)&v18);
      if ( v13 < 0
        || (v13 = ZwDuplicateObject(-1LL, a4, -1LL, &v20, 0x1FFFFF, 2, 0), v13 < 0)
        || (v13 = ZwDuplicateObject(-1LL, a5, -1LL, &v19, 0x1FFFFF, 2, 0), v13 < 0) )
      {
        v9 = v18;
      }
      else
      {
        v9 = v18;
        *v18 = 248;
        *((_QWORD *)v9 + 21) = 1LL;
        v14 = v23;
        v9[1] = v23;
        v9[2] = v24;
        *((_QWORD *)v9 + 23) = v20;
        *((_QWORD *)v9 + 24) = v19;
        *((_QWORD *)v9 + 26) = v17;
        *((_QWORD *)v9 + 28) = 0LL;
        v9[58] = -1073741823;
        v9[59] = a3;
        v9[60] = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
        v15 = v9 + 104;
        *((_QWORD *)v9 + 31) = 1LL;
        *(_OWORD *)(v9 + 66) = *(_OWORD *)a1;
        *(_OWORD *)(v9 + 70) = *((_OWORD *)a1 + 1);
        *(_OWORD *)(v9 + 74) = *((_OWORD *)a1 + 2);
        *(_OWORD *)(v9 + 78) = *((_OWORD *)a1 + 3);
        *(_OWORD *)(v9 + 82) = *((_OWORD *)a1 + 4);
        *(_OWORD *)(v9 + 86) = *((_OWORD *)a1 + 5);
        *(_OWORD *)(v9 + 90) = *((_OWORD *)a1 + 6);
        *(_OWORD *)(v9 + 94) = *((_OWORD *)a1 + 7);
        *(_OWORD *)(v9 + 98) = *((_OWORD *)a1 + 8);
        *((_QWORD *)v9 + 51) = *((_QWORD *)a1 + 18);
        if ( (a2 & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
        {
          *((_QWORD *)v9 + 32) = 1LL;
          v16 = 9LL;
          do
          {
            *v15 = *(_OWORD *)a2;
            v15[1] = *(_OWORD *)(a2 + 16);
            v15[2] = *(_OWORD *)(a2 + 32);
            v15[3] = *(_OWORD *)(a2 + 48);
            v15[4] = *(_OWORD *)(a2 + 64);
            v15[5] = *(_OWORD *)(a2 + 80);
            v15[6] = *(_OWORD *)(a2 + 96);
            v15 += 8;
            *(v15 - 1) = *(_OWORD *)(a2 + 112);
            a2 += 128LL;
            --v16;
          }
          while ( v16 );
          *v15 = *(_OWORD *)a2;
          v15[1] = *(_OWORD *)(a2 + 16);
          v15[2] = *(_OWORD *)(a2 + 32);
          v15[3] = *(_OWORD *)(a2 + 48);
          v15[4] = *(_OWORD *)(a2 + 64);
        }
        else
        {
          *((_QWORD *)v9 + 32) = 2LL;
          memset_thunk_772440563353939046(v9 + 104, 0, 0x4D0uLL);
        }
        *(_QWORD *)&v25 = v17;
        *((_QWORD *)&v25 + 1) = v22;
        *(_QWORD *)&v26 = v20;
        *((_QWORD *)&v26 + 1) = v19;
        v13 = ReportExceptionInternal(v14, (__int64)v22, &v25, 4u, a3, &Handle);
        if ( v13 >= 0 )
        {
          if ( !Handle || (v13 = WerpWaitForCrashReporting(a4, (__int64)v17, (__int64)Handle, 0LL), v13 >= 0) )
          {
            if ( (a3 & 4) != 0 || (v13 = ZwTerminateProcess(a4, *a1), v13 >= 0) )
              v13 = 0;
          }
        }
      }
    }
  }
  if ( Handle )
    NtClose(Handle);
  if ( v9 )
    NtUnmapViewOfSection(-1LL, v9);
  if ( v22 )
    NtClose(v22);
  if ( v17 )
  {
    NtClose(v17);
    v17 = 0LL;
  }
  if ( v19 )
    NtClose(v19);
  if ( v20 )
    NtClose(v20);
  return (unsigned int)v13;
}
