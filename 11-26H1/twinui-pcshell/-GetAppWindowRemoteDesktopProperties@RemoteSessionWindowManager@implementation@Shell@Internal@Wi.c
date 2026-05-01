/*
 * XREFs of ?GetAppWindowRemoteDesktopProperties@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUAppWindowRemoteDesktopProperties@3456@_K@Z @ 0x180287E34
 * Callers:
 *     ?GetAppWindowRemoteDesktopProperties@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAH_KPEAUstruct_Windows_Internal_Shell_AppWindowRemoteDesktopProperties@23@@Z @ 0x180287DD0 (-GetAppWindowRemoteDesktopProperties@-$produce@URemoteSessionWindowManager@implementation@Shell@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::GetAppWindowRemoteDesktopProperties(
        __int64 a1,
        __int64 a2)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 88LL))(*(_QWORD *)(a1 + 40));
  return a2;
}
