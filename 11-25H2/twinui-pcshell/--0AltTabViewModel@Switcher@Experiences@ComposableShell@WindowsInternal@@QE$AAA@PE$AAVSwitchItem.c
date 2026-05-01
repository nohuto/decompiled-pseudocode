/*
 * XREFs of ??0AltTabViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSwitchItemListViewModel@1234@@Z @ 0x180021748
 * Callers:
 *     ?CreateAltTabControl@XamlAltTabViewHost@@AEAAPE$AAVAltTab@Switcher@Experiences@ComposableShell@WindowsInternal@@XZ @ 0x18002110C (-CreateAltTabControl@XamlAltTabViewHost@@AEAAPE$AAVAltTab@Switcher@Experiences@ComposableShell@W.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180021A28 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180021A7C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180021D28 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?CreateInstance@__IAltTabViewModelFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVAltTabViewModel@2345@PE$AAVSwitchItemListViewModel@2345@@Z @ 0x180109990 (-CreateInstance@__IAltTabViewModelFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x1802DA288 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::AltTabViewModel::AltTabViewModel(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 Instance; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbx
  _DWORD v10[4]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v11; // [rsp+40h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+20h]

  v10[0] = 430727362;
  v10[1] = 865493045;
  v10[2] = -218916992;
  v10[3] = -267870267;
  v11 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"WindowsInternal.ComposableShell.Experiences.Switcher.AltTabViewModel",
                                v10,
                                (struct Platform::Guid *)&v11,
                                a4);
  __abi_ThrowIfFailed(ActivationFactoryByPCWSTR);
  Instance = WindowsInternal::ComposableShell::Experiences::Switcher::__IAltTabViewModelFactory::CreateInstance(v11, a2);
  v12 = Instance;
  v7 = __abi_winrt_ptr_ctor(Instance);
  v12 = v7;
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(Instance);
  v8 = __abi_winrt_ptr_ctor(v7);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v7);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v11);
  return v8;
}
