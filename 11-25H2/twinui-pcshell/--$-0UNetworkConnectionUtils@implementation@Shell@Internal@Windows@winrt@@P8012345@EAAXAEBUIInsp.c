/*
 * XREFs of ??$?0UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@P8012345@EAAXAEBUIInspectable@Foundation@45@@Z@NetworkStatusChangedEventHandler@Connectivity@Networking@Windows@winrt@@QEAA@$$QEAU?$weak_ref@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@@4@$$QEAP8NetworkConnectionUtils@implementation@Shell@Internal@34@EAAXAEBUIInspectable@Foundation@34@@Z@Z @ 0x180649ED8
 * Callers:
 *     ?RegisterEvents@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x18064A938 (-RegisterEvents@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler::NetworkStatusChangedEventHandler(
        _QWORD *a1,
        __int64 *a2,
        __int128 *a3)
{
  __int128 v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+28h] [rbp-20h]
  char *v10; // [rsp+50h] [rbp+8h]

  v4 = *a3;
  v5 = *a2;
  *a2 = 0LL;
  v8 = v5;
  v9 = v4;
  v10 = (char *)operator new(0x28uLL);
  *((_DWORD *)v10 + 2) = 1;
  v6 = v8;
  v8 = 0LL;
  *((_QWORD *)v10 + 2) = v6;
  *(_OWORD *)(v10 + 24) = v9;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v10 = &winrt::impl::delegate<winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler,_lambda_76c9288afc5e7a71ff025a45727ad440_>::`vftable';
  *a1 = v10;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  return a1;
}
