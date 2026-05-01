/*
 * XREFs of ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18028F404
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180157AE0 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x180158D70 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 * Callees:
 *     ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x1801571EC (-ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pa.c)
 *     ??1?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x1801579D8 (--1-$vector@URect@Foundation@Windows@winrt@@V-$allocator@URect@Foundation@Windows@winrt@@@std@@@.c)
 *     ??$_Emplace_reallocate@U?$pair@PEBGPEBG@std@@@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAPEAU?$pair@PEBGPEBG@1@QEAU21@$$QEAU21@@Z @ 0x180233F08 (--$_Emplace_reallocate@U-$pair@PEBGPEBG@std@@@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pai.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x18028F6A0 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskbarLayoutPolicyManager::ValidateLayoutModificationXML(
        TaskbarLayoutPolicyManager *this,
        struct IXMLDOMDocument2 *a2)
{
  const char *v3; // r9
  const unsigned __int16 *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rdx
  const unsigned __int16 *v7; // rax
  _QWORD *v8; // rdx
  const unsigned __int16 *v9; // rax
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+38h] [rbp-20h] BYREF
  _QWORD *v15; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v17; // [rsp+60h] [rbp+8h]

  v14 = 0LL;
  v15 = 0LL;
  *(_QWORD *)&v13 = L"http://schemas.microsoft.com/Start/2014/StartLayout";
  *((_QWORD *)&v13 + 1) = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::StartLayoutSchema;
  try
  {
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
      (__int64 *)&v14,
      0LL,
      &v13);
    *(_QWORD *)&v13 = L"http://schemas.microsoft.com/Start/2014/TaskbarLayout";
    v4 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::TaskbarLayoutSchema;
    *((_QWORD *)&v13 + 1) = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::TaskbarLayoutSchema;
    v5 = *((_QWORD *)&v14 + 1);
    if ( *((_QWORD **)&v14 + 1) == v15 )
    {
      std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
        (__int64 *)&v14,
        *((__int64 *)&v14 + 1),
        &v13);
      v6 = (_QWORD *)*((_QWORD *)&v14 + 1);
    }
    else
    {
      **((_QWORD **)&v14 + 1) = L"http://schemas.microsoft.com/Start/2014/TaskbarLayout";
      *(_QWORD *)(v5 + 8) = v4;
      v6 = (_QWORD *)(*((_QWORD *)&v14 + 1) + 16LL);
      *((_QWORD *)&v14 + 1) += 16LL;
    }
    *(_QWORD *)&v13 = L"http://schemas.microsoft.com/Start/2014/FullDefaultLayout";
    v7 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::FullDefaultLayoutSchema;
    *((_QWORD *)&v13 + 1) = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::FullDefaultLayoutSchema;
    if ( v6 == v15 )
    {
      std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
        (__int64 *)&v14,
        (__int64)v6,
        &v13);
      v8 = (_QWORD *)*((_QWORD *)&v14 + 1);
    }
    else
    {
      *v6 = L"http://schemas.microsoft.com/Start/2014/FullDefaultLayout";
      v6[1] = v7;
      v8 = (_QWORD *)(*((_QWORD *)&v14 + 1) + 16LL);
      *((_QWORD *)&v14 + 1) += 16LL;
    }
    *(_QWORD *)&v13 = L"http://schemas.microsoft.com/Start/2014/LayoutModification";
    v9 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::LayoutModificationSchema;
    *((_QWORD *)&v13 + 1) = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::LayoutModificationSchema;
    if ( v8 == v15 )
    {
      std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
        (__int64 *)&v14,
        (__int64)v8,
        &v13);
    }
    else
    {
      *v8 = L"http://schemas.microsoft.com/Start/2014/LayoutModification";
      v8[1] = v9;
      *((_QWORD *)&v14 + 1) += 16LL;
    }
  }
  catch ( ... )
  {
    v17 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x2D3,
            (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
            v3);
    std::vector<winrt::Windows::Foundation::Rect>::~vector<winrt::Windows::Foundation::Rect>((__int64 *)&v14);
    return v17;
  }
  v10 = std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
          &v13,
          &v14);
  v11 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ValidateLayoutFile(v10, a2);
  if ( (_QWORD)v14 )
    std::_Deallocate<16>((void *)v14, (struct std::nothrow_t *)(((unsigned __int64)v15 - v14) & 0xFFFFFFFFFFFFFFF0uLL));
  return v11;
}
