/*
 * XREFs of ZwLockVirtualMemory @ 0x14069D420
 * Callers:
 *     CmSiLockViewOfSection @ 0x140495EA0 (CmSiLockViewOfSection.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x140601FCC (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLockVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
