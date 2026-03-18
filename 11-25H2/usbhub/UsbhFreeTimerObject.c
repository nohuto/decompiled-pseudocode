/*
 * XREFs of UsbhFreeTimerObject @ 0x140001368
 * Callers:
 *     UsbhBusPnpStop_Action @ 0x140001FCC (UsbhBusPnpStop_Action.c)
 *     UsbhBusPnpStart @ 0x140046130 (UsbhBusPnpStart.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhDisableTimerObject @ 0x14000C938 (UsbhDisableTimerObject.c)
 *     Log @ 0x14001C5D0 (Log.c)
 */

void __fastcall UsbhFreeTimerObject(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdi
  void *v5; // r14
  KIRQL v6; // al
  KIRQL v7; // bl

  v4 = FdoExt(a1);
  Log(a1, 0x2000, 1718773076, (_DWORD)a2, *a2);
  v5 = (void *)*a2;
  if ( *a2 )
  {
    UsbhDisableTimerObject(a1, *a2);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 3728));
    *a2 = 0LL;
    v7 = v6;
    Log(a1, 0x2000, 1718768689, (_DWORD)v5, 0LL);
    ExFreePoolWithTag(v5, 0);
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 3728), v7);
  }
}
