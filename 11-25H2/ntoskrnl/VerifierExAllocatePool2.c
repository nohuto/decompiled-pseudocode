/*
 * XREFs of VerifierExAllocatePool2 @ 0x140B811B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExpPoolFlagsToPoolType @ 0x140B64240 (ExpPoolFlagsToPoolType.c)
 *     ViPtLogPoolTraceWrapper @ 0x140B72100 (ViPtLogPoolTraceWrapper.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140B864B0 (VfFaultsInjectPoolAllocationFailure.c)
 */

__int64 __fastcall VerifierExAllocatePool2(__int64 BugCheckParameter3, ULONG_PTR a2, unsigned int a3)
{
  ULONG_PTR v6; // rcx
  int v7; // ebx
  __int64 v8; // rcx
  __int64 result; // rax
  _BYTE v10[4]; // [rsp+50h] [rbp-18h] BYREF
  int v11[3]; // [rsp+54h] [rbp-14h] BYREF
  char v12; // [rsp+88h] [rbp+20h] BYREF

  v11[0] = 0;
  if ( (int)ExpPoolFlagsToPoolType(BugCheckParameter3, 0, v11, v10, &v12) < 0 )
    return ExAllocatePool2(v6, a2, a3);
  v7 = v11[0];
  if ( (v11[0] & 2) == 0 )
  {
    if ( (VfRuleClasses & 0x40000) != 0
      && ViFnAutoFailInject
      && (unsigned __int8)guard_dispatch_icall_no_overrides("ExAllocatePoolWithTagPriority")
      || (VfRuleClasses & 4) != 0
      && (v8 = a3, LODWORD(v8) = a3 & 0x7FFFFFFF, (unsigned int)VfFaultsInjectPoolAllocationFailure(v8)) )
    {
      ViPtLogPoolTraceWrapper(0LL, a3, a2, 0);
      if ( (v7 & 0x10) == 0 )
        return 0LL;
LABEL_18:
      RtlRaiseStatus(-1073741670);
    }
  }
  if ( (v7 & 8) != 0 )
    v7 &= ~8u;
  if ( (v7 & 0x10) != 0 )
    v7 &= ~0x10u;
  if ( VfExAllocPoolInternal == (__int64 (__fastcall *)(__int64))pXdvExAllocatePool2[0] || !pXdvExAllocatePool2[0] )
  {
    v6 = BugCheckParameter3;
    return ExAllocatePool2(v6, a2, a3);
  }
  result = guard_dispatch_icall_no_overrides(v7 | 0x80u);
  if ( !result && (BugCheckParameter3 & 0x20) != 0 )
    goto LABEL_18;
  return result;
}
