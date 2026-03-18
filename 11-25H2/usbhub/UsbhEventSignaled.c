/*
 * XREFs of UsbhEventSignaled @ 0x140032110
 * Callers:
 *     UsbhHubSSH_Timer @ 0x140032070 (UsbhHubSSH_Timer.c)
 * Callees:
 *     <none>
 */

bool __fastcall UsbhEventSignaled(struct _KEVENT *a1)
{
  return KeReadStateEvent(a1) != 0;
}
