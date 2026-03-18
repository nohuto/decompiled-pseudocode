/*
 * XREFs of VfDriverRemoveAllDifVerification @ 0x140605114
 * Callers:
 *     VfDriverProcessUnload @ 0x14060509C (VfDriverProcessUnload.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x14036D060 (MmReleaseLoadLock.c)
 *     MiAcquireLoadLock @ 0x14036DF38 (MiAcquireLoadLock.c)
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 *     VfDriverLock @ 0x140B7A4D4 (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140B7A65C (VfDriverUnlock.c)
 *     VfSuspectRemoveDifVolatileVerification @ 0x140B8B158 (VfSuspectRemoveDifVolatileVerification.c)
 */

__int64 VfDriverRemoveAllDifVerification()
{
  __int64 i; // rdi
  PVOID *j; // rbx

  VfDriverLock();
  MiAcquireLoadLock(1);
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
