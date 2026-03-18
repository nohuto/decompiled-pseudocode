/*
 * XREFs of CmpDereferenceKeyControlBlockUnsafe @ 0x140A2F9B0
 * Callers:
 *     CmpLoadKeyCommon @ 0x14046E794 (CmpLoadKeyCommon.c)
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmpCreateKeyControlBlock @ 0x1408C4070 (CmpCreateKeyControlBlock.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmpRundownUnitOfWork @ 0x1408D0A08 (CmpRundownUnitOfWork.c)
 *     CmpCommitDiscardReplacePost @ 0x140A2F58C (CmpCommitDiscardReplacePost.c)
 *     CmpCreateSiloKeyLockEntry @ 0x140A2F80C (CmpCreateSiloKeyLockEntry.c)
 *     CmpFreezeHive @ 0x140A2F860 (CmpFreezeHive.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x140B4EA48 (CmpCreateGlobalKeyLockEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

signed __int64 __fastcall CmpDereferenceKeyControlBlockUnsafe(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedExchangeAdd64(a1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
    KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
  return result;
}
