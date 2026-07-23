/*
 * XREFs of HalpHvLpReadMultipleMsr @ 0x14044BBD4
 * Callers:
 *     HalpHvLpReadMcaStatusMsr @ 0x14044B9F4 (HalpHvLpReadMcaStatusMsr.c)
 *     HalpMcStagingHypervisor @ 0x1405961E0 (HalpMcStagingHypervisor.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpHvLpReadMultipleMsr(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  if ( qword_140FBB438 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  if ( (_DWORD)a2 )
    memset_0(a4, 0, 8LL * (unsigned int)a2);
  return 3221225473LL;
}
