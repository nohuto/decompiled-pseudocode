/*
 * XREFs of ?DisableDwmSwCursorMoveSize@@YAHH@Z @ 0x140296F88
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxCancelTrackingForThread @ 0x1402C88E0 (xxxCancelTrackingForThread.c)
 * Callees:
 *     ChangeComposableCursor @ 0x14024CDC4 (ChangeComposableCursor.c)
 */

__int64 __fastcall DisableDwmSwCursorMoveSize(int a1, __int64 a2)
{
  if ( a1 )
    ChangeComposableCursor(0LL, a2);
  return 1LL;
}
