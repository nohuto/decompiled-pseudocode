/*
 * XREFs of PsAssignThreadId @ 0x1404A266C
 * Callers:
 *     KiAllocateDpcDelegateThread @ 0x1405E9BB8 (KiAllocateDpcDelegateThread.c)
 *     KiAllocateSmtIsolationThread @ 0x1405F6524 (KiAllocateSmtIsolationThread.c)
 *     PspAllocateThread @ 0x140A01BF0 (PspAllocateThread.c)
 * Callees:
 *     ExCreateHandle @ 0x140AACBF8 (ExCreateHandle.c)
 */

__int64 __fastcall PsAssignThreadId(__int64 a1)
{
  __int64 Handle; // rax

  Handle = ExCreateHandle(PspCidTable, a1);
  *(_QWORD *)(a1 + 1296) = Handle;
  return Handle == 0 ? 0xC000009A : 0;
}
