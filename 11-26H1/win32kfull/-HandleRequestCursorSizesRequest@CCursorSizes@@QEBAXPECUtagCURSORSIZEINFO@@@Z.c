/*
 * XREFs of ?HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPECUtagCURSORSIZEINFO@@@Z @ 0x140291EA0
 * Callers:
 *     NtUserGetRequiredCursorSizes @ 0x140207820 (NtUserGetRequiredCursorSizes.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14002ADCC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     RtlCopyVolatileMemory @ 0x14034FD00 (RtlCopyVolatileMemory.c)
 */

void __fastcall CCursorSizes::HandleRequestCursorSizesRequest(
        CCursorSizes *this,
        volatile struct tagCURSORSIZEINFO *a2)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 64, 0LL);
  RtlCopyVolatileMemory(a2, (char *)this + 24, 0x28uLL);
  CPushLock::ReleaseLock((CCursorSizes *)((char *)this + 64));
}
