/*
 * XREFs of ExAddPrivateDataToCrashDump @ 0x1406CF990
 * Callers:
 *     IopLiveDumpAddPoolTrackTables @ 0x1405CEDE0 (IopLiveDumpAddPoolTrackTables.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x1405D73D0 (IopAddLiveDumpPagesToPartialKernelDump.c)
 * Callees:
 *     MiAddRangeToCrashDump @ 0x1406FAE2C (MiAddRangeToCrashDump.c)
 */

__int64 __fastcall ExAddPrivateDataToCrashDump(__int64 a1)
{
  unsigned int v1; // esi
  unsigned __int64 *p_ThreadLock; // rdi
  unsigned int i; // ebx
  int v5; // eax

  v1 = 0;
  p_ThreadLock = &stru_140EFF2C0.ThreadLock;
  for ( i = 0; i < 0x800; ++i )
  {
    if ( *p_ThreadLock )
    {
      v5 = MiAddRangeToCrashDump(a1, *p_ThreadLock, 80 * (__int64)stru_140EFF2C0.StackLimit, 0LL);
      if ( v5 < 0 )
      {
        v1 = v5;
        if ( v5 == -1073741789 )
          break;
      }
    }
    ++p_ThreadLock;
  }
  return v1;
}
