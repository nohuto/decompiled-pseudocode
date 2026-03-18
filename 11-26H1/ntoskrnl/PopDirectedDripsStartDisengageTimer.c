/*
 * XREFs of PopDirectedDripsStartDisengageTimer @ 0x140603B60
 * Callers:
 *     PopRequestCompletion @ 0x1403B45B0 (PopRequestCompletion.c)
 *     PoFxNotifySurprisePowerOn @ 0x1403B7410 (PoFxNotifySurprisePowerOn.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 *     KeCancelTimer2 @ 0x1403AA4E0 (KeCancelTimer2.c)
 *     PopDirectedDripsSetDisengageReason @ 0x1404833B0 (PopDirectedDripsSetDisengageReason.c)
 */

void __fastcall PopDirectedDripsStartDisengageTimer(int a1)
{
  __int64 v1; // rbx
  KIRQL v2; // bp
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 160LL * a1;
  v3[0] = 0LL;
  v3[1] = -1LL;
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)((char *)&unk_140F12BA8 + v1 + 8));
  if ( !KeCancelTimer2((__int64)&unk_140F12BA8 + v1 + 24) && ++*(_DWORD *)((char *)&unk_140F12BA8 + v1 + 20) == 1 )
    PopDirectedDripsSetDisengageReason(*(_DWORD *)((char *)&unk_140F12BA8 + v1));
  KeSetTimer2(
    (__int64)&unk_140F12BA8 + v1 + 24,
    -10000000LL * *(unsigned int *)((char *)&unk_140F12BA8 + v1 + 4),
    0LL,
    (__int64)v3);
  ++*(_DWORD *)((char *)&unk_140F12BA8 + v1 + 16);
  KeReleaseSpinLock((PKSPIN_LOCK)((char *)&unk_140F12BA8 + v1 + 8), v2);
}
