/*
 * XREFs of ExUnblockOnAddressPushLockEx @ 0x140369FB0
 * Callers:
 *     <none>
 * Callees:
 *     ExpUnblockPushLock @ 0x14036A040 (ExpUnblockPushLock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall ExUnblockOnAddressPushLockEx(__int64 *BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  __int64 result; // rax
  signed __int32 v3[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  _InterlockedOr(v3, 0);
  result = *BugCheckParameter2;
  if ( *BugCheckParameter2 )
    return ExpUnblockPushLock(BugCheckParameter2, 0LL, 0LL);
  return result;
}
