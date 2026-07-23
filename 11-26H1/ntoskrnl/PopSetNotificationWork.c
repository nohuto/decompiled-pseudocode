/*
 * XREFs of PopSetNotificationWork @ 0x1404274C0
 * Callers:
 *     PopInitilizeAcDcSettings @ 0x140427138 (PopInitilizeAcDcSettings.c)
 *     PopUserPresentSetWorker @ 0x1404C8F50 (PopUserPresentSetWorker.c)
 *     PopApplyPolicy @ 0x1409BF988 (PopApplyPolicy.c)
 *     PopBatteryApplyCompositeState @ 0x1409C2820 (PopBatteryApplyCompositeState.c)
 *     PopExecutePowerAction @ 0x1409F3918 (PopExecutePowerAction.c)
 *     PopGetSettingNotificationName @ 0x1409F6CE4 (PopGetSettingNotificationName.c)
 *     PopSetPowerSettingValue @ 0x1409F9F58 (PopSetPowerSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x140B080C0 (PoRegisterPowerSettingCallback.c)
 * Callees:
 *     PopCheckForWork @ 0x1404274F4 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14042756C (PopGetPolicyWorker.c)
 */

__int64 __fastcall PopSetNotificationWork(unsigned int a1)
{
  __int64 result; // rax

  result = a1 & PopNotifyEvents;
  if ( (_DWORD)result != a1 )
  {
    _InterlockedOr(&PopNotifyEvents, a1);
    PopGetPolicyWorker(4LL);
    return PopCheckForWork();
  }
  return result;
}
