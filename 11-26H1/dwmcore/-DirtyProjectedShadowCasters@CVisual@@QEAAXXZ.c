/*
 * XREFs of ?DirtyProjectedShadowCasters@CVisual@@QEAAXXZ @ 0x18014E1E0
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18008E700 (-CleanTrees@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?RequestRedraw@CProjectedShadowCaster@@QEAAXXZ @ 0x1800D52F8 (-RequestRedraw@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x18014E22C (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 */

void __fastcall CVisual::DirtyProjectedShadowCasters(CVisual *this)
{
  __int64 ProjectedShadowCasters; // rax
  CProjectedShadowCaster **v2; // rdi
  CProjectedShadowCaster **i; // rbx

  if ( (**((_DWORD **)this + 28) & 0x100000) != 0 )
  {
    ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(this);
    v2 = *(CProjectedShadowCaster ***)(ProjectedShadowCasters + 8);
    for ( i = *(CProjectedShadowCaster ***)ProjectedShadowCasters; i != v2; ++i )
      CProjectedShadowCaster::RequestRedraw(*i);
  }
}
