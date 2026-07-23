/*
 * XREFs of VerifierExAllocatePool2 @ 0x140C4AE10
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExpPoolFlagsToPoolType @ 0x140C16F50 (ExpPoolFlagsToPoolType.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140C3A6F4 (VfFaultsInjectPoolAllocationFailure.c)
 *     ViPtLogPoolTraceWrapper @ 0x140C4B06C (ViPtLogPoolTraceWrapper.c)
 */

__int64 __fastcall VerifierExAllocatePool2(__int64 BugCheckParameter3, ULONG_PTR a2, unsigned int a3)
{
  __int64 v6; // rdx
  int v7; // ebx
  __int64 result; // rax
  _BYTE v9[4]; // [rsp+50h] [rbp-18h] BYREF
  int v10[3]; // [rsp+54h] [rbp-14h] BYREF
  char v11; // [rsp+88h] [rbp+20h] BYREF

  v10[0] = 0;
  if ( (int)ExpPoolFlagsToPoolType(BugCheckParameter3, 0, v10, v9, &v11) < 0 )
    return ExAllocatePool2(BugCheckParameter3, a2, a3);
  v7 = v10[0];
  if ( (v10[0] & 2) == 0
    && ((VfRuleClasses & 0x40000) != 0
     && ViFnAutoFailInject
     && (unsigned __int8)guard_dispatch_icall_no_overrides((__int64)"ExAllocatePoolWithTagPriority", v6)
     || (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectPoolAllocationFailure(a3 & 0x7FFFFFFF)) )
  {
    ViPtLogPoolTraceWrapper(0LL, a3, a2, 0LL);
    if ( (v7 & 0x10) != 0 )
      goto LABEL_7;
    return 0LL;
  }
  if ( (v7 & 8) != 0 )
    v7 &= ~8u;
  if ( (v7 & 0x10) != 0 )
    v7 &= ~0x10u;
  if ( VfExAllocPoolInternal == (__int64 (__fastcall *)(__int64, __int64))pXdvExAllocatePool2[0]
    || !pXdvExAllocatePool2[0] )
  {
    return ExAllocatePool2(BugCheckParameter3, a2, a3);
  }
  result = guard_dispatch_icall_no_overrides(v7 | 0x80u, 0LL);
  if ( !result && (BugCheckParameter3 & 0x20) != 0 )
LABEL_7:
    RtlRaiseStatus(-1073741670);
  return result;
}
