/*
 * XREFs of ZwLockVirtualMemory @ 0x1407256D0
 * Callers:
 *     CmSiLockViewOfSection @ 0x1404D1428 (CmSiLockViewOfSection.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x14063F6DC (SmKmVirtualLockCtxLockMemory.c)
 *     DifZwLockVirtualMemoryWrapper @ 0x1406A9820 (DifZwLockVirtualMemoryWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLockVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
