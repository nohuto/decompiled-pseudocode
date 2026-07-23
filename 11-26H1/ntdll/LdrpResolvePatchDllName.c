/*
 * XREFs of LdrpResolvePatchDllName @ 0x1800982BC
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18007B7D0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x180118B60 (LdrpInitializeNtdllDataTableEntry.c)
 * Callees:
 *     LdrpAllocateUnicodeString @ 0x180098350 (LdrpAllocateUnicodeString.c)
 *     LdrpGetBaseNameFromFullName @ 0x1800983E0 (LdrpGetBaseNameFromFullName.c)
 *     memmove @ 0x180164600 (memmove.c)
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
