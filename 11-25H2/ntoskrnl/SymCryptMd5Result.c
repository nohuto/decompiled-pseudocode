/*
 * XREFs of SymCryptMd5Result @ 0x1405263D0
 * Callers:
 *     HashpFinalizeHash @ 0x14082031C (HashpFinalizeHash.c)
 * Callees:
 *     SymCryptWipe @ 0x14051B4B4 (SymCryptWipe.c)
 *     SymCryptHashCommonPaddingMd4Style @ 0x14052C288 (SymCryptHashCommonPaddingMd4Style.c)
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
  *(_OWORD *)(a1 + 96) = xmmword_14001FD68;
  return result;
}
