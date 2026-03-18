/*
 * XREFs of UsbhPindicatorWorker @ 0x14003F1C0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     Usbh_PIND_Timeout_Action @ 0x14003F750 (Usbh_PIND_Timeout_Action.c)
 */

__int64 __fastcall UsbhPindicatorWorker(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax

  FdoExt(a1);
  result = UsbhGetPortData(a1, a2, v6, v7);
  if ( result )
    return Usbh_PIND_Timeout_Action(a1, result, a3);
  return result;
}
