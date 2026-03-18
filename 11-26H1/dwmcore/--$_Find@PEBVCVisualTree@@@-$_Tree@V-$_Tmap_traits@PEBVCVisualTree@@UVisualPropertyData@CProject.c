/*
 * XREFs of ??$_Find@PEBVCVisualTree@@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@AEBQEBVCVisualTree@@@Z @ 0x1801BD3FC
 * Callers:
 *     ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z @ 0x1800AD8A8 (-ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z.c)
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x1800AD990 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Find<CVisualTree const *>(
        __int64 **a1,
        _QWORD *a2)
{
  __int64 *v2; // r8
  __int64 *v3; // rcx
  __int64 *v4; // r9
  __int64 *v5; // rax
  __int64 *result; // rax

  v2 = *a1;
  v3 = v2;
  v4 = (__int64 *)v2[1];
  if ( !*((_BYTE *)v4 + 25) )
  {
    do
    {
      v5 = v4 + 2;
      if ( (unsigned __int64)v4[4] >= *a2 )
      {
        v5 = v4;
        v3 = v4;
      }
      v4 = (__int64 *)*v5;
    }
    while ( !*(_BYTE *)(*v5 + 25) );
  }
  if ( *((_BYTE *)v3 + 25) )
    return v2;
  result = v3;
  if ( *a2 < (unsigned __int64)v3[4] )
    return v2;
  return result;
}
