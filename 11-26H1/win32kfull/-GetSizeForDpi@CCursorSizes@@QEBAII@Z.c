/*
 * XREFs of ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x14002BBC8
 * Callers:
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x140014874 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14002ADCC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     GetCursorSizesIndexFromDpi @ 0x14002BC2C (GetCursorSizesIndexFromDpi.c)
 */

__int64 __fastcall CCursorSizes::GetSizeForDpi(CCursorSizes *this, unsigned int a2)
{
  unsigned int v4; // ebx

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 64, 0LL);
  v4 = *((_DWORD *)this + 2 * (unsigned int)GetCursorSizesIndexFromDpi(a2) + 7);
  CPushLock::ReleaseLock((CCursorSizes *)((char *)this + 64));
  return v4;
}
