/*
 * XREFs of PnpDeviceCompletionRequestDestroyWorkItem @ 0x1404A1EF0
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeWorkItem @ 0x1404A1F40 (IoFreeWorkItem.c)
 *     PnpDisableWatchdog @ 0x1409DDFA8 (PnpDisableWatchdog.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
