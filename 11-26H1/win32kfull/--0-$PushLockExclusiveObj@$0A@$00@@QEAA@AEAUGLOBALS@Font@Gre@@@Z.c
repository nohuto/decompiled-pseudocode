/*
 * XREFs of ??0?$PushLockExclusiveObj@$0A@$00@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140291FCC
 * Callers:
 *     GreEudcLoadLinkW @ 0x14032453C (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x140324810 (GreEudcUnloadLinkW.c)
 * Callees:
 *     ??$GrepAcquirePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x1400F6B9C (--$GrepAcquirePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z.c)
 */

struct W32_PUSH_LOCK **__fastcall PushLockExclusiveObj<0,1>::PushLockExclusiveObj<0,1>(
        struct W32_PUSH_LOCK **a1,
        __int64 a2)
{
  struct W32_PUSH_LOCK *v2; // rdx

  v2 = (struct W32_PUSH_LOCK *)(a2 + 8624);
  *a1 = v2;
  GrepAcquirePushLockCommon<0,1,void (*)(W32_PUSH_LOCK *,unsigned long)>((__int64)a1, v2);
  return a1;
}
