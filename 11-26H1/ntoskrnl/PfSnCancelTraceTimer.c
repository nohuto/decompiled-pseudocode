/*
 * XREFs of PfSnCancelTraceTimer @ 0x140463840
 * Callers:
 *     PfSnDeactivateTrace @ 0x140463740 (PfSnDeactivateTrace.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 */

__int64 __fastcall PfSnCancelTraceTimer(__int64 a1)
{
  KSPIN_LOCK *v1; // rsi
  KIRQL v3; // al
  KIRQL v4; // di
  BOOLEAN v5; // bl

  v1 = (KSPIN_LOCK *)(a1 + 272);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 272));
  *(_DWORD *)(a1 + 280) |= 2u;
  v4 = v3;
  v5 = KeCancelTimer((PKTIMER)(a1 + 136));
  KeReleaseSpinLock(v1, v4);
  if ( v5 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 360));
  return 0LL;
}
