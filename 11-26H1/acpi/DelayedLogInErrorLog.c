/*
 * XREFs of DelayedLogInErrorLog @ 0x14006FE50
 * Callers:
 *     <none>
 * Callees:
 *     LogInErrorLog @ 0x1400703D8 (LogInErrorLog.c)
 */

void __fastcall DelayedLogInErrorLog(PDEVICE_OBJECT DeviceObject, PIO_WORKITEM *Context)
{
  LOBYTE(DeviceObject) = *(_BYTE *)Context;
  LogInErrorLog(DeviceObject, *((unsigned int *)Context + 1), *((unsigned int *)Context + 2));
  IoFreeWorkItem(Context[2]);
  ExFreePoolWithTag(Context, 0);
}
