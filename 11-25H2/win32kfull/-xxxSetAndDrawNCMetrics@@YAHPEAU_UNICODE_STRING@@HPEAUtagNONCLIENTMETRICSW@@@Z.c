/*
 * XREFs of ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x140291E34
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1401D580C (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x140030AC0 (xxxInternalInvalidate.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxMetricsRecalc @ 0x140147B70 (xxxMetricsRecalc.c)
 *     xxxSetWindowNCMetrics @ 0x140149304 (xxxSetWindowNCMetrics.c)
 *     MenuRecalc @ 0x14021D558 (MenuRecalc.c)
 */

__int64 __fastcall xxxSetAndDrawNCMetrics(struct _UNICODE_STRING *a1, int a2, struct tagNONCLIENTMETRICSW *a3)
{
  __int64 SessionDpiServerInfo; // r13
  int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagWND *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // esi
  int v18; // ebp
  int v19; // r15d
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // edi
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // edi
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // r8d
  unsigned int v39; // edi
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v43; // [rsp+90h] [rbp+18h]
  int v44; // [rsp+98h] [rbp+20h]

  SessionDpiServerInfo = GetSessionDpiServerInfo(a1);
  v6 = *(_DWORD *)(SessionDpiServerInfo + 4);
  v43 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 19872) + 2124LL);
  v44 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19872) + 2128LL);
  v13 = 0LL;
  v15 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 19872);
  v16 = *(_DWORD *)(v15 + 2400);
  if ( a3 )
  {
    v20 = *(_QWORD *)(W32GetUserSessionState(v15, v14) + 19872);
    v19 = *((_DWORD *)a3 + 5) - *(_DWORD *)(v20 + 2336);
    v18 = *((_DWORD *)a3 + 55) - *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v20, v21) + 19872) + 2388LL);
  }
  else
  {
    if ( a2 == v6 )
      return 0LL;
    v18 = 0;
    v19 = 0;
  }
  xxxSetWindowNCMetrics(a1, a3, a2);
  MenuRecalc(v23, v22);
  v27 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 19872);
  v28 = *(_DWORD *)(SessionDpiServerInfo + 4) + *(_DWORD *)(v27 + 2400) - v6 - v16;
  if ( v16 > 0 )
    goto LABEL_25;
  v27 = *(_QWORD *)(W32GetUserSessionState(v27, v26) + 19872);
  if ( *(int *)(v27 + 2400) <= 0 )
  {
    v29 = 0;
    goto LABEL_14;
  }
  if ( v16 )
  {
LABEL_25:
    if ( *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v27, v26) + 19872) + 2400LL) )
      v29 = v28;
    else
      v29 = -(v6 + v16);
    goto LABEL_14;
  }
  v29 = *(_DWORD *)(SessionDpiServerInfo + 4)
      + *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v27, v26) + 19872) + 2400LL);
LABEL_14:
  if ( v28 || (v30 = 2LL, v29) )
    v30 = 3LL;
  xxxMetricsRecalc(v30, 0LL, 0, v19, v18, v28, v29);
  v33 = *(_QWORD *)(W32GetUserSessionState(v32, v31) + 19872);
  v34 = *(_DWORD *)(v33 + 2124);
  v37 = *(_QWORD *)(W32GetUserSessionState(v33, v35) + 19872);
  v38 = *(_DWORD *)(v37 + 2128) - v44;
  v39 = v34 - v43;
  if ( v39 || v38 )
    xxxMetricsRecalc(4LL, v39, v38, 0, 0, 0, 0);
  if ( *((_QWORD *)PtiCurrent(v37, v36) + 62) )
    v13 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v41, v40) + 62) + 8LL) + 24LL);
  xxxInternalInvalidate(v13, (HRGN)1, 0x10485u);
  return 1LL;
}
