/*
 * XREFs of ??0VirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIVirtualDesktopDataSource@Multitasking@3Internal@Windows@@PE$AAUIVirtualDesktopController@6378@W4SwitchItemCloseButtonBehavior@1234@VRect@Foundation@8@_N4PE$AAVString@Platform@@@Z @ 0x1806ABAC0
 * Callers:
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1806ACFE4 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x1806BCC9C (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x18009D988 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18009D9A4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x1802D29F8 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?CreateInstance@__IVirtualDesktopBarElementViewModelFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVVirtualDesktopBarElementViewModel@2345@PE$AAUIVirtualDesktopDataSource@Multitasking@4Internal@Windows@@PE$AAUIVirtualDesktopController@849Windows@@W4SwitchItemCloseButtonBehavior@2345@VRect@Foundation@Windows@@_N4PE$AAVString@Platform@@@Z @ 0x1806ACF44 (-CreateInstance@__IVirtualDesktopBarElementViewModelFactory@Switcher@Experiences@Co_ea_1806ACF44.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel::VirtualDesktopBarElementViewModel(
        __int64 a1,
        int a2,
        int a3,
        void **a4,
        __int128 *a5,
        char a6,
        char a7,
        __int64 a8)
{
  int v8; // ebx
  int ActivationFactoryByPCWSTR; // eax
  __int64 Instance; // rbx
  __int64 v13; // rdi
  __int64 v14; // rbx
  _DWORD v16[4]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v17; // [rsp+50h] [rbp-10h] BYREF
  __int64 v18; // [rsp+70h] [rbp+10h] BYREF

  v8 = (int)a4;
  v16[0] = 567974803;
  v16[1] = 965197782;
  v16[2] = -405099375;
  v16[3] = 1050706698;
  v18 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"WindowsInternal.ComposableShell.Experiences.Switcher.VirtualDesktopBarElementViewModel",
                                (struct Platform::Guid *)v16,
                                (void **)&v18,
                                a4);
  __abi_ThrowIfFailed(ActivationFactoryByPCWSTR);
  v17 = *a5;
  Instance = WindowsInternal::ComposableShell::Experiences::Switcher::__IVirtualDesktopBarElementViewModelFactory::CreateInstance(
               v18,
               a2,
               a3,
               v8,
               (__int64)&v17,
               a6,
               a7,
               a8);
  a5 = (__int128 *)Instance;
  v13 = __abi_winrt_ptr_ctor(Instance);
  a5 = (__int128 *)v13;
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(Instance);
  v14 = __abi_winrt_ptr_ctor(v13);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v13);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v18);
  return v14;
}
