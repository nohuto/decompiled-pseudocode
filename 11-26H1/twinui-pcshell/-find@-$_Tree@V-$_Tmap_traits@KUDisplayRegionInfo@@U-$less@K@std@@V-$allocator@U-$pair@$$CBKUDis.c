/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18020EE18
 * Callers:
 *     ?RemoveDisplayRegion@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18044A170 (-RemoveDisplayRegion@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?UpdateDisplayRegionVisibility@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@H@Z @ 0x18044A2E0 (-UpdateDisplayRegionVisibility@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@H@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::find(
        __int64 **a1,
        _QWORD *a2,
        _DWORD *a3)
{
  __int64 *v3; // r9
  __int64 *v4; // rcx
  __int64 *v5; // r10
  __int64 *v6; // rax

  v3 = *a1;
  v4 = v3;
  v5 = (__int64 *)v3[1];
  if ( !*((_BYTE *)v5 + 25) )
  {
    do
    {
      v6 = v5 + 2;
      if ( *((_DWORD *)v5 + 7) >= *a3 )
      {
        v6 = v5;
        v4 = v5;
      }
      v5 = (__int64 *)*v6;
    }
    while ( !*(_BYTE *)(*v6 + 25) );
  }
  if ( *((_BYTE *)v4 + 25) || *a3 < *((_DWORD *)v4 + 7) )
    v4 = v3;
  *a2 = v4;
  return a2;
}
