/*
 * XREFs of SymCryptFdefIntIsEqualUint32 @ 0x140570CB4
 * Callers:
 *     SymCryptIntIsEqualUint32 @ 0x14055C334 (SymCryptIntIsEqualUint32.c)
 * Callees:
 *     SymCryptFdefRawIsEqualUint32 @ 0x140570E60 (SymCryptFdefRawIsEqualUint32.c)
 */

__int64 __fastcall SymCryptFdefIntIsEqualUint32(__int64 a1, unsigned int a2)
{
  return SymCryptFdefRawIsEqualUint32(a1 + 32, *(unsigned int *)(a1 + 4), a2);
}
