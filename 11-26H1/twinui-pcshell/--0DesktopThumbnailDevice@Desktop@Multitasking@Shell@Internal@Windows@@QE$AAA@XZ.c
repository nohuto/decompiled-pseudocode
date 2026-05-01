/*
 * XREFs of ??0DesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@QE$AAA@XZ @ 0x18021B034
 * Callers:
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18009A890 (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ?RuntimeClassInitialize@XamlGamingTaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1806A2598 (-RuntimeClassInitialize@XamlGamingTaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ?RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1806A9D4C (-RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ?get@ListViewModel@__ITaskViewTimelineViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVSwitchItemListViewModel@3456@XZ @ 0x18009B4D4 (-get@ListViewModel@__ITaskViewTimelineViewModelPublicNonVirtuals@Switcher@Experiences@Composable.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x18009D988 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18009D9A4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x1802D29F8 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::Shell::Multitasking::Desktop::DesktopThumbnailDevice::DesktopThumbnailDevice(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void **a4)
{
  __int64 v4; // rbx
  int ActivationFactoryByPCWSTR; // eax
  unsigned int (__fastcall ***v6)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]
  int v13; // [rsp+2Ch] [rbp-Ch]
  __int64 v14; // [rsp+60h] [rbp+28h] BYREF
  __int64 v15; // [rsp+68h] [rbp+30h] BYREF
  unsigned int (__fastcall ***v16)(_QWORD, _QWORD, _QWORD); // [rsp+70h] [rbp+38h]
  __int64 v17; // [rsp+78h] [rbp+40h]

  v11 = 53LL;
  v4 = 0LL;
  v12 = 192;
  v13 = 1174405120;
  v14 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"Windows.Internal.Shell.Multitasking.Desktop.DesktopThumbnailDevice",
                                &v11,
                                (struct Platform::Guid *)&v14,
                                a4);
  __abi_ThrowIfFailed(ActivationFactoryByPCWSTR);
  v6 = (unsigned int (__fastcall ***)(_QWORD, _QWORD, _QWORD))WindowsInternal::ComposableShell::Experiences::Switcher::__ITaskViewTimelineViewModelPublicNonVirtuals::ListViewModel::get(v14);
  v7 = (__int64)v6;
  v16 = v6;
  v15 = 0LL;
  if ( v6 && !(**v6)(v6, &_uuidof__AVDesktopThumbnailDevice_Desktop_Multitasking_Shell_Internal_Windows__, &v15) )
  {
    __abi_ThrowIfFailed(0);
    v4 = v15;
  }
  v17 = v4;
  v8 = __abi_winrt_ptr_ctor(v4);
  v17 = v8;
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v4);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v7);
  v9 = __abi_winrt_ptr_ctor(v8);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v8);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v14);
  return v9;
}
