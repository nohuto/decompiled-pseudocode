/*
 * XREFs of UsbhBusDisconnect_Action @ 0x14004165C
 * Callers:
 *     Usbh_BS_BusPause @ 0x14000D538 (Usbh_BS_BusPause.c)
 *     Usbh_BS_BusSuspend @ 0x140041B74 (Usbh_BS_BusSuspend.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhPCE_BusDisconnect @ 0x140043EDC (UsbhPCE_BusDisconnect.c)
 */

_DWORD *__fastcall UsbhBusDisconnect_Action(__int64 a1, __int64 a2)
{
  __int16 v4; // r9
  __int16 v5; // bp
  unsigned __int16 v6; // bx
  _DWORD *result; // rax

  FdoExt(a1);
  Log(a1, 2048, 1919251262, 0LL, 0LL);
  v5 = v4 + 1;
  v6 = v4 + 1;
  result = FdoExt(a1);
  if ( *((_BYTE *)result + 2938) >= (unsigned __int8)v5 )
  {
    do
    {
      UsbhPCE_BusDisconnect(a1, a2, v6);
      v6 += v5;
      result = FdoExt(a1);
    }
    while ( v6 <= *((unsigned __int8 *)result + 2938) );
  }
  return result;
}
