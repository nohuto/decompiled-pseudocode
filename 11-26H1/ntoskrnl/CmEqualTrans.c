/*
 * XREFs of CmEqualTrans @ 0x1408C2FA0
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x1408C0924 (CmpGetSymbolicLinkTarget.c)
 *     CmDeleteKey @ 0x1408C1360 (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1408C2CA0 (CmpTransMgrFreeVolatileData.c)
 *     CmpLockIXLockIntent @ 0x1408C2E70 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x1408C2F20 (CmpLockIXLockExclusive.c)
 *     CmGetVisibleSubkeyCount @ 0x1408C2FF8 (CmGetVisibleSubkeyCount.c)
 *     CmpQueryKeyDataFromCache @ 0x1408C6F10 (CmpQueryKeyDataFromCache.c)
 *     CmGetKeyLastWriteTime @ 0x1408C85E0 (CmGetKeyLastWriteTime.c)
 *     CmpQueryKeyDataFromNode @ 0x1408C8DC0 (CmpQueryKeyDataFromNode.c)
 *     CmpFindSubKeyByNumberEx @ 0x1408C94A0 (CmpFindSubKeyByNumberEx.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 *     CmpWalkOneLevel @ 0x1408DBBE0 (CmpWalkOneLevel.c)
 *     CmGetKeyFlags @ 0x140AEE0F8 (CmGetKeyFlags.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C5E750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0 (CmpPerformKeyBodyDeletionCheck.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x140779DF0 (CmpTransUowIsEqual.c)
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
