/*
 * XREFs of UsbhFdoPower @ 0x1400353F0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhFdoPowerWorkerInternal @ 0x140035468 (UsbhFdoPowerWorkerInternal.c)
 *     Usbh_HubDeferIrpProcessing @ 0x14004BB20 (Usbh_HubDeferIrpProcessing.c)
 */

__int64 __fastcall UsbhFdoPower(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  unsigned int v4; // ebx
  int v6; // eax

  if ( KeGetCurrentIrql() >= 2u )
  {
    v6 = Usbh_HubDeferIrpProcessing(a1, a1, UsbhFdoPowerWorker, a2);
    v4 = v6;
    if ( v6 >= 0 )
    {
      return 259;
    }
    else
    {
      a2->IoStatus.Status = v6;
      IofCompleteRequest(a2, 0);
    }
  }
  else
  {
    return (unsigned int)UsbhFdoPowerWorkerInternal(a1, a2);
  }
  return v4;
}
