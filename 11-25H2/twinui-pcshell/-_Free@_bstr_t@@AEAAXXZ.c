/*
 * XREFs of ?_Free@_bstr_t@@AEAAXXZ @ 0x18016ABE0
 * Callers:
 *     ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x18016A49C (-ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pa.c)
 *     ?AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x18016A85C (-AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXM.c)
 *     ??1_bstr_t@@QEAA@XZ @ 0x1802C3DCC (--1_bstr_t@@QEAA@XZ.c)
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x18031E088 (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x1803209F4 (-ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z.c)
 *     ?ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z @ 0x1803E8DC0 (-ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z.c)
 *     ??1SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ @ 0x180651838 (--1SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAA@XZ.c)
 *     ??4_bstr_t@@QEAAAEAV0@PEBG@Z @ 0x1806518A8 (--4_bstr_t@@QEAAAEAV0@PEBG@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall _bstr_t::_Free(_bstr_t *this, const struct std::nothrow_t *a2)
{
  __int64 v2; // rbx
  void *v4; // rcx

  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 16), 0xFFFFFFFF) == 1 )
    {
      if ( *(_QWORD *)v2 )
      {
        SysFreeString(*(BSTR *)v2);
        *(_QWORD *)v2 = 0LL;
      }
      v4 = *(void **)(v2 + 8);
      if ( v4 )
      {
        operator delete(v4, a2);
        *(_QWORD *)(v2 + 8) = 0LL;
      }
      operator delete((void *)v2, (const struct std::nothrow_t *)0x18);
    }
    *(_QWORD *)this = 0LL;
  }
}
