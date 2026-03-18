/*
 * XREFs of PopFxUnregisterDeviceOrWait @ 0x140B06444
 * Callers:
 *     PoFxUnregisterDevice @ 0x140B06270 (PoFxUnregisterDevice.c)
 *     PoFxAbandonDevice @ 0x140B062B4 (PoFxAbandonDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     PopFxLockDevice @ 0x1403B74A4 (PopFxLockDevice.c)
 *     PopFxUnregisterDevice @ 0x140B06628 (PopFxUnregisterDevice.c)
 */

NTSTATUS __fastcall PopFxUnregisterDeviceOrWait(struct _KEVENT *a1)
{
  ULONG_PTR v2; // rax

  _m_prefetchw(&a1[12].Header.WaitListHead);
  if ( (_InterlockedOr((volatile signed __int32 *)&a1[12].Header.WaitListHead, 8u) & 8) != 0 )
    return KeWaitForSingleObject(&a1[4], Executive, 0, 0, 0LL);
  v2 = PopFxLockDevice((__int64)a1, 9, 0);
  if ( v2 )
    return PopFxUnregisterDevice(v2);
  else
    return KeSetEvent(a1 + 4, 0, 0);
}
