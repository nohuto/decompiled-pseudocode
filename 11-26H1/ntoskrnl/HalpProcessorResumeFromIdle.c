/*
 * XREFs of HalpProcessorResumeFromIdle @ 0x140582FB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

struct _KPRCB *__fastcall HalpProcessorResumeFromIdle(__int64 a1, __int64 a2)
{
  struct _KPRCB *result; // rax
  __int64 v3; // rcx

  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[9], 0xFFFFFFFE);
  result = KeGetCurrentPrcb();
  if ( SLODWORD(result->HalReserved[3]) > 0 )
  {
    result = KeGetCurrentPrcb();
    v3 = LODWORD(result->HalReserved[3]);
    if ( (v3 & 1) == 0 )
    {
      result = (struct _KPRCB *)HalpProfileInterface[10];
      if ( result )
        return (struct _KPRCB *)guard_dispatch_icall_no_overrides(v3, a2);
    }
  }
  return result;
}
