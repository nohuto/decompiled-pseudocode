/*
 * XREFs of NvmeNamespaceWaitForOutstandingIoComplete @ 0x140116210
 * Callers:
 *     NvmeNamespaceWaitForRemoveLock @ 0x1401163B0 (NvmeNamespaceWaitForRemoveLock.c)
 * Callees:
 *     StorDelayExecution @ 0x140032790 (StorDelayExecution.c)
 *     NvmeNamespaceIsOutstandingRequest @ 0x140107740 (NvmeNamespaceIsOutstandingRequest.c)
 */

char __fastcall NvmeNamespaceWaitForOutstandingIoComplete(__int64 a1, int a2)
{
  unsigned int v2; // esi
  unsigned int v4; // ebp
  ULONG v5; // ebx
  char v6; // di

  v2 = 0;
  v4 = 1000000 * a2;
  v5 = 1000;
  while ( 1 )
  {
    v6 = 1;
    if ( !NvmeNamespaceIsOutstandingRequest(a1) )
      break;
    StorDelayExecution(v5);
    v2 += v5;
    if ( v4 && v2 >= v4 )
      return 0;
    if ( v5 < 0x186A0 )
    {
      v5 *= 2;
      if ( v5 >= 0x186A0 )
        v5 = 100000;
    }
  }
  return v6;
}
