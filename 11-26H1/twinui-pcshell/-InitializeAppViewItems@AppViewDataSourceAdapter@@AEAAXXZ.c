/*
 * XREFs of ?InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x1800F1CE8
 * Callers:
 *     ?ReevaluateTabItems@AppViewDataSourceAdapter@@UEAAXW4ReevaluateTabOption@@@Z @ 0x1800F1A20 (-ReevaluateTabItems@AppViewDataSourceAdapter@@UEAAXW4ReevaluateTabOption@@@Z.c)
 *     ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEBUIWindowTabExtension@9UI@Internal@Windows@winrt@@@Z @ 0x18015F31C (-RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1800482C8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x1800F20A0 (-ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z.c)
 *     ?FindItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1800F2498 (-FindItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@.c)
 *     ?AddItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18017D14C (-AddItemForView@AppViewDataSourceAdapterBase@@IEAA-AV-$com_ptr_t@UIRootSwitchItem@Multitasking@C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
void __fastcall AppViewDataSourceAdapter::InitializeAppViewItems(AppViewDataSourceAdapter *this)
{
  AppViewDataSourceAdapter *v1; // r14
  __int64 **v2; // r12
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rbx
  int v7; // eax
  const char *v8; // r9
  struct IApplicationView *v9; // rbx
  __int64 *v10; // rdx
  __int64 *v11; // rcx
  __int64 *v12; // rsi
  __int64 *v13; // rax
  __int64 v14; // rsi
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  AppViewDataSourceAdapter *v19; // rbx
  int v20[2]; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v21; // [rsp+28h] [rbp-90h] BYREF
  unsigned int v22; // [rsp+30h] [rbp-88h] BYREF
  struct IApplicationView *v23; // [rsp+38h] [rbp-80h] BYREF
  int *v24; // [rsp+40h] [rbp-78h]
  unsigned int v25; // [rsp+48h] [rbp-70h] BYREF
  __int64 v26; // [rsp+50h] [rbp-68h] BYREF
  int *v27; // [rsp+58h] [rbp-60h]
  __int64 v28; // [rsp+60h] [rbp-58h] BYREF
  struct IApplicationView *v29; // [rsp+68h] [rbp-50h]
  __int64 **v30; // [rsp+70h] [rbp-48h]
  int v31; // [rsp+84h] [rbp-34h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  AppViewDataSourceAdapter *v33; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v34; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v35; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v36; // [rsp+D8h] [rbp+20h]

  v33 = this;
  v1 = this;
  v2 = (__int64 **)((char *)this + 40);
  v30 = (__int64 **)((char *)this + 40);
  v3 = (__int64 *)*((_QWORD *)this + 5);
  if ( !v3 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x131,
      (int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)0x80070490LL,
      v20[0]);
  v35 = 0LL;
  v4 = *v3;
  v35 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 24))(v3, &v35);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x134,
      (int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      (const char *)(unsigned int)v5,
      v20[0]);
  v6 = v35;
  *(_QWORD *)v20 = v35;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v20);
  v21 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v6 + 24LL))(v6, &v21);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x10,
      (int)"desktop\\internal\\shell\\inc\\private\\ObjectArrayAdapter.h",
      (const char *)(unsigned int)v7);
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
    v9 = v23;
    v29 = v23;
    if ( v23 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v23 + 8LL))(v23);
    try
    {
      if ( v9 )
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v9 + 8LL))(v9);
      v10 = (__int64 *)*((_QWORD *)v1 + 13);
      v11 = (__int64 *)v10[1];
      v31 = 0;
      v12 = v10;
      if ( !*((_BYTE *)v11 + 25) )
      {
        do
        {
          if ( v11[4] >= (unsigned __int64)v9 )
            v12 = v11;
          v13 = v11 + 2;
          if ( v11[4] >= (unsigned __int64)v9 )
            v13 = v11;
          v11 = (__int64 *)*v13;
        }
        while ( !*(_BYTE *)(*v13 + 25) );
      }
      if ( *((_BYTE *)v12 + 25) || (unsigned __int64)v9 < v12[4] )
        v12 = v10;
      if ( v9 )
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v9 + 16LL))(v9);
      if ( v12 == *((__int64 **)v1 + 13) )
      {
        v14 = 0LL;
        v36 = 0LL;
      }
      else
      {
        v14 = v12[5];
        v36 = v14;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      }
      if ( !v14 && AppViewDataSourceAdapter::ShouldIncludeView((AppViewDataSourceAdapter *)((char *)v1 + 8), v9) )
      {
        AppViewDataSourceAdapterBase::AddItemForView((char *)v1 + 8, &v28, v9);
        if ( v28 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x143,
        (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        v8);
      v1 = v33;
      v9 = v29;
      v2 = v30;
    }
    if ( v9 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v9 + 16LL))(v9);
    ++v22;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v22);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v20);
  v34 = 0LL;
  v15 = *v2;
  v16 = **v2;
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
