/*
 * XREFs of UpdateDCEInUseCount @ 0x1401028C8
 * Callers:
 *     _GetDCEx @ 0x140036140 (_GetDCEx.c)
 *     GetMonitorDC @ 0x140036C34 (GetMonitorDC.c)
 * Callees:
 *     ?TraceLoggingProcessDCsInUse@@YAXKK@Z @ 0x140102B20 (-TraceLoggingProcessDCsInUse@@YAXKK@Z.c)
 *     ?TraceLoggingGlobalDCsInUse@@YAXK@Z @ 0x140102BA8 (-TraceLoggingGlobalDCsInUse@@YAXK@Z.c)
 */

__int64 __fastcall UpdateDCEInUseCount(int a1, unsigned int *a2, int a3)
{
  __int64 result; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  LONGLONG v12; // rcx
  int v13; // edx
  int v14; // r8d
  unsigned int v15; // eax
  __int64 v16; // rax
  LARGE_INTEGER PerformanceCounter; // rsi
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  unsigned int v21; // ecx
  int v22; // r8d
  int v23; // edx
  unsigned int v24; // ebx
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  __int64 v28; // rax
  int v29; // r8d
  int v30; // ecx
  int v31; // edx
  __int64 UserSessionState; // rax
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  unsigned int v36; // eax
  unsigned int v37; // ebx
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  int v44; // ebx
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  __int64 v48; // rbx
  int v49; // edx
  int v50; // ecx
  int v51; // r8d
  __int64 v52; // rax
  int v53; // edx
  int v54; // ecx
  int v55; // r8d
  __int64 v56; // rbx
  int v57; // edx
  int v58; // ecx
  int v59; // r8d
  int v60; // edx
  int v61; // r8d
  __int64 v62; // rax
  int v63; // edx
  int v64; // ecx
  int v65; // r8d

  result = W32GetUserSessionState(a1, (_DWORD)a2, a3);
  if ( !*(_DWORD *)(result + 19688) )
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(v7, v6, v8) + 19664) )
    {
      v12 = gliQpcFreq.QuadPart * *(_QWORD *)(W32GetUserSessionState(v10, v9, v11) + 19672);
      *(_QWORD *)(W32GetUserSessionState(v12, v13, v14) + 19664) = 60 * v12;
    }
    v15 = a2[270];
    if ( a1 )
    {
      a2[270] = v15 + 1;
      UserSessionState = W32GetUserSessionState(v10, v9, v11);
      ++*(_DWORD *)(UserSessionState + 19696);
      v36 = a2[270];
      if ( a2[271] < v36 )
        a2[271] = v36;
      v37 = *(_DWORD *)(W32GetUserSessionState(v34, v33, v35) + 19656);
      if ( v37 < *(_DWORD *)(W32GetUserSessionState(v39, v38, v40) + 19696) )
      {
        v44 = *(_DWORD *)(W32GetUserSessionState(v42, v41, v43) + 19696);
        *(_DWORD *)(W32GetUserSessionState(v46, v45, v47) + 19656) = v44;
      }
    }
    else
    {
      a2[270] = v15 - 1;
      v16 = W32GetUserSessionState(v10, v9, v11);
      --*(_DWORD *)(v16 + 19696);
    }
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v21 = *(_DWORD *)(W32GetUserSessionState(v19, v18, v20) + 19684);
    v23 = a2[271] % v21;
    if ( !v23 )
    {
      v48 = *(_QWORD *)(W32GetUserSessionState(v21, 0, v22) + 19640);
      v52 = W32GetUserSessionState(v50, v49, v51);
      v21 = PerformanceCounter.LowPart - v48;
      if ( PerformanceCounter.QuadPart - v48 >= *(_QWORD *)(v52 + 19664) )
      {
        TraceLoggingProcessDCsInUse(a2[271], a2[14]);
        *(LARGE_INTEGER *)(W32GetUserSessionState(v54, v53, v55) + 19640) = PerformanceCounter;
      }
    }
    v24 = *(_DWORD *)(W32GetUserSessionState(v21, v23, v22) + 19656);
    v28 = W32GetUserSessionState(v26, v25, v27);
    v30 = v28;
    v31 = v24 % *(_DWORD *)(v28 + 19680);
    result = v24 / *(_DWORD *)(v28 + 19680);
    if ( !v31 )
    {
      v56 = *(_QWORD *)(W32GetUserSessionState(v30, 0, v29) + 19648);
      result = W32GetUserSessionState(v58, v57, v59);
      if ( PerformanceCounter.QuadPart - v56 >= *(_QWORD *)(result + 19664) )
      {
        v62 = W32GetUserSessionState(PerformanceCounter.LowPart - (int)v56, v60, v61);
        TraceLoggingGlobalDCsInUse(*(_DWORD *)(v62 + 19656));
        result = W32GetUserSessionState(v64, v63, v65);
        *(LARGE_INTEGER *)(result + 19648) = PerformanceCounter;
      }
    }
  }
  return result;
}
