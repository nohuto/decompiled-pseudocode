/*
 * XREFs of CmpDereferenceKeyControlBlockUnsafe @ 0x140A41830
 * Callers:
 *     CmpLoadKeyCommon @ 0x140467F14 (CmpLoadKeyCommon.c)
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpCreateKeyControlBlock @ 0x1408CA640 (CmpCreateKeyControlBlock.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     CmpRundownUnitOfWork @ 0x1408D6FC8 (CmpRundownUnitOfWork.c)
 *     CmpCommitDiscardReplacePost @ 0x140A41418 (CmpCommitDiscardReplacePost.c)
 *     CmpCreateSiloKeyLockEntry @ 0x140A41684 (CmpCreateSiloKeyLockEntry.c)
 *     CmpFreezeHive @ 0x140A416D8 (CmpFreezeHive.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x140B512D8 (CmpCreateGlobalKeyLockEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

signed __int64 __fastcall CmpDereferenceKeyControlBlockUnsafe(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedExchangeAdd64(a1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
    KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
  return result;
}
