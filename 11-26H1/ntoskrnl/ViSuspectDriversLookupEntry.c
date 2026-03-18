/*
 * XREFs of ViSuspectDriversLookupEntry @ 0x140C20440
 * Callers:
 *     VfVolatileRemoveDifVerification @ 0x140647AAC (VfVolatileRemoveDifVerification.c)
 *     VfSuspectDriversLookupName @ 0x140C20420 (VfSuspectDriversLookupName.c)
 *     VfSuspectDifRemoveEntry @ 0x140C38864 (VfSuspectDifRemoveEntry.c)
 *     VfSuspectDriversRemove @ 0x140C38DC4 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x140C38E64 (VfSuspectDriversUnloadCallback.c)
 *     VfSuspectDriversIsLoaded @ 0x140CDF3D8 (VfSuspectDriversIsLoaded.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x14091F0E0 (RtlEqualUnicodeString.c)
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
