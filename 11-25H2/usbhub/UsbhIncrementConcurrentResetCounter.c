/*
 * XREFs of UsbhIncrementConcurrentResetCounter @ 0x14004C7D8
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1400329CC (UsbhDispatch_HardResetEvent.c)
 *     Usbh_HRS_Queued @ 0x14004CD8C (Usbh_HRS_Queued.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 */

_DWORD *__fastcall UsbhIncrementConcurrentResetCounter(__int64 a1)
{
  _DWORD *result; // rax

  result = FdoExt(a1);
  if ( (int)++result[1316] > 20 )
    KeBugCheckEx(0xFEu, 0xAuLL, 1uLL, 1uLL, 0LL);
  return result;
}
