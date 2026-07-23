/*
 * XREFs of MiConvertCrossPartitionChargeTypeToAggregate @ 0x1404FD134
 * Callers:
 *     MiReturnCrossPartitionCharge @ 0x1404FD0B4 (MiReturnCrossPartitionCharge.c)
 *     MiApplyCrossPartitionCharges @ 0x1404FF1A4 (MiApplyCrossPartitionCharges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiConvertCrossPartitionChargeTypeToAggregate(int a1)
{
  __int64 result; // rax

  if ( (a1 & 0xFFFFFFF9) != 0 )
    return 8LL;
  result = 7LL;
  if ( a1 == 4 )
    return 8LL;
  return result;
}
