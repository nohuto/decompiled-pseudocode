/*
 * XREFs of EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x14082D450
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140B38820 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpFindMatchingPmcRegistryGroup @ 0x14082BDA4 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x14082D1D0 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     KiGetCpuVendor @ 0x140C10708 (KiGetCpuVendor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpRemoveMicroarchitecturalPmcFromRegistry(wchar_t *Str1, size_t MaxCount, __int64 a3)
{
  unsigned int v4; // esi
  int CpuVendor; // eax
  __int64 v7; // r9
  int v8; // r15d
  unsigned int v9; // edi
  wchar_t *Pool2; // rax
  __int64 v11; // rcx
  WCHAR *v12; // rbx
  int MatchingPmcRegistryGroup; // edi

  v4 = MaxCount;
  CpuVendor = KiGetCpuVendor();
  v7 = -1LL;
  v8 = CpuVendor;
  do
    ++v7;
  while ( aRegistryMachin_27[v7] );
  v9 = 2 * v7 + 514;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  v12 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  MatchingPmcRegistryGroup = EtwpFindMatchingPmcRegistryGroup(v11, v8, a3, v9, Pool2);
  if ( MatchingPmcRegistryGroup >= 0 )
    MatchingPmcRegistryGroup = EtwpRemoveMicroarchitecturalPmcFromPmcGroup(v12, Str1, v4);
  ExFreePoolWithTag(v12, 0x50777445u);
  return (unsigned int)MatchingPmcRegistryGroup;
}
