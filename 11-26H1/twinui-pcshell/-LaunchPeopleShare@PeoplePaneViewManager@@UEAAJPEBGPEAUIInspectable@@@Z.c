/*
 * XREFs of ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x18040CBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ @ 0x1801082E4 (-s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0PeoplePaneViewInfo@@QEAA@PEBGW4ViewType@@UtagSIZE@@@Z @ 0x180409C60 (--0PeoplePaneViewInfo@@QEAA@PEBGW4ViewType@@UtagSIZE@@@Z.c)
 *     ?RemovePendingShareViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x18040D26C (-RemovePendingShareViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 *     ?StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ @ 0x18040D744 (-StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ.c)
 *     ?TrySendFocusToTray@PeoplePaneViewManager@@AEAAHXZ @ 0x18040DB50 (-TrySendFocusToTray@PeoplePaneViewManager@@AEAAHXZ.c)
 *     ?push_back@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@UPeoplePaneViewInfo@@@2@@Z @ 0x18040DE24 (-push_back@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@UPeopleP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall PeoplePaneViewManager::LaunchPeopleShare(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2,
        struct IInspectable *a3)
{
  _DWORD *v5; // rdi
  __m128i v6; // xmm6
  HRESULT Instance; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  HRESULT v10; // eax
  PeoplePaneViewManager *v11; // rcx
  const char *v12; // r9
  IUnknown *v13; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rsi
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // r9d
  unsigned int v20; // r8d
  HSTRING_HEADER *v21; // rax
  IUnknown *pUnk; // [rsp+48h] [rbp-59h] BYREF
  __int64 AppId; // [rsp+50h] [rbp-51h] BYREF
  int v25; // [rsp+58h] [rbp-49h] BYREF
  const unsigned __int16 *v26; // [rsp+60h] [rbp-41h] BYREF
  std::_Ref_count_base *v27[2]; // [rsp+68h] [rbp-39h] BYREF
  char v28; // [rsp+78h] [rbp-29h]
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-21h] BYREF
  __int64 v30; // [rsp+98h] [rbp-9h]
  HSTRING_HEADER v31; // [rsp+A0h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v26 = a2;
  AppId = 0x25E000001F4LL;
  v5 = operator new(0x60uLL);
  *(_OWORD *)v5 = 0LL;
  v5[2] = 1;
  v5[3] = 1;
  *(_QWORD *)v5 = &std::_Ref_count_obj2<PeoplePaneViewInfo>::`vftable';
  PeoplePaneViewInfo::PeoplePaneViewInfo((__int64)(v5 + 4), (__int64)v26, 1, AppId);
  v27[0] = (std::_Ref_count_base *)(v5 + 4);
  v27[1] = (std::_Ref_count_base *)v5;
  PeoplePaneViewInfo::StartTelemetryShowTimer((PeoplePaneViewInfo *)(v5 + 4));
  wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&AppId, this + 5);
  std::vector<std::shared_ptr<PeoplePaneViewInfo>>::push_back(&this[6], v27);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&AppId);
  if ( v27[1] )
    std::_Ref_count_base::_Decref(v27[1]);
  v6 = *(__m128i *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
                     v27,
                     (__int64)&this[-11],
                     (__int64)&v26);
  *(__m128i *)v27 = v6;
  v28 = 1;
  pUnk = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pUnk);
  Instance = CoCreateInstance(
               &CLSID_ApplicationActivationManager,
               0LL,
               1u,
               &GUID_54e4c428_d1d4_47d4_ade6_46c829114a7d,
               (LPVOID *)&pUnk);
  v8 = Instance;
  if ( Instance < 0 )
  {
    v9 = 301LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)Instance);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pUnk);
    PeoplePaneViewManager::RemovePendingShareViewInfoForContactId(
      (PeoplePaneViewManager *)v6.m128i_i64[0],
      *(const unsigned __int16 **)_mm_srli_si128(v6, 8).m128i_i64[0]);
    return v8;
  }
  v10 = CoAllowSetForegroundWindow(pUnk, 0LL);
  v11 = retaddr;
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x12F,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v10);
  if ( !(unsigned int)PeoplePaneViewManager::TrySendFocusToTray(v11) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x131,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      v12);
  v25 = 0;
  v13 = pUnk;
  QueryInterface = pUnk->lpVtbl[1].QueryInterface;
  v30 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Windows.Launch", 0xFu, 0xEu);
  v15 = v30;
  AppId = (__int64)PeoplePaneViewManager::s_GetAppId(v17, v16, v18, v19);
  v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v31, (const WCHAR **)&AppId, v20);
  Instance = ((__int64 (__fastcall *)(IUnknown *, PVOID, _QWORD, __int64, struct IInspectable *, _DWORD, int *))QueryInterface)(
               v13,
               v21[1].Reserved.Reserved1,
               0LL,
               v15,
               a3,
               0,
               &v25);
  v8 = Instance;
  if ( Instance < 0 )
  {
    v9 = 314LL;
    goto LABEL_11;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pUnk);
  return 0LL;
}
