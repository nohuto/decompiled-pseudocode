/*
 * XREFs of MiDeleteExtendSubsections @ 0x14077B9E0
 * Callers:
 *     MiExtendSection @ 0x140A6590C (MiExtendSection.c)
 * Callees:
 *     MiDecrementSubsectionViewCount @ 0x140370370 (MiDecrementSubsectionViewCount.c)
 *     MiGetControlAreaPartition @ 0x14044F7D0 (MiGetControlAreaPartition.c)
 *     MiDeleteSubsectionPages @ 0x14048B54C (MiDeleteSubsectionPages.c)
 *     MiPrepareDataFileSubsectionForDeletion @ 0x1404AE598 (MiPrepareDataFileSubsectionForDeletion.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404CAB70 (MiReturnCrossPartitionSectionCharges.c)
 *     MiDeleteSubsection @ 0x1404D7A78 (MiDeleteSubsection.c)
 */

void __fastcall MiDeleteExtendSubsections(__int64 a1)
{
  ULONG_PTR v1; // rbx
  unsigned __int64 v2; // rdi
  __int64 v3; // rbp
  ULONG_PTR v4; // rsi
  __int64 ControlAreaPartition; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)v1;
    do
    {
      v4 = *(_QWORD *)(v1 + 16);
      if ( (*(_DWORD *)(v1 + 48) & 0x3FFFFFFF) != 0 )
      {
        v2 += MiDecrementSubsectionViewCount(v1, 12);
      }
      else if ( *(_QWORD *)(v1 + 8) )
      {
        MiDecrementSubsectionViewCount(v1, 0);
      }
      MiPrepareDataFileSubsectionForDeletion((__int64 *)v1, 0);
      MiDeleteSubsectionPages((struct _KTHREAD *)v1, 32);
      MiDeleteSubsection((void *)v1);
      v1 = v4;
    }
    while ( v4 );
    if ( v2 )
    {
      ControlAreaPartition = MiGetControlAreaPartition(v3);
      MiReturnCrossPartitionSectionCharges(ControlAreaPartition, 1, v2);
    }
  }
}
