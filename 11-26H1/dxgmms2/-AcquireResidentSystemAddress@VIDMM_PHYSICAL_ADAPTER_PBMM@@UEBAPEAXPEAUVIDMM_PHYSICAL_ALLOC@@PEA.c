/*
 * XREFs of ?AcquireResidentSystemAddress@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEBAPEAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_SYSTEM_ADDRESS_CONTEXT@@@Z @ 0x1400AE590
 * Callers:
 *     <none>
 * Callees:
 *     AcquireResidentSystemAddress @ 0x1400AE4D8 (AcquireResidentSystemAddress.c)
 */

__int64 __fastcall VIDMM_PHYSICAL_ADAPTER_PBMM::AcquireResidentSystemAddress(
        VIDMM_PHYSICAL_ADAPTER_PBMM *this,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        struct VIDMM_SYSTEM_ADDRESS_CONTEXT *a3)
{
  return AcquireResidentSystemAddress((__int64)this, (__int64)a2, (__int64)a3);
}
