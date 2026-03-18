/*
 * XREFs of ?ReservePageTableResources@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAJXZ @ 0x1400B01A0
 * Callers:
 *     <none>
 * Callees:
 *     ReservePageTableResourcesFromSegment @ 0x1400B020C (ReservePageTableResourcesFromSegment.c)
 */

__int64 __fastcall VIDMM_PHYSICAL_ADAPTER_PBMM::ReservePageTableResources(VIDMM_PHYSICAL_ADAPTER_PBMM *this)
{
  __int64 result; // rax

  result = ReservePageTableResourcesFromSegment(this, *((unsigned __int16 *)this + 93));
  if ( (int)result >= 0 )
  {
    result = ReservePageTableResourcesFromSegment(this, *((unsigned __int16 *)this + 95));
    if ( (int)result >= 0 )
    {
      if ( *((_DWORD *)this + 136) )
        return 0LL;
      result = ReservePageTableResourcesFromSegment(this, *((unsigned __int16 *)this + 92));
      if ( (int)result >= 0 )
      {
        result = ReservePageTableResourcesFromSegment(this, *((unsigned __int16 *)this + 94));
        if ( (int)result >= 0 )
          return 0LL;
      }
    }
  }
  return result;
}
