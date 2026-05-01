/*
 * XREFs of _dynamic_initializer_for__BlockResponding__ @ 0x18012F400
 * Callers:
 *     <none>
 * Callees:
 *     ?_Buy_raw@?$vector@HV?$allocator@H@std@@@std@@AEAAX_K@Z @ 0x18012DE84 (-_Buy_raw@-$vector@HV-$allocator@H@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@@std@@YAPEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@PEAW412345@00@Z @ 0x18012DED8 (--$_Copy_memmove@PEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     atexit @ 0x1802C9288 (atexit.c)
 */

int dynamic_initializer_for__BlockResponding__()
{
  __int64 v0; // rbx
  _DWORD Src[5]; // [rsp+20h] [rbp-29h] BYREF
  __int64 v3; // [rsp+34h] [rbp-15h]
  int v4; // [rsp+3Ch] [rbp-Dh]
  int v5; // [rsp+40h] [rbp-9h]
  int v6; // [rsp+44h] [rbp-5h]
  int v7; // [rsp+48h] [rbp-1h]
  int v8; // [rsp+4Ch] [rbp+3h]
  int v9; // [rsp+50h] [rbp+7h]
  int v10; // [rsp+54h] [rbp+Bh]
  int v11; // [rsp+58h] [rbp+Fh]
  int v12; // [rsp+5Ch] [rbp+13h]
  int v13; // [rsp+60h] [rbp+17h]
  int v14; // [rsp+64h] [rbp+1Bh]
  int v15; // [rsp+68h] [rbp+1Fh]
  int v16; // [rsp+6Ch] [rbp+23h]
  int v17; // [rsp+70h] [rbp+27h]
  int v18; // [rsp+74h] [rbp+2Bh]
  int v19; // [rsp+78h] [rbp+2Fh]
  int v20; // [rsp+7Ch] [rbp+33h]
  int v21; // [rsp+80h] [rbp+37h]
  _BYTE v22[12]; // [rsp+84h] [rbp+3Bh] BYREF

  Src[0] = -124757505;
  Src[1] = -89489409;
  Src[2] = -54286593;
  Src[3] = -35993345;
  Src[4] = -17898241;
  v3 = -329473LL;
  v4 = -197889;
  v5 = -856833;
  v6 = -35268609;
  v7 = -36520449;
  v8 = -71327745;
  v9 = -89489153;
  v10 = -124493825;
  v11 = -142523649;
  v12 = -160552705;
  v13 = -161410049;
  v14 = -178846209;
  v15 = -179044097;
  v16 = -179044097;
  v17 = -179044097;
  v18 = -179044097;
  v19 = -178714625;
  v20 = -161080321;
  v21 = -126273537;
  std::vector<int>::_Buy_raw(&BlockResponding, 0x19uLL);
  v0 = BlockResponding;
  std::_Copy_memmove<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *,enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU *>(
    Src,
    (__int64)v22,
    (void *)BlockResponding);
  qword_1808DA6E0 = v0 + 100;
  return atexit(dynamic_atexit_destructor_for__BlockResponding__);
}
