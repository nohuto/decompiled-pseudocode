/*
 * XREFs of SymCryptMd4Result @ 0x18015E8D0
 * Callers:
 *     MD4Final @ 0x180158704 (MD4Final.c)
 * Callees:
 *     SymCryptHashCommonPaddingMd4Style @ 0x180022BAC (SymCryptHashCommonPaddingMd4Style.c)
 *     SymCryptWipeAsm @ 0x180137700 (SymCryptWipeAsm.c)
 */

__int64 __fastcall SymCryptMd4Result(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  SymCryptHashCommonPaddingMd4Style((__int64)SymCryptMd4Algorithm_default, (unsigned int *)a1);
  *a2 = *(_OWORD *)(a1 + 96);
  SymCryptWipeAsm(a1, 0x70uLL);
  result = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_180194D20;
  return result;
}
