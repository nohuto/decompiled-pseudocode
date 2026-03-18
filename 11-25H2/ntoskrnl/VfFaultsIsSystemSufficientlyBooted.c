/*
 * XREFs of VfFaultsIsSystemSufficientlyBooted @ 0x140B8667C
 * Callers:
 *     VfFaultsInjectResourceFailure @ 0x140B86588 (VfFaultsInjectResourceFailure.c)
 *     ViRlrsMmMapLockedPages_Entry @ 0x140B8F790 (ViRlrsMmMapLockedPages_Entry.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140B90B60 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VfHandlePoolAlloc @ 0x140B98AC0 (VfHandlePoolAlloc.c)
 * Callees:
 *     <none>
 */

__int64 VfFaultsIsSystemSufficientlyBooted()
{
  if ( ViSystemSufficientlyBooted )
    return 1LL;
  if ( (MEMORY[0xFFFFF78000000014] - KeBootTime.QuadPart) / 0x2710uLL <= ViRequiredTimeSinceBootInMsecs )
    ++dword_140FFDF8C;
  else
    ViSystemSufficientlyBooted = 1;
  return (unsigned int)ViSystemSufficientlyBooted;
}
