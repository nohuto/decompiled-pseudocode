/*
 * XREFs of ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x14002AB9C
 * Callers:
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x14002AB0C (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     zzzUpdateCursorImage @ 0x14002AEE0 (zzzUpdateCursorImage.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1400F7250 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14002ADCC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

__int64 __fastcall CCursorSizes::GetCurrentCursorSize(CCursorSizes *this)
{
  CCursorSizes *v1; // rbx
  CPushLock *v2; // rdi

  v1 = this;
  v2 = (CCursorSizes *)((char *)this + 64);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  LODWORD(v1) = *(_DWORD *)v1;
  CPushLock::ReleaseLock(v2);
  return (unsigned int)v1;
}
