/*
 * XREFs of KeQuerySystemTimeUnsafe @ 0x1404B2F74
 * Callers:
 *     PspExitThread @ 0x14095771C (PspExitThread.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x140A01BF0 (PspAllocateThread.c)
 *     PspExitLastThread @ 0x140A41964 (PspExitLastThread.c)
 * Callees:
 *     <none>
 */

__int64 KeQuerySystemTimeUnsafe()
{
  return MEMORY[0xFFFFF78000000014];
}
