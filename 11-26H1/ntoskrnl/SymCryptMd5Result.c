/*
 * XREFs of SymCryptMd5Result @ 0x1405648A0
 * Callers:
 *     HashpFinalizeHash @ 0x1408B25F8 (HashpFinalizeHash.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     SymCryptHashCommonPaddingMd4Style @ 0x14056747C (SymCryptHashCommonPaddingMd4Style.c)
 */

__int64 __fastcall SymCryptMd5Result(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  SymCryptHashCommonPaddingMd4Style(SymCryptMd5Algorithm_default, a1);
  *a2 = *(_OWORD *)(a1 + 96);
  SymCryptWipe(a1, 0x70uLL);
  result = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_1400245E8;
  return result;
}
