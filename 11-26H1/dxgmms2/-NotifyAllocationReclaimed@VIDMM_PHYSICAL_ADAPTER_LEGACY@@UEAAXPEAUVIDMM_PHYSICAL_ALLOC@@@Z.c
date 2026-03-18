/*
 * XREFs of ?NotifyAllocationReclaimed@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400B26B0
 * Callers:
 *     <none>
 * Callees:
 *     NotifyAllocationReclaimed @ 0x14012430C (NotifyAllocationReclaimed.c)
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER_LEGACY::NotifyAllocationReclaimed(
        VIDMM_PHYSICAL_ADAPTER_LEGACY *this,
        struct VIDMM_PHYSICAL_ALLOC *a2)
{
  NotifyAllocationReclaimed(this, a2, 0LL);
}
