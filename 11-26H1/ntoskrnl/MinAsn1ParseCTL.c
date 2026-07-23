/*
 * XREFs of MinAsn1ParseCTL @ 0x1408A9788
 * Callers:
 *     MinCrypK_ParseRevocationList @ 0x1407216F8 (MinCrypK_ParseRevocationList.c)
 * Callees:
 *     MinAsn1ExtractValues @ 0x1408AAC48 (MinAsn1ExtractValues.c)
 */

__int64 __fastcall MinAsn1ParseCTL(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 10;
  result = MinAsn1ExtractValues(
             *(_QWORD *)(a1 + 8),
             *(_DWORD *)a1,
             (unsigned int)&v4,
             (unsigned int)&qword_1400102F0,
             11,
             a2);
  if ( (int)result > 0 )
    return *(unsigned int *)(a2 + 16);
  return result;
}
