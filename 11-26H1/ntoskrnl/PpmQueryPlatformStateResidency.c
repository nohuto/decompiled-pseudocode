/*
 * XREFs of PpmQueryPlatformStateResidency @ 0x14042493C
 * Callers:
 *     PopCalculateIdleInformation @ 0x140423CE4 (PopCalculateIdleInformation.c)
 *     PopQueryBootSessionStandbyActivationInfo @ 0x1404248C8 (PopQueryBootSessionStandbyActivationInfo.c)
 *     PpmQueryDripsResidency @ 0x140424920 (PpmQueryDripsResidency.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmQueryPlatformStateResidency(unsigned int a1)
{
  __int64 v1; // rbp
  unsigned int v3; // esi
  unsigned int *Pool2; // rax
  unsigned int *v5; // rbx
  _PPM_IDLE_STATES *IdleStates; // rcx

  v1 = -1LL;
  if ( PpmPlatformStates )
  {
    if ( *(_QWORD *)(PpmPlatformStates + 40) )
    {
      v3 = *(_DWORD *)PpmPlatformStates;
      if ( a1 != -1 && a1 < v3 )
      {
        Pool2 = (unsigned int *)ExAllocatePool2(0x40uLL);
        v5 = Pool2;
        if ( Pool2 )
        {
          *Pool2 = v3;
          PopAcquireRwLockShared(&PpmIdlePolicyLock);
          IdleStates = KeGetCurrentPrcb()->PowerState.IdleStates;
          if ( IdleStates && (int)guard_dispatch_icall_no_overrides(IdleStates->Context, v5) >= 0 )
            v1 = *(_QWORD *)&v5[4 * a1 + 2];
          PopReleaseRwLock(&PpmIdlePolicyLock);
          ExFreePoolWithTag(v5, 0x694D5050u);
        }
      }
    }
  }
  return v1;
}
