/*
 * XREFs of USBD_AssignUrbToIoStackLocation @ 0x14000BF18
 * Callers:
 *     USBHwSubmitUrbToUsbdSynch @ 0x14003BE20 (USBHwSubmitUrbToUsbdSynch.c)
 * Callees:
 *     <none>
 */

void __stdcall USBD_AssignUrbToIoStackLocation(USBD_HANDLE USBDHandle, PIO_STACK_LOCATION IoStackLocation, PURB Urb)
{
  unsigned int v3; // eax

  v3 = *((_DWORD *)USBDHandle + 54);
  if ( v3 != -1 && v3 >= 0x602 )
    IoStackLocation->FileObject = (PFILE_OBJECT)Urb;
  IoStackLocation->Parameters.WMI.ProviderId = (ULONG_PTR)Urb;
}
