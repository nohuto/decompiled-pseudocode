/*
 * XREFs of _DashboardTaskbarSettings::SubscribeToDaSettingChanged_::_1_::catch$12 @ 0x1806B1A04
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall DashboardTaskbarSettings::SubscribeToDaSettingChanged_::_1_::catch_12(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx

  v2 = *(__int64 **)(a2 + 64);
  *v2 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v2);
  v2[1] = 0LL;
  return 0LL;
}
