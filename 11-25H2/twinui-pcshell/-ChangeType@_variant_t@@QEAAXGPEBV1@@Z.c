/*
 * XREFs of ?ChangeType@_variant_t@@QEAAXGPEBV1@@Z @ 0x1802CFB20
 * Callers:
 *     ?GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEA_N@Z @ 0x1806510A4 (-GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOME.c)
 *     ?GetIntAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAH@Z @ 0x18065118C (-GetIntAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMEl.c)
 *     ?GetUintAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAI@Z @ 0x180651334 (-GetUintAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOME.c)
 * Callees:
 *     ?_com_issue_error@@YAXJ@Z @ 0x1802DEAD4 (-_com_issue_error@@YAXJ@Z.c)
 */

void __fastcall _variant_t::ChangeType(VARIANTARG *pvarSrc, VARTYPE a2, const struct _variant_t *a3)
{
  HRESULT v3; // eax

  if ( a2 != pvarSrc->vt )
  {
    v3 = VariantChangeType(pvarSrc, pvarSrc, 0, a2);
    if ( v3 < 0 )
      _com_issue_error((char *)(unsigned int)v3);
  }
}
