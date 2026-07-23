/*
 * XREFs of PspDeleteSecureThread @ 0x140B439D4
 * Callers:
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 * Callees:
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     KeUnsecureThread @ 0x1404F1190 (KeUnsecureThread.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void PspDeleteSecureThread()
{
  PMDL MemoryDescriptorList; // [rsp+30h] [rbp+8h] BYREF

  MemoryDescriptorList = 0LL;
  if ( (int)KeUnsecureThread((__int64)&MemoryDescriptorList) >= 0 )
  {
    MmUnlockPages(MemoryDescriptorList);
    ExFreePoolWithTag(MemoryDescriptorList, 0x65537350u);
  }
}
