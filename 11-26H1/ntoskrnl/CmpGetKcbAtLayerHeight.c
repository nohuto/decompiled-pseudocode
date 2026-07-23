/*
 * XREFs of CmpGetKcbAtLayerHeight @ 0x1408C12C0
 * Callers:
 *     CmQueryLayeredKey @ 0x14048BE20 (CmQueryLayeredKey.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x1404ECFDC (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x1404FB8E4 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpCreateTombstone @ 0x1406E6C30 (CmpCreateTombstone.c)
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140866A0C (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPartialPromoteSubkeys @ 0x140866AEC (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140866CE8 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpPromoteKey @ 0x1408B7364 (CmpPromoteKey.c)
 *     CmpLockKcbStackExclusive @ 0x1408C08E0 (CmpLockKcbStackExclusive.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408C0924 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoWritethroughReparse @ 0x1408C77A0 (CmpDoWritethroughReparse.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408D7138 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140943D6C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x1409452B4 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140946E1C (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1409479F4 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140AEB544 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackVerifyResumeContext @ 0x140B1C084 (CmpKeyEnumStackVerifyResumeContext.c)
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
