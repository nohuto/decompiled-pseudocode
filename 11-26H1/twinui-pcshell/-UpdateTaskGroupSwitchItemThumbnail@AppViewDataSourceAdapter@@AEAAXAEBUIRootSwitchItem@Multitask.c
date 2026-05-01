/*
 * XREFs of ?UpdateTaskGroupSwitchItemThumbnail@AppViewDataSourceAdapter@@AEAAXAEBUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x1806C2D90
 * Callers:
 *     ?HandleTaskGroupSwitchItemAdded@AppViewDataSourceAdapter@@AEAAXAEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x1806C2700 (-HandleTaskGroupSwitchItemAdded@AppViewDataSourceAdapter@@AEAAXAEBUISwitchItem@Multitasking@Comp.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$as@UTaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x18020AAC8 (--$as@UTaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QE.c)
 *     ??$as@UITaskGroup@TaskGroups@Shell@Internal@Windows@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITaskGroup@TaskGroups@Shell@Internal@Windows@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18027D568 (--$as@UITaskGroup@TaskGroups@Shell@Internal@Windows@@Utype@-$abi@UIUnknown@Foundation@Windows@wi.c)
 *     ??$as@UIThumbnailFactory@Multitasking@ComposableShell@Internal@Windows@winrt@@U12345@$0A@@impl@winrt@@YA?AUIThumbnailFactory@Multitasking@ComposableShell@Internal@Windows@1@PEAU23456@@Z @ 0x1802C3020 (--$as@UIThumbnailFactory@Multitasking@ComposableShell@Internal@Windows@winrt@@U12345@$0A@@impl@w.c)
 *     ?ThumbnailFactory@?$consume_Windows_Internal_ComposableShell_Multitasking_IRootSwitchItem@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUIThumbnailFactory@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x18044B958 (-ThumbnailFactory@-$consume_Windows_Internal_ComposableShell_Multitasking_IRootSwitchItem@UIRoot.c)
 *     ?Data@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806C22D4 (-Data@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem@UIRootSwitchItem@Multi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall AppViewDataSourceAdapter::UpdateTaskGroupSwitchItemThumbnail(
        AppViewDataSourceAdapter *this,
        const struct winrt::Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  int v7; // eax
  int v8[4]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 (__fastcall ***v10)(_QWORD, void *, __int64 *); // [rsp+50h] [rbp+20h] BYREF
  __int64 v11; // [rsp+60h] [rbp+30h] BYREF
  __int64 v12; // [rsp+68h] [rbp+38h] BYREF

  if ( *((_QWORD *)this + 8) )
  {
    v4 = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItem<winrt::Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem>::Data(
           (__int64 (__fastcall ****)(_QWORD, void *, _QWORD **))a2,
           &v11);
    winrt::Windows::Foundation::IUnknown::as<winrt::Windows::Internal::Shell::TaskGroups::TaskGroup>(v4, (__int64)v8);
    if ( v11 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v11);
    winrt::impl::as<Windows::Internal::Shell::TaskGroups::ITaskGroup,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v12,
      *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v8);
    v10 = 0LL;
    v5 = *((_QWORD *)this + 8);
    v6 = v12;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v5 + 88LL))(v5, v12, &v10);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1F0,
        (int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)v7,
        v8[0]);
    winrt::impl::as<winrt::Windows::Internal::ComposableShell::Multitasking::IThumbnailFactory,Windows::Internal::ComposableShell::Multitasking::IThumbnailFactory,0>(
      &v11,
      v10);
    winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IRootSwitchItem<winrt::Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem>::ThumbnailFactory(
      (__int64 *)a2,
      &v11);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
    if ( v10 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v10);
    if ( v6 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v12);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v8);
  }
}
