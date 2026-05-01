/*
 * XREFs of ?_com_issue_error@@YAXJ@Z @ 0x1802D77C4
 * Callers:
 *     ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x1801571EC (-ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pa.c)
 *     ?AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x1801575B4 (-AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXM.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x1801578C0 (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ??0Data_t@_bstr_t@@QEAA@PEBG@Z @ 0x180157914 (--0Data_t@_bstr_t@@QEAA@PEBG@Z.c)
 *     ?GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x1801C6DA0 (-GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDO.c)
 *     ??1_variant_t@@QEAA@XZ @ 0x1801C6F28 (--1_variant_t@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ @ 0x1801EB40C (-RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ.c)
 *     ??0_variant_t@@QEAA@PEBG@Z @ 0x18022B208 (--0_variant_t@@QEAA@PEBG@Z.c)
 *     ??4_variant_t@@QEAAAEAV0@AEBV0@@Z @ 0x1802BF854 (--4_variant_t@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?ChangeType@_variant_t@@QEAAXGPEBV1@@Z @ 0x1802C6D60 (-ChangeType@_variant_t@@QEAAXGPEBV1@@Z.c)
 *     ?GetAddress@_bstr_t@@QEAAPEAPEAGXZ @ 0x180676E68 (-GetAddress@_bstr_t@@QEAAPEAPEAGXZ.c)
 *     ??4_bstr_t@@QEAAAEAV0@PEBG@Z @ 0x1806777AC (--4_bstr_t@@QEAAAEAV0@PEBG@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
