/*
 * XREFs of ?RegisterRemoteDesktopProcess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEBAXIAEBUUri@Foundation@56@@Z @ 0x18061C2AC
 * Callers:
 *     ?RegisterRemoteDesktopProcess@?$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemProviderExtension@RemoteSystems@3456@@impl@winrt@@UEAAHIPEAX@Z @ 0x18061C280 (-RegisterRemoteDesktopProcess@-$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::RegisterRemoteDesktopProcess(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this,
        unsigned int a2,
        const struct winrt::Windows::Foundation::Uri *a3)
{
  winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::RegisterRemoteDesktopProcess(a2, a3);
}
