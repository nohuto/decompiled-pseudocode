/*
 * XREFs of ??1_variant_t@@QEAA@XZ @ 0x1801D07C8
 * Callers:
 *     ?GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x1801D05C8 (-GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDO.c)
 *     ??1TaskbarLayoutPolicyManager@@UEAA@XZ @ 0x1801D074C (--1TaskbarLayoutPolicyManager@@UEAA@XZ.c)
 *     ??1PWSLayoutPolicyManager@@UEAA@XZ @ 0x1803E6D2C (--1PWSLayoutPolicyManager@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ @ 0x1803E79EC (-RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ.c)
 *     ?GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEA_N@Z @ 0x1806510A4 (-GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOME.c)
 *     ?GetIntAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAH@Z @ 0x18065118C (-GetIntAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMEl.c)
 *     ?GetUintAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAI@Z @ 0x180651334 (-GetUintAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOME.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue_::_1_::dtor$1 @ 0x1806B0436 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--GetStringAttributeValue_--_1_--dto.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::AddSchemaToCollection_::_1_::dtor$3 @ 0x1806B04A2 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--AddSchemaToCollection_ea_1806B04A2.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetUintAttributeValue_::_1_::dtor$0 @ 0x1806B4051 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--GetUintAttributeValue_--_1_--dtor$.c)
 * Callees:
 *     ?_com_issue_error@@YAXJ@Z @ 0x1802DEAD4 (-_com_issue_error@@YAXJ@Z.c)
 */

void __fastcall _variant_t::~_variant_t(VARIANTARG *this)
{
  HRESULT v1; // eax

  v1 = VariantClear(this);
  if ( v1 < 0 )
    _com_issue_error((char *)(unsigned int)v1);
}
