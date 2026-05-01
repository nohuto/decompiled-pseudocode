/*
 * XREFs of ?InitializeDataSource@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@Z @ 0x18016E9E0
 * Callers:
 *     ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEBUIWindowTabExtension@9UI@Internal@Windows@winrt@@@Z @ 0x18016E638 (-RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@.c)
 * Callees:
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180074CD0 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UISwitchItemDataSink@Multitasking@ComposableShell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UISwitchItemDataSink@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18016EB44 (--$ActivateInstance@UISwitchItemDataSink@Multitasking@ComposableShell@Internal@Windows@@@wil@@YA.c)
 *     ?Register@?$EventListener@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@VShellHookRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAJPEAUIImmersiveShellHookService@@@Z @ 0x18016EC80 (-Register@-$EventListener@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@VShellH.c)
 *     ?Register@?$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplicationViewEventRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAJPEAUIApplicationViewCollection@@@Z @ 0x18029B754 (-Register@-$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplica.c)
 *     ??$GetActivationFactory@UIDesktopIconFactoryStatics@Desktop@Multitasking@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIDesktopIconFactoryStatics@Desktop@Multitasking@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1802B37F0 (--$GetActivationFactory@UIDesktopIconFactoryStatics@Desktop@Multitasking@Shell@Internal@Windows@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AppViewDataSourceAdapterBase::InitializeDataSource(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationViewCollection *a2,
        struct IApplicationViewIconLoader *a3,
        struct IImmersiveShellHookService *a4,
        struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *a5)
{
  __int64 *v9; // rax
  __int64 v10; // r10
  __int64 v11; // rcx
  __int64 v12; // rdi
  struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v21; // [rsp+40h] [rbp+8h] BYREF

  v9 = (__int64 *)wil::ActivateInstance<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSink>((int)&v21);
  v10 = *v9;
  *v9 = 0LL;
  v11 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v10;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)this + 4,
    (__int64)a2);
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)this + 5,
    (__int64)a3);
  v12 = *((_QWORD *)this + 7);
  v13 = a5;
  *((_QWORD *)this + 7) = a5;
  if ( v13 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *))(*(_QWORD *)v13 + 8LL))(v13);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v14 = (__int64 *)wil::GetActivationFactory<Windows::Internal::Shell::Multitasking::Desktop::IDesktopIconFactoryStatics>(&a5);
  v15 = *v14;
  *v14 = 0LL;
  v16 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = v15;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( a5 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *))(*(_QWORD *)a5 + 16LL))(a5);
  v17 = AppViewEventHelpers::EventListener<IApplicationViewCollection,IApplicationViewChangeListener,AppViewEventHelpers::details::ApplicationViewEventRegistration>::Register(
          (char *)this + 64,
          *((_QWORD *)this + 4));
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA8,
      (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
      (const char *)(unsigned int)v17,
      v19);
  if ( a4 )
  {
    v18 = AppViewEventHelpers::EventListener<IImmersiveShellHookService,IImmersiveShellHookNotification,AppViewEventHelpers::details::ShellHookRegistration>::Register(
            (char *)this + 80,
            a4);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xAD,
        (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
        (const char *)(unsigned int)v18,
        v19);
  }
}
