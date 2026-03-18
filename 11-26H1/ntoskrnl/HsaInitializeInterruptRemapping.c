/*
 * XREFs of HsaInitializeInterruptRemapping @ 0x140BF0A38
 * Callers:
 *     HsaInitializeIommu @ 0x140BF0BE0 (HsaInitializeIommu.c)
 * Callees:
 *     RtlInitializeBitMap @ 0x140491530 (RtlInitializeBitMap.c)
 *     ExtEnvClearBits @ 0x1405330BC (ExtEnvClearBits.c)
 *     HalpGetIrtEntryCount @ 0x14058FB6C (HalpGetIrtEntryCount.c)
 *     ExtEnvAllocateMemory @ 0x140597BA0 (ExtEnvAllocateMemory.c)
 *     ExtEnvInitializeSpinLock @ 0x140597F04 (ExtEnvInitializeSpinLock.c)
 *     HalMapIoSpace @ 0x14059A1C0 (HalMapIoSpace.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall HsaInitializeInterruptRemapping(__int64 a1)
{
  int v1; // eax
  int v2; // ebx
  void *v4; // rax
  PVOID v5; // rax
  __int64 v6; // rcx
  RTL_BITMAP *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  PULONG BitMapBuffer; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+20h] BYREF

  v1 = *(_DWORD *)(a1 + 176);
  v2 = 0;
  v12 = 0LL;
  BitMapBuffer = 0LL;
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      if ( !EmpParseLock.KcsanThread )
      {
        EmpParseLock.SchedulerAssistYieldBoostCount = *(_DWORD *)(a1 + 180);
        EmpParseLock.SchedulerAssistYieldCounter = (16 * EmpParseLock.SchedulerAssistYieldBoostCount + 4095) & 0xFFFFF000;
        v4 = (void *)guard_dispatch_icall_no_overrides(-1LL, EmpParseLock.SchedulerAssistYieldCounter >> 12);
        EmpParseLock.Spare32 = v4;
        if ( v4
          && (v5 = HalMapIoSpace((LARGE_INTEGER)v4, EmpParseLock.SchedulerAssistYieldCounter, MmCached),
              (EmpParseLock.KcsanThread = (unsigned __int64)v5) != 0) )
        {
          memset_0(v5, 0, EmpParseLock.SchedulerAssistYieldCounter);
          v2 = ExtEnvAllocateMemory(v6, 4 * ((unsigned int)(*(_DWORD *)(a1 + 180) + 31) >> 5), &BitMapBuffer);
          if ( v2 >= 0 )
          {
            RtlInitializeBitMap(
              (PRTL_BITMAP)&EmpParseLock.SchedulerAssistLastYieldBoostTime,
              BitMapBuffer,
              *(_DWORD *)(a1 + 180));
            ExtEnvClearBits(v7, 0, *(_DWORD *)(a1 + 180));
            dword_140F87360 = (unsigned int)HalpGetIrtEntryCount() >> 9;
            v2 = ExtEnvAllocateMemory(v8, 0x2000u, &v12);
            if ( v2 >= 0 )
            {
              ExtEnvInitializeSpinLock(&EmpParseLock.Padding[4]);
              v9 = v12;
              dword_140F87388 = 128;
              qword_140F873A0[0] = v12;
              *(_OWORD *)(v12 + 8) = *(_OWORD *)&EmpParseLock.Spare32;
              *(_OWORD *)(v9 + 24) = *(_OWORD *)&EmpParseLock.SchedulerAssistYieldCounter;
              *(_QWORD *)(v9 + 40) = EmpParseLock.Padding[0];
              *(_DWORD *)(v9 + 48) = 1;
              *(_DWORD *)(v9 + 52) = -1;
              *(_DWORD *)(v9 + 56) = 0;
            }
          }
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v2;
}
