/*
 * XREFs of CalculateTimeDurationIn100ns @ 0x14000F5B0
 * Callers:
 *     NVMeHwAdapterControl @ 0x140007FB0 (NVMeHwAdapterControl.c)
 *     IoQueuesCreation @ 0x14000D1E0 (IoQueuesCreation.c)
 *     RecordCommandTimingHistory @ 0x1400110C0 (RecordCommandTimingHistory.c)
 *     IoQueuesCreationAsync @ 0x14001495C (IoQueuesCreationAsync.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CalculateTimeDurationIn100ns(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( a2 )
    return 10000 * (1000 * (a1 % a2) / a2 + 1000 * (a1 / a2)) + 10000 * (1000 * (a1 % a2) % a2) / a2;
  else
    return 0LL;
}
