/*
 * XREFs of ?RemoveTileFromCollection@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800982D8
 * Callers:
 *     ?Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800983A0 (-Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ??0_lambda_12abaff33ac527a70ddc02944390cf89_@@QEAA@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAVPhoneShellNamespaceHelper@ContentManagement@@AEAPEAUHSTRING__@@@Z @ 0x180028124 (--0_lambda_12abaff33ac527a70ddc02944390cf89_@@QEAA@AEAV-$unique_any_t@V-$unique_storage@U-$resou.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreativeFramework::Actions::EnumerateCollectionItems__lambda_33066bbcaa202ed8496d422e2c9143b2___ @ 0x180094B10 (CreativeFramework--Actions--EnumerateCollectionItems__lambda_33066bbcaa202ed8496d422e2c9143b2___.c)
 *     ?CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180096190 (-CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICurated.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CreativeFramework::Actions::AddTileToCollectionService::RemoveTileFromCollection(
        CreativeFramework::Actions::AddTileToCollectionService *this,
        struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *a2)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, HSTRING *); // rbx
  int v4; // eax
  _QWORD *v5; // rax
  CreativeFramework::Actions::AddTileToCollectionService *v6; // rcx
  _QWORD v7[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  char v9; // [rsp+60h] [rbp+20h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *v10; // [rsp+68h] [rbp+28h] BYREF
  HSTRING string; // [rsp+70h] [rbp+30h] BYREF

  v10 = a2;
  string = 0LL;
  v2 = *((_QWORD *)this + 22);
  v3 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v2 + 56LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v4 = v3(v2, &string);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      569LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v4,
      v7[0]);
  v9 = 0;
  v5 = _lambda_12abaff33ac527a70ddc02944390cf89_::_lambda_12abaff33ac527a70ddc02944390cf89_(
         v7,
         (__int64)&string,
         (__int64)&v10,
         (__int64)&v9);
  CreativeFramework::Actions::EnumerateCollectionItems__lambda_33066bbcaa202ed8496d422e2c9143b2___(
    (__int64 *)v10,
    (__int64)v5);
  if ( v9 )
    CreativeFramework::Actions::AddTileToCollectionService::CommitCollectionChanges(v6, v10);
  WindowsDeleteString(string);
}
