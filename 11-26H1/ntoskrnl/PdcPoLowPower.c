/*
 * XREFs of PdcPoLowPower @ 0x140503E20
 * Callers:
 *     <none>
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x140A3E450 (PopSetPowerSettingValueAcDc.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PdcPoLowPower(__int64 a1, __int64 a2)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = (unsigned __int8)a1;
  PopAcquirePolicyLock(a1, a2);
  PopSetPowerSettingValueAcDc(&GUID_LOW_POWER_EPOCH, 4LL, &v3);
  PopReleasePolicyLock();
  return 0LL;
}
