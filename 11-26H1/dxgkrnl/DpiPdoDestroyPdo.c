/*
 * XREFs of DpiPdoDestroyPdo @ 0x140255EF0
 * Callers:
 *     <none>
 * Callees:
 *     DpiFdoReleaseChildDescriptor @ 0x14042C81C (DpiFdoReleaseChildDescriptor.c)
 */

void __fastcall DpiPdoDestroyPdo(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  PVOID DeviceExtension; // rbx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( *((_QWORD *)DeviceExtension + 121) )
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 60);
  IoFreeWorkItem(*((PIO_WORKITEM *)DeviceExtension + 119));
  ExDeleteResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  v4 = (void *)*((_QWORD *)DeviceExtension + 21);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *((_QWORD *)DeviceExtension + 21) = 0LL;
  }
  v5 = (void *)*((_QWORD *)DeviceExtension + 116);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *((_QWORD *)DeviceExtension + 116) = 0LL;
  }
  WdLogSingleEntry1(4LL);
  v6 = (void *)*((_QWORD *)DeviceExtension + 117);
  WdLogGlobalForLineNumber = 6866;
  DpiFdoReleaseChildDescriptor(v6);
  IoDeleteDevice(DeviceObject);
}
