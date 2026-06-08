/*
 * XREFs of PepRegisterBootVetoes @ 0x14003AC90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

void __fastcall PepRegisterBootVetoes(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  IoFreeWorkItem(Context);
  PoFxProcessorNotification(*((_QWORD *)DeviceObject->DeviceExtension + 140), 26LL, 0LL);
  ((void (*)(void))qword_140019508)();
}
