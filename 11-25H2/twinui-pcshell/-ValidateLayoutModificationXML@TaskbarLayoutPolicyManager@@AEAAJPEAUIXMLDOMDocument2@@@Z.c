/*
 * XREFs of ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180297D10
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x18016AD40 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x18016BF80 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x18016A49C (-ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pa.c)
 *     ??1?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18016AC54 (--1-$vector@URect@Foundation@Windows@winrt@@V-$allocator@URect@Foundation@Windows@winrt@@@std@@@.c)
 *     ??$_Emplace_reallocate@U?$pair@PEBGPEBG@std@@@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAPEAU?$pair@PEBGPEBG@1@QEAU21@$$QEAU21@@Z @ 0x180225324 (--$_Emplace_reallocate@U-$pair@PEBGPEBG@std@@@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pai.c)
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x180297FB8 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskbarLayoutPolicyManager::ValidateLayoutModificationXML(
        TaskbarLayoutPolicyManager *this,
        struct IXMLDOMDocument2 *a2)
{
  const char *v3; // r9
  __int64 v4; // rdx
  _BYTE *v5; // rcx
  _BYTE *v6; // rdx
  _BYTE *v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+38h] [rbp-20h] BYREF
  _BYTE *v13; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v15; // [rsp+60h] [rbp+8h]

  v12 = 0LL;
  v13 = 0LL;
  *(_QWORD *)&v11 = L"http://schemas.microsoft.com/Start/2014/StartLayout";
  *((_QWORD *)&v11 + 1) = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::StartLayoutSchema;
  try
  {
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
      (const void **)&v12,
      0LL,
      &v11);
    *(_QWORD *)&v11 = L"http://schemas.microsoft.com/Start/2014/TaskbarLayout";
    *((_QWORD *)&v11 + 1) = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::TaskbarLayoutSchema;
    v4 = *((_QWORD *)&v12 + 1);
    v5 = v13;
    if ( *((_BYTE **)&v12 + 1) == v13 )
    {
      std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
        (const void **)&v12,
        *((_BYTE **)&v12 + 1),
        &v11);
      v5 = v13;
      v6 = (_BYTE *)*((_QWORD *)&v12 + 1);
    }
    else
    {
      **((_OWORD **)&v12 + 1) = v11;
      v6 = (_BYTE *)(v4 + 16);
      *((_QWORD *)&v12 + 1) = v6;
    }
    *(_QWORD *)&v11 = L"http://schemas.microsoft.com/Start/2014/FullDefaultLayout";
    *((_QWORD *)&v11 + 1) = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::FullDefaultLayoutSchema;
    if ( v6 == v5 )
    {
      std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
        (const void **)&v12,
        v6,
        &v11);
      v5 = v13;
      v7 = (_BYTE *)*((_QWORD *)&v12 + 1);
    }
    else
    {
      *(_OWORD *)v6 = v11;
      v7 = v6 + 16;
      *((_QWORD *)&v12 + 1) = v7;
    }
    *(_QWORD *)&v11 = L"http://schemas.microsoft.com/Start/2014/LayoutModification";
    *((_QWORD *)&v11 + 1) = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::LayoutModificationSchema;
    if ( v7 == v5 )
    {
      std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
        (const void **)&v12,
        v7,
        &v11);
    }
    else
    {
      *(_OWORD *)v7 = v11;
      *((_QWORD *)&v12 + 1) = v7 + 16;
    }
  }
  catch ( ... )
  {
    v15 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x2D3,
            (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
            v3);
    std::vector<winrt::Windows::Foundation::Rect>::~vector<winrt::Windows::Foundation::Rect>((__int64)&v12);
    return v15;
  }
  v8 = std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
         &v11,
         &v12);
  v9 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ValidateLayoutFile(v8, a2);
  if ( (_QWORD)v12 )
    std::_Deallocate<16,0>(
      (void *)v12,
      (const struct std::nothrow_t *)((unsigned __int64)&v13[-v12] & 0xFFFFFFFFFFFFFFF0uLL));
  return v9;
}
