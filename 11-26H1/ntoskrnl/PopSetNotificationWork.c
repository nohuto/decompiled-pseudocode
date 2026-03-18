/*
 * XREFs of PopSetNotificationWork @ 0x1404385A0
 * Callers:
 *     PopInitilizeAcDcSettings @ 0x140438218 (PopInitilizeAcDcSettings.c)
 *     PopUserPresentSetWorker @ 0x1404CF520 (PopUserPresentSetWorker.c)
 *     PopApplyPolicy @ 0x140944018 (PopApplyPolicy.c)
 *     PopBatteryApplyCompositeState @ 0x140946EB0 (PopBatteryApplyCompositeState.c)
 *     PopExecutePowerAction @ 0x140A37D58 (PopExecutePowerAction.c)
 *     PopGetSettingNotificationName @ 0x140A3B2C4 (PopGetSettingNotificationName.c)
 *     PopSetPowerSettingValue @ 0x140A3E538 (PopSetPowerSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x140B05F90 (PoRegisterPowerSettingCallback.c)
 * Callees:
 *     PopCheckForWork @ 0x1404385D4 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14043864C (PopGetPolicyWorker.c)
 */

__int64 __fastcall PopSetNotificationWork(unsigned int a1)
{
  __int64 result; // rax

  result = a1 & dword_140F10E40;
  if ( (_DWORD)result != a1 )
  {
    _InterlockedOr(&dword_140F10E40, a1);
    PopGetPolicyWorker(4LL);
    return PopCheckForWork();
  }
  return result;
}
