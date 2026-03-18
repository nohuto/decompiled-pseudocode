/*
 * XREFs of VerifierExAllocatePool @ 0x140C2F790
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     ExAllocatePool @ 0x140457440 (ExAllocatePool.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140C346E4 (VfFaultsInjectPoolAllocationFailure.c)
 *     ViPtLogPoolTraceWrapper @ 0x140C4505C (ViPtLogPoolTraceWrapper.c)
 */

__int64 __fastcall VerifierExAllocatePool(unsigned int PoolType, SIZE_T NumberOfBytes)
{
  __int64 result; // rax
  __int64 v5; // rcx

  if ( (PoolType & 2) == 0
    && ((VfRuleClasses & 0x40000) != 0
     && ViFnAutoFailInject
     && (unsigned __int8)guard_dispatch_icall_no_overrides((__int64)"ExAllocatePoolWithTagPriority", NumberOfBytes)
     || (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectPoolAllocationFailure(1885434455LL)) )
  {
    ViPtLogPoolTraceWrapper(0LL, 1885434455LL, NumberOfBytes, 0LL);
    if ( (PoolType & 0x10) == 0 )
      return 0LL;
LABEL_18:
    RtlRaiseStatus(-1073741670);
  }
  v5 = PoolType & 0xFFFFFFEF;
  if ( (PoolType & 0x10) == 0 )
    v5 = PoolType;
  if ( (char *)VfExAllocPoolInternal == (char *)pXdvExAllocatePool || !pXdvExAllocatePool )
  {
    result = (__int64)ExAllocatePool((POOL_TYPE)v5, NumberOfBytes);
  }
  else
  {
    LODWORD(v5) = v5 | 0x80;
    result = guard_dispatch_icall_no_overrides(v5, 0LL);
  }
  if ( !result && (PoolType & 0x10) != 0 )
    goto LABEL_18;
  return result;
}
