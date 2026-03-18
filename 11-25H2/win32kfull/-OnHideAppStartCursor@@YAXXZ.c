/*
 * XREFs of ?OnHideAppStartCursor@@YAXXZ @ 0x140273AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     zzzCalcStartCursorHide @ 0x140245FC0 (zzzCalcStartCursorHide.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

void __fastcall OnHideAppStartCursor(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  _BYTE v9[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (unsigned int)v2 >= *(_DWORD *)(W32GetUserSessionState(0xFFFFF78000000004uLL, a2) + 36248) )
  {
    v5 = PtiCurrent(v4, v3);
    if ( v5 != *(struct tagTHREADINFO **)(W32GetUserSessionState(v7, v6) + 18648) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2702);
    v9[0] = 0;
    v10 = 0LL;
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v9, v8);
    zzzCalcStartCursorHide(0LL, 0LL);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v9);
  }
}
