/*
 * XREFs of MmUnlockPreChargedPagedPool @ 0x140B1D110
 * Callers:
 *     HalpMcUpdateUnlock @ 0x1404E62FC (HalpMcUpdateUnlock.c)
 *     PopFreeHiberContext @ 0x140B1CE40 (PopFreeHiberContext.c)
 * Callees:
 *     MiUnlockCodePage @ 0x140369D48 (MiUnlockCodePage.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 */

void __fastcall MmUnlockPreChargedPagedPool(unsigned __int64 a1)
{
  unsigned __int64 PteAddress; // rax
  __int64 v2; // rdx
  __int16 v3; // r8

  PteAddress = MiGetPteAddress(a1);
  MiUnlockCodePage(PteAddress, PteAddress + 8 * ((((unsigned __int64)(v3 & 0xFFF) + v2 + 4095) >> 12) - 1), 0);
}
