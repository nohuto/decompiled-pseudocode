/*
 * XREFs of VfFaultsIsSystemSufficientlyBooted @ 0x140C3A918
 * Callers:
 *     VfFaultsInjectResourceFailure @ 0x140C3A7C4 (VfFaultsInjectResourceFailure.c)
 *     ViRlrsMmMapLockedPages_Entry @ 0x140C44590 (ViRlrsMmMapLockedPages_Entry.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140C45960 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VfHandlePoolAlloc @ 0x140C4A310 (VfHandlePoolAlloc.c)
 * Callees:
 *     <none>
 */

__int64 VfFaultsIsSystemSufficientlyBooted()
{
  if ( ViSystemSufficientlyBooted )
    return 1LL;
  if ( (MEMORY[0xFFFFF78000000014] - KeBootTime.QuadPart) / 0x2710uLL <= ViRequiredTimeSinceBootInMsecs )
    ++dword_140FF2944;
  else
    ViSystemSufficientlyBooted = 1;
  return (unsigned int)ViSystemSufficientlyBooted;
}
