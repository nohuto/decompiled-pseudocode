/*
 * XREFs of ??$GrepReleasePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x1401228E4
 * Callers:
 *     GreRemoveDisplayDriverRealizations @ 0x140122EA8 (GreRemoveDisplayDriverRealizations.c)
 *     GreEnableEUDC @ 0x140147400 (GreEnableEUDC.c)
 *     GreReleaseEUDCPushLockExclusive2 @ 0x140147960 (GreReleaseEUDCPushLockExclusive2.c)
 *     GreEudcLoadLinkW @ 0x14030D518 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x14030D7E0 (GreEudcUnloadLinkW.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140121A70 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ??$GrepReleaseLockValidate@$0A@@@YAXXZ @ 0x140122904 (--$GrepReleaseLockValidate@$0A@@@YAXXZ.c)
 */

__int64 __fastcall GrepReleasePushLockCommon<0,1,void (*)(W32_PUSH_LOCK *,unsigned long)>(
        __int64 a1,
        struct W32_PUSH_LOCK *a2)
{
  W32ReleasePushLockExclusiveEx(a2, 0LL);
  return GrepReleaseLockValidate<0>();
}
