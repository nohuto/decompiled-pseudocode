/*
 * XREFs of NLS_UPCASE @ 0x180036DE0
 * Callers:
 *     RtlLookupAtomInAtomTable @ 0x180006500 (RtlLookupAtomInAtomTable.c)
 *     RtlFindUnicodeSubstring @ 0x180036C40 (RtlFindUnicodeSubstring.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x180036D30 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlAddAtomToAtomTableEx @ 0x1800375D0 (RtlAddAtomToAtomTableEx.c)
 *     RtlpFreeAllAtom @ 0x180037E24 (RtlpFreeAllAtom.c)
 *     RtlGetFullPathName_Ustr @ 0x180047AE0 (RtlGetFullPathName_Ustr.c)
 *     RtlDnsHostNameToComputerName @ 0x18009FD10 (RtlDnsHostNameToComputerName.c)
 *     HashStringToDwordCaseInsensitiveLen @ 0x180120A94 (HashStringToDwordCaseInsensitiveLen.c)
 *     RtlUpcaseUnicodeToCustomCPN @ 0x18013C500 (RtlUpcaseUnicodeToCustomCPN.c)
 *     RtlIsValidOemCharacter @ 0x180147768 (RtlIsValidOemCharacter.c)
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
