/*
 * XREFs of ??$make_shared@URemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@URemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x1802BC2C4
 * Callers:
 *     ??0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18027BC38 (--0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??0RemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802BC338 (--0RemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@QEA.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderPackageUninstallHandler,>(
        _QWORD *a1)
{
  _DWORD *v3; // [rsp+40h] [rbp+8h]

  v3 = operator new(0x28uLL);
  *(_OWORD *)v3 = 0LL;
  v3[2] = 1;
  v3[3] = 1;
  *(_QWORD *)v3 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderPackageUninstallHandler>::`vftable';
  winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderPackageUninstallHandler::RemoteDesktopProviderPackageUninstallHandler((winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderPackageUninstallHandler *)(v3 + 4));
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
