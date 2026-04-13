/*
 * XREFs of ??$query@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUICuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@@?$com_ptr_t@U?$IMapView@U_GUID@@PEAUICuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUICuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800954E8
 * Callers:
 *     CreativeFramework::Actions::EnumerateCollectionItems__lambda_33066bbcaa202ed8496d422e2c9143b2___ @ 0x180094B10 (CreativeFramework--Actions--EnumerateCollectionItems__lambda_33066bbcaa202ed8496d422e2c9143b2___.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::com_ptr_t<Windows::Foundation::Collections::IMapView<_GUID,WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTile *>,wil::err_exception_policy>::query<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTile *> *>>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, _QWORD *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, _QWORD *); // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *a1;
  *a2 = 0LL;
  v4 = (**v2)(v2, &GUID_29e14483_299b_51db_a4a9_4fa71439ba45, a2);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      7305LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v4,
      v6);
  return a2;
}
