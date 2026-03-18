/*
 * XREFs of ?ReservePageTableResources@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAJXZ @ 0x140099070
 * Callers:
 *     <none>
 * Callees:
 *     ReservePageTableResourcesFromSegment_0 @ 0x140124FD8 (ReservePageTableResourcesFromSegment_0.c)
 */

__int64 __fastcall VIDMM_PHYSICAL_ADAPTER_LEGACY::ReservePageTableResources(VIDMM_PHYSICAL_ADAPTER_LEGACY *this)
{
  __int64 result; // rax

  result = ReservePageTableResourcesFromSegment_0(this, *((unsigned __int16 *)this + 93));
  if ( (int)result >= 0 )
  {
    result = ReservePageTableResourcesFromSegment_0(this, *((unsigned __int16 *)this + 95));
    if ( (int)result >= 0 )
    {
      if ( *((_DWORD *)this + 136) )
        return 0LL;
      result = ReservePageTableResourcesFromSegment_0(this, *((unsigned __int16 *)this + 92));
      if ( (int)result >= 0 )
      {
        result = ReservePageTableResourcesFromSegment_0(this, *((unsigned __int16 *)this + 94));
        if ( (int)result >= 0 )
          return 0LL;
      }
    }
  }
  return result;
}
