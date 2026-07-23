/*
 * XREFs of SymCryptMlDsaSigDecode @ 0x140572C2C
 * Callers:
 *     SymCryptMlDsaVerifyEx @ 0x140560308 (SymCryptMlDsaVerifyEx.c)
 * Callees:
 *     SymCryptMlDsaHintBitUnpack @ 0x140571D00 (SymCryptMlDsaHintBitUnpack.c)
 *     SymCryptMlDsaVectorDecode @ 0x14057355C (SymCryptMlDsaVectorDecode.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall SymCryptMlDsaSigDecode(
        __int64 a1,
        char *a2,
        __int64 a3,
        void *a4,
        size_t Size,
        unsigned __int8 *a6,
        _BYTE *a7)
{
  char *v10; // rdi

  if ( a3 != *(_DWORD *)(a1 + 52) )
    return 32771LL;
  memmove(a4, a2, Size);
  v10 = &a2[Size];
  SymCryptMlDsaVectorDecode(
    v10,
    (unsigned int)*(unsigned __int8 *)(a1 + 26) + 1,
    (unsigned int)(1 << *(_BYTE *)(a1 + 26)),
    a6);
  return SymCryptMlDsaHintBitUnpack(
           a1,
           (__int64)&v10[(32 * *a6 * (*(unsigned __int8 *)(a1 + 26) + 1LL)) & 0x1FFFFFFFFFFFFFFFLL],
           a7);
}
