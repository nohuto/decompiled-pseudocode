/*
 * XREFs of VerifierExAllocatePoolWithTagPriority @ 0x140C35CD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTagPriority @ 0x14045ECF0 (ExAllocatePoolWithTagPriority.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140C3A6F4 (VfFaultsInjectPoolAllocationFailure.c)
 *     ViPtLogPoolTraceWrapper @ 0x140C4B06C (ViPtLogPoolTraceWrapper.c)
 */

__int64 __fastcall VerifierExAllocatePoolWithTagPriority(
        unsigned int PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        EX_POOL_PRIORITY Priority)
{
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rcx

  if ( (PoolType & 2) == 0 )
  {
    if ( (VfRuleClasses & 0x40000) != 0
      && ViFnAutoFailInject
      && (unsigned __int8)guard_dispatch_icall_no_overrides((__int64)"ExAllocatePoolWithTagPriority", NumberOfBytes)
      || (VfRuleClasses & 4) != 0
      && (v8 = Tag, LODWORD(v8) = Tag & 0x7FFFFFFF, (unsigned int)VfFaultsInjectPoolAllocationFailure(v8)) )
    {
      ViPtLogPoolTraceWrapper(0LL, Tag, NumberOfBytes, 0LL);
      if ( (PoolType & 0x10) == 0 )
        return 0LL;
LABEL_18:
      RtlRaiseStatus(-1073741670);
    }
  }
  v10 = PoolType & 0xFFFFFFEF;
  if ( (PoolType & 0x10) == 0 )
    v10 = PoolType;
  if ( (char *)VfExAllocPoolInternal == (char *)pXdvExAllocatePoolWithTagPriority || !pXdvExAllocatePoolWithTagPriority )
  {
    result = (__int64)ExAllocatePoolWithTagPriority((POOL_TYPE)v10, NumberOfBytes, Tag, Priority);
  }
  else
  {
    LODWORD(v10) = v10 | 0x80;
    result = guard_dispatch_icall_no_overrides(v10, 0LL);
  }
  if ( !result && (PoolType & 0x10) != 0 )
    goto LABEL_18;
  return result;
}
