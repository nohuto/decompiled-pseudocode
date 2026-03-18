/*
 * XREFs of ?RegisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCPositionedLight@@@Z @ 0x180232138
 * Callers:
 *     ?SetCoordinateSpaceVisual@?$CPositionedLightGeneratedT@VCPositionedLight@@VCLight@@@@QEAAJPEAVCVisual@@@Z @ 0x18024AC1C (-SetCoordinateSpaceVisual@-$CPositionedLightGeneratedT@VCPositionedLight@@VCLight@@@@QEAAJPEAVCV.c)
 *     ?OnEnabledChanged@CPositionedLight@@MEAAXXZ @ 0x18026CFD0 (-OnEnabledChanged@CPositionedLight@@MEAAXXZ.c)
 * Callees:
 *     ?EnsurePreWalkVisual@CPreWalkVisual@@CA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@std@@@std@@@std@@PEAVCVisual@@@Z @ 0x18014C35C (-EnsurePreWalkVisual@CPreWalkVisual@@CA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-.c)
 *     ??$_Emplace_reallocate@AEBQEAVCPositionedLight@@@?$vector@PEAVCPositionedLight@@V?$allocator@PEAVCPositionedLight@@@std@@@std@@AEAAPEAPEAVCPositionedLight@@QEAPEAV2@AEBQEAV2@@Z @ 0x18023200C (--$_Emplace_reallocate@AEBQEAVCPositionedLight@@@-$vector@PEAVCPositionedLight@@V-$allocator@PEA.c)
 */

void __fastcall CPreWalkVisual::RegisterLightCoordspace(struct CVisual *a1, struct CPositionedLight *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  struct CPositionedLight *v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = a2;
  CPreWalkVisual::EnsurePreWalkVisual(&v7, (__int64)a1);
  v3 = v7;
  v4 = v7 + 24;
  v5 = *(_QWORD **)(v7 + 32);
  if ( v5 == *(_QWORD **)(v7 + 40) )
  {
    std::vector<CPositionedLight *>::_Emplace_reallocate<CPositionedLight * const &>(
      (void **)v4,
      (__int64)v5,
      (__int64 *)&v6);
  }
  else
  {
    *v5 = a2;
    *(_QWORD *)(v4 + 8) += 8LL;
  }
  *(_BYTE *)(v3 + 49) = 1;
}
