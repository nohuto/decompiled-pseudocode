/*
 * XREFs of ??0?$CAutoUnlockPushLockEx@$00@@QEAA@PEAVW32_PUSH_LOCK@@@Z @ 0x14021EF88
 * Callers:
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1402224C8 (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

struct W32_PUSH_LOCK **__fastcall CAutoUnlockPushLockEx<1>::CAutoUnlockPushLockEx<1>(
        struct W32_PUSH_LOCK **a1,
        struct W32_PUSH_LOCK *a2)
{
  *a1 = a2;
  W32ReleasePushLockExclusiveEx(a2, 0LL);
  return a1;
}
