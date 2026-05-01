/*
 * XREFs of ?ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1803F14D8
 * Callers:
 *     ?CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z @ 0x1803F06A0 (-CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x1801571EC (-ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pa.c)
 *     ??1?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x1801579D8 (--1-$vector@URect@Foundation@Windows@winrt@@V-$allocator@URect@Foundation@Windows@winrt@@@std@@@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@PEBGPEBG@std@@@1@AEBV?$allocator@U?$pair@PEBGPEBG@std@@@1@@Z @ 0x1803F04BC (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@V-$initialize.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall PWSLayoutPolicyManager::ValidateLayoutModificationXML(
        PWSLayoutPolicyManager *this,
        struct IXMLDOMDocument2 *a2,
        __int64 *a3)
{
  __int64 v4; // r8
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v10[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 *v11; // [rsp+28h] [rbp-90h]
  __int64 v12; // [rsp+30h] [rbp-88h]
  int v13[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 *v14; // [rsp+48h] [rbp-70h]
  __int64 v15; // [rsp+50h] [rbp-68h]
  _QWORD v16[8]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v17; // [rsp+A0h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v16[0] = L"http://schemas.microsoft.com/Start/2014/StartLayout";
  v16[1] = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::StartLayoutSchema;
  v16[2] = L"http://schemas.microsoft.com/Start/2014/TaskbarLayout";
  v16[3] = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::TaskbarLayoutSchema;
  v16[4] = L"http://schemas.microsoft.com/Start/2014/FullDefaultLayout";
  v16[5] = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::FullDefaultLayoutSchema;
  v16[6] = L"http://schemas.microsoft.com/Start/2014/LayoutModification";
  v16[7] = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::LayoutModificationSchema;
  *(_QWORD *)v10 = v16;
  v11 = &v17;
  std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
    (void **)v13,
    (__int64)v10,
    a3);
  v4 = v15;
  v15 = 0LL;
  v5 = v14;
  v14 = 0LL;
  v6 = *(_QWORD *)v13;
  *(_QWORD *)v13 = 0LL;
  *(_QWORD *)v10 = v6;
  v11 = v5;
  v12 = v4;
  v7 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ValidateLayoutFile((__int64)v10, a2);
  v8 = v7;
  if ( v7 >= 0 )
  {
    std::vector<winrt::Windows::Foundation::Rect>::~vector<winrt::Windows::Foundation::Rect>((__int64 *)v13);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x135,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)v7);
    std::vector<winrt::Windows::Foundation::Rect>::~vector<winrt::Windows::Foundation::Rect>((__int64 *)v13);
    return v8;
  }
}
