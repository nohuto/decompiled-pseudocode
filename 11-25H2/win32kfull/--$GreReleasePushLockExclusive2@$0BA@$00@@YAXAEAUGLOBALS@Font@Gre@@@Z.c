/*
 * XREFs of ??$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1401213E0
 * Callers:
 *     bDeleteAllFlEntry @ 0x140107318 (bDeleteAllFlEntry.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1401470EC (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     GreEnableEUDC @ 0x140147400 (GreEnableEUDC.c)
 *     bAddAllFlEntry @ 0x1401475F8 (bAddAllFlEntry.c)
 *     ?WaitForConcurrentEUDCOperationCompletion@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140260F84 (-WaitForConcurrentEUDCOperationCompletion@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     GreEudcLoadLinkW @ 0x14030D518 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x14030D7E0 (GreEudcUnloadLinkW.c)
 *     NtGdiGetEudcTimeStampEx @ 0x14030E890 (NtGdiGetEudcTimeStampEx.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140121A70 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ??$GrepReleaseLockValidate@$0BA@@@YAXXZ @ 0x140121A98 (--$GrepReleaseLockValidate@$0BA@@@YAXXZ.c)
 */

__int64 __fastcall GreReleasePushLockExclusive2<16,1>(__int64 a1)
{
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(a1 + 8608), 0);
  return GrepReleaseLockValidate<16>();
}
