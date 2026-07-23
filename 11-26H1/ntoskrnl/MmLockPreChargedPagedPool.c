/*
 * XREFs of MmLockPreChargedPagedPool @ 0x140B635B0
 * Callers:
 *     HalpMcUpdateLock @ 0x1404E6330 (HalpMcUpdateLock.c)
 *     PopAllocateHiberContext @ 0x140B75B48 (PopAllocateHiberContext.c)
 * Callees:
 *     MiLockCode @ 0x14029558C (MiLockCode.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 */

__int64 __fastcall MmLockPreChargedPagedPool(unsigned __int64 a1)
{
  ULONG_PTR *PteAddress; // rax
  __int64 v2; // rdx
  __int16 v3; // r8

  PteAddress = (ULONG_PTR *)MiGetPteAddress(a1);
  return MiLockCode(
           0LL,
           PteAddress,
           (unsigned __int64)&PteAddress[(((unsigned __int64)(v3 & 0xFFF) + v2 + 4095) >> 12) - 1],
           1);
}
