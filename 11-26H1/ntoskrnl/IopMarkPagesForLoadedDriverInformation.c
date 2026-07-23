/*
 * XREFs of IopMarkPagesForLoadedDriverInformation @ 0x1405D83A0
 * Callers:
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x1405D7878 (IopAddMiniDumpPagesToPartialKernelDump.c)
 * Callees:
 *     MmGetLoadedModuleImageAdditionalTablesAddress @ 0x1403ED4E0 (MmGetLoadedModuleImageAdditionalTablesAddress.c)
 *     MiAddRangeToCrashDump @ 0x1406FAE2C (MiAddRangeToCrashDump.c)
 */

__int64 __fastcall IopMarkPagesForLoadedDriverInformation(__int64 a1)
{
  __int64 result; // rax
  int v3; // edi
  PVOID *i; // rbx
  unsigned __int64 LoadedModuleImageAdditionalTablesAddress; // rax
  unsigned int v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  result = MiAddRangeToCrashDump(a1, &PsLoadedModuleList, 16LL, 0LL);
  v3 = result;
  if ( (int)result >= 0 )
  {
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      result = MiAddRangeToCrashDump(a1, i, 160LL, 0LL);
      if ( (int)result < 0 )
        return result;
      result = MiAddRangeToCrashDump(a1, i[12], *((unsigned __int16 *)i + 44), 0LL);
      if ( (int)result < 0 )
        return result;
      result = MiAddRangeToCrashDump(a1, i[10], *((unsigned __int16 *)i + 36), 0LL);
      if ( (int)result < 0 )
        return result;
      result = MiAddRangeToCrashDump(a1, i[6], *((unsigned int *)i + 16), 0LL);
      v3 = result;
      if ( (int)result < 0 )
        return result;
      LoadedModuleImageAdditionalTablesAddress = MmGetLoadedModuleImageAdditionalTablesAddress((__int64)i, (int *)&v6);
      if ( LoadedModuleImageAdditionalTablesAddress )
      {
        v3 = MiAddRangeToCrashDump(a1, LoadedModuleImageAdditionalTablesAddress, v6, 0LL);
        if ( v3 < 0 )
          v3 = 0;
      }
    }
    return (unsigned int)v3;
  }
  return result;
}
