/*
 * XREFs of HalpTimerInitializeProfiling @ 0x1405844A8
 * Callers:
 *     HalpTimerInitSystem @ 0x1405774F0 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x140426EC0 (HalpTimerGetInternalData.c)
 *     HalpSetProfileSourceInterval @ 0x140530C2C (HalpSetProfileSourceInterval.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x14057DE10 (HalpMmAllocatePerProcessorMemory.c)
 *     HalpTimerConfigureInterrupt @ 0x1405819FC (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptSetIdtEntry @ 0x140594700 (HalpInterruptSetIdtEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpTimerInitializeProfiling()
{
  __int64 v0; // rbx
  int v1; // edi
  int v2; // r8d
  __int64 v3; // r9
  int v4; // ecx
  __int64 InternalData; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v10[3]; // [rsp+40h] [rbp-18h] BYREF
  int v11; // [rsp+60h] [rbp+8h] BYREF

  v0 = HalpProfileTimer;
  v1 = 0;
  *(_OWORD *)v10 = 0LL;
  if ( HalpProfileData || (HalpProfileData = (__int64)HalpMmAllocatePerProcessorMemory(296)) != 0 )
  {
    v11 = 10000;
    HalpSetProfileSourceInterval(0LL, (__int64)&v11);
    if ( KeGetPcr()->Prcb.Number )
    {
      if ( v0 )
      {
        LOBYTE(v2) = 15;
        HalpInterruptSetIdtEntry(253, (unsigned int)HalpTimerProfileInterrupt, v2, v3, -3LL);
        if ( (*(_DWORD *)(v0 + 224) & 1) != 0 )
        {
          InternalData = HalpTimerGetInternalData(v0);
          v1 = guard_dispatch_icall_no_overrides(InternalData, v6);
          if ( v1 >= 0 )
          {
            v7 = HalpTimerGetInternalData(v0);
            guard_dispatch_icall_no_overrides(v7, v8);
          }
        }
      }
    }
    else if ( v0 )
    {
      v4 = **(_DWORD **)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112];
      v10[1] = (unsigned __int16)(**(_DWORD **)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] >> 6);
      v10[0] = 1LL << v4;
      return (unsigned int)HalpTimerConfigureInterrupt(
                             v0,
                             0xFDu,
                             15,
                             v3,
                             -3LL,
                             1u,
                             v10,
                             (__int64)HalpTimerProfileInterrupt);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v1;
}
