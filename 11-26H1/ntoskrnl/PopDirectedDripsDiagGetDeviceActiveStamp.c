/*
 * XREFs of PopDirectedDripsDiagGetDeviceActiveStamp @ 0x1405002D8
 * Callers:
 *     PopDirectedDripsDiagBroadcastTreeBegin @ 0x140B0DD88 (PopDirectedDripsDiagBroadcastTreeBegin.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PopDirectedDripsDiagGetDeviceActiveStamp(__int64 a1)
{
  __int64 v1; // rbx
  KSPIN_LOCK *v3; // rsi
  KIRQL v4; // al

  v1 = 0LL;
  if ( a1 )
  {
    v3 = (KSPIN_LOCK *)(a1 + 640);
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 640));
    if ( *(_BYTE *)(a1 + 648) )
      v1 = *(_QWORD *)(a1 + 664);
    KeReleaseSpinLock(v3, v4);
  }
  return v1;
}
