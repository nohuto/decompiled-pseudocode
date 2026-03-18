/*
 * XREFs of VfDriverRemoveAllDifVerification @ 0x140641520
 * Callers:
 *     VfDriverProcessUnload @ 0x140641494 (VfDriverProcessUnload.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x1404A4B70 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404AB9B0 (MmAcquireLoadLock.c)
 *     RtlEqualUnicodeString @ 0x14091F0E0 (RtlEqualUnicodeString.c)
 *     VfSuspectRemoveDifVolatileVerification @ 0x140C39058 (VfSuspectRemoveDifVolatileVerification.c)
 *     VfDriverLock @ 0x140C46804 (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140C47ED0 (VfDriverUnlock.c)
 */

__int64 VfDriverRemoveAllDifVerification()
{
  __int64 i; // rdi
  PVOID *j; // rbx

  VfDriverLock();
  MmAcquireLoadLock();
  for ( i = VfSuspectDriversList; (__int64 *)i != &VfSuspectDriversList; i = *(_QWORD *)i )
  {
    for ( j = (PVOID *)PsLoadedModuleList; j != &PsLoadedModuleList; j = (PVOID *)*j )
    {
      if ( ((_DWORD)j[13] & 0x2000000) != 0
        && RtlEqualUnicodeString((PCUNICODE_STRING)(i + 40), (PCUNICODE_STRING)(j + 11), 1u) )
      {
        VfSuspectRemoveDifVolatileVerification(j);
      }
    }
  }
  MmReleaseLoadLock(0LL);
  return VfDriverUnlock();
}
