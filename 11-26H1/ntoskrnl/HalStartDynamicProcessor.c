/*
 * XREFs of HalStartDynamicProcessor @ 0x14057EA90
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407BC9D8 (KiStartDynamicProcessor.c)
 *     HalpInterruptReinitialize @ 0x140BF0368 (HalpInterruptReinitialize.c)
 * Callees:
 *     HalpMcUpdateUnlock @ 0x1404E62FC (HalpMcUpdateUnlock.c)
 *     HalpMcUpdateLock @ 0x1404E6330 (HalpMcUpdateLock.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14057F37C (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpCheckNumaConfiguration @ 0x140593D68 (HalpCheckNumaConfiguration.c)
 *     MmLockPagableSectionByHandle @ 0x140A9F220 (MmLockPagableSectionByHandle.c)
 *     HalpInterruptStartProcessor @ 0x140BF0190 (HalpInterruptStartProcessor.c)
 */

__int64 __fastcall HalStartDynamicProcessor(__int64 a1, unsigned int a2, unsigned int a3, unsigned __int16 a4)
{
  __int64 v5; // rsi
  unsigned int started; // ebx
  __int64 v9; // rdx
  int v10; // esi
  __int64 i; // rcx
  int v12; // r10d

  v5 = a4;
  if ( HalpInterruptProcessorCap && HalpInterruptProcessorsStarted >= (unsigned int)HalpInterruptProcessorCap )
    return 2LL;
  if ( a2 >= (unsigned int)HalpQueryMaximumRegisteredProcessorCount()
    || !HalpInterruptClusterModeEnabled && !HalpInterruptPhysicalModeOnly && a2 >= HalpInterruptLogicalFlatLimit )
  {
    return 2LL;
  }
  if ( !HalpHiberInProgress )
  {
    MmLockPagableSectionByHandle(HalpSleepPageLock);
    HalpMcUpdateLock();
    if ( !(unsigned __int8)HalpCheckNumaConfiguration(a3, (unsigned __int16)v5) )
      return 2LL;
  }
  started = HalpInterruptStartProcessor(a2, a3, 1LL, a1);
  if ( started != 4 && !HalpHiberInProgress && HalpNumaConfig )
  {
    v9 = 2048LL;
    v10 = *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 24) + 4 * v5);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(HalpNumaConfig + 60); i = (unsigned int)(i + 1) )
    {
      v12 = *(_DWORD *)(*(_QWORD *)HalpNumaConfig + 4 * i);
      if ( v12 == a3 )
        goto LABEL_20;
      if ( *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 16) + 4 * i) == v10 && v12 == -1 )
        v9 = (unsigned int)i;
    }
    *(_DWORD *)(*(_QWORD *)HalpNumaConfig + 4 * v9) = a3;
  }
LABEL_20:
  if ( !HalpHiberInProgress )
    HalpMcUpdateUnlock();
  return started;
}
