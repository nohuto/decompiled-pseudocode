/*
 * XREFs of ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x140148114
 * Callers:
 *     ?xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z @ 0x14021B520 (-xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x140030AC0 (xxxInternalInvalidate.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxMetricsRecalc @ 0x140147B70 (xxxMetricsRecalc.c)
 *     SetMinMetrics @ 0x140148B08 (SetMinMetrics.c)
 */

__int64 __fastcall xxxSetAndDrawMinMetrics(struct _UNICODE_STRING *a1, struct tagMINIMIZEDMETRICS *a2)
{
  struct _UNICODE_STRING *v2; // rdi
  int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct tagWND *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r8d
  unsigned int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx

  v2 = a1;
  v3 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872) + 2124LL);
  v6 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 19872) + 2128LL);
  SetMinMetrics(v2);
  v9 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19872);
  LODWORD(v2) = *(_DWORD *)(v9 + 2124);
  v11 = 0LL;
  v13 = *(_QWORD *)(W32GetUserSessionState(v9, v10) + 19872);
  v14 = *(_DWORD *)(v13 + 2128) - v6;
  v15 = (_DWORD)v2 - v3;
  if ( v15 || v14 )
    xxxMetricsRecalc(4LL, v15, v14, 0, 0, 0, 0);
  if ( *((_QWORD *)PtiCurrent(v13, v12) + 62) )
    v11 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v17, v16) + 62) + 8LL) + 24LL);
  xxxInternalInvalidate(v11, (HRGN)1, 0x10485u);
  return 1LL;
}
