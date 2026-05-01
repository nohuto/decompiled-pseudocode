/*
 * XREFs of ??1_variant_t@@QEAA@XZ @ 0x1801C6F28
 * Callers:
 *     ??1TaskbarLayoutPolicyManager@@UEAA@XZ @ 0x1801C6CFC (--1TaskbarLayoutPolicyManager@@UEAA@XZ.c)
 *     ?GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x1801C6DA0 (-GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDO.c)
 *     ??1PWSLayoutPolicyManager@@UEAA@XZ @ 0x1803F05FC (--1PWSLayoutPolicyManager@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ @ 0x1803F131C (-RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ.c)
 *     ?GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEA_N@Z @ 0x180676F84 (-GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOME.c)
 *     ?GetIntAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAH@Z @ 0x18067706C (-GetIntAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMEl.c)
 *     ?GetUintAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAI@Z @ 0x180677228 (-GetUintAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOME.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue_::_1_::dtor$1 @ 0x1806D6AA5 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--GetStringAttributeValue_--_1_--dto.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::AddSchemaToCollection_::_1_::dtor$3 @ 0x1806D6AED (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--AddSchemaToCollection_ea_1806D6AED.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetUintAttributeValue_::_1_::dtor$0 @ 0x1806DB100 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--GetUintAttributeValue_--_1_--dtor$.c)
 * Callees:
 *     ?_com_issue_error@@YAXJ@Z @ 0x1802D77C4 (-_com_issue_error@@YAXJ@Z.c)
 */

void __fastcall _variant_t::~_variant_t(VARIANTARG *this)
{
  HRESULT v1; // eax

  v1 = VariantClear(this);
  if ( v1 < 0 )
    _com_issue_error((char *)(unsigned int)v1);
}
