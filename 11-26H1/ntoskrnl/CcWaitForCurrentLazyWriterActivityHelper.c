/*
 * XREFs of CcWaitForCurrentLazyWriterActivityHelper @ 0x1405B3DF0
 * Callers:
 *     <none>
 * Callees:
 *     CcWaitForCurrentLazyWriterActivityOnPartition @ 0x1405B3FDC (CcWaitForCurrentLazyWriterActivityOnPartition.c)
 */

char __fastcall CcWaitForCurrentLazyWriterActivityHelper(__int64 a1, __int64 a2, int *a3)
{
  int v4; // eax

  v4 = CcWaitForCurrentLazyWriterActivityOnPartition();
  if ( *a3 >= 0 && v4 < 0 )
    *a3 = v4;
  return 1;
}
