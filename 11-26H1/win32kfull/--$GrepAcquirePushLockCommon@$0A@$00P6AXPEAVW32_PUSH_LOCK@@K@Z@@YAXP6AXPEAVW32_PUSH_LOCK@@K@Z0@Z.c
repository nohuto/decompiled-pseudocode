/*
 * XREFs of ??$GrepAcquirePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x1400F6B9C
 * Callers:
 *     GreAcquireEUDCPushLockExclusive2 @ 0x1400F6B70 (GreAcquireEUDCPushLockExclusive2.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1400F8354 (GreRemoveDisplayDriverRealizations.c)
 *     GreEnableEUDC @ 0x14016EE38 (GreEnableEUDC.c)
 *     ??0?$PushLockExclusiveObj@$0A@$00@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140291FCC (--0-$PushLockExclusiveObj@$0A@$00@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$0A@@@YAXXZ @ 0x1400F6BC4 (--$GrepAcquireLockValidate@$0A@@@YAXXZ.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB58C (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

void __fastcall GrepAcquirePushLockCommon<0,1,void (*)(W32_PUSH_LOCK *,unsigned long)>(
        __int64 a1,
        struct W32_PUSH_LOCK *a2)
{
  GrepAcquireLockValidate<0>();
  W32AcquirePushLockExclusiveEx(a2, 0);
}
