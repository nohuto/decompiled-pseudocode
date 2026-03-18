/*
 * XREFs of UsbhPindicatorWorker @ 0x14003F6D0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usbh_PIND_Timeout_Action @ 0x14003FC60 (Usbh_PIND_Timeout_Action.c)
 */

__int64 __fastcall UsbhPindicatorWorker(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax

  FdoExt(a1);
  result = UsbhGetPortData(a1, a2);
  if ( result )
    return Usbh_PIND_Timeout_Action(a1, result, a3);
  return result;
}
