/*
 * XREFs of HalpHvLpReadMultipleMsr @ 0x140453AA4
 * Callers:
 *     HalpHvLpReadMcaStatusMsr @ 0x1404538C4 (HalpHvLpReadMcaStatusMsr.c)
 *     HalpMcStagingHypervisor @ 0x140593A60 (HalpMcStagingHypervisor.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall HalpHvLpReadMultipleMsr(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  if ( qword_140FBB098 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  if ( (_DWORD)a2 )
    memset_0(a4, 0, 8LL * (unsigned int)a2);
  return 3221225473LL;
}
