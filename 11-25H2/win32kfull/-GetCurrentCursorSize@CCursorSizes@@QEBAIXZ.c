/*
 * XREFs of ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x14004C98C
 * Callers:
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x14004C8FC (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     zzzUpdateCursorImage @ 0x14004D350 (zzzUpdateCursorImage.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x140123850 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 * Callees:
 *     ?W32AcquirePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14004C9C4 (-W32AcquirePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14004C9F8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

__int64 __fastcall CCursorSizes::GetCurrentCursorSize(CCursorSizes *this)
{
  CPushLock *v1; // rbx
  CCursorSizes *v2; // rdi

  v1 = (CCursorSizes *)((char *)this + 64);
  v2 = this;
  W32AcquirePushLockShared((CCursorSizes *)((char *)this + 64));
  LODWORD(v2) = *(_DWORD *)v2;
  CPushLock::ReleaseLock(v1);
  return (unsigned int)v2;
}
