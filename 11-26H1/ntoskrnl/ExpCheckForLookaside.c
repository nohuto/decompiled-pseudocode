/*
 * XREFs of ExpCheckForLookaside @ 0x140344F78
 * Callers:
 *     ExpFreePoolChecks @ 0x140344A90 (ExpFreePoolChecks.c)
 *     ExFreeHeapPool @ 0x1403A7BB0 (ExFreeHeapPool.c)
 * Callees:
 *     ExpCheckForLookasideList @ 0x1403452FC (ExpCheckForLookasideList.c)
 *     VfCheckForLookaside @ 0x140C46340 (VfCheckForLookaside.c)
 */

__int64 __fastcall ExpCheckForLookaside(ULONG_PTR a1, ULONG_PTR a2)
{
  __int64 result; // rax

  if ( (MmVerifierData & 0x800) == 0 || (result = VfCheckForLookaside(a1, a2), !(_DWORD)result) )
  {
    ExpCheckForLookasideList(
      a1,
      a2,
      &ExSaPageGroupDescriptorArrayLock.KernelShadowStackBase,
      &ExSaPageGroupDescriptorArrayLock.KernelShadowStack);
    return ExpCheckForLookasideList(
             a1,
             a2,
             &ExSaPageGroupDescriptorArrayLock.InGlobalUpdateVpThreadPriorityList,
             &ExSaPageGroupDescriptorArrayLock.1008);
  }
  return result;
}
