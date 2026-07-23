/*
 * XREFs of ViSuspectDriversLookupEntry @ 0x140C2644C
 * Callers:
 *     VfVolatileRemoveDifVerification @ 0x14064B68C (VfVolatileRemoveDifVerification.c)
 *     VfSuspectDriversLookupName @ 0x140C2642C (VfSuspectDriversLookupName.c)
 *     VfSuspectDifRemoveEntry @ 0x140C3E874 (VfSuspectDifRemoveEntry.c)
 *     VfSuspectDriversRemove @ 0x140C3EDD4 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x140C3EE74 (VfSuspectDriversUnloadCallback.c)
 *     VfSuspectDriversIsLoaded @ 0x140CE5770 (VfSuspectDriversIsLoaded.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
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
