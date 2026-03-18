/*
 * XREFs of UsbhReferenceListClose @ 0x14004EEEC
 * Callers:
 *     Usbh_PnpRemove @ 0x1400520E8 (Usbh_PnpRemove.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhReferenceListRemove @ 0x140029668 (UsbhReferenceListRemove.c)
 */

void __fastcall UsbhReferenceListClose(__int64 a1)
{
  KIRQL v2; // bl
  _DWORD *v3; // rsi

  v2 = KeAcquireSpinLockRaiseToDpc(&HubG);
  qword_140070600 = (__int64)&dword_140070608;
  v3 = FdoExt(a1);
  Log(a1, 8, 1919312716, *((unsigned __int8 *)v3 + 2480), 0LL);
  if ( *((_BYTE *)v3 + 2480) )
  {
    *((_BYTE *)v3 + 2480) = 0;
    qword_140070600 = 0LL;
    KeReleaseSpinLock(&HubG, v2);
    UsbhReferenceListRemove(a1, a1);
    KeWaitForSingleObject(v3 + 622, Executive, 0, 0, 0LL);
  }
  else
  {
    qword_140070600 = 0LL;
    KeReleaseSpinLock(&HubG, v2);
  }
}
