/*
 * XREFs of ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@PEBGPEBG@std@@@1@AEBV?$allocator@U?$pair@PEBGPEBG@std@@@1@@Z @ 0x1803F04BC
 * Callers:
 *     ?ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1803F13AC (-ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1803F14D8 (-ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@@std@@YAPEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@00@Z @ 0x18012DED8 (--$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     ??1?$_Tidy_guard@V?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@@std@@QEAA@XZ @ 0x180319858 (--1-$_Tidy_guard@V-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@@st.c)
 *     ?_Buy_nonzero@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAX_K@Z @ 0x18031B970 (-_Buy_nonzero@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@AEAAX_K.c)
 */

void **__fastcall std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
        void **a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // r14
  void *v5; // rbp
  __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  char *v8; // rbx
  __int64 *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v3 = *(_QWORD *)(a2 + 8);
  v5 = *(void **)a2;
  v6 = v3 - *(_QWORD *)a2;
  *a1 = 0LL;
  v7 = v6 >> 4;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v7 )
  {
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Buy_nonzero(a1, v7);
    v8 = (char *)*a1;
    std::_Copy_memmove<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *,enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *>(
      v5,
      v3,
      *a1);
    v10 = 0LL;
    a1[1] = &v8[16 * v7];
    std::_Tidy_guard<std::vector<std::pair<unsigned short const *,unsigned short const *>>>::~_Tidy_guard<std::vector<std::pair<unsigned short const *,unsigned short const *>>>(&v10);
  }
  return a1;
}
