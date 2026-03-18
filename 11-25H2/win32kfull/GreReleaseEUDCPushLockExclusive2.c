/*
 * XREFs of GreReleaseEUDCPushLockExclusive2 @ 0x140147960
 * Callers:
 *     <none>
 * Callees:
 *     ??$GrepReleasePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x1401228E4 (--$GrepReleasePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z.c)
 *     ??$GrepGetGlobalPushLock@$0A@@@YAPEAVW32_PUSH_LOCK@@XZ @ 0x140147980 (--$GrepGetGlobalPushLock@$0A@@@YAPEAVW32_PUSH_LOCK@@XZ.c)
 */

__int64 GreReleaseEUDCPushLockExclusive2()
{
  struct W32_PUSH_LOCK *GlobalPush; // rax
  __int64 v1; // rcx

  GlobalPush = (struct W32_PUSH_LOCK *)GrepGetGlobalPushLock<0>();
  return GrepReleasePushLockCommon<0,1,void (*)(W32_PUSH_LOCK *,unsigned long)>(v1, GlobalPush);
}
