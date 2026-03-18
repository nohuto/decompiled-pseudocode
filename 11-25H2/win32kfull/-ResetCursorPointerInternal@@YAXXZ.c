/*
 * XREFs of ?ResetCursorPointerInternal@@YAXXZ @ 0x140123804
 * Callers:
 *     UserResetPointer @ 0x1401237C0 (UserResetPointer.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 * Callees:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x140123850 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 */

void ResetCursorPointerInternal(void)
{
  __int64 v0; // rcx

  SetPointerInternal(0LL, 6LL);
  LOBYTE(v0) = 1;
  SetPointerInternal(v0, 6LL);
}
