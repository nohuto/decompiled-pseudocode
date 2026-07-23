/*
 * XREFs of PopAccumulateNonDripsIdleCpuTime @ 0x140421D04
 * Callers:
 *     PopUpdateNonAttributedCpuTimeReference @ 0x140421708 (PopUpdateNonAttributedCpuTimeReference.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmParkGetParkNode @ 0x140421EA4 (PpmParkGetParkNode.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x140421EF0 (PpmIdleSnapConcurrencyIdleTime.c)
 */

void __fastcall PopAccumulateNonDripsIdleCpuTime(char a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v4; // r14
  __int64 v9; // r12
  KIRQL v10; // r13
  __int64 ParkNode; // rax
  KSPIN_LOCK *v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx

  v4 = (unsigned int)dword_140E27240;
  if ( PpmPlatformStates && dword_140E27240 != -1 )
  {
    v9 = *(_QWORD *)(PpmPlatformStates + 48);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PpmIdlePolicyLock.StateSaveArea);
    ParkNode = PpmParkGetParkNode(0LL);
    if ( ParkNode )
    {
      v12 = *(KSPIN_LOCK **)(ParkNode + 1072);
      if ( v12 )
        PpmIdleSnapConcurrencyIdleTime(v12);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&PpmIdlePolicyLock.StateSaveArea, v10);
    v13 = *(_QWORD *)(1032 * v4 + v9 + 72);
    if ( !a1 )
    {
      v14 = -*a2;
      v15 = v13 - *a3;
      if ( v14 > v15 )
        *a4 += v14 - v15;
    }
    *a2 = 0LL;
    *a3 = v13;
  }
}
