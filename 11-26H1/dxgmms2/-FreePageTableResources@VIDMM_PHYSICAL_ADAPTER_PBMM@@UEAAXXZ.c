/*
 * XREFs of ?FreePageTableResources@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAXXZ @ 0x1400AF6A0
 * Callers:
 *     <none>
 * Callees:
 *     FreePageTableResourcesFromSegment @ 0x1400AF6F8 (FreePageTableResourcesFromSegment.c)
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER_PBMM::FreePageTableResources(VIDMM_PHYSICAL_ADAPTER_PBMM *this)
{
  FreePageTableResourcesFromSegment(this, *((unsigned __int16 *)this + 93));
  FreePageTableResourcesFromSegment(this, *((unsigned __int16 *)this + 95));
  if ( !*((_DWORD *)this + 136) )
  {
    FreePageTableResourcesFromSegment(this, *((unsigned __int16 *)this + 92));
    FreePageTableResourcesFromSegment(this, *((unsigned __int16 *)this + 94));
  }
}
