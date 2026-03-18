/*
 * XREFs of UsbhHubSSH_Worker @ 0x140036970
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x14001B400 (Usbh_SSH_Event.c)
 */

LONG __fastcall UsbhHubSSH_Worker(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KEVENT *v5; // rbx

  v5 = (struct _KEVENT *)FdoExt(a1);
  Usbh_SSH_Event(a1, 1u, a3);
  return KeSetEvent(v5 + 143, 0, 0);
}
