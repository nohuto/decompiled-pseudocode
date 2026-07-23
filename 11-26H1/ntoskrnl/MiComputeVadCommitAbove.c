/*
 * XREFs of MiComputeVadCommitAbove @ 0x140B265BC
 * Callers:
 *     MiReturnPageTablePageCommitment @ 0x140B262B8 (MiReturnPageTablePageCommitment.c)
 * Callees:
 *     MiGetNextVad @ 0x140328048 (MiGetNextVad.c)
 *     MiAdjacentVadResolvesPageTable @ 0x1404EF0F0 (MiAdjacentVadResolvesPageTable.c)
 */

void __fastcall MiComputeVadCommitAbove(_QWORD *a1)
{
  unsigned __int64 i; // r9

  for ( i = a1[3]; i; i = MiGetNextVad(i) )
  {
    if ( (unsigned int)MiAdjacentVadResolvesPageTable((__int64)a1, i, 1) )
      break;
    if ( i == a1[5] )
      i = a1[4];
  }
  a1[3] = i;
}
