/*
 * XREFs of LdrpIsSubstringFound @ 0x18015BFD8
 * Callers:
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800CF680 (LdrpIsVerifierActivationFilterMatched.c)
 * Callees:
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     RtlCompareUnicodeStrings @ 0x18007B0A0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall LdrpIsSubstringFound(unsigned __int16 *a1, PCWCH *a2)
{
  unsigned int v4; // edi
  unsigned __int64 i; // rbx

  v4 = 0;
  LdrpLogInternal(
    "minkernel\\ldr\\ldrinit.c",
    9193,
    (__int64)"LdrpIsSubstringFound",
    2,
    "Searching for \"%wZ\" in \"%wZ\"\n",
    a2,
    a1);
  if ( *a1 >= *(_WORD *)a2 )
  {
    for ( i = (*a1 - (unsigned __int64)*(unsigned __int16 *)a2) >> 1;
          RtlCompareUnicodeStrings(
            (PCWCH)(*((_QWORD *)a1 + 1) + 2 * i),
            (unsigned __int64)*(unsigned __int16 *)a2 >> 1,
            a2[1],
            (unsigned __int64)*(unsigned __int16 *)a2 >> 1,
            1u);
          --i )
    {
      if ( !i )
        return v4;
    }
    return 1;
  }
  return v4;
}
