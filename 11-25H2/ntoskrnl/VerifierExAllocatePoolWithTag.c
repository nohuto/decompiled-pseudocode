/*
 * XREFs of VerifierExAllocatePoolWithTag @ 0x140B815E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePoolWithTag @ 0x140B62010 (ExAllocatePoolWithTag.c)
 *     ViPtLogPoolTraceWrapper @ 0x140B72100 (ViPtLogPoolTraceWrapper.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140B864B0 (VfFaultsInjectPoolAllocationFailure.c)
 */

__int64 __fastcall VerifierExAllocatePoolWithTag(unsigned int PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rcx

  if ( (PoolType & 2) == 0 )
  {
    if ( (VfRuleClasses & 0x40000) != 0
      && ViFnAutoFailInject
      && (unsigned __int8)guard_dispatch_icall_no_overrides("ExAllocatePoolWithTagPriority")
      || (VfRuleClasses & 4) != 0
      && (v6 = Tag, LODWORD(v6) = Tag & 0x7FFFFFFF, (unsigned int)VfFaultsInjectPoolAllocationFailure(v6)) )
    {
      ViPtLogPoolTraceWrapper(0LL, Tag, NumberOfBytes, 0);
      if ( (PoolType & 0x10) == 0 )
        return 0LL;
LABEL_18:
      RtlRaiseStatus(-1073741670);
    }
  }
  v8 = PoolType & 0xFFFFFFEF;
  if ( (PoolType & 0x10) == 0 )
    v8 = PoolType;
  if ( VfExAllocPoolInternal == (__int64 (__fastcall *)(__int64))pXdvExAllocatePoolWithTag[0]
    || !pXdvExAllocatePoolWithTag[0] )
  {
    result = (__int64)ExAllocatePoolWithTag((POOL_TYPE)v8, NumberOfBytes, Tag);
  }
  else
  {
    LODWORD(v8) = v8 | 0x80;
    result = guard_dispatch_icall_no_overrides(v8);
  }
  if ( !result && (PoolType & 0x10) != 0 )
    goto LABEL_18;
  return result;
}
