/*
 * XREFs of ?Current@?$produce@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIWindowsTrackerStatics@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18065EA30
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker,winrt::Windows::Internal::Shell::IWindowsTrackerStatics>::Current(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = a1 + 8;
  if ( !a1 )
    v3 = 32LL;
  v6 = *(_QWORD *)v3;
  v4 = v6;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v6);
  v6 = 0LL;
  *a2 = v4;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  return 0LL;
}
