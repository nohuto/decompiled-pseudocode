/*
 * XREFs of ?MakeTaskViewFrame@@YA?AV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@W4ALL_UP_VIEW_FLAGS@@PEAUIImmersiveMonitor@@1AEBUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@AEBUSwitchItemDataView@7ComposableShell@9Windows@winrt@@AEBUIVirtualDesktopDataSource@7ComposableShell@9Windows@winrt@@AEBUIVirtualDesktopController@7ComposableShell@9Windows@winrt@@PE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@PEAUIApplicationViewCollection@@AEBUTaskGroupDataSourceAdapter@TaskGroups@89Windows@winrt@@PEAUIRemoteSessionWindowManager@89Windows@ABI@@@Z @ 0x1801D6B3C
 * Callers:
 *     ?CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1801D6914 (-CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18009D9A4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$MakeAndInitializeOrThrow@VTaskViewFrame@@AEAW4ALL_UP_VIEW_FLAGS@@AEAPEAUIImmersiveMonitor@@AEAPEAU3@AEBUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@AEBUSwitchItemDataView@6ComposableShell@89winrt@@AEBUIVirtualDesktopDataSource@6ComposableShell@89winrt@@AEBUIVirtualDesktopController@6ComposableShell@89winrt@@AEAPE$AAUIXamlMultitaskingViewController@@AEAPE$AAUIXamlSwitcherWindowInteractionEvents@@AEAPEAUIApplicationViewCollection@@AEBUTaskGroupDataSourceAdapter@TaskGroups@789winrt@@AEAPEAUIRemoteSessionWindowManager@789ABI@@@wil@@YA?AV?$ComPtr@VTaskViewFrame@@@WRL@Microsoft@@AEAW4ALL_UP_VIEW_FLAGS@@AEAPEAUIImmersiveMonitor@@1AEBUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@AEBUSwitchItemDataView@8ComposableShell@Internal@Windows@winrt@@AEBUIVirtualDesktopDataSource@8ComposableShell@Internal@Windows@winrt@@AEBUIVirtualDesktopController@8ComposableShell@Internal@Windows@winrt@@AEAPE$AAUIXamlMultitaskingViewController@@AEAPE$AAUIXamlSwitcherWindowInteractionEvents@@AEAPEAUIApplicationViewCollection@@AEBUTaskGroupDataSourceAdapter@TaskGroups@9Internal@Windows@winrt@@AEAPEAUIRemoteSessionWindowManager@9Internal@Windows@ABI@@@Z @ 0x180295180 (--$MakeAndInitializeOrThrow@VTaskViewFrame@@AEAW4ALL_UP_VIEW_FLAGS@@AEAPEAUIImmersiveMonitor@@AE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *MakeTaskViewFrame(_QWORD *a1, int a2, ...)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v7; // [rsp+80h] [rbp-9h] BYREF
  int v8; // [rsp+B0h] [rbp+27h] BYREF
  __int64 v9; // [rsp+B8h] [rbp+2Fh] BYREF
  va_list va; // [rsp+B8h] [rbp+2Fh]
  __int64 v11; // [rsp+C0h] [rbp+37h] BYREF
  va_list va1; // [rsp+C0h] [rbp+37h]
  __int64 v13; // [rsp+C8h] [rbp+3Fh]
  __int64 v14; // [rsp+D0h] [rbp+47h]
  __int64 v15; // [rsp+D8h] [rbp+4Fh]
  __int64 v16; // [rsp+E0h] [rbp+57h]
  __int64 v17; // [rsp+E8h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+E8h] [rbp+5Fh]
  __int64 v19; // [rsp+F0h] [rbp+67h] BYREF
  va_list va3; // [rsp+F0h] [rbp+67h]
  __int64 v21; // [rsp+F8h] [rbp+6Fh] BYREF
  va_list va4; // [rsp+F8h] [rbp+6Fh]
  __int64 v23; // [rsp+100h] [rbp+77h]
  va_list va5; // [rsp+108h] [rbp+7Fh] BYREF

  va_start(va5, a2);
  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  v13 = va_arg(va2, _QWORD);
  v14 = va_arg(va2, _QWORD);
  v15 = va_arg(va2, _QWORD);
  v16 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v19 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v21 = va_arg(va5, _QWORD);
  v23 = va_arg(va5, _QWORD);
  v8 = a2;
  v17 = __abi_winrt_ptr_ctor(v17);
  v19 = __abi_winrt_ptr_ctor(v19);
  v3 = (__int64 *)wil::MakeAndInitializeOrThrow<TaskViewFrame,enum ALL_UP_VIEW_FLAGS &,IImmersiveMonitor * &,IImmersiveMonitor * &,winrt::Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice const &,winrt::Windows::Internal::ComposableShell::Multitasking::SwitchItemDataView const &,winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource const &,winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController const &,IXamlMultitaskingViewController __gc * &,IXamlSwitcherWindowInteractionEvents __gc * &,IApplicationViewCollection * &,winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter const &,ABI::Windows::Internal::Shell::IRemoteSessionWindowManager * &>(
                    (unsigned int)&v7,
                    (unsigned int)&v8,
                    (unsigned int)va,
                    (unsigned int)va1,
                    v13,
                    v14,
                    v15,
                    v16,
                    (__int64)va2,
                    (__int64)va3,
                    (__int64)va4,
                    v23,
                    (__int64)va5);
  v4 = *v3;
  *v3 = 0LL;
  *a1 = v4;
  v5 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v17);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v19);
  return a1;
}
