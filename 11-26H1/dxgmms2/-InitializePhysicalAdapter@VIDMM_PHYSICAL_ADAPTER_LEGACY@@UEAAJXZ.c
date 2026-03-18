/*
 * XREFs of ?InitializePhysicalAdapter@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAJXZ @ 0x1400B1EC0
 * Callers:
 *     <none>
 * Callees:
 *     CreatePhysicalAdapterSegments @ 0x1400B14D0 (CreatePhysicalAdapterSegments.c)
 */

__int64 __fastcall VIDMM_PHYSICAL_ADAPTER_LEGACY::InitializePhysicalAdapter(VIDMM_PHYSICAL_ADAPTER_LEGACY *this)
{
  return CreatePhysicalAdapterSegments(this);
}
