/*
 * XREFs of ?RemoveProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x180260FE0
 * Callers:
 *     ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x1801DD8A4 (-SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 *     ?RemoveIfUnused@CPreWalkVisual@@CAXV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@std@@@std@@@std@@@Z @ 0x18014C2C8 (-RemoveIfUnused@CPreWalkVisual@@CAXV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@.c)
 *     ?EnsurePreWalkVisual@CPreWalkVisual@@CA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@std@@@std@@@std@@PEAVCVisual@@@Z @ 0x18014C35C (-EnsurePreWalkVisual@CPreWalkVisual@@CA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x18014E22C (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     __std_find_trivial_8 @ 0x180220100 (__std_find_trivial_8.c)
 */

void __fastcall CVisual::RemoveProjectedShadowCaster(CVisual *this, struct CProjectedShadowCaster *a2)
{
  const __m128i **ProjectedShadowCasters; // rbx
  unsigned __int64 v4; // r11
  __m128i *trivial_8; // rax
  __int64 v6; // rdx
  _BYTE *v7; // rcx
  _BYTE *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( (**((_DWORD **)this + 28) & 0x100000) != 0 )
  {
    ProjectedShadowCasters = (const __m128i **)CVisual::GetProjectedShadowCasters((__int64)this);
    trivial_8 = (__m128i *)_std_find_trivial_8(*ProjectedShadowCasters, ProjectedShadowCasters[1], v4);
    v6 = (__int64)ProjectedShadowCasters[1];
    if ( trivial_8 != (__m128i *)v6 )
    {
      std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
        &trivial_8->m128i_u64[1],
        v6,
        trivial_8);
      ProjectedShadowCasters[1] = (const __m128i *)((char *)ProjectedShadowCasters[1] - 8);
      if ( ProjectedShadowCasters[1] == *ProjectedShadowCasters )
      {
        CPreWalkVisual::EnsurePreWalkVisual(&v8, (__int64)this);
        v7 = v8;
        v8[50] = 0;
        CPreWalkVisual::RemoveIfUnused(v7);
      }
    }
  }
}
