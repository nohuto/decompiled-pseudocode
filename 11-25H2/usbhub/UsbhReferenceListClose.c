/*
 * XREFs of UsbhReferenceListClose @ 0x14004EA2C
 * Callers:
 *     Usbh_PnpRemove @ 0x140051BF4 (Usbh_PnpRemove.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhReferenceListRemove @ 0x14002B02C (UsbhReferenceListRemove.c)
 */

void __fastcall UsbhReferenceListClose(__int64 a1)
{
  KIRQL v2; // bl
  _DWORD *v3; // rsi

  v2 = KeAcquireSpinLockRaiseToDpc(&HubG);
  qword_14006F5A0 = (__int64)&dword_14006F5A8;
  v3 = FdoExt(a1);
  Log(a1, 8, 1919312716, *((unsigned __int8 *)v3 + 2480), 0LL);
  if ( *((_BYTE *)v3 + 2480) )
  {
    *((_BYTE *)v3 + 2480) = 0;
    qword_14006F5A0 = 0LL;
    KeReleaseSpinLock(&HubG, v2);
    UsbhReferenceListRemove(a1, a1);
    KeWaitForSingleObject(v3 + 622, Executive, 0, 0, 0LL);
  }
  else
  {
    qword_14006F5A0 = 0LL;
    KeReleaseSpinLock(&HubG, v2);
  }
}
