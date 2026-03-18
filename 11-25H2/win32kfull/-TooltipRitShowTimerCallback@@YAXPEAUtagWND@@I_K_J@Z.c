/*
 * XREFs of ?TooltipRitShowTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402DD190
 * Callers:
 *     <none>
 * Callees:
 *     FindTimer @ 0x14001A310 (FindTimer.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z @ 0x14021E418 (-PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall TooltipRitShowTimerCallback(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // rbx
  struct tagTHREADINFO **v3; // rcx

  v2 = *((_QWORD *)PtiCurrent((__int64)a1, a2) + 62);
  if ( !*(_QWORD *)(v2 + 192) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 253);
  FindTimer(0LL, *(_QWORD *)(v2 + 120), 4u, 1, 0LL);
  v3 = *(struct tagTHREADINFO ***)(v2 + 192);
  *(_QWORD *)(v2 + 120) = 0LL;
  if ( v3 )
    PostEventMessageWindow(v3, 0x1Au, (LARGE_INTEGER)*(int *)(v2 + 200), 0LL);
}
