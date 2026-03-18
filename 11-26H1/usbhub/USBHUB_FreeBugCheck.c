/*
 * XREFs of USBHUB_FreeBugCheck @ 0x14004F32C
 * Callers:
 *     UsbhDriverUnload @ 0x140050180 (UsbhDriverUnload.c)
 * Callees:
 *     <none>
 */

void __fastcall USBHUB_FreeBugCheck(struct _KBUGCHECK_REASON_CALLBACK_RECORD *P)
{
  if ( P )
  {
    KeDeregisterBugCheckReasonCallback(P);
    ExFreePoolWithTag(P, 0);
  }
}
