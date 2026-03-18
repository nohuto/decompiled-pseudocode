/*
 * XREFs of UsbhEventSignaled @ 0x14002C4A8
 * Callers:
 *     UsbhHubSSH_Timer @ 0x14002C400 (UsbhHubSSH_Timer.c)
 * Callees:
 *     <none>
 */

bool __fastcall UsbhEventSignaled(struct _KEVENT *a1)
{
  return KeReadStateEvent(a1) != 0;
}
