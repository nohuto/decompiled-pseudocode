/*
 * XREFs of IovInitAiDb @ 0x1406460C0
 * Callers:
 *     ViIovInitialization @ 0x140C30C7C (ViIovInitialization.c)
 * Callees:
 *     IovExpandAiDbRawEntries @ 0x140646050 (IovExpandAiDbRawEntries.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     VfIsRuleClassEnabled @ 0x140C4C320 (VfIsRuleClassEnabled.c)
 */

__int64 IovInitAiDb()
{
  PRTL_AVL_TABLE v0; // rbx

  if ( (unsigned __int8)VfIsRuleClassEnabled(53LL)
    && KernelVerifier == 1
    && (IovAiDb = (PRTL_AVL_TABLE)ExAllocatePool2(0x240uLL)) != 0LL
    && (int)IovExpandAiDbRawEntries() >= 0 )
  {
    v0 = IovAiDb;
    memset_0(IovAiDb, 0, sizeof(_RTL_AVL_TABLE));
    v0->BalancedRoot.Parent = &v0->BalancedRoot;
    v0->CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))IovAiDbNodeCompare;
    v0->AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))IovAiDbNodeAlloc;
    v0->FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))IovAiDbNodeFree;
    _InterlockedExchange(&IovAiDbInitialized, 1);
  }
  else if ( IovAiDb )
  {
    ExFreePoolWithTag(IovAiDb, 0);
    IovAiDb = 0LL;
  }
  return 0LL;
}
