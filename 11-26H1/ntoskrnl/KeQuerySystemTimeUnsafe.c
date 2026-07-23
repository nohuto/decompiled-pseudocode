/*
 * XREFs of KeQuerySystemTimeUnsafe @ 0x1404AC5F4
 * Callers:
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 *     PspExitLastThread @ 0x1409FD314 (PspExitLastThread.c)
 *     PspAllocateThread @ 0x140A7A6A8 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 KeQuerySystemTimeUnsafe()
{
  return MEMORY[0xFFFFF78000000014];
}
