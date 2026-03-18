/*
 * XREFs of MiComputeVadCommitAbove @ 0x140B241BC
 * Callers:
 *     MiReturnPageTablePageCommitment @ 0x140B23EB8 (MiReturnPageTablePageCommitment.c)
 * Callees:
 *     MiGetNextVad @ 0x140326018 (MiGetNextVad.c)
 *     MiAdjacentVadResolvesPageTable @ 0x1404F5B30 (MiAdjacentVadResolvesPageTable.c)
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
