/*
 * XREFs of PspFreeCurrentThreadUserShadowStack @ 0x14095EF5C
 * Callers:
 *     PspExitThread @ 0x14095771C (PspExitThread.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x140723850 (ZwQueryVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x14095F3F0 (MmFreeVirtualMemory.c)
 */

NTSTATUS PspFreeCurrentThreadUserShadowStack()
{
  unsigned __int64 v0; // rax
  NTSTATUS result; // eax
  _OWORD MemoryInformation[3]; // [rsp+30h] [rbp-38h] BYREF

  memset(MemoryInformation, 0, sizeof(MemoryInformation));
  v0 = __readmsr(0x6A7u);
  if ( KiUserCetPl3SspCanonicalizeMask )
    v0 &= KiUserCetPl3SspCanonicalizeMask;
  result = ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             (PVOID)v0,
             (MEMORY_INFORMATION_CLASS)3,
             MemoryInformation,
             0x30uLL,
             0LL);
  if ( result >= 0 )
    return MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, 0, 0x40000000);
  return result;
}
