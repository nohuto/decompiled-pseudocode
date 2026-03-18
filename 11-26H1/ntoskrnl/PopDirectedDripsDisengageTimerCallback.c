/*
 * XREFs of PopDirectedDripsDisengageTimerCallback @ 0x140603B10
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDirectedDripsClearDisengageReason @ 0x140483348 (PopDirectedDripsClearDisengageReason.c)
 */

void __fastcall PopDirectedDripsDisengageTimerCallback(__int64 a1, __int64 a2)
{
  KIRQL v3; // al
  bool v4; // zf
  KIRQL v5; // si

  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 8));
  v4 = (*(_DWORD *)(a2 + 20))-- == 1;
  v5 = v3;
  if ( v4 )
    PopDirectedDripsClearDisengageReason(*(_DWORD *)a2);
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 8), v5);
}
