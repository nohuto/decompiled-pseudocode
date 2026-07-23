/*
 * XREFs of ExpCheckForLookaside @ 0x140346FF8
 * Callers:
 *     ExpFreePoolChecks @ 0x140346B10 (ExpFreePoolChecks.c)
 *     ExFreeHeapPool @ 0x1403A9910 (ExFreeHeapPool.c)
 * Callees:
 *     ExpCheckForLookasideList @ 0x14034737C (ExpCheckForLookasideList.c)
 *     VfCheckForLookaside @ 0x140C4C350 (VfCheckForLookaside.c)
 */

__int64 __fastcall ExpCheckForLookaside(ULONG_PTR a1, ULONG_PTR a2)
{
  __int64 result; // rax

  if ( (MmVerifierData & 0x800) == 0 || (result = VfCheckForLookaside(a1, a2), !(_DWORD)result) )
  {
    ExpCheckForLookasideList(
      a1,
      a2,
      &ExSaPageGroupDescriptorArrayLock.WpsFeedback,
      &ExSaPageGroupDescriptorArrayLock.KernelShadowStackLimit);
    return ExpCheckForLookasideList(
             a1,
             a2,
             &ExSaPageGroupDescriptorArrayLock.Spare35[1],
             &ExSaPageGroupDescriptorArrayLock.ExtendedFeatureDisableMask);
  }
  return result;
}
