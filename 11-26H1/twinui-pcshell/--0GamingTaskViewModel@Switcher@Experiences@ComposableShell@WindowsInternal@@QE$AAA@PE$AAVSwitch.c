/*
 * XREFs of ??0GamingTaskViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSwitchItemListViewModel@1234@_N@Z @ 0x1806A0020
 * Callers:
 *     ?CreateGamingTaskViewControl@XamlGamingTaskViewHost@@AEAAPE$AAVGamingTaskView@Switcher@Experiences@ComposableShell@WindowsInternal@@XZ @ 0x1806A106C (-CreateGamingTaskViewControl@XamlGamingTaskViewHost@@AEAAPE$AAVGamingTaskView@Switcher@Experienc.c)
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x18009D988 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18009D9A4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?CreateInstance@__ISnapAssistViewModelFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVSnapAssistViewModel@2345@PE$AAVSwitchItemListViewModel@2345@W4SnapAssistInvokeFlags@2345@@Z @ 0x1802BC4EC (-CreateInstance@__ISnapAssistViewModelFactory@Switcher@Experiences@ComposableShell@WindowsIntern.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x1802D29F8 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::GamingTaskViewModel::GamingTaskViewModel(
        __int64 a1,
        __int64 a2,
        char a3,
        void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 v7; // r8
  __int64 Instance; // rbx
  __int64 v9; // rdi
  __int64 v10; // rbx
  _DWORD v12[4]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+10h] BYREF
  __int64 v14; // [rsp+58h] [rbp+28h]

  v12[0] = 300647776;
  v12[1] = 988080170;
  v12[2] = -519120487;
  v12[3] = 549574974;
  v13 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"WindowsInternal.ComposableShell.Experiences.Switcher.GamingTaskViewModel",
                                (struct Platform::Guid *)v12,
                                (void **)&v13,
                                a4);
  __abi_ThrowIfFailed(ActivationFactoryByPCWSTR);
  LOBYTE(v7) = a3;
  Instance = WindowsInternal::ComposableShell::Experiences::Switcher::__ISnapAssistViewModelFactory::CreateInstance(
               v13,
               a2,
               v7);
  v14 = Instance;
  v9 = __abi_winrt_ptr_ctor(Instance);
  v14 = v9;
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(Instance);
  v10 = __abi_winrt_ptr_ctor(v9);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v9);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v13);
  return v10;
}
