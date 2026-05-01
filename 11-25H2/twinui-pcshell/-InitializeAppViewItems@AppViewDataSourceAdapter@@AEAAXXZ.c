/*
 * XREFs of ?InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x180055D5C
 * Callers:
 *     ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEBUIWindowTabExtension@9UI@Internal@Windows@winrt@@@Z @ 0x18016E638 (-RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@.c)
 *     ?ReevaluateTabItems@AppViewDataSourceAdapter@@UEAAXW4ReevaluateTabOption@@@Z @ 0x1801735F0 (-ReevaluateTabItems@AppViewDataSourceAdapter@@UEAAXW4ReevaluateTabOption@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180056C00 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180172F1C (-AddItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@C.c)
 *     ?FindItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180176284 (-FindItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@.c)
 *     ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x180176350 (-ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
void __fastcall AppViewDataSourceAdapter::InitializeAppViewItems(AppViewDataSourceAdapter *this)
{
  AppViewDataSourceAdapter *v1; // r14
  AppViewDataSourceAdapter *v2; // r15
  __int64 **v3; // r12
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  const char *v9; // r9
  struct IApplicationView *v10; // rsi
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 *v13; // rbx
  __int64 v14; // rbx
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  AppViewDataSourceAdapter *v19; // rbx
  int v20[2]; // [rsp+20h] [rbp-B8h] BYREF
  int v21; // [rsp+28h] [rbp-B0h] BYREF
  int v22; // [rsp+30h] [rbp-A8h] BYREF
  struct IApplicationView *v23; // [rsp+38h] [rbp-A0h] BYREF
  int *v24; // [rsp+40h] [rbp-98h]
  int v25; // [rsp+48h] [rbp-90h] BYREF
  __int64 v26; // [rsp+50h] [rbp-88h] BYREF
  int *v27; // [rsp+58h] [rbp-80h]
  __int64 v28; // [rsp+60h] [rbp-78h] BYREF
  struct IApplicationView *v29; // [rsp+68h] [rbp-70h]
  AppViewDataSourceAdapter *v30; // [rsp+70h] [rbp-68h]
  __int64 **v31; // [rsp+78h] [rbp-60h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  AppViewDataSourceAdapter *v33; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v34; // [rsp+E8h] [rbp+10h] BYREF
  __int64 v35; // [rsp+F0h] [rbp+18h] BYREF
  __int64 v36; // [rsp+F8h] [rbp+20h]

  v33 = this;
  v1 = this;
  v2 = this;
  v30 = this;
  v3 = (__int64 **)((char *)this + 40);
  v31 = (__int64 **)((char *)this + 40);
  v4 = (__int64 *)*((_QWORD *)this + 5);
  if ( !v4 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x131,
      (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)0x80070490LL,
      v20[0]);
  v35 = 0LL;
  v5 = *v4;
  v35 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v5 + 24))(v4, &v35);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x134,
      (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v6,
      v20[0]);
  v7 = v35;
  *(_QWORD *)v20 = v35;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v20);
  v21 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 24LL))(v7, &v21);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x10,
      (int)"desktop\\internal\\shell\\inc\\private\\ObjectArrayAdapter.h",
      (const char *)(unsigned int)v8);
  v22 = 0;
  v23 = 0LL;
  v24 = v20;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v22);
  v25 = v21;
  v26 = 0LL;
  v27 = v20;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v25);
  while ( v22 != v25 || v24 != v27 )
  {
    v10 = v23;
    v29 = v23;
    if ( v23 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v23 + 8LL))(v23);
    try
    {
      if ( v10 )
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v10 + 8LL))(v10);
      v11 = *(__int64 **)(*((_QWORD *)v2 + 13) + 8LL);
      v12 = 0LL;
      v13 = (__int64 *)*((_QWORD *)v2 + 13);
      while ( !*((_BYTE *)v11 + 25) )
      {
        if ( v11[4] < (unsigned __int64)v10 )
        {
          v11 = (__int64 *)v11[2];
        }
        else
        {
          v13 = v11;
          v11 = (__int64 *)*v11;
        }
      }
      if ( *((_BYTE *)v13 + 25) || (unsigned __int64)v10 < v13[4] )
        v13 = (__int64 *)*((_QWORD *)v2 + 13);
      if ( v10 )
        (*(void (__fastcall **)(struct IApplicationView *, _QWORD))(*(_QWORD *)v10 + 16LL))(v10, 0LL);
      if ( v13 == *((__int64 **)v2 + 13) )
      {
        v14 = 0LL;
        v36 = 0LL;
      }
      else
      {
        v14 = v13[5];
        v36 = v14;
        if ( v14 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 8LL))(v14, v12);
      }
      if ( !v14 && AppViewDataSourceAdapter::ShouldIncludeView((AppViewDataSourceAdapter *)((char *)v1 + 8), v10) )
      {
        AppViewDataSourceAdapterBase::AddItemForView((char *)v1 + 8, &v28, v10);
        if ( v28 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
      if ( v14 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 16LL))(v14, v12);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x143,
        (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        v9);
      v1 = v33;
      v10 = v29;
      v2 = v30;
      v3 = v31;
    }
    if ( v10 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v10 + 16LL))(v10);
    ++v22;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v22);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v20);
  v34 = 0LL;
  v15 = *v3;
  v16 = **v3;
  v34 = 0LL;
  (*(void (__fastcall **)(__int64 *, __int64 *))(v16 + 72))(v15, &v34);
  v17 = v34;
  if ( v34 )
  {
    AppViewDataSourceAdapterBase::FindItemForView((char *)v1 + 8, &v33, v34);
    v19 = v33;
    if ( v33 )
    {
      LOBYTE(v18) = 1;
      (*(void (__fastcall **)(AppViewDataSourceAdapter *, __int64))(*(_QWORD *)v33 + 72LL))(v33, v18);
    }
    if ( v19 )
      (*(void (__fastcall **)(AppViewDataSourceAdapter *))(*(_QWORD *)v19 + 16LL))(v19);
    v17 = v34;
  }
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
}
