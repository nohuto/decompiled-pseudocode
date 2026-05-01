/*
 * XREFs of ?IsImmersiveRemoteSession@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEBA_NXZ @ 0x18063530C
 * Callers:
 *     ?IsImmersiveRemoteSession@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x18023F400 (-IsImmersiveRemoteSession@-$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Wi.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
bool __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::IsImmersiveRemoteSession(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *this)
{
  return winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::IsImmersiveRemoteSession();
}
