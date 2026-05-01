/*
 * XREFs of ?TryWithRpcDisconnectFallbackAndTimeout@Shell@Internal@Windows@@YAJK$$QEAV?$function@$$A6AJXZ@wistd@@0$$QEAV?$function@$$A6A_NJ@Z@5@@Z @ 0x180190B00
 * Callers:
 *     ?CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEAV?$function@$$A6AXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z@std@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@8@@Z @ 0x1801FE150 (-CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEA.c)
 *     ?CancelSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x1805CE5E0 (-CancelSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ.c)
 *     ?CommitSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x1805CE7E0 (-CommitSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z.c)
 *     ?ContinueSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x1805CEBF0 (-ContinueSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180190E18 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x180190EC0 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ?TryWithRpcDisconnectFallback@Shell@Internal@Windows@@YAJ$$QEAV?$function@$$A6AJXZ@wistd@@0$$QEAV?$function@$$A6A_NJ@Z@5@@Z @ 0x180190F14 (-TryWithRpcDisconnectFallback@Shell@Internal@Windows@@YAJ$$QEAV-$function@$$A6AJXZ@wistd@@0$$QEA.c)
 */

__int64 __fastcall Windows::Internal::Shell::TryWithRpcDisconnectFallbackAndTimeout(
        DWORD DueTime,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  CRPCTimeout::CRPCTimeout((CRPCTimeout *)v10, DueTime);
  v7 = Windows::Internal::Shell::TryWithRpcDisconnectFallback(a2, a3, a4);
  v8 = v7;
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53,
      (int)"onecoreuap\\internal\\shell\\inc\\restartabilityhelpers.h",
      (const char *)(unsigned int)v7);
  else
    v8 = 0;
  CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v10);
  return v8;
}
