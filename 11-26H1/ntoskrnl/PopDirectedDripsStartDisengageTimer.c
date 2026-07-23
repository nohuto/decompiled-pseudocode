/*
 * XREFs of PopDirectedDripsStartDisengageTimer @ 0x140606610
 * Callers:
 *     PopRequestCompletion @ 0x1403BE4B0 (PopRequestCompletion.c)
 *     PoFxNotifySurprisePowerOn @ 0x1403C1310 (PoFxNotifySurprisePowerOn.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     KeCancelTimer2 @ 0x1403B40F0 (KeCancelTimer2.c)
 *     PopDirectedDripsSetDisengageReason @ 0x14047CD20 (PopDirectedDripsSetDisengageReason.c)
 */

void __fastcall PopDirectedDripsStartDisengageTimer(int a1)
{
  __int64 v1; // rbx
  KIRQL v2; // bp
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 160LL * a1;
  v3[0] = 0LL;
  v3[1] = -1LL;
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)((char *)&stru_140F12EA0.CurrentRunTime + v1));
  if ( !KeCancelTimer2((__int64)&stru_140F12EA0.StateSaveArea + v1)
    && ++*(_DWORD *)((char *)&stru_140F12EA0.KernelStack + v1 + 4) == 1 )
  {
    PopDirectedDripsSetDisengageReason(*(_DWORD *)((char *)&stru_140F12EA0.CycleTime + v1));
  }
  KeSetTimer2(
    (__int64)&stru_140F12EA0.StateSaveArea + v1,
    -10000000LL * *(unsigned int *)((char *)&stru_140F12EA0.CycleTime + v1 + 4),
    0LL,
    (__int64)v3);
  ++*(_DWORD *)((char *)&stru_140F12EA0.KernelStack + v1);
  KeReleaseSpinLock((PKSPIN_LOCK)((char *)&stru_140F12EA0.CurrentRunTime + v1), v2);
}
