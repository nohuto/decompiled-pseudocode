/*
 * XREFs of SymCryptMlDsaSigEncode @ 0x140573A68
 * Callers:
 *     SymCryptMlDsaSignEx @ 0x14055D89C (SymCryptMlDsaSignEx.c)
 * Callees:
 *     SymCryptMlDsaHintBitPack @ 0x140572A6C (SymCryptMlDsaHintBitPack.c)
 *     SymCryptMlDsaVectorEncode @ 0x140574380 (SymCryptMlDsaVectorEncode.c)
 *     memmove @ 0x14073D480 (memmove.c)
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
