/*
 * XREFs of HalpProcessorPrepareForIdle @ 0x140582F50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpProcessorPrepareForIdle(char a1, __int64 a2)
{
  __int64 v2; // rcx

  if ( (a1 & 1) == 0 )
    _InterlockedOr((volatile signed __int32 *)&KeGetPcr()->HalReserved[9], 1u);
  if ( SLODWORD(KeGetCurrentPrcb()->HalReserved[3]) > 0 )
  {
    v2 = LODWORD(KeGetCurrentPrcb()->HalReserved[3]);
    if ( (v2 & 1) == 0 )
    {
      if ( HalpProfileInterface[9] )
        guard_dispatch_icall_no_overrides(v2, a2);
    }
  }
  return 0LL;
}
