/*
 * XREFs of CmpGetKcbAtLayerHeight @ 0x1408BACF0
 * Callers:
 *     CmQueryLayeredKey @ 0x1404922D0 (CmQueryLayeredKey.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x1404F39FC (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x140502014 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpCreateTombstone @ 0x1406E2950 (CmpCreateTombstone.c)
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x14086071C (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPartialPromoteSubkeys @ 0x1408607FC (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1408609F8 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpPromoteKey @ 0x1408B0E74 (CmpPromoteKey.c)
 *     CmpLockKcbStackExclusive @ 0x1408BA310 (CmpLockKcbStackExclusive.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408BA354 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoWritethroughReparse @ 0x1408C11D0 (CmpDoWritethroughReparse.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408D0B78 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140981D5C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x1409832A4 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140984E0C (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1409859F4 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140AE9194 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackVerifyResumeContext @ 0x140B19C34 (CmpKeyEnumStackVerifyResumeContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetKcbAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 >= 2 )
    return *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * a2 - 16);
  else
    return *(_QWORD *)(a1 + 8LL * a2 + 8);
}
