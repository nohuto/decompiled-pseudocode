/*
 * XREFs of ?ResetCursorPointerInternal@@YAXXZ @ 0x1400F7204
 * Callers:
 *     UserResetPointer @ 0x1400F71C0 (UserResetPointer.c)
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 * Callees:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1400F7250 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 */

void ResetCursorPointerInternal(void)
{
  __int64 v0; // rcx

  SetPointerInternal(0LL, 6LL);
  LOBYTE(v0) = 1;
  SetPointerInternal(v0, 6LL);
}
