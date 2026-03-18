/*
 * XREFs of MiFindEntryInImportListRecursively @ 0x140875010
 * Callers:
 *     MmGetModuleRoutineAddress @ 0x140864A10 (MmGetModuleRoutineAddress.c)
 *     MiFindEntryInImportListRecursively @ 0x140875010 (MiFindEntryInImportListRecursively.c)
 * Callees:
 *     MiFindEntryInImportListRecursively @ 0x140875010 (MiFindEntryInImportListRecursively.c)
 */

_BOOL8 __fastcall MiFindEntryInImportListRecursively(unsigned __int64 a1, __int64 a2)
{
  __int64 i; // rdi
  __int64 v6; // rcx

  if ( a1 == 1 || a1 == -2LL )
    return 0LL;
  if ( (a1 & 1) == 0 )
  {
    for ( i = 0LL; (unsigned __int64)(unsigned int)i < *(_QWORD *)a1; i = (unsigned int)(i + 1) )
    {
      v6 = *(_QWORD *)(a1 + 8 * i + 8);
      if ( v6 == a2 || (unsigned int)MiFindEntryInImportListRecursively(*(_QWORD *)(v6 + 136), a2) )
        return 1LL;
    }
    return 0LL;
  }
  return (a1 & 0xFFFFFFFFFFFFFFFEuLL) == a2;
}
