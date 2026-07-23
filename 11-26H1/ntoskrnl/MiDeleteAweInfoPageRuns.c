/*
 * XREFs of MiDeleteAweInfoPageRuns @ 0x140705CD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 *     MiReturnCrossPartitionCharges @ 0x14036FF88 (MiReturnCrossPartitionCharges.c)
 *     MiFreeMdlPageRun @ 0x1403CE04C (MiFreeMdlPageRun.c)
 *     MiFreeContiguousLargePageRun @ 0x140706440 (MiFreeContiguousLargePageRun.c)
 */

__int64 __fastcall MiDeleteAweInfoPageRuns(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r13
  __int64 v5; // r12
  unsigned __int64 v6; // rbp
  __int64 v7; // rdi
  ULONG_PTR v9; // r10
  unsigned __int64 v10; // rbx
  __int64 v11; // rsi
  int i; // r8d

  v3 = *a1;
  v5 = a1[1];
  v6 = a3;
  v7 = a1[3];
  RtlClearBitsEx(*a1 + 24, a2, a3);
  v9 = a2 * v7;
  v10 = v6 * v7;
  a1[2] += v6 * v7;
  if ( (*(_DWORD *)(v3 + 8) & 4) == 0 )
  {
    v11 = 48 * v9 - 0x220000000000LL;
    v10 = 0LL;
    for ( i = (*(_DWORD *)(v11 + 32) >> 22) & 3; v6; --v6 )
    {
      if ( ((*(_DWORD *)(v11 + 32) >> 22) & 3) != i )
      {
        if ( v7 == 1 )
        {
          MiFreeMdlPageRun(v9, v10, 0, 0, 0LL);
          if ( *((_DWORD *)a1 + 8) )
            MiReturnCrossPartitionCharges(v5, 4u, 1, v10);
        }
        else
        {
          MiFreeContiguousLargePageRun(v3, v9, v10);
        }
        i = (*(_DWORD *)(v11 + 32) >> 22) & 3;
        v9 = (v11 + 0x220000000000LL) / 48;
        v10 = 0LL;
      }
      v11 += 48 * v7;
      v10 += v7;
    }
  }
  if ( v7 == 1 )
  {
    MiFreeMdlPageRun(v9, v10, 0, 0, 0LL);
    if ( *((_DWORD *)a1 + 8) )
      MiReturnCrossPartitionCharges(v5, 4u, 1, v10);
  }
  else
  {
    MiFreeContiguousLargePageRun(v3, v9, v10);
  }
  return 0LL;
}
