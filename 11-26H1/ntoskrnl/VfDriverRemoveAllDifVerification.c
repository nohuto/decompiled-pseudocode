/*
 * XREFs of VfDriverRemoveAllDifVerification @ 0x140645100
 * Callers:
 *     VfDriverProcessUnload @ 0x140645074 (VfDriverProcessUnload.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x14049E200 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404A5040 (MmAcquireLoadLock.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     VfSuspectRemoveDifVolatileVerification @ 0x140C3F068 (VfSuspectRemoveDifVolatileVerification.c)
 *     VfDriverLock @ 0x140C4C814 (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140C4DEE0 (VfDriverUnlock.c)
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
