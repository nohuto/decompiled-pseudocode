/*
 * XREFs of MiReloadBootLoadedDrivers @ 0x140D07090
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140D06810 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MmReleaseLoadLock @ 0x14049E200 (MmReleaseLoadLock.c)
 *     MiAcquireLoadLock @ 0x1404A507C (MiAcquireLoadLock.c)
 *     MiMapKernelScp @ 0x1404EC740 (MiMapKernelScp.c)
 *     MiProcessLoadConfigForDriver @ 0x140B079E0 (MiProcessLoadConfigForDriver.c)
 *     MiProcessKernelUmaImageLoadConfig @ 0x140B07A50 (MiProcessKernelUmaImageLoadConfig.c)
 *     MiApplyImportOptimizationToBootDriver @ 0x140D00AEC (MiApplyImportOptimizationToBootDriver.c)
 *     MiApplyRetpolineToBootDriver @ 0x140D00C48 (MiApplyRetpolineToBootDriver.c)
 *     MiApplyFunctionOverrideToBootDriver @ 0x140D05BF4 (MiApplyFunctionOverrideToBootDriver.c)
 *     MiHandleBootImage @ 0x140D0637C (MiHandleBootImage.c)
 */

LARGE_INTEGER __fastcall MiReloadBootLoadedDrivers(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 i; // rdi
  _QWORD *j; // rdi
  PVOID v5; // rsi
  unsigned __int64 v6; // rbp
  __int64 v7; // r8
  _QWORD *k; // rdi
  _QWORD *v9; // rdi
  unsigned __int64 v10; // rsi
  _QWORD *m; // rdi
  LARGE_INTEGER result; // rax

  MiAcquireLoadLock(1u);
  v2 = (_QWORD *)(a1 + 16);
  for ( i = *(_QWORD *)(a1 + 16); (_QWORD *)i != v2; i = *(_QWORD *)i )
  {
    if ( *(PVOID *)(i + 48) == PsNtosImageBase )
    {
      if ( (int)MiProcessKernelUmaImageLoadConfig(i) < 0 )
        continue;
    }
    else
    {
      MiProcessLoadConfigForDriver(i, 0LL);
    }
    MiHandleBootImage(a1, i);
  }
  MiFlags |= 0x2000uLL;
  MmReleaseLoadLock(0LL);
  for ( j = (_QWORD *)*v2; j != v2; j = (_QWORD *)*j )
  {
    v5 = (PVOID)j[6];
    v6 = ((unsigned __int64)*((unsigned int *)j + 16) + 4095) >> 12;
    if ( v5 != PsNtosImageBase && v5 != PsHalImageBase && !(unsigned int)MI_IS_PHYSICAL_ADDRESS(j[6]) )
      MiMapKernelScp((ULONG_PTR)v5, v6, v7);
  }
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
  {
    for ( k = (_QWORD *)*v2; k != v2; k = (_QWORD *)*k )
      MiApplyRetpolineToBootDriver((ULONG_PTR)k);
  }
  if ( (KiFeatureSettings & 0x20000) == 0 )
  {
    v9 = (_QWORD *)*v2;
    v10 = (unsigned __int64)MiIsTargetFullyRetpolined & -(__int64)((KiSpeculationFeatures & 0x20000000000LL) != 0);
    while ( v9 != v2 )
    {
      MiApplyImportOptimizationToBootDriver((__int64)v9, v10);
      v9 = (_QWORD *)*v9;
    }
  }
  for ( m = (_QWORD *)*v2; m != v2; m = (_QWORD *)*m )
    MiApplyFunctionOverrideToBootDriver((ULONG_PTR)m);
  result = KeQueryPerformanceCounter(0LL);
  qword_140FFC9D0 = result.QuadPart;
  return result;
}
