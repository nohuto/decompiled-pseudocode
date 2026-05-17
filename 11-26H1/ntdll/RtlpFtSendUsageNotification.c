/*
 * XREFs of RtlpFtSendUsageNotification @ 0x180147DB0
 * Callers:
 *     RtlNotifyFeatureToggleUsage @ 0x180147B70 (RtlNotifyFeatureToggleUsage.c)
 * Callees:
 *     RtlNotifyFeatureUsage @ 0x1800140B0 (RtlNotifyFeatureUsage.c)
 */

__int64 __fastcall RtlpFtSendUsageNotification(int a1, __int64 a2)
{
  __int16 v2; // ax
  int v4; // [rsp+38h] [rbp+10h] BYREF
  __int16 v5; // [rsp+3Ch] [rbp+14h]
  __int16 v6; // [rsp+3Eh] [rbp+16h]

  v4 = a1;
  v2 = 2;
  if ( (a2 & 0x20) == 0 )
    v2 = 6;
  v5 = v2;
  v6 = 1;
  return RtlNotifyFeatureUsage((__int64)&v4, a2);
}
