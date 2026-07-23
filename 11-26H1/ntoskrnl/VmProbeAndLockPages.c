/*
 * XREFs of VmProbeAndLockPages @ 0x1406C44C0
 * Callers:
 *     <none>
 * Callees:
 *     MmProbeAndLockPagesEx @ 0x1403A1820 (MmProbeAndLockPagesEx.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x1406EF760 (MmUpdateMdlTrackerForMdlSwitch.c)
 */

__int64 __fastcall VmProbeAndLockPages(PMDL MemoryDescriptorList, char a2, unsigned int a3)
{
  __int64 result; // rax
  char *v5; // rdx
  __int64 ByteCount; // r9
  unsigned __int64 v7; // rcx

  if ( a2 || a3 > 1 )
    return 3221225485LL;
  v5 = (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
  ByteCount = MemoryDescriptorList->ByteCount;
  v7 = (unsigned __int64)&v5[ByteCount];
  if ( &v5[ByteCount] > v5 )
  {
    if ( v7 > 0x7FFFFFFF0000LL )
      return 3221225659LL;
  }
  else if ( ByteCount || v7 >= 0x7FFFFFFF0000LL )
  {
    return 3221225659LL;
  }
  result = MmProbeAndLockPagesEx((__int64)MemoryDescriptorList, 2LL * (a3 & 3));
  if ( (int)result >= 0 )
  {
    if ( (MemoryDescriptorList->MdlFlags & 0xFFFFFF77) == 0x102 )
    {
      MmUpdateMdlTrackerForMdlSwitch((ULONG_PTR)MemoryDescriptorList);
      return 0LL;
    }
    MmUnlockPages(MemoryDescriptorList);
    return 3221225659LL;
  }
  return result;
}
