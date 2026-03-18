/*
 * XREFs of ?UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCPositionedLight@@@Z @ 0x180232194
 * Callers:
 *     ?SetCoordinateSpaceVisual@?$CPositionedLightGeneratedT@VCPositionedLight@@VCLight@@@@QEAAJPEAVCVisual@@@Z @ 0x18024AC1C (-SetCoordinateSpaceVisual@-$CPositionedLightGeneratedT@VCPositionedLight@@VCLight@@@@QEAAJPEAVCV.c)
 *     ??1CPositionedLight@@MEAA@XZ @ 0x18026CF04 (--1CPositionedLight@@MEAA@XZ.c)
 *     ?OnEnabledChanged@CPositionedLight@@MEAAXXZ @ 0x18026CFD0 (-OnEnabledChanged@CPositionedLight@@MEAAXXZ.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 *     ?RemoveIfUnused@CPreWalkVisual@@CAXV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@std@@@std@@@std@@@Z @ 0x18014C2C8 (-RemoveIfUnused@CPreWalkVisual@@CAXV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@.c)
 *     ?EnsurePreWalkVisual@CPreWalkVisual@@CA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@std@@@std@@@std@@PEAVCVisual@@@Z @ 0x18014C35C (-EnsurePreWalkVisual@CPreWalkVisual@@CA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-.c)
 *     __std_find_trivial_8 @ 0x180220100 (__std_find_trivial_8.c)
 */

void __fastcall CPreWalkVisual::UnregisterLightCoordspace(struct CVisual *a1, struct CPositionedLight *a2)
{
  __int64 v3; // rbx
  __m128i *trivial_8; // rax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  CPreWalkVisual::EnsurePreWalkVisual(&v5, (__int64)a1);
  v3 = v5;
  trivial_8 = (__m128i *)_std_find_trivial_8(
                           *(const __m128i **)(v5 + 24),
                           *(const __m128i **)(v5 + 32),
                           (unsigned __int64)a2);
  std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
    &trivial_8->m128i_u64[1],
    *(_QWORD *)(v3 + 32),
    trivial_8);
  *(_QWORD *)(v3 + 32) -= 8LL;
  if ( *(_QWORD *)(v3 + 24) == *(_QWORD *)(v3 + 32) )
  {
    *(_BYTE *)(v3 + 49) = 0;
    CPreWalkVisual::RemoveIfUnused((_BYTE *)v3);
  }
}
