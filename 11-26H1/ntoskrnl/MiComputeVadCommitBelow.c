/*
 * XREFs of MiComputeVadCommitBelow @ 0x140B26574
 * Callers:
 *     MiReturnPageTablePageCommitment @ 0x140B262B8 (MiReturnPageTablePageCommitment.c)
 * Callees:
 *     MiGetPreviousVad @ 0x140460C08 (MiGetPreviousVad.c)
 *     MiAdjacentVadResolvesPageTable @ 0x1404EF0F0 (MiAdjacentVadResolvesPageTable.c)
 */

void __fastcall MiComputeVadCommitBelow(_QWORD *a1)
{
  unsigned __int64 *i; // r9

  for ( i = (unsigned __int64 *)a1[2]; i; i = (unsigned __int64 *)MiGetPreviousVad(i) )
  {
    if ( (unsigned int)MiAdjacentVadResolvesPageTable((__int64)a1, (__int64)i, 0) )
      break;
    if ( i == (unsigned __int64 *)a1[6] )
      i = (unsigned __int64 *)a1[4];
  }
  a1[2] = i;
}
