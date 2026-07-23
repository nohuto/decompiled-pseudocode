/*
 * XREFs of SeSetImageBaseAddress @ 0x140B37698
 * Callers:
 *     MiRelocateImageAgain @ 0x140881870 (MiRelocateImageAgain.c)
 *     MiRelocateFinish @ 0x14099C5F4 (MiRelocateFinish.c)
 *     MiCaptureSecureImageBaseAddress @ 0x140B3761C (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeSetImageBaseAddress(__int64 a1, __int64 a2)
{
  if ( SepRmCapTableLock.InGlobalUpdateVpThreadPriorityList )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 3221225659LL;
}
