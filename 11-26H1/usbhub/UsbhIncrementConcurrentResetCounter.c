/*
 * XREFs of UsbhIncrementConcurrentResetCounter @ 0x14004C3AC
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x140037850 (UsbhDispatch_HardResetEvent.c)
 *     Usbh_HRS_Queued @ 0x14004C960 (Usbh_HRS_Queued.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

_DWORD *__fastcall UsbhIncrementConcurrentResetCounter(__int64 a1)
{
  _DWORD *result; // rax

  result = FdoExt(a1);
  if ( (int)++result[1316] > 20 )
    KeBugCheckEx(0xFEu, 0xAuLL, 1uLL, 1uLL, 0LL);
  return result;
}
