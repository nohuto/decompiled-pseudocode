/*
 * XREFs of LdrpIsSubstringFound @ 0x18015C118
 * Callers:
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800D1F10 (LdrpIsVerifierActivationFilterMatched.c)
 * Callees:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     RtlCompareUnicodeStrings @ 0x180083D00 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall LdrpIsSubstringFound(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v4; // edi
  unsigned __int64 i; // rbx

  v4 = 0;
  LdrpLogInternal(
    (int)"minkernel\\ldr\\ldrinit.c",
    9197,
    (__int64)"LdrpIsSubstringFound",
    2,
    "Searching for \"%wZ\" in \"%wZ\"\n",
    a2,
    a1);
  if ( *a1 >= *a2 )
  {
    for ( i = (*a1 - (unsigned __int64)*a2) >> 1;
          (unsigned int)RtlCompareUnicodeStrings(
                          (unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2 * i),
                          (unsigned __int64)*a2 >> 1,
                          *((_BYTE **)a2 + 1),
                          (unsigned __int64)*a2 >> 1,
                          1);
          --i )
    {
      if ( !i )
        return v4;
    }
    return 1;
  }
  return v4;
}
