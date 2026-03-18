/*
 * XREFs of CmpReferenceKeyControlBlockUnsafe @ 0x1408BC670
 * Callers:
 *     CmpLoadKeyCommon @ 0x14046E794 (CmpLoadKeyCommon.c)
 *     CmpCloneToUnbackedKcb @ 0x140859194 (CmpCloneToUnbackedKcb.c)
 *     CmLoadAppKey @ 0x1408B2250 (CmLoadAppKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408BA354 (CmpGetSymbolicLinkTarget.c)
 *     CmpTransMgrFreeVolatileData @ 0x1408BC6D0 (CmpTransMgrFreeVolatileData.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmpLinkHiveToMaster @ 0x14097C11C (CmpLinkHiveToMaster.c)
 *     CmpEnumerateLayeredKey @ 0x140982A88 (CmpEnumerateLayeredKey.c)
 *     CmpCommitDiscardReplacePost @ 0x140A2F58C (CmpCommitDiscardReplacePost.c)
 *     CmpCreateSiloKeyLockEntry @ 0x140A2F80C (CmpCreateSiloKeyLockEntry.c)
 *     CmpFreezeHive @ 0x140A2F860 (CmpFreezeHive.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140AE9194 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x140B4EA48 (CmpCreateGlobalKeyLockEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpReferenceKeyControlBlockUnsafe(volatile signed __int64 *BugCheckParameter2)
{
  __int64 result; // rax

  result = _InterlockedIncrement64(BugCheckParameter2);
  if ( !result )
    KeBugCheckEx(0x51u, 0x24uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  if ( result == 1 )
    KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
  return result;
}
