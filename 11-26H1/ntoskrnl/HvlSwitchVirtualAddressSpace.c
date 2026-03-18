/*
 * XREFs of HvlSwitchVirtualAddressSpace @ 0x1402C79B0
 * Callers:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x140246EA0 (KiDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     MiUnlockStealVm @ 0x140294D10 (MiUnlockStealVm.c)
 *     KeForceDetachProcess @ 0x1402C6C30 (KeForceDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402C7110 (KeUnstackDetachProcess.c)
 *     KiAttachProcess @ 0x1402C76D0 (KiAttachProcess.c)
 *     SwapContext @ 0x14072FFB0 (SwapContext.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14032BB00 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlSwitchVirtualAddressSpace(__int64 a1)
{
  return HvcallInitiateHypercall(65537LL, a1, 0LL);
}
