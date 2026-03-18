/*
 * XREFs of SymCryptFdefIntCopy @ 0x140570A6C
 * Callers:
 *     SymCryptIntCopy @ 0x14055C1C0 (SymCryptIntCopy.c)
 *     SymCryptFdefIntToDivisor @ 0x140568AC4 (SymCryptFdefIntToDivisor.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 */

void *__fastcall SymCryptFdefIntCopy(__int64 a1, __int64 a2)
{
  void *result; // rax

  if ( a1 != a2 )
    return memmove((void *)(a2 + 32), (const void *)(a1 + 32), (unsigned int)(*(_DWORD *)(a2 + 4) << 6));
  return result;
}
