/*
 * XREFs of ?RmpSystemApplyAppLaunchPowerBoost@@YAJK@Z @ 0x18003EF08
 * Callers:
 *     ?RmpPowerBoostTimedBoostCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18003EB70 (-RmpPowerBoostTimedBoostCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18003ECF0 (-RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpSystemApplyAppLaunchPowerBoost(char a1)
{
  int v2; // [rsp+58h] [rbp+10h] BYREF
  int v3; // [rsp+5Ch] [rbp+14h]

  v2 = (2 * (a1 & 1)) | 1;
  v3 = -1;
  return NtUpdateWnfStateData(&WNF_SEB_UWP_APP_LAUNCH, &v2, 8LL, 0LL, 0LL, 0, 0);
}
