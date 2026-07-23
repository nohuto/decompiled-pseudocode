/*
 * XREFs of VerifierExInitializePagedLookasideList @ 0x140C44B70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID (__stdcall *__fastcall VerifierExInitializePagedLookasideList(
        __int64 a1,
        __int64 a2))(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  PVOID (__stdcall *result)(POOL_TYPE, SIZE_T, ULONG); // rax
  void *v4; // rax

  guard_dispatch_icall_no_overrides(a1, a2);
  result = (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))(unsigned int)VfRuleClasses;
  if ( (VfRuleClasses & 1) != 0 )
  {
    result = (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))ExFreePool;
    if ( *(void (__stdcall **)(PVOID))(a1 + 56) == ExFreePool )
    {
      result = *(PVOID (__stdcall **)(POOL_TYPE, SIZE_T, ULONG))(a1 + 48);
      if ( result == ExAllocatePoolWithTag )
      {
        v4 = VerifierExAllocatePoolWithTag;
      }
      else
      {
        if ( result != ExAllocatePoolWithQuotaTag )
          return result;
        v4 = VerifierExAllocatePoolWithQuotaTag;
      }
      *(_QWORD *)(a1 + 48) = v4;
      result = (PVOID (__stdcall *)(POOL_TYPE, SIZE_T, ULONG))VerifierExFreePool;
      *(_QWORD *)(a1 + 56) = VerifierExFreePool;
    }
  }
  return result;
}
