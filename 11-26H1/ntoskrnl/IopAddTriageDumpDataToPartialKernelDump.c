/*
 * XREFs of IopAddTriageDumpDataToPartialKernelDump @ 0x1405D7B48
 * Callers:
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x1405D7878 (IopAddMiniDumpPagesToPartialKernelDump.c)
 * Callees:
 *     MiAddRangeToCrashDump @ 0x1406FAE2C (MiAddRangeToCrashDump.c)
 */

__int64 __fastcall IopAddTriageDumpDataToPartialKernelDump(__int64 a1, __int64 **a2)
{
  __int64 *i; // rbx
  __int64 j; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8

  if ( a2 )
  {
    for ( i = *a2; i != (__int64 *)a2; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 4) )
      {
        MiAddRangeToCrashDump(a1, i[5], *((unsigned int *)i + 8), 0LL);
        for ( j = 0LL; (unsigned int)j < *((_DWORD *)i + 4); j = (unsigned int)(j + 1) )
        {
          v6 = i[2 * j + 6];
          if ( v6 )
          {
            v7 = i[2 * (unsigned int)j + 7];
            if ( v7 )
              MiAddRangeToCrashDump(a1, v6, v7, 0LL);
          }
        }
      }
    }
  }
  return 0LL;
}
