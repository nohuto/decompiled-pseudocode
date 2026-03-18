/*
 * XREFs of VerifierExAllocatePool @ 0x140B81090
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     ExAllocatePool @ 0x14042F430 (ExAllocatePool.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ViPtLogPoolTraceWrapper @ 0x140B72100 (ViPtLogPoolTraceWrapper.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140B864B0 (VfFaultsInjectPoolAllocationFailure.c)
 */

__int64 __fastcall VerifierExAllocatePool(unsigned int PoolType, SIZE_T NumberOfBytes)
{
  __int64 result; // rax
  __int64 v5; // rcx

  if ( (PoolType & 2) == 0
    && ((VfRuleClasses & 0x40000) != 0
     && ViFnAutoFailInject
     && (unsigned __int8)guard_dispatch_icall_no_overrides("ExAllocatePoolWithTagPriority")
     || (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectPoolAllocationFailure(1885434455LL)) )
  {
    ViPtLogPoolTraceWrapper(0LL, 1885434455, NumberOfBytes, 0);
    if ( (PoolType & 0x10) == 0 )
      return 0LL;
LABEL_18:
    RtlRaiseStatus(-1073741670);
  }
  v5 = PoolType & 0xFFFFFFEF;
  if ( (PoolType & 0x10) == 0 )
    v5 = PoolType;
  if ( VfExAllocPoolInternal == (__int64 (__fastcall *)(__int64))pXdvExAllocatePool[0] || !pXdvExAllocatePool[0] )
  {
    result = (__int64)ExAllocatePool((POOL_TYPE)v5, NumberOfBytes);
  }
  else
  {
    LODWORD(v5) = v5 | 0x80;
    result = guard_dispatch_icall_no_overrides(v5);
  }
  if ( !result && (PoolType & 0x10) != 0 )
    goto LABEL_18;
  return result;
}
