/*
 * XREFs of ?CreateTileIdentifier@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W00@Z @ 0x1800964F8
 * Callers:
 *     ??0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@Z @ 0x18009566C (--0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023724 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005C76C (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??$GetActivationFactory@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180094FCC (--$GetActivationFactory@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsI.c)
 *     ?GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x180096B04 (-GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA-AV-$bas.c)
 *     ?GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@PEB_W0@Z @ 0x180096C10 (-GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA-AVHString@Wrapper.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
const WCHAR *__fastcall CreativeFramework::Actions::AddTileToCollectionService::CreateTileIdentifier(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v7; // rdx
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, PVOID, HSTRING, const WCHAR *); // rsi
  HSTRING v12; // rdi
  const WCHAR *v13; // rax
  HSTRING_HEADER *v14; // rax
  int v15; // eax
  int v17; // [rsp+20h] [rbp-51h]
  __int64 v18; // [rsp+38h] [rbp-39h] BYREF
  HSTRING string; // [rsp+40h] [rbp-31h] BYREF
  const WCHAR *v20[2]; // [rsp+48h] [rbp-29h] BYREF
  _QWORD v21[4]; // [rsp+58h] [rbp-19h] BYREF
  HSTRING_HEADER v22; // [rsp+78h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+57h]

  v20[1] = a2;
  CreativeFramework::Actions::AddTileToCollectionService::GetHashedTileAlias(a1, &string, a4, a5);
  CreativeFramework::SubscribedContentUtils::GetFriendlySubscriptionNameFromPlacementId(v21, a3);
  wil::GetActivationFactory<WindowsInternal::Shell::UnifiedTile::ITargetedContentUnifiedTileIdentifierFactory>(
    (const WCHAR *)&v18,
    v7,
    v8);
  *(_QWORD *)a2 = 0LL;
  v10 = v18;
  v11 = *(__int64 (__fastcall **)(__int64, PVOID, HSTRING, const WCHAR *))(*(_QWORD *)v18 + 48LL);
  v12 = string;
  v13 = (const WCHAR *)v21;
  if ( v21[3] >= 8uLL )
    v13 = (const WCHAR *)v21[0];
  v20[0] = v13;
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, v20, v9);
  v15 = v11(v10, v14[1].Reserved.Reserved1, v12, a2);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      534LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v15,
      v17);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v18);
  std::wstring::_Tidy(v21, 1, 0LL);
  WindowsDeleteString(string);
  return a2;
}
