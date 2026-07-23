/*
 * XREFs of PsAssignThreadId @ 0x14049C08C
 * Callers:
 *     KiAllocateDpcDelegateThread @ 0x1405EC528 (KiAllocateDpcDelegateThread.c)
 *     KiAllocateSmtIsolationThread @ 0x1405F8EE4 (KiAllocateSmtIsolationThread.c)
 *     PspAllocateThread @ 0x140A7A6A8 (PspAllocateThread.c)
 * Callees:
 *     ExCreateHandle @ 0x140AAACB4 (ExCreateHandle.c)
 */

__int64 __fastcall PsAssignThreadId(__int64 a1)
{
  __int64 Handle; // rax

  Handle = ExCreateHandle(PspCidTable, a1);
  *(_QWORD *)(a1 + 1296) = Handle;
  return Handle == 0 ? 0xC000009A : 0;
}
