/*
 * XREFs of ?RegisterRemoteDesktopProcess@?$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemProviderExtension@RemoteSystems@3456@@impl@winrt@@UEAAHIPEAX@Z @ 0x180641C50
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterRemoteDesktopProcess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEBAXIAEBUUri@Foundation@56@@Z @ 0x180641C7C (-RegisterRemoteDesktopProcess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEBA.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::CloudPCComponent,winrt::Windows::Internal::Shell::RemoteSystems::IRemoteSystemProviderExtension>::RegisterRemoteDesktopProcess(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = a3;
  winrt::Windows::Internal::Shell::implementation::CloudPCComponent::RegisterRemoteDesktopProcess(
    a1,
    a2,
    (const struct winrt::Windows::Foundation::Uri *)&v4);
  return 0LL;
}
