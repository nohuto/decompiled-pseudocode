/*
 * XREFs of ??$GrepReleasePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x1400F6A9C
 * Callers:
 *     GreReleaseEUDCPushLockExclusive2 @ 0x1400F6A70 (GreReleaseEUDCPushLockExclusive2.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1400F8354 (GreRemoveDisplayDriverRealizations.c)
 *     GreEnableEUDC @ 0x14016EE38 (GreEnableEUDC.c)
 *     GreEudcLoadLinkW @ 0x14032453C (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x140324810 (GreEudcUnloadLinkW.c)
 * Callees:
 *     ??$GrepReleaseLockValidate@$0A@@@YAXXZ @ 0x1400F6ABC (--$GrepReleaseLockValidate@$0A@@@YAXXZ.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB5CC (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

__int64 __fastcall GrepReleasePushLockCommon<0,1,void (*)(W32_PUSH_LOCK *,unsigned long)>(
        __int64 a1,
        struct W32_PUSH_LOCK *a2)
{
  W32ReleasePushLockExclusiveEx(a2, 0);
  return GrepReleaseLockValidate<0>();
}
