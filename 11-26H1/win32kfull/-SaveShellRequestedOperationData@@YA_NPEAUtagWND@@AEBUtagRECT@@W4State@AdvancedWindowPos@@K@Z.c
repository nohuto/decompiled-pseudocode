/*
 * XREFs of ?SaveShellRequestedOperationData@@YA_NPEAUtagWND@@AEBUtagRECT@@W4State@AdvancedWindowPos@@K@Z @ 0x140295068
 * Callers:
 *     ?xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPos@@@Z @ 0x14022B82C (-xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPo.c)
 *     ?xxxMigrateArrangedRect@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_REASON@@U3@PEAW4State@AdvancedWindowPos@@PEAKPEAU_WINDOW_ACTION@@@Z @ 0x14022C618 (-xxxMigrateArrangedRect@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_.c)
 *     ?xxxInterceptSetSnapArrangementPos@WindowActions@@YAXPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@WindowArrangement@@K@Z @ 0x1402E5FFC (-xxxInterceptSetSnapArrangementPos@WindowActions@@YAXPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOp.c)
 * Callees:
 *     ?SaveSystemOperationData@@YA_NPEAUtagWND@@AEBUSystemOperationData@AdvancedWindowPos@@@Z @ 0x140264104 (-SaveSystemOperationData@@YA_NPEAUtagWND@@AEBUSystemOperationData@AdvancedWindowPos@@@Z.c)
 */

char __fastcall SaveShellRequestedOperationData(struct tagWND *a1, __int128 *a2, int a3, int a4)
{
  __int128 v4; // xmm0
  int v6; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+24h] [rbp-34h]
  int v8; // [rsp+34h] [rbp-24h]
  int v9; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+3Ch] [rbp-1Ch]

  v4 = *a2;
  v6 = 2;
  v10 = 0LL;
  v7 = v4;
  v8 = a3;
  v9 = a4;
  return SaveSystemOperationData(a1, (const struct AdvancedWindowPos::SystemOperationData *)&v6);
}
