/*
 * XREFs of MiReloadBootLoadedDrivers @ 0x140D00CF0
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140D00470 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024C8D0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MmReleaseLoadLock @ 0x1404A4B70 (MmReleaseLoadLock.c)
 *     MiAcquireLoadLock @ 0x1404AB9EC (MiAcquireLoadLock.c)
 *     MiMapKernelScp @ 0x1404F3160 (MiMapKernelScp.c)
 *     MiProcessLoadConfigForDriver @ 0x140B0594C (MiProcessLoadConfigForDriver.c)
 *     MiProcessKernelUmaImageLoadConfig @ 0x140B059BC (MiProcessKernelUmaImageLoadConfig.c)
 *     MiApplyImportOptimizationToBootDriver @ 0x140CFA76C (MiApplyImportOptimizationToBootDriver.c)
 *     MiApplyRetpolineToBootDriver @ 0x140CFA8C8 (MiApplyRetpolineToBootDriver.c)
 *     MiApplyFunctionOverrideToBootDriver @ 0x140CFF854 (MiApplyFunctionOverrideToBootDriver.c)
 *     MiHandleBootImage @ 0x140CFFFDC (MiHandleBootImage.c)
 */

LARGE_INTEGER __fastcall MiReloadBootLoadedDrivers(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *i; // rdi
  _QWORD *j; // rdi
  ULONG_PTR v5; // rsi
  unsigned __int64 v6; // rbp
  __int64 v7; // r8
  _QWORD *k; // rdi
  _QWORD *v9; // rdi
  unsigned __int64 v10; // rsi
  _QWORD *m; // rdi
  LARGE_INTEGER result; // rax

  MiAcquireLoadLock(1u);
  v2 = (_QWORD *)(a1 + 16);
  for ( i = *(_QWORD **)(a1 + 16); i != v2; i = (_QWORD *)*i )
  {
    if ( i[6] == PsNtosImageBase )
    {
      if ( (int)MiProcessKernelUmaImageLoadConfig((__int64)i) < 0 )
        continue;
    }
    else
    {
      MiProcessLoadConfigForDriver((__int64)i, 0LL);
    }
    MiHandleBootImage(a1, (__int64)i);
  }
  MiFlags |= 0x2000uLL;
  MmReleaseLoadLock(0LL);
  for ( j = (_QWORD *)*v2; j != v2; j = (_QWORD *)*j )
  {
    v5 = j[6];
    v6 = ((unsigned __int64)*((unsigned int *)j + 16) + 4095) >> 12;
    if ( v5 != PsNtosImageBase && v5 != PsHalImageBase && !(unsigned int)MI_IS_PHYSICAL_ADDRESS(j[6]) )
      MiMapKernelScp(v5, v6, v7);
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
  qword_140FFB9D0 = result.QuadPart;
  return result;
}
