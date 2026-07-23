/*
 * XREFs of PnpDeviceCompletionRequestDestroyWorkItem @ 0x14049BA20
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeWorkItem @ 0x14049BA70 (IoFreeWorkItem.c)
 *     PnpDisableWatchdog @ 0x140A1B0D4 (PnpDisableWatchdog.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeviceCompletionRequestDestroyWorkItem(PVOID IoObject, _QWORD *Context, PIO_WORKITEM IoWorkItem)
{
  if ( Context[8] )
  {
    PnpDisableWatchdog();
    Context[8] = 0LL;
  }
  IoFreeWorkItem(IoWorkItem);
  ExFreePoolWithTag(Context, 0x31706E50u);
}
