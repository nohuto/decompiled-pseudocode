/*
 * XREFs of RtlIsZeroMemory @ 0x1404D9FD0
 * Callers:
 *     PopTracePowerLimitHistogram @ 0x140609CFC (PopTracePowerLimitHistogram.c)
 *     PspJobDelete @ 0x140615810 (PspJobDelete.c)
 *     PspGetEffectiveNoWakeCharge @ 0x1407792A4 (PspGetEffectiveNoWakeCharge.c)
 *     PspFreezeJobTree @ 0x1407F8824 (PspFreezeJobTree.c)
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 *     PspChargeProcessWakeCounter @ 0x1409BE2C0 (PspChargeProcessWakeCounter.c)
 *     PspEnforceLimitsJobPreCallback @ 0x140A7F730 (PspEnforceLimitsJobPreCallback.c)
 *     PopInitializeHeteroProcessors @ 0x140A9DA10 (PopInitializeHeteroProcessors.c)
 *     PspChargeJobWakeCounter @ 0x140AAE650 (PspChargeJobWakeCounter.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140B3DD70 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PspCheckEnableNotificationChannel @ 0x140B650F8 (PspCheckEnableNotificationChannel.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlIsZeroMemory(_BYTE *a1, unsigned __int64 a2)
{
  char result; // al

  result = 0;
  while ( ((unsigned __int8)a1 & 7) != 0 && a2 )
  {
    if ( *a1 )
      return result;
    ++a1;
    --a2;
  }
  while ( a2 >= 8 )
  {
    if ( *(_QWORD *)a1 )
      return result;
    a1 += 8;
    a2 -= 8LL;
  }
  while ( a2 )
  {
    if ( *a1 )
      return result;
    ++a1;
    --a2;
  }
  return 1;
}
