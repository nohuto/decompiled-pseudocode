/*
 * XREFs of ??1?$CAutoUnlockPushLockEx@$00@@QEAA@XZ @ 0x14021F194
 * Callers:
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1402224C8 (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

void __fastcall CAutoUnlockPushLockEx<1>::~CAutoUnlockPushLockEx<1>(struct W32_PUSH_LOCK **a1)
{
  W32AcquirePushLockExclusiveEx(*a1, 0);
}
