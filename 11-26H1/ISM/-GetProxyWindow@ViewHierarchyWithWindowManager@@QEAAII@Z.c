/*
 * XREFs of ?GetProxyWindow@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x1800FECF4
 * Callers:
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x1801005E0 (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180049678 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x180049A74 (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?find@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@2@AEBI@Z @ 0x1800A6984 (-find@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$alloc.c)
 *     ??$?RAEBUIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@_lambda_83cc9fc9ac8bc00941158b6f437a3d67_@@QEBA?A_PAEBUIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@Z @ 0x1800FDD78 (--$-RAEBUIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@_lambda_83.c)
 *     ??$call@AEAV_lambda_83cc9fc9ac8bc00941158b6f437a3d67_@@@?$factory_cache_entry@UWindowManagementPreview@Preview@WindowManagement@UI@Windows@winrt@@UIWindowManagementPreviewStatics2@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_83cc9fc9ac8bc00941158b6f437a3d67_@@@Z @ 0x1800FDF6C (--$call@AEAV_lambda_83cc9fc9ac8bc00941158b6f437a3d67_@@@-$factory_cache_entry@UWindowManagementP.c)
 *     ??$emplace@U?$pair@II@std@@@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@II@1@@Z @ 0x1800FE088 (--$emplace@U-$pair@II@std@@@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 *     ?GetForContainerIdAndHwnd@?$consume_Windows_UI_WindowManagement_Preview_IWindowManagementPreviewStatics2@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUguid@3@_K@Z @ 0x1800FE714 (-GetForContainerIdAndHwnd@-$consume_Windows_UI_WindowManagement_Preview_IWindowManagementPreview.c)
 */

__int64 __fastcall ViewHierarchyWithWindowManager::GetProxyWindow(
        ViewHierarchyWithWindowManager *this,
        unsigned int a2)
{
  __int64 v2; // rsi
  float *v4; // r14
  __int64 v5; // rcx
  void (__fastcall ***v6)(_QWORD, __int64 *, __int64 *); // r8
  __int64 *v8; // rdi
  signed __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v11; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v12[2]; // [rsp+28h] [rbp-50h] BYREF
  signed __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  float *v14; // [rsp+38h] [rbp-40h]
  __int64 v15; // [rsp+40h] [rbp-38h] BYREF
  __int128 v16; // [rsp+48h] [rbp-30h] BYREF

  v2 = a2;
  v12[0] = a2;
  v4 = (float *)((char *)this + 192);
  v14 = (float *)((char *)this + 192);
  std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::find(
    (_QWORD *)this + 24,
    &v11,
    (const unsigned __int8 *)v12);
  if ( v11 != *((_QWORD *)this + 25) )
    return *(unsigned int *)(v11 + 20);
  v8 = (__int64 *)((char *)this + 184);
  if ( !*v8 )
  {
    _InterlockedIncrement64(&qword_180253D68);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview,winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2> )
    {
      _lambda_83cc9fc9ac8bc00941158b6f437a3d67_::operator()<winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2 const &>(
        v5,
        &v13);
      _InterlockedDecrement64(&qword_180253D68);
    }
    else
    {
      _InterlockedDecrement64(&qword_180253D68);
      winrt::impl::factory_cache_entry<winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview,winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>::call<_lambda_83cc9fc9ac8bc00941158b6f437a3d67_ &>(
        v5,
        &v13,
        v6);
    }
    if ( v8 != &v13 )
    {
      if ( *v8 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v8);
      v9 = v13;
      v13 = 0LL;
      *v8 = v9;
    }
    winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v13);
  }
  try
  {
    LODWORD(v11) = 0;
    v16 = 0uLL;
    v10 = *(_DWORD *)winrt::impl::consume_Windows_UI_WindowManagement_Preview_IWindowManagementPreviewStatics2<winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>::GetForContainerIdAndHwnd(
                       (__int64 **)v8,
                       &v15,
                       &v16,
                       v2);
    LODWORD(v11) = v10;
  }
  catch ( ... )
  {
    v10 = v11;
    v4 = v14;
    LODWORD(v2) = v12[0];
  }
  if ( v10 )
  {
    v12[0] = v2;
    v12[1] = v10;
    std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::emplace<std::pair<unsigned int,unsigned int>>(
      v4,
      (__int64)&v16,
      (__int64)v12);
  }
  return v10;
}
