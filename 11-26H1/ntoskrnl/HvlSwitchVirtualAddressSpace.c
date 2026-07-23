/*
 * XREFs of HvlSwitchVirtualAddressSpace @ 0x140312650
 * Callers:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x140248800 (KiDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     MiUnlockStealVm @ 0x140294270 (MiUnlockStealVm.c)
 *     KeForceDetachProcess @ 0x1403118D0 (KeForceDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x140311DB0 (KeUnstackDetachProcess.c)
 *     KiAttachProcess @ 0x140312370 (KiAttachProcess.c)
 *     SwapContext @ 0x140734B80 (SwapContext.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlSwitchVirtualAddressSpace(__int64 a1)
{
  return HvcallInitiateHypercall(65537LL, a1, 0LL);
}
