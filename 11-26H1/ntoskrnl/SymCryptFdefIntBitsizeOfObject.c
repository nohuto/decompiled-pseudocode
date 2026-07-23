/*
 * XREFs of SymCryptFdefIntBitsizeOfObject @ 0x14056FB74
 * Callers:
 *     SymCryptIntBitsizeOfObject @ 0x14055E648 (SymCryptIntBitsizeOfObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefIntBitsizeOfObject(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 4) << 9);
}
