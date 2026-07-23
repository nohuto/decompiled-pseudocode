/*
 * XREFs of SymCryptFdefIntAllocate @ 0x14056FB14
 * Callers:
 *     SymCryptIntAllocate @ 0x14055E630 (SymCryptIntAllocate.c)
 * Callees:
 *     SymCryptIntCreate @ 0x14055E6D8 (SymCryptIntCreate.c)
 *     SymCryptCallbackAlloc @ 0x140727460 (SymCryptCallbackAlloc.c)
 */

__int64 __fastcall SymCryptFdefIntAllocate(int a1)
{
  __int64 v1; // rbx

  v1 = 0LL;
  if ( (unsigned int)(a1 - 1) <= 0x7FF && SymCryptCallbackAlloc((unsigned int)((a1 << 6) + 32)) )
    return SymCryptIntCreate();
  return v1;
}
