/*
 * XREFs of ExAddPrivateDataToCrashDump @ 0x1406CB960
 * Callers:
 *     IopLiveDumpAddPoolTrackTables @ 0x1405CC5D0 (IopLiveDumpAddPoolTrackTables.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x1405D4BE0 (IopAddLiveDumpPagesToPartialKernelDump.c)
 * Callees:
 *     MiAddRangeToCrashDump @ 0x1406F61BC (MiAddRangeToCrashDump.c)
 */

__int64 __fastcall ExAddPrivateDataToCrashDump(__int64 a1)
{
  unsigned int v1; // esi
  unsigned int *p_CurrentRunTime; // rdi
  unsigned int i; // ebx
  int v5; // eax

  v1 = 0;
  p_CurrentRunTime = &stru_140EFEF90.CurrentRunTime;
  for ( i = 0; i < 0x800; ++i )
  {
    if ( *(_QWORD *)p_CurrentRunTime )
    {
      v5 = MiAddRangeToCrashDump(a1, *(_QWORD *)p_CurrentRunTime, 80 * PoolTrackTableSize, 0LL);
      if ( v5 < 0 )
      {
        v1 = v5;
        if ( v5 == -1073741789 )
          break;
      }
    }
    p_CurrentRunTime += 2;
  }
  return v1;
}
