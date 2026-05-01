/*
 * XREFs of ?_com_issue_error@@YAXJ@Z @ 0x1802DEAD4
 * Callers:
 *     ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x18016A49C (-ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pa.c)
 *     ?AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x18016A85C (-AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXM.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x18016AB34 (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ??0Data_t@_bstr_t@@QEAA@PEBG@Z @ 0x18016AB88 (--0Data_t@_bstr_t@@QEAA@PEBG@Z.c)
 *     ?GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x1801D05C8 (-GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDO.c)
 *     ??1_variant_t@@QEAA@XZ @ 0x1801D07C8 (--1_variant_t@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ @ 0x1801F5454 (-RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ.c)
 *     ??0_variant_t@@QEAA@PEBG@Z @ 0x180239438 (--0_variant_t@@QEAA@PEBG@Z.c)
 *     ??4_variant_t@@QEAAAEAV0@AEBV0@@Z @ 0x1802C8304 (--4_variant_t@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?ChangeType@_variant_t@@QEAAXGPEBV1@@Z @ 0x1802CFB20 (-ChangeType@_variant_t@@QEAAXGPEBV1@@Z.c)
 *     ??4_bstr_t@@QEAAAEAV0@PEBG@Z @ 0x1806518A8 (--4_bstr_t@@QEAAAEAV0@PEBG@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall __noreturn _com_issue_error(char *a1)
{
  int v1; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::Throw_Hr(
    retaddr,
    (void *)0x29,
    (int)"pcshell\\twinui\\dll\\twinui.cpp",
    (const char *)(unsigned int)a1,
    v1);
}
