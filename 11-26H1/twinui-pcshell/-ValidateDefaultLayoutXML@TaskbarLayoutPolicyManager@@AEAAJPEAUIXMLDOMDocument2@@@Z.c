/*
 * XREFs of ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18028F578
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180157AE0 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 * Callees:
 *     ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x1801571EC (-ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pa.c)
 *     ??1?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x1801579D8 (--1-$vector@URect@Foundation@Windows@winrt@@V-$allocator@URect@Foundation@Windows@winrt@@@std@@@.c)
 *     ??$_Emplace_reallocate@U?$pair@PEBGPEBG@std@@@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAPEAU?$pair@PEBGPEBG@1@QEAU21@$$QEAU21@@Z @ 0x180233F08 (--$_Emplace_reallocate@U-$pair@PEBGPEBG@std@@@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pai.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x18028F6A0 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskbarLayoutPolicyManager::ValidateDefaultLayoutXML(
        TaskbarLayoutPolicyManager *this,
        struct IXMLDOMDocument2 *a2)
{
  const char *v3; // r9
  const unsigned __int16 *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rdx
  const unsigned __int16 *v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+38h] [rbp-20h] BYREF
  _QWORD *v13; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v15; // [rsp+60h] [rbp+8h]

  v12 = 0LL;
  v13 = 0LL;
  *(_QWORD *)&v11 = L"http://schemas.microsoft.com/Start/2014/StartLayout";
  *((_QWORD *)&v11 + 1) = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::StartLayoutSchema;
  try
  {
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
      (__int64 *)&v12,
      0LL,
      &v11);
    *(_QWORD *)&v11 = L"http://schemas.microsoft.com/Start/2014/TaskbarLayout";
    v4 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::TaskbarLayoutSchema;
    *((_QWORD *)&v11 + 1) = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::TaskbarLayoutSchema;
    v5 = *((_QWORD *)&v12 + 1);
    if ( *((_QWORD **)&v12 + 1) == v13 )
    {
      std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
        (__int64 *)&v12,
        *((__int64 *)&v12 + 1),
        &v11);
      v6 = (_QWORD *)*((_QWORD *)&v12 + 1);
    }
    else
    {
      **((_QWORD **)&v12 + 1) = L"http://schemas.microsoft.com/Start/2014/TaskbarLayout";
      *(_QWORD *)(v5 + 8) = v4;
      v6 = (_QWORD *)(*((_QWORD *)&v12 + 1) + 16LL);
      *((_QWORD *)&v12 + 1) += 16LL;
    }
    *(_QWORD *)&v11 = L"http://schemas.microsoft.com/Start/2014/FullDefaultLayout";
    v7 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::FullDefaultLayoutSchema;
    *((_QWORD *)&v11 + 1) = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::FullDefaultLayoutSchema;
    if ( v6 == v13 )
    {
      std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
        (__int64 *)&v12,
        (__int64)v6,
        &v11);
    }
    else
    {
      *v6 = L"http://schemas.microsoft.com/Start/2014/FullDefaultLayout";
      v6[1] = v7;
      *((_QWORD *)&v12 + 1) += 16LL;
    }
  }
  catch ( ... )
  {
    v15 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x2C3,
            (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
            v3);
    std::vector<winrt::Windows::Foundation::Rect>::~vector<winrt::Windows::Foundation::Rect>((__int64 *)&v12);
    return v15;
  }
  v8 = std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
         &v11,
         &v12);
  v9 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ValidateLayoutFile(v8, a2);
  if ( (_QWORD)v12 )
    std::_Deallocate<16>((void *)v12, (struct std::nothrow_t *)(((unsigned __int64)v13 - v12) & 0xFFFFFFFFFFFFFFF0uLL));
  return v9;
}
