/*
 * XREFs of MiChargeSubsectionProtos @ 0x14087127C
 * Callers:
 *     MiGetAllSubsectionCharges @ 0x1404C8274 (MiGetAllSubsectionCharges.c)
 * Callees:
 *     MiIncrementSubsectionViewCount @ 0x1402EDF10 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x140370370 (MiDecrementSubsectionViewCount.c)
 *     MiGetControlAreaPartition @ 0x14044F7D0 (MiGetControlAreaPartition.c)
 *     MiGetSubsectionCharges @ 0x1404AFE30 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404CAB70 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiChargeSubsectionProtos(__int64 *BugCheckParameter2)
{
  __int64 v1; // rsi
  ULONG_PTR i; // rbx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdi
  __int64 result; // rax
  __int64 ControlAreaPartition; // rax

  v1 = *BugCheckParameter2;
  for ( i = (ULONG_PTR)BugCheckParameter2; ; i = *(_QWORD *)(i + 16) )
  {
    if ( !i )
      return 0LL;
    v3 = (unsigned int)(*(_DWORD *)(i + 44) - *(_DWORD *)(i + 52));
    v4 = (unsigned int)v3;
    result = MiGetSubsectionCharges(i, v3);
    if ( (int)result < 0 )
      return result;
    if ( (int)MiIncrementSubsectionViewCount((__int64 *)i, 28) <= 1 )
      break;
    MiDecrementSubsectionViewCount(i, 0);
  }
  if ( (_DWORD)v4 )
  {
    ControlAreaPartition = MiGetControlAreaPartition(v1);
    MiReturnCrossPartitionSectionCharges(ControlAreaPartition, 1, v4);
  }
  return 3221227019LL;
}
