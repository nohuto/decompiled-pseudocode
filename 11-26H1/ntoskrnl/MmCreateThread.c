/*
 * XREFs of MmCreateThread @ 0x140ADA450
 * Callers:
 *     PspInsertThread @ 0x140A7B188 (PspInsertThread.c)
 * Callees:
 *     MiAllocateThreadFaultClusterContext @ 0x14049EEBC (MiAllocateThreadFaultClusterContext.c)
 */

__int64 __fastcall MmCreateThread(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 544);
  v7 = 0LL;
  result = MiAllocateThreadFaultClusterContext((struct _KTHREAD *)(*(_QWORD *)(v4 + 1040) + 832LL), &v7, a3, a4);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a1 + 1928) = v7;
    return 0LL;
  }
  return result;
}
