/*
 * XREFs of ??B?$implements@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@UIRemoteSystemDataModelStatics@3456@Ustatic_lifetime@6@@winrt@@QEBA?AUIInspectable@Foundation@Windows@1@XZ @ 0x1802C8158
 * Callers:
 *     ??$invoke@U?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@URemoteSessionWindowManager@implementation@Shell@Internal@34@URemoteDesktopStateChangedEventArgs@7834@@impl@winrt@@YA_NAEBU?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@1@AEBURemoteSessionWindowManager@implementation@Shell@Internal@41@AEBURemoteDesktopStateChangedEventArgs@7841@@Z @ 0x180620DA8 (--$invoke@U-$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Fou.c)
 * Callees:
 *     ?copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z @ 0x1800A9A00 (-copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

winrt *__fastcall winrt::implements<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics,winrt::static_lifetime>::operator winrt::Windows::Foundation::IInspectable(
        __int64 a1,
        winrt *a2)
{
  struct IUnknown *v3; // rax
  void *v4; // r8

  *(_QWORD *)a2 = 0LL;
  v3 = (struct IUnknown *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  winrt::copy_from_abi(a2, v3, v4);
  return a2;
}
