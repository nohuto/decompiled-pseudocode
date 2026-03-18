/*
 * XREFs of ??$GrepAcquirePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x140147584
 * Callers:
 *     GreRemoveDisplayDriverRealizations @ 0x140122EA8 (GreRemoveDisplayDriverRealizations.c)
 *     GreAcquireEUDCPushLockExclusive2 @ 0x1401473E0 (GreAcquireEUDCPushLockExclusive2.c)
 *     GreEnableEUDC @ 0x140147400 (GreEnableEUDC.c)
 *     ??0?$PushLockExclusiveObj@$0A@$00@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14026BD40 (--0-$PushLockExclusiveObj@$0A@$00@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$0A@@@YAXXZ @ 0x1400D7E20 (--$GrepAcquireLockValidate@$0A@@@YAXXZ.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140121C48 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

void __fastcall GrepAcquirePushLockCommon<0,1,void (*)(W32_PUSH_LOCK *,unsigned long)>(
        __int64 a1,
        struct W32_PUSH_LOCK *a2)
{
  GrepAcquireLockValidate<0>();
  W32AcquirePushLockExclusiveEx(a2, 0);
}
