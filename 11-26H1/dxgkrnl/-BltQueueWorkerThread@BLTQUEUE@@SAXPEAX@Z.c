/*
 * XREFs of ?BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z @ 0x140415A90
 * Callers:
 *     <none>
 * Callees:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14009A6DC (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall __noreturn BLTQUEUE::BltQueueWorkerThread(BLTQUEUE *StartContext)
{
  unsigned int v2; // eax

  v2 = (*(__int64 (__fastcall **)(_QWORD *))(**((_QWORD **)StartContext + 16) + 8LL))(*((_QWORD **)StartContext + 16));
  KeSetActualBasePriorityThread(KeGetCurrentThread(), v2);
  BLTQUEUE::BltQueueWorker(StartContext);
}
