/*
 * XREFs of ??$GreReleasePushLockExclusive2@$0BA@$00@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400FAB9C
 * Callers:
 *     bAddAllFlEntry @ 0x1400CAAB4 (bAddAllFlEntry.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1400CB52C (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bDeleteAllFlEntry @ 0x14010469C (bDeleteAllFlEntry.c)
 *     GreEnableEUDC @ 0x14016EE38 (GreEnableEUDC.c)
 *     ?WaitForConcurrentEUDCOperationCompletion@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x14029600C (-WaitForConcurrentEUDCOperationCompletion@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     GreEudcLoadLinkW @ 0x14032453C (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x140324810 (GreEudcUnloadLinkW.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1403259B0 (NtGdiGetEudcTimeStampEx.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB5CC (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ??$GrepReleaseLockValidate@$0BA@@@YAXXZ @ 0x1400FB5F4 (--$GrepReleaseLockValidate@$0BA@@@YAXXZ.c)
 */

__int64 __fastcall GreReleasePushLockExclusive2<16,1>(__int64 a1)
{
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(a1 + 8608), 0);
  return GrepReleaseLockValidate<16>();
}
