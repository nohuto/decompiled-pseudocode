/*
 * XREFs of SymCryptMd5Result @ 0x180022A30
 * Callers:
 *     ImportTablepHashCanonicalLists @ 0x180022944 (ImportTablepHashCanonicalLists.c)
 * Callees:
 *     SymCryptHashCommonPaddingMd4Style @ 0x180022BAC (SymCryptHashCommonPaddingMd4Style.c)
 *     SymCryptWipeAsm @ 0x180137700 (SymCryptWipeAsm.c)
 */

__int64 __fastcall SymCryptMd5Result(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  SymCryptHashCommonPaddingMd4Style(SymCryptMd5Algorithm_default, a1);
  *a2 = *(_OWORD *)(a1 + 96);
  SymCryptWipeAsm(a1, 112LL);
  result = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_1801767C8;
  return result;
}
