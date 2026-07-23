/*
 * XREFs of RtlIsZeroMemory @ 0x1404D36B0
 * Callers:
 *     PopTracePowerLimitHistogram @ 0x14060C8BC (PopTracePowerLimitHistogram.c)
 *     PspJobDelete @ 0x1406187E0 (PspJobDelete.c)
 *     PspGetEffectiveNoWakeCharge @ 0x14077C1D4 (PspGetEffectiveNoWakeCharge.c)
 *     PspFreezeJobTree @ 0x1407FE324 (PspFreezeJobTree.c)
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 *     PspChargeProcessWakeCounter @ 0x14098F2A0 (PspChargeProcessWakeCounter.c)
 *     PspEnforceLimitsJobPreCallback @ 0x140A855A0 (PspEnforceLimitsJobPreCallback.c)
 *     PspChargeJobWakeCounter @ 0x140AAC2B0 (PspChargeJobWakeCounter.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140B3FE50 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PspCheckEnableNotificationChannel @ 0x140B68198 (PspCheckEnableNotificationChannel.c)
 *     PopInitializeHeteroProcessors @ 0x140B76758 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsZeroMemory(PVOID Buffer, SIZE_T Length)
{
  BOOLEAN result; // al

  result = 0;
  while ( ((unsigned __int8)Buffer & 7) != 0 && Length )
  {
    if ( *(_BYTE *)Buffer )
      return result;
    Buffer = (char *)Buffer + 1;
    --Length;
  }
  while ( Length >= 8 )
  {
    if ( *(_QWORD *)Buffer )
      return result;
    Buffer = (char *)Buffer + 8;
    Length -= 8LL;
  }
  while ( Length )
  {
    if ( *(_BYTE *)Buffer )
      return result;
    Buffer = (char *)Buffer + 1;
    --Length;
  }
  return 1;
}
