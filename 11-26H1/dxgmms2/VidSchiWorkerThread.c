/*
 * XREFs of VidSchiWorkerThread @ 0x1400C1BB0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSetSchedulerStatus @ 0x14009BDCC (VidSchiSetSchedulerStatus.c)
 *     VidSchiAcceptDriverCallback @ 0x1400C4560 (VidSchiAcceptDriverCallback.c)
 *     VidSchiRun_PriorityTable @ 0x1400E8CE0 (VidSchiRun_PriorityTable.c)
 */

void __fastcall __noreturn VidSchiWorkerThread(char *StartContext)
{
  struct _KTHREAD *CurrentThread; // rax
  int ThreadInformation; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  *((_QWORD *)StartContext + 23) = CurrentThread;
  *((_QWORD *)StartContext + 22) = CurrentThread;
  KeSetActualBasePriorityThread(KeGetCurrentThread(), 16LL);
  *((_DWORD *)StartContext + 61) = 16;
  ThreadInformation = 1;
  ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBreakOnTermination|0x20, &ThreadInformation, 4u);
  if ( (*((_DWORD *)StartContext + 706) & 2) != 0 )
    ExAcquireResourceExclusiveLite((PERESOURCE)(StartContext + 1152), 1u);
  VidSchiAcceptDriverCallback(StartContext);
  *((_QWORD *)StartContext + 193) = MEMORY[0xFFFFF78000000320];
  KeWaitForSingleObject(StartContext + 1520, Executive, 0, 0, 0LL);
  VidSchiSetSchedulerStatus((__int64)StartContext, 1, 1);
  while ( 1 )
    VidSchiRun_PriorityTable((struct _VIDSCH_GLOBAL *)StartContext);
}
