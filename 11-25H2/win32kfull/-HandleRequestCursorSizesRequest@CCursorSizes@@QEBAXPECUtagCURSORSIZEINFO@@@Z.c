/*
 * XREFs of ?HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPECUtagCURSORSIZEINFO@@@Z @ 0x140273A2C
 * Callers:
 *     NtUserGetRequiredCursorSizes @ 0x1401D6C40 (NtUserGetRequiredCursorSizes.c)
 * Callees:
 *     ?W32AcquirePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14004C9C4 (-W32AcquirePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14004C9F8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

void __fastcall CCursorSizes::HandleRequestCursorSizesRequest(
        CCursorSizes *this,
        volatile struct tagCURSORSIZEINFO *a2)
{
  W32AcquirePushLockShared((CCursorSizes *)((char *)this + 64));
  RtlCopyVolatileMemory(a2, (char *)this + 24, 0x28uLL);
  CPushLock::ReleaseLock((CCursorSizes *)((char *)this + 64));
}
