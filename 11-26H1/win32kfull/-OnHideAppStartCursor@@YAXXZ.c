/*
 * XREFs of ?OnHideAppStartCursor@@YAXXZ @ 0x1401F2180
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     zzzCalcStartCursorHide @ 0x14028AAB0 (zzzCalcStartCursorHide.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall OnHideAppStartCursor(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _BYTE v7[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (unsigned int)v2 >= *(_DWORD *)(W32GetUserSessionState(0xFFFFF78000000004uLL, a2) + 36280) )
  {
    v4 = PtiCurrent(v3);
    if ( v4 != *(struct tagTHREADINFO **)(W32GetUserSessionState(v6, v5) + 18696) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2695LL);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v7);
    zzzCalcStartCursorHide(0LL, 0LL);
    if ( v7[0] )
      --*(_DWORD *)(v8 + 28);
  }
}
