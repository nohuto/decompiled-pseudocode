/*
 * XREFs of CmEqualTrans @ 0x1408BC9D0
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x1408BA354 (CmpGetSymbolicLinkTarget.c)
 *     CmDeleteKey @ 0x1408BAD90 (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1408BC6D0 (CmpTransMgrFreeVolatileData.c)
 *     CmpLockIXLockIntent @ 0x1408BC8A0 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x1408BC950 (CmpLockIXLockExclusive.c)
 *     CmGetVisibleSubkeyCount @ 0x1408BCA28 (CmGetVisibleSubkeyCount.c)
 *     CmpQueryKeyDataFromCache @ 0x1408C0940 (CmpQueryKeyDataFromCache.c)
 *     CmGetKeyLastWriteTime @ 0x1408C2010 (CmGetKeyLastWriteTime.c)
 *     CmpQueryKeyDataFromNode @ 0x1408C27F0 (CmpQueryKeyDataFromNode.c)
 *     CmpFindSubKeyByNumberEx @ 0x1408C2ED0 (CmpFindSubKeyByNumberEx.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmSetValueKey @ 0x1408CEE30 (CmSetValueKey.c)
 *     CmpWalkOneLevel @ 0x1408D5620 (CmpWalkOneLevel.c)
 *     CmGetKeyFlags @ 0x140AEB1EC (CmGetKeyFlags.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C58750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C587C0 (CmpPerformKeyBodyDeletionCheck.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x140776F48 (CmpTransUowIsEqual.c)
 */

char __fastcall CmEqualTrans(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8

  if ( !a1 || !a2 )
    return 0;
  if ( a1 == a2 )
    return 1;
  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 && (v4 = *(_QWORD *)(a2 + 56)) != 0 )
    return v3 == v4;
  else
    return CmpTransUowIsEqual((const void *)(a1 + 88), (const void *)(a2 + 88));
}
