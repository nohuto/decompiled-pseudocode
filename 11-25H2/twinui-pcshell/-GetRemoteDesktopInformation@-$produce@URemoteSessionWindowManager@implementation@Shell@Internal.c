/*
 * XREFs of ?GetRemoteDesktopInformation@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHPEAUstruct_Windows_Internal_Shell_RemoteDesktopInformation@23@@Z @ 0x180634AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x1800ABDCC (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 *     ??1SnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180595948 (--1SnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetRemoteDesktopInformation@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AURemoteDesktopInformation@3456@XZ @ 0x180634B88 (-GetRemoteDesktopInformation@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@wi.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::GetRemoteDesktopInformation(
        __int64 a1,
        __int64 a2)
{
  __int64 RemoteDesktopInformation; // rdi
  __int64 *v4; // rcx
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int32 *v11[4]; // [rsp+38h] [rbp-20h] BYREF

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  RemoteDesktopInformation = winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::GetRemoteDesktopInformation(
                               a1,
                               v11);
  v9 = 0LL;
  v10 = 0LL;
  LODWORD(v9) = *(_DWORD *)RemoteDesktopInformation;
  v4 = (__int64 *)(RemoteDesktopInformation + 8);
  if ( (__int128 *)((char *)&v9 + 8) != (__int128 *)(RemoteDesktopInformation + 8) )
  {
    v5 = *v4;
    *v4 = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::attach((_QWORD *)&v9 + 1, v5);
  }
  v6 = (__int64 *)(RemoteDesktopInformation + 16);
  if ( &v10 != (__int64 *)(RemoteDesktopInformation + 16) )
  {
    v7 = *v6;
    *v6 = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::attach(&v10, v7);
  }
  *(_OWORD *)a2 = v9;
  *(_QWORD *)(a2 + 16) = v10;
  winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData::~SnapLaunchTargetData(v11);
  return 0LL;
}
