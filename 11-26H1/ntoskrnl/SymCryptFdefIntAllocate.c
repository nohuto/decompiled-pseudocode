/*
 * XREFs of SymCryptFdefIntAllocate @ 0x140570934
 * Callers:
 *     SymCryptIntAllocate @ 0x14055C148 (SymCryptIntAllocate.c)
 * Callees:
 *     SymCryptIntCreate @ 0x14055C1F0 (SymCryptIntCreate.c)
 *     SymCryptCallbackAlloc @ 0x140722890 (SymCryptCallbackAlloc.c)
 */

__int64 __fastcall SymCryptFdefIntAllocate(int a1)
{
  __int64 v1; // rbx

  v1 = 0LL;
  if ( (unsigned int)(a1 - 1) <= 0x7FF && SymCryptCallbackAlloc((unsigned int)((a1 << 6) + 32)) )
    return SymCryptIntCreate();
  return v1;
}
