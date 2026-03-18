/*
 * XREFs of UpdateDCEInUseCount @ 0x1400C3150
 * Callers:
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1400A4348 (GetMonitorDC.c)
 * Callees:
 *     ?TraceLoggingProcessDCsInUse@@YAXKK@Z @ 0x1400C33B0 (-TraceLoggingProcessDCsInUse@@YAXKK@Z.c)
 *     ?TraceLoggingGlobalDCsInUse@@YAXK@Z @ 0x1400C3430 (-TraceLoggingGlobalDCsInUse@@YAXK@Z.c)
 */

__int64 __fastcall UpdateDCEInUseCount(__int64 a1, unsigned int *a2)
{
  int v3; // esi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rax
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  LONGLONG v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 UserSessionState; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // eax
  unsigned int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // rcx
  LONGLONG v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx

  v3 = a1;
  result = W32GetUserSessionState(a1, a2);
  if ( !*(_DWORD *)(result + 19656) )
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(v6, v5) + 19632) )
    {
      v33 = gliQpcFreq.QuadPart * *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19640);
      *(_QWORD *)(W32GetUserSessionState(v33, v34) + 19632) = 60 * v33;
    }
    v9 = a2[270];
    if ( v3 )
    {
      a2[270] = v9 + 1;
      UserSessionState = W32GetUserSessionState(v8, v7);
      ++*(_DWORD *)(UserSessionState + 19664);
      v24 = a2[270];
      if ( a2[271] < v24 )
        a2[271] = v24;
      v25 = *(_DWORD *)(W32GetUserSessionState(v23, v22) + 19624);
      if ( v25 < *(_DWORD *)(W32GetUserSessionState(v27, v26) + 19664) )
      {
        v30 = *(_DWORD *)(W32GetUserSessionState(v29, v28) + 19664);
        *(_DWORD *)(W32GetUserSessionState(v32, v31) + 19624) = v30;
      }
    }
    else
    {
      a2[270] = v9 - 1;
      v10 = W32GetUserSessionState(v8, v7);
      --*(_DWORD *)(v10 + 19664);
    }
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v14 = W32GetUserSessionState(v13, v12);
    HIDWORD(v16) = 0;
    v15 = *(unsigned int *)(v14 + 19652);
    LODWORD(v16) = a2[271] % (unsigned int)v15;
    if ( !(_DWORD)v16 )
    {
      v35 = *(_QWORD *)(W32GetUserSessionState(v15, 0LL) + 19608);
      v38 = W32GetUserSessionState(v37, v36);
      v15 = PerformanceCounter.QuadPart - v35;
      if ( PerformanceCounter.QuadPart - v35 >= *(_QWORD *)(v38 + 19632) )
      {
        TraceLoggingProcessDCsInUse(a2[271], a2[14]);
        *(LARGE_INTEGER *)(W32GetUserSessionState(v40, v39) + 19608) = PerformanceCounter;
      }
    }
    v17 = *(_DWORD *)(W32GetUserSessionState(v15, v16) + 19624);
    v20 = W32GetUserSessionState(v19, v18);
    result = v17 / *(_DWORD *)(v20 + 19648);
    if ( !(v17 % *(_DWORD *)(v20 + 19648)) )
    {
      v41 = *(_QWORD *)(W32GetUserSessionState(v20, 0LL) + 19616);
      result = W32GetUserSessionState(v43, v42);
      if ( PerformanceCounter.QuadPart - v41 >= *(_QWORD *)(result + 19632) )
      {
        v45 = W32GetUserSessionState(PerformanceCounter.QuadPart - v41, v44);
        TraceLoggingGlobalDCsInUse(*(_DWORD *)(v45 + 19624));
        result = W32GetUserSessionState(v47, v46);
        *(LARGE_INTEGER *)(result + 19616) = PerformanceCounter;
      }
    }
  }
  return result;
}
