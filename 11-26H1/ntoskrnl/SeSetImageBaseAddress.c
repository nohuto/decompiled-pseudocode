/*
 * XREFs of SeSetImageBaseAddress @ 0x140B35488
 * Callers:
 *     MiRelocateImageAgain @ 0x14087B470 (MiRelocateImageAgain.c)
 *     MiRelocateFinish @ 0x1409CB614 (MiRelocateFinish.c)
 *     MiCaptureSecureImageBaseAddress @ 0x140B3540C (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeSetImageBaseAddress(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)&SepRmCapTableLock.ReservedPreviousReadyTimeValue )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 3221225659LL;
}
