/*
 * XREFs of MiGetVadLargePageMinimumIndex @ 0x14070D0C0
 * Callers:
 *     MiCommitVadGetCharges @ 0x1409C7650 (MiCommitVadGetCharges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadLargePageMinimumIndex(unsigned int a1)
{
  __int64 v1; // rax

  v1 = (a1 >> 17) & 3;
  if ( LODWORD(MiVadPageSizes[v1]) == 16 )
    return 2LL;
  if ( (a1 & 0x80000) != 0 && (a1 & 0x200000) != 0 )
    return (unsigned int)MiVadPageIndices[v1];
  return 1LL;
}
