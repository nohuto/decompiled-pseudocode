/*
 * XREFs of ?LockExclusive@ObjectWithIamLock@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1802FE6D4
 * Callers:
 *     ?HandleChainLinkEvent@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@PEAUIChainLinkEventArgs@2345@@Z @ 0x18022C8D0 (-HandleChainLinkEvent@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEA.c)
 *     ?AppendChainLink@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@@Z @ 0x1802FC8D0 (-AppendChainLink@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUICha.c)
 *     ?AppendChainLink@CImmersiveApp@@UEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x1802FC9A0 (-AppendChainLink@CImmersiveApp@@UEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z.c)
 *     ?ClearNextIfMatch@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x1802FCCD0 (-ClearNextIfMatch@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUICh.c)
 *     ?DeliverChainLinkEventInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAXW4ChainLinkEventTypeInternal@12345@@Z @ 0x1802FCEC4 (-DeliverChainLinkEventInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@.c)
 *     ?RemoveFromChainIfPreviousMatches@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x1802FF2DC (-RemoveFromChainIfPreviousMatches@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windo.c)
 * Callees:
 *     ??0CAutoSRWExclusiveLock@@QEAA@AEAVCSRWLock@@@Z @ 0x1801A72C4 (--0CAutoSRWExclusiveLock@@QEAA@AEAVCSRWLock@@@Z.c)
 */

CAutoSRWExclusiveLock *__fastcall ObjectWithIamLock::LockExclusive(__int64 a1, CAutoSRWExclusiveLock *a2)
{
  CAutoSRWExclusiveLock::CAutoSRWExclusiveLock(a2, CApplicationManagerUtility::g_pIAMGlobals);
  return a2;
}
