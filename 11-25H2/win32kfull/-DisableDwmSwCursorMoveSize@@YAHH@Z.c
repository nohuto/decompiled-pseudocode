/*
 * XREFs of ?DisableDwmSwCursorMoveSize@@YAHH@Z @ 0x140250758
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1402524BC (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxCancelTrackingForThread @ 0x1402AC860 (xxxCancelTrackingForThread.c)
 * Callees:
 *     ChangeComposableCursor @ 0x140214560 (ChangeComposableCursor.c)
 */

__int64 __fastcall DisableDwmSwCursorMoveSize(int a1, __int64 a2)
{
  if ( a1 )
    ChangeComposableCursor(0LL, a2);
  return 1LL;
}
