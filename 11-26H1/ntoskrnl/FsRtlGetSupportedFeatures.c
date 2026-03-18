/*
 * XREFs of FsRtlGetSupportedFeatures @ 0x1404A2990
 * Callers:
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 *     IopQueryInformation @ 0x140903288 (IopQueryInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall FsRtlGetSupportedFeatures(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = 0;
  if ( FltMgrCallbacks )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
