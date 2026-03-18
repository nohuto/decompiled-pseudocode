/*
 * XREFs of SshpCacheInitializeLibraryCache @ 0x140B43D74
 * Callers:
 *     SleepstudyHelperCreateLibraryEx @ 0x1404ED710 (SleepstudyHelperCreateLibraryEx.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x14048F5B0 (RtlInitializeGenericTableAvl.c)
 */

void __fastcall SshpCacheInitializeLibraryCache(char *TableContext, int a2)
{
  if ( a2 )
    RtlInitializeGenericTableAvl(
      (PRTL_AVL_TABLE)(TableContext + 48),
      (PRTL_AVL_COMPARE_ROUTINE)SshpCacheDatabaseCompare,
      (PRTL_AVL_ALLOCATE_ROUTINE)SshpCacheDatabaseAllocate,
      (PRTL_AVL_FREE_ROUTINE)SshpCacheDatabaseFree,
      TableContext);
  *((_DWORD *)TableContext + 11) = a2;
}
