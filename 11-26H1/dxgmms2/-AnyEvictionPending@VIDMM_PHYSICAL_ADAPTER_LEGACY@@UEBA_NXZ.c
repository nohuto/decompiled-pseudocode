/*
 * XREFs of ?AnyEvictionPending@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEBA_NXZ @ 0x1400B12F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_PHYSICAL_ADAPTER_LEGACY::AnyEvictionPending(VIDMM_PHYSICAL_ADAPTER_LEGACY **this)
{
  return this[220] != (VIDMM_PHYSICAL_ADAPTER_LEGACY *)(this + 220)
      || this[222] != (VIDMM_PHYSICAL_ADAPTER_LEGACY *)(this + 222);
}
