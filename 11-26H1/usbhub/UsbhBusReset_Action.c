/*
 * XREFs of UsbhBusReset_Action @ 0x140041224
 * Callers:
 *     Usbh_BS_BusSuspend @ 0x1400416B0 (Usbh_BS_BusSuspend.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhPCE_BusReset @ 0x140043AC0 (UsbhPCE_BusReset.c)
 */

_DWORD *__fastcall UsbhBusReset_Action(__int64 a1, __int64 a2)
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
      UsbhPCE_BusReset(a1, a2, v6);
      v6 += v5;
      result = FdoExt(a1);
    }
    while ( v6 <= *((unsigned __int8 *)result + 2938) );
  }
  return result;
}
