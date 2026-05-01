/*
 * XREFs of _dynamic_initializer_for__idle__ @ 0x18012BA30
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@QEAA@V?$initializer_list@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@1@AEBV?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@1@@Z @ 0x18012BB7C (--0-$vector@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@V-$allocato.c)
 *     ?_Buy_raw@?$vector@HV?$allocator@H@std@@@std@@AEAAX_K@Z @ 0x18012DE84 (-_Buy_raw@-$vector@HV-$allocator@H@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@@std@@YAPEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@00@Z @ 0x18012DED8 (--$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1802CDC8C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=1
int dynamic_initializer_for__idle__()
{
  __int64 v0; // rbx
  __int128 v2; // [rsp+20h] [rbp-19h] BYREF
  __int64 v3; // [rsp+30h] [rbp-9h]
  char v4; // [rsp+38h] [rbp-1h] BYREF
  _QWORD v5[2]; // [rsp+40h] [rbp+7h] BYREF
  _DWORD Src[12]; // [rsp+50h] [rbp+17h] BYREF

  Src[0] = 255;
  Src[1] = 255;
  Src[2] = 255;
  Src[3] = 255;
  Src[4] = 255;
  Src[5] = 255;
  Src[6] = 255;
  Src[7] = 255;
  Src[8] = 255;
  Src[9] = 255;
  Src[10] = 255;
  Src[11] = 255;
  v2 = 0LL;
  v3 = 0LL;
  std::vector<int>::_Buy_raw(&v2, 12LL);
  v0 = v2;
  std::_Copy_memmove<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *,enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *>(Src);
  *((_QWORD *)&v2 + 1) = v0 + 48;
  v5[0] = &v2;
  v5[1] = &v4;
  std::vector<std::vector<Windows::UI::Color>>::vector<std::vector<Windows::UI::Color>>(&idle, v5);
  `eh vector destructor iterator'(
    &v2,
    0x18uLL,
    1uLL,
    std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>::~vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>);
  return atexit(dynamic_atexit_destructor_for__idle__);
}
