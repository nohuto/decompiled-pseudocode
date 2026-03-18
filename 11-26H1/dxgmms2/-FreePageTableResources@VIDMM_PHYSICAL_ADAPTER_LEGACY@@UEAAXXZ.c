/*
 * XREFs of ?FreePageTableResources@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXXZ @ 0x1400B1E30
 * Callers:
 *     <none>
 * Callees:
 *     FreePageTableResourcesFromSegment_0 @ 0x1400B1E88 (FreePageTableResourcesFromSegment_0.c)
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER_LEGACY::FreePageTableResources(VIDMM_PHYSICAL_ADAPTER_LEGACY *this)
{
  FreePageTableResourcesFromSegment_0(this, *((unsigned __int16 *)this + 93));
  FreePageTableResourcesFromSegment_0(this, *((unsigned __int16 *)this + 95));
  if ( !*((_DWORD *)this + 136) )
  {
    FreePageTableResourcesFromSegment_0(this, *((unsigned __int16 *)this + 92));
    FreePageTableResourcesFromSegment_0(this, *((unsigned __int16 *)this + 94));
  }
}
