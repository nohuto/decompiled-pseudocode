/*
 * XREFs of StorpFreeTimerWorkItem @ 0x14007CCA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StorpFreeTimerWorkItem(PDEVICE_OBJECT DeviceObject, PIO_WORKITEM *Context)
{
  __int64 v3; // rcx

  KeFlushQueuedDpcs();
  IoFreeWorkItem(Context[19]);
  v3 = 4192LL;
  if ( *(_DWORD *)*Context != 1094997074 )
    v3 = 1100LL;
  _InterlockedDecrement((volatile signed __int32 *)((char *)*Context + v3));
  ExFreePoolWithTag(Context, 0x54416152u);
}
