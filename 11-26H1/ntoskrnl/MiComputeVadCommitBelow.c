/*
 * XREFs of MiComputeVadCommitBelow @ 0x140B24174
 * Callers:
 *     MiReturnPageTablePageCommitment @ 0x140B23EB8 (MiReturnPageTablePageCommitment.c)
 * Callees:
 *     MiGetPreviousVad @ 0x1404674B8 (MiGetPreviousVad.c)
 *     MiAdjacentVadResolvesPageTable @ 0x1404F5B30 (MiAdjacentVadResolvesPageTable.c)
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
