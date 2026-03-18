/*
 * XREFs of GreAcquireEUDCPushLockExclusive2 @ 0x1401473E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GrepAcquirePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x140147584 (--$GrepAcquirePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z.c)
 *     ??$GrepGetGlobalPushLock@$0A@@@YAPEAVW32_PUSH_LOCK@@XZ @ 0x140147980 (--$GrepGetGlobalPushLock@$0A@@@YAPEAVW32_PUSH_LOCK@@XZ.c)
 */

__int64 GreAcquireEUDCPushLockExclusive2()
{
  __int64 GlobalPush; // rax
  __int64 v1; // rcx

  GlobalPush = GrepGetGlobalPushLock<0>();
  return GrepAcquirePushLockCommon<0,1,void (*)(W32_PUSH_LOCK *,unsigned long)>(v1, GlobalPush);
}
