/*
 * XREFs of UsbhHubSSH_Worker @ 0x1400384B0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x140009870 (Usbh_SSH_Event.c)
 */

LONG __fastcall UsbhHubSSH_Worker(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3)
{
  struct _KEVENT *v5; // rbx

  v5 = (struct _KEVENT *)FdoExt((__int64)a1);
  Usbh_SSH_Event(a1, 1u, a3);
  return KeSetEvent(v5 + 143, 0, 0);
}
