/*
 * XREFs of ?_Free@_bstr_t@@AEAAXXZ @ 0x18015746C
 * Callers:
 *     ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x1801571EC (-ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pa.c)
 *     ?AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x1801575B4 (-AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXM.c)
 *     ??1_bstr_t@@QEAA@XZ @ 0x1802BAE8C (--1_bstr_t@@QEAA@XZ.c)
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x18031A70C (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x18031D19C (-ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z.c)
 *     ?ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z @ 0x1803F2760 (-ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z.c)
 *     ?GetAddress@_bstr_t@@QEAAPEAPEAGXZ @ 0x180676E68 (-GetAddress@_bstr_t@@QEAAPEAPEAGXZ.c)
 *     ??1SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ @ 0x18067773C (--1SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ.c)
 *     ??4_bstr_t@@QEAAAEAV0@PEBG@Z @ 0x1806777AC (--4_bstr_t@@QEAAAEAV0@PEBG@Z.c)
 * Callees:
 *     ??_GData_t@_bstr_t@@AEAAPEAXI@Z @ 0x180157970 (--_GData_t@_bstr_t@@AEAAPEAXI@Z.c)
 */

void __fastcall _bstr_t::_Free(volatile signed __int32 **this, unsigned int a2)
{
  volatile signed __int32 *v3; // rcx

  v3 = *this;
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 4, 0xFFFFFFFF) == 1 )
      _bstr_t::Data_t::`scalar deleting destructor'((_bstr_t::Data_t *)v3, a2);
    *this = 0LL;
  }
}
