/*
 * XREFs of ??$?4U?$default_delete@VPrimaryAppProxyBase@@@std@@$0A@@?$unique_ptr@VPrimaryAppProxyBase@@U?$default_delete@VPrimaryAppProxyBase@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1804EEFC4
 * Callers:
 *     ?RuntimeClassInitialize@KioskPositioner@@QEAAJXZ @ 0x1800D0C14 (-RuntimeClassInitialize@KioskPositioner@@QEAAJXZ.c)
 *     ?EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@VFlyoutView@@@std@@XZ @ 0x1805F4838 (-EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$share.c)
 * Callees:
 *     ??R?$default_delete@VSnapLayoutBase@@@std@@QEBAXPEAVSnapLayoutBase@@@Z @ 0x1800E4830 (--R-$default_delete@VSnapLayoutBase@@@std@@QEBAXPEAVSnapLayoutBase@@@Z.c)
 */

_QWORD *__fastcall std::unique_ptr<PrimaryAppProxyBase>::operator=<std::default_delete<PrimaryAppProxyBase>,0>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = (__int64 (__fastcall ***)(_QWORD, __int64))*a1;
  *a1 = v2;
  if ( v4 )
    std::default_delete<SnapLayoutBase>::operator()((__int64)a1, v4);
  return a1;
}
