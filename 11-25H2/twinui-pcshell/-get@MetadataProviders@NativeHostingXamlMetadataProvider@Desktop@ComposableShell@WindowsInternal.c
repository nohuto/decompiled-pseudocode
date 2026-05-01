/*
 * XREFs of ?get@MetadataProviders@NativeHostingXamlMetadataProvider@Desktop@ComposableShell@WindowsInternal@@SAPE$AAU?$IVectorView@PE$AAUIXamlMetadataProvider@Markup@Xaml@UI@Windows@@@Collections@Foundation@Windows@@XZ @ 0x1801B57DC
 * Callers:
 *     ?DefaultProviders@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YA?AU?$IVectorView@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@@Collections@Foundation@56@XZ @ 0x1801B54F8 (-DefaultProviders@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YA-AU-$IVectorVi.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180021A28 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180021A7C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180021D28 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?get@ListViewModel@__ITaskViewTimelineViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVSwitchItemListViewModel@3456@XZ @ 0x18010AA8C (-get@ListViewModel@__ITaskViewTimelineViewModelPublicNonVirtuals@Switcher@Experiences@Composable.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x1802DA288 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Desktop::NativeHostingXamlMetadataProvider::MetadataProviders::get(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbx
  _DWORD v9[4]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+10h] BYREF
  __int64 v11; // [rsp+48h] [rbp+18h]

  v9[0] = 2069417534;
  v9[1] = 993550021;
  v9[2] = 405293977;
  v9[3] = -1427716792;
  v10 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"WindowsInternal.ComposableShell.Desktop.NativeHostingXamlMetadataProvider",
                                v9,
                                (struct Platform::Guid *)&v10,
                                a4);
  __abi_ThrowIfFailed(ActivationFactoryByPCWSTR);
  v5 = WindowsInternal::ComposableShell::Experiences::Switcher::__ITaskViewTimelineViewModelPublicNonVirtuals::ListViewModel::get(v10);
  v11 = v5;
  v6 = __abi_winrt_ptr_ctor(v5);
  v11 = v6;
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v5);
  v7 = __abi_winrt_ptr_ctor(v6);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v6);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v10);
  return v7;
}
