/*
 * XREFs of PopPolicyWorkerThread @ 0x1404BB2C0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PopPolicyWorkerThread(int a1)
{
  KIRQL v2; // al
  int v3; // edi
  KIRQL v4; // r9
  int v5; // esi
  int v6; // r8d
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // r8d

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitBlock[2].WaitListEntry.Blink);
  v3 = *(_DWORD *)&PpmIdlePolicyLock.WaitBlockFill11[112] | a1;
  v4 = v2;
  *(_DWORD *)&PpmIdlePolicyLock.WaitBlockFill11[112] = v3;
  v5 = 0;
  v6 = v3;
  while ( 1 )
  {
    v10 = PopWorkerPending & v6;
    if ( !v10 )
      break;
    _BitScanForward((unsigned int *)&v7, v10);
    v8 = ~(1 << v7);
    PopWorkerPending &= v8;
    *(_DWORD *)&PpmIdlePolicyLock.WaitBlockFill11[112] = v3 & v8;
    KeReleaseSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitBlock[2].WaitListEntry.Blink, v4);
    if ( PopWorkerTypes[v7] )
      v5 |= guard_dispatch_icall_no_overrides(PopWorkerTypes, v9);
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitBlock[2].WaitListEntry.Blink);
    *(_DWORD *)&PpmIdlePolicyLock.WaitBlockFill11[112] |= 1 << v7;
    v6 = *(_DWORD *)&PpmIdlePolicyLock.WaitBlockFill11[112];
    v3 = *(_DWORD *)&PpmIdlePolicyLock.WaitBlockFill11[112];
  }
  PopWorkerPending |= v5;
  KeReleaseSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.WaitBlock[2].WaitListEntry.Blink, v4);
}
