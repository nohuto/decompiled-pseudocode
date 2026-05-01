/*
 * XREFs of ?AppViewDataSourceAdapter_CreateInstance@@YAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@4PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x180164C34
 * Callers:
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1800D3244 (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ?RuntimeClassInitialize@XamlGamingTaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18067B7B0 (-RuntimeClassInitialize@XamlGamingTaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x180680158 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ?RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1806829CC (-RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180164D88 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourc.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18016E590 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSource.c)
 *     ??$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAUIWindowTabExtension@9UI@Internal@Windows@winrt@@@wil@@YA?AV?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@AEAW4DesktopSwitcherDataSourceScopeOptions@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUIImmersiveShellHookService@@$$QEAPEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAUIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@@Z @ 0x18029EE3C (--$MakeAndInitializeOrThrow@VAppViewDataSourceAdapter@@AEAW4DesktopSwitcherDataSourceScopeOption.c)
 *     ??$com_copy@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAPEAUIInspectable@@@wil@@YA?AV?$com_ptr_t@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@AEAPEAUIInspectable@@@Z @ 0x1802BF8D0 (--$com_copy@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAPEAUIInspec.c)
 *     ??$convert_from_abi@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@@wil@@YA?AUIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x18069A118 (--$convert_from_abi@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@@wil@@YA-AUIWindowTabE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 AppViewDataSourceAdapter_CreateInstance(int a1, ...)
{
  _QWORD *v1; // rbx
  __int64 *v2; // rax
  __int64 v3; // rcx
  int v4; // eax
  const char *v5; // r9
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-48h]
  __int64 v8; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9; // [rsp+48h] [rbp-20h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v12; // [rsp+70h] [rbp+8h] BYREF
  __int64 v13; // [rsp+78h] [rbp+10h] BYREF
  va_list va; // [rsp+78h] [rbp+10h]
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF
  va_list va1; // [rsp+80h] [rbp+18h]
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF
  va_list va2; // [rsp+88h] [rbp+20h]
  __int64 v19; // [rsp+90h] [rbp+28h]
  __int64 v20; // [rsp+98h] [rbp+30h]
  _QWORD *v21; // [rsp+A0h] [rbp+38h] BYREF
  va_list va3; // [rsp+A0h] [rbp+38h]
  va_list va4; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va4, a1);
  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  v19 = va_arg(va3, _QWORD);
  v20 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v21 = va_arg(va4, _QWORD *);
  v12 = a1;
  v1 = v21;
  *v21 = 0LL;
  try
  {
    wil::com_copy<Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice,IInspectable * &>();
    v9 = 0LL;
    if ( v20 )
    {
      v2 = (__int64 *)wil::convert_from_abi<winrt::Windows::Internal::UI::Shell::IWindowTabExtension>(&v8);
      if ( &v9 != v2 )
      {
        v3 = *v2;
        *v2 = 0LL;
        v9 = v3;
      }
      if ( v8 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
    }
    v8 = v10;
    wil::MakeAndInitializeOrThrow<AppViewDataSourceAdapter,enum DesktopSwitcherDataSourceScopeOptions &,IApplicationViewCollection * &,IApplicationViewIconLoader * &,IImmersiveShellHookService * &,Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *,winrt::Windows::Internal::UI::Shell::IWindowTabExtension &>(
      (unsigned int)va3,
      (unsigned int)&v12,
      (unsigned int)va,
      (unsigned int)va1,
      (unsigned int)va2,
      (__int64)&v8,
      (__int64)&v9);
    v4 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,AppViewDataSourceAdapterBase,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>>(
           v21,
           &GUID_12faaf23_7a01_4f04_95ca_c33c158afdf1,
           v1);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x20D,
        (int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)v4,
        v7);
    if ( v21 )
    {
      v21 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,AppViewDataSourceAdapterBase,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>::Release();
    }
    if ( v9 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v21) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x210,
                     (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
                     v5);
    return (unsigned int)v21;
  }
  return result;
}
