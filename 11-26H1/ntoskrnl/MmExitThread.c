/*
 * XREFs of MmExitThread @ 0x140ADB710
 * Callers:
 *     PspExitThread @ 0x14095771C (PspExitThread.c)
 *     PspInsertThread @ 0x140A026D0 (PspInsertThread.c)
 * Callees:
 *     MiPerformFaultClusterMaintenance @ 0x1402EB0D0 (MiPerformFaultClusterMaintenance.c)
 *     MiFreeThreadFaultClusterContext @ 0x1404AB658 (MiFreeThreadFaultClusterContext.c)
 */

__int64 __fastcall MmExitThread(__int64 a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rbx
  __int64 result; // rax

  if ( !a2 )
    MiPerformFaultClusterMaintenance(0LL, a1, 0LL);
  v5 = *(_QWORD *)(a1 + 1928);
  MiFreeThreadFaultClusterContext((struct _KTHREAD *)(*(_QWORD *)(*(_QWORD *)(a1 + 544) + 1040LL) + 832LL), v5, a3, a4);
  result = v5 + 1;
  *(_QWORD *)(a1 + 1928) = v5 + 1;
  return result;
}
