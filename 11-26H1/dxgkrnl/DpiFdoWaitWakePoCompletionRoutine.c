/*
 * XREFs of DpiFdoWaitWakePoCompletionRoutine @ 0x140093A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiFdoWaitWakePoCompletionRoutine(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context,
        PIO_STATUS_BLOCK IoStatus)
{
  PVOID DeviceExtension; // rbx
  struct _IO_WORKITEM *v6; // rcx

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( IoStatus->Status < 0 )
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 459;
  }
  v6 = (struct _IO_WORKITEM *)*((_QWORD *)DeviceExtension + 346);
  *((_QWORD *)DeviceExtension + 345) = 0LL;
  IoQueueWorkItemEx(v6, DpiFdoWaitWakePoCompletionWorkItem, DelayedWorkQueue, (PVOID)IoStatus->Status);
}
