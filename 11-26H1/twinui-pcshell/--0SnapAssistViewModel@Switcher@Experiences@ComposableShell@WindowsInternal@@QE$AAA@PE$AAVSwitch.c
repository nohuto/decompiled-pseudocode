/*
 * XREFs of ??0SnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSwitchItemListViewModel@1234@W4SnapAssistInvokeFlags@1234@@Z @ 0x180230C90
 * Callers:
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18009B7CC (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x18009D988 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18009D9A4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?CreateInstance@__ISnapAssistViewModelFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVSnapAssistViewModel@2345@PE$AAVSwitchItemListViewModel@2345@W4SnapAssistInvokeFlags@2345@@Z @ 0x1802BC4EC (-CreateInstance@__ISnapAssistViewModelFactory@Switcher@Experiences@ComposableShell@WindowsIntern.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x1802D29F8 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistViewModel::SnapAssistViewModel(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 Instance; // rbx
  __int64 v8; // rdi
  __int64 v9; // rbx
  _DWORD v11[4]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v12; // [rsp+40h] [rbp+10h] BYREF
  __int64 v13; // [rsp+58h] [rbp+28h]

  v11[0] = -522916957;
  v11[1] = 994124819;
  v11[2] = 705217705;
  v11[3] = -159204675;
  v12 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"WindowsInternal.ComposableShell.Experiences.Switcher.SnapAssistViewModel",
                                v11,
                                (struct Platform::Guid *)&v12,
                                a4);
  __abi_ThrowIfFailed(ActivationFactoryByPCWSTR);
  Instance = WindowsInternal::ComposableShell::Experiences::Switcher::__ISnapAssistViewModelFactory::CreateInstance(
               v12,
               a2,
               a3);
  v13 = Instance;
  v8 = __abi_winrt_ptr_ctor(Instance);
  v13 = v8;
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(Instance);
  v9 = __abi_winrt_ptr_ctor(v8);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v8);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v12);
  return v9;
}
