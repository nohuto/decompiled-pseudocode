/*
 * XREFs of SymCryptMlDsaSigEncode @ 0x140572CC0
 * Callers:
 *     SymCryptMlDsaSignEx @ 0x14055FD94 (SymCryptMlDsaSignEx.c)
 * Callees:
 *     SymCryptMlDsaHintBitPack @ 0x140571C78 (SymCryptMlDsaHintBitPack.c)
 *     SymCryptMlDsaVectorEncode @ 0x1405735E4 (SymCryptMlDsaVectorEncode.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall SymCryptMlDsaSigEncode(
        __int64 a1,
        const void *a2,
        size_t a3,
        unsigned __int8 *a4,
        _BYTE *a5,
        char *a6)
{
  memmove(a6, a2, a3);
  SymCryptMlDsaVectorEncode(
    a4,
    (unsigned int)*(unsigned __int8 *)(a1 + 26) + 1,
    (unsigned int)(1 << *(_BYTE *)(a1 + 26)),
    &a6[a3]);
  return SymCryptMlDsaHintBitPack(
           a1,
           a5,
           (__int64)&a6[a3 + ((32 * *a4 * (*(unsigned __int8 *)(a1 + 26) + 1LL)) & 0x1FFFFFFFFFFFFFFFLL)]);
}
