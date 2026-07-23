/*
 * XREFs of MiChangePageAttributeAndZeroBatch @ 0x140711F9C
 * Callers:
 *     MiInitializeMdlOneNodeBatchPages @ 0x1406F32E0 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiFindLargePageMemory @ 0x140B64898 (MiFindLargePageMemory.c)
 * Callees:
 *     MiChangePageAttributeBatch @ 0x14036ABBC (MiChangePageAttributeBatch.c)
 *     MiUseThreads @ 0x1403CD544 (MiUseThreads.c)
 *     MiDereferencePageChains @ 0x1403CD5A4 (MiDereferencePageChains.c)
 */

void __fastcall MiChangePageAttributeAndZeroBatch(__int64 a1, __int64 a2, int a3)
{
  int v6; // ebx
  _QWORD *v7; // r12

  if ( a2 )
    v6 = (*(_DWORD *)(a2 + 16) >> 2) & 1;
  else
    v6 = KeGetCurrentIrql() == 2;
  if ( *(_QWORD *)a1 != 0x7FFFFFFFFFLL )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    *(_DWORD *)(a1 + 8) = a3;
    *(_BYTE *)(a1 + 12) = 0;
    MiChangePageAttributeBatch(a1, v6);
  }
  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 48) == 0x7FFFFFFFFFLL )
    {
      v7 = (_QWORD *)(a1 + 64);
    }
    else
    {
      *(_DWORD *)(a1 + 56) = 1;
      v7 = (_QWORD *)(a1 + 64);
      *(_BYTE *)(a1 + 60) = 1;
      *(_QWORD *)(a1 + 64) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      MiChangePageAttributeBatch(a1 + 48, v6);
    }
    if ( *(_DWORD *)(a2 + 40) )
    {
      *(_DWORD *)(a2 + 16) |= 0x200u;
      *(_QWORD *)(a2 + 504) = MiZeroChainWorker;
      MiUseThreads(a2);
    }
    MiDereferencePageChains((volatile signed __int32 *)a2);
    if ( *(_QWORD *)(a1 + 48) != 0x7FFFFFFFFFLL )
    {
      *v7 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      *(_DWORD *)(a1 + 56) = 3;
      *(_BYTE *)(a1 + 60) = 0;
      MiChangePageAttributeBatch(a1 + 48, v6);
    }
    if ( *(_QWORD *)(a1 + 72) != 0x7FFFFFFFFFLL )
    {
      *(_QWORD *)(a1 + 88) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      *(_DWORD *)(a1 + 80) = 3;
      *(_BYTE *)(a1 + 84) = 0;
      MiChangePageAttributeBatch(a1 + 72, v6);
    }
    if ( *(_QWORD *)(a1 + 24) != 0x7FFFFFFFFFLL )
    {
      *(_QWORD *)(a1 + 40) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      *(_DWORD *)(a1 + 32) = a3;
      *(_BYTE *)(a1 + 36) = 0;
      MiChangePageAttributeBatch(a1 + 24, v6);
    }
  }
}
