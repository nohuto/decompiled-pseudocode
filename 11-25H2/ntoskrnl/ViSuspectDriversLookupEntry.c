/*
 * XREFs of ViSuspectDriversLookupEntry @ 0x140B8B1C4
 * Callers:
 *     VfVolatileRemoveDifVerification @ 0x140608A20 (VfVolatileRemoveDifVerification.c)
 *     VfSuspectDifRemoveEntry @ 0x140B8A660 (VfSuspectDifRemoveEntry.c)
 *     VfSuspectDriversLookupName @ 0x140B8AEA4 (VfSuspectDriversLookupName.c)
 *     VfSuspectDriversRemove @ 0x140B8AEC4 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x140B8AF64 (VfSuspectDriversUnloadCallback.c)
 *     VfSuspectDriversIsLoaded @ 0x140C2AA4C (VfSuspectDriversIsLoaded.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall ViSuspectDriversLookupEntry(PCUNICODE_STRING String2)
{
  __int64 i; // rbx

  for ( i = VfSuspectDriversList; (__int64 *)i != &VfSuspectDriversList; i = *(_QWORD *)i )
  {
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(i + 40), String2, 1u) )
      return i;
  }
  return 0LL;
}
