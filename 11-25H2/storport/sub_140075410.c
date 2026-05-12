/*
 * XREFs of sub_140075410 @ 0x140075410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_140075410(PDEVICE_OBJECT DeviceObject, PIO_WORKITEM *Context)
{
  __int64 v3; // rcx

  KeFlushQueuedDpcs();
  IoFreeWorkItem(Context[19]);
  v3 = 4128LL;
  if ( *(_DWORD *)*Context != 1094997074 )
    v3 = 1084LL;
  _InterlockedDecrement((volatile signed __int32 *)((char *)*Context + v3));
  ExFreePoolWithTag(Context, 0x54416152u);
}
