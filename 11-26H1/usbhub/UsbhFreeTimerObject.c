/*
 * XREFs of UsbhFreeTimerObject @ 0x140038E30
 * Callers:
 *     UsbhBusPnpStop_Action @ 0x140011CAC (UsbhBusPnpStop_Action.c)
 *     UsbhBusPnpStart @ 0x140045C80 (UsbhBusPnpStart.c)
 * Callees:
 *     UsbhDisableTimerObject @ 0x140007330 (UsbhDisableTimerObject.c)
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

void __fastcall UsbhFreeTimerObject(__int64 a1, __int64 *a2)
{
  KSPIN_LOCK *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  void *v7; // r14
  KIRQL v8; // al
  KIRQL v9; // bl

  v4 = (KSPIN_LOCK *)FdoExt(a1);
  Log(a1, 0x2000, 1718773076, (__int64)a2, *a2);
  v7 = (void *)*a2;
  if ( *a2 )
  {
    UsbhDisableTimerObject(a1, *a2, v5, v6);
    v8 = KeAcquireSpinLockRaiseToDpc(v4 + 466);
    *a2 = 0LL;
    v9 = v8;
    Log(a1, 0x2000, 1718768689, (__int64)v7, 0LL);
    ExFreePoolWithTag(v7, 0);
    KeReleaseSpinLock(v4 + 466, v9);
  }
}
