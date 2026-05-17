/*
 * XREFs of LdrpResolvePatchDllName @ 0x18009918C
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180084430 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x180118DB0 (LdrpInitializeNtdllDataTableEntry.c)
 * Callees:
 *     LdrpAllocateUnicodeString @ 0x180099220 (LdrpAllocateUnicodeString.c)
 *     LdrpGetBaseNameFromFullName @ 0x1800992B0 (LdrpGetBaseNameFromFullName.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall LdrpResolvePatchDllName(_WORD *Src, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v7; // esi
  __int64 result; // rax

  v3 = -1LL;
  do
    ++v3;
  while ( Src[v3] );
  v7 = 2 * v3;
  result = LdrpAllocateUnicodeString(a3, (unsigned int)(2 * v3));
  if ( (int)result >= 0 )
  {
    memmove(*(void **)(a3 + 8), Src, v7 + 2LL);
    *(_WORD *)a3 = v7;
    if ( a2 )
      LdrpGetBaseNameFromFullName(a3, a2);
    return 0LL;
  }
  return result;
}
