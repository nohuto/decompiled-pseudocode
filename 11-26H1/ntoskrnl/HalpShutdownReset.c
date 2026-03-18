/*
 * XREFs of HalpShutdownReset @ 0x14057FCB0
 * Callers:
 *     <none>
 * Callees:
 *     HalReturnToFirmware @ 0x14057F640 (HalReturnToFirmware.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall __noreturn HalpShutdownReset(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        volatile signed __int32 *a5)
{
  unsigned int v5; // ebx
  struct _KPRCB *CurrentPrcb; // rsi

  v5 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( _InterlockedDecrement(a5) )
  {
    do
    {
      if ( (++v5 & dword_140FBB03C) != 0 || !qword_140FBB040 )
        _mm_pause();
      else
        guard_dispatch_icall_no_overrides(v5, a2);
    }
    while ( *a5 );
  }
  LODWORD(HalpPmuArbiter.FirstArgument) = 1;
  if ( !CurrentPrcb->Number )
    HalReturnToFirmware(3);
  while ( 1 )
    _mm_pause();
}
