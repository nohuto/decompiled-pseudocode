/*
 * XREFs of MiApplyCrossPartitionCharges @ 0x1404FF1A4
 * Callers:
 *     MiGetCrossPartitionCharges @ 0x1404AFEC8 (MiGetCrossPartitionCharges.c)
 *     MiApplyCrossPartitionCharges @ 0x1404FF1A4 (MiApplyCrossPartitionCharges.c)
 * Callees:
 *     MiConvertCrossPartitionChargeTypeToAggregate @ 0x1404FD134 (MiConvertCrossPartitionChargeTypeToAggregate.c)
 *     MiApplyCrossPartitionCharges @ 0x1404FF1A4 (MiApplyCrossPartitionCharges.c)
 */

__int64 __fastcall MiApplyCrossPartitionCharges(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  __int64 result; // rax
  unsigned int v9; // eax
  __int64 v10; // r8

  v4 = 32LL * a2;
  v5 = *(_QWORD *)(v4 + a1 + 2864);
  v6 = v5 + a3;
  if ( v5 + a3 > v5 && v6 <= *(_QWORD *)(v4 + a1 + 2888) )
  {
    if ( a2 >= 7
      || (v9 = MiConvertCrossPartitionChargeTypeToAggregate(a2),
          result = MiApplyCrossPartitionCharges(a1, v9, v10),
          (int)result >= 0) )
    {
      *(_QWORD *)(v4 + a1 + 2864) = v6;
      if ( v6 > *(_QWORD *)(v4 + a1 + 2880) )
        *(_QWORD *)(v4 + a1 + 2880) = v6;
      return 0LL;
    }
  }
  else
  {
    v7 = *(_QWORD *)(v4 + a1 + 2872);
    if ( v7 != -1 )
      *(_QWORD *)(v4 + a1 + 2872) = v7 + 1;
    return 3221225773LL;
  }
  return result;
}
