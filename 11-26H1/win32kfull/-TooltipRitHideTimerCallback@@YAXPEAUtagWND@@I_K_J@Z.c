/*
 * XREFs of ?TooltipRitHideTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402EF400
 * Callers:
 *     <none>
 * Callees:
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z @ 0x140257A58 (-PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall TooltipRitHideTimerCallback(struct tagWND *a1)
{
  __int64 v1; // rbx
  struct tagTHREADINFO **v2; // rcx

  v1 = *((_QWORD *)PtiCurrent((__int64)a1) + 61);
  if ( !*(_QWORD *)(v1 + 192) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 270);
  FindTimer(0LL, *(_QWORD *)(v1 + 120), 4u, 1, 0LL);
  *(_QWORD *)(v1 + 120) = 0LL;
  *(_DWORD *)(v1 + 48) &= ~0x100u;
  v2 = *(struct tagTHREADINFO ***)(v1 + 192);
  if ( v2 )
    PostEventMessageWindow(v2, 0x1Au, *(int *)(v1 + 200), 1LL);
}
