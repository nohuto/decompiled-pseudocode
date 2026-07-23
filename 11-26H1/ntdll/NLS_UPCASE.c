/*
 * XREFs of NLS_UPCASE @ 0x180021F40
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x1800012A0 (RtlAddAtomToAtomTableEx.c)
 *     RtlpFreeAllAtom @ 0x180001AF4 (RtlpFreeAllAtom.c)
 *     RtlFindUnicodeSubstring @ 0x180021DA0 (RtlFindUnicodeSubstring.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x180021E90 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlGetFullPathName_Ustr @ 0x180032060 (RtlGetFullPathName_Ustr.c)
 *     RtlLookupAtomInAtomTable @ 0x180051C30 (RtlLookupAtomInAtomTable.c)
 *     RtlDnsHostNameToComputerName @ 0x18009EE40 (RtlDnsHostNameToComputerName.c)
 *     HashStringToDwordCaseInsensitiveLen @ 0x180120844 (HashStringToDwordCaseInsensitiveLen.c)
 *     RtlUpcaseUnicodeToCustomCPN @ 0x18013C3C0 (RtlUpcaseUnicodeToCustomCPN.c)
 *     RtlIsValidOemCharacter @ 0x180147618 (RtlIsValidOemCharacter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NLS_UPCASE(__int64 a1, int a2)
{
  if ( (unsigned __int16)a2 >= 0x61u )
  {
    if ( (unsigned __int16)a2 <= 0x7Au )
      return (unsigned int)(a2 - 32);
    if ( a1 )
    {
      if ( (unsigned __int16)a2 >= 0xC0u )
        LOWORD(a2) = *(_WORD *)(a1
                              + 2LL
                              * ((a2 & 0xF)
                               + (unsigned int)*(unsigned __int16 *)(a1
                                                                   + 2LL
                                                                   * ((((unsigned __int16)a2 >> 4) & 0xF)
                                                                    + (unsigned int)*(unsigned __int16 *)(a1 + 2 * ((unsigned __int64)(unsigned __int16)a2 >> 8))))))
                   + a2;
    }
  }
  return (unsigned __int16)a2;
}
