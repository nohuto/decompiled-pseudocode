/*
 * XREFs of VerifierExAllocatePool3 @ 0x140C358C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140C3A6F4 (VfFaultsInjectPoolAllocationFailure.c)
 */

__int64 __fastcall VerifierExAllocatePool3(
        __int64 a1,
        struct _KLOCK_ENTRIES *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v5; // rbx
  __int64 v10; // rcx
  __int64 result; // rax
  unsigned __int64 v12; // rdx

  v5 = a1 & 0x20;
  if ( (VfRuleClasses & 4) != 0
    && (v10 = a3, LODWORD(v10) = a3 & 0x7FFFFFFF, (unsigned int)VfFaultsInjectPoolAllocationFailure(v10))
    || (VfRuleClasses & 0x40000) != 0
    && ViFnAutoFailInject
    && (unsigned __int8)guard_dispatch_icall_no_overrides((__int64)"ExAllocatePool3", (__int64)a2) )
  {
    if ( !v5 )
      return 0LL;
LABEL_17:
    RtlRaiseStatus(-1073741670);
  }
  if ( VfExAllocPoolInternal == (__int64 (__fastcall *)(__int64, __int64))pXdvExAllocatePool3[0]
    || !pXdvExAllocatePool3[0] )
  {
    result = ExAllocatePool3(a1, a2, a3, a4, a5);
  }
  else
  {
    v12 = a1 & 0xFFFFFFFFFFFFFFDFuLL;
    if ( !v5 )
      v12 = a1;
    result = guard_dispatch_icall_no_overrides(0LL, v12 | 0x200);
  }
  if ( !result && v5 )
    goto LABEL_17;
  return result;
}
