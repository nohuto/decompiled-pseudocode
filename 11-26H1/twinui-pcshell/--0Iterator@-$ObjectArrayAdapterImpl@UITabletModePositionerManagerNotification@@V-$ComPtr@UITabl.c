/*
 * XREFs of ??0Iterator@?$ObjectArrayAdapterImpl@UITabletModePositionerManagerNotification@@V?$ComPtr@UITabletModePositionerManagerNotification@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180514440
 * Callers:
 *     _lambda_b97f6338922ac33e763b003ae07478e0_::operator() @ 0x18051460C (_lambda_b97f6338922ac33e763b003ae07478e0_--operator().c)
 * Callees:
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UITabletModePositionerManagerNotification@@V?$ComPtr@UITabletModePositionerManagerNotification@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1805147A8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UITabletModePositionerManagerNotification@@V.c)
 */

__int64 __fastcall details::ObjectArrayAdapterImpl<ITabletModePositionerManagerNotification,Microsoft::WRL::ComPtr<ITabletModePositionerManagerNotification>>::Iterator::Iterator(
        __int64 a1,
        __int64 a2,
        int a3)
{
  *(_DWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  details::ObjectArrayAdapterImpl<ITabletModePositionerManagerNotification,Microsoft::WRL::ComPtr<ITabletModePositionerManagerNotification>>::Iterator::GetCurrentObject();
  return a1;
}
