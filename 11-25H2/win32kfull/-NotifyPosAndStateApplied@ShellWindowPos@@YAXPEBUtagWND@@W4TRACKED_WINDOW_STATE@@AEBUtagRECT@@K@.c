/*
 * XREFs of ?NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@Z @ 0x1402C1B9C
 * Callers:
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x140027A5C (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A2E8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1402C3448 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     ?SendShellNotificationsForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NPEAVCDwmWindowNotifyBatch@@PEBUSystemOperationData@1@@Z @ 0x1402D560C (-SendShellNotificationsForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NPEAVCDwmWindowNo.c)
 * Callees:
 *     ?WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x14014B5A4 (-WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014EE58 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     LogicalToPhysicalInPlaceRect @ 0x1401D75A8 (LogicalToPhysicalInPlaceRect.c)
 *     ?GetWindowTrackState@ShellWindowManagement@@YA?AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z @ 0x14026A78C (-GetWindowTrackState@ShellWindowManagement@@YA-AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z.c)
 */

void __fastcall ShellWindowPos::NotifyPosAndStateApplied(const struct tagWND *a1, int a2, _OWORD *a3, int a4)
{
  const struct tagSHELL_REQUESTED_POS_APPLIED *v6; // r8
  _BYTE v7[16]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v8[56]; // [rsp+30h] [rbp-40h] BYREF
  int v9; // [rsp+68h] [rbp-8h]

  v9 = 0;
  memset(v8, 0, sizeof(v8));
  *(_DWORD *)v8 = a2;
  if ( (unsigned int)(a2 - 1) > 1 )
    *(_OWORD *)&v8[8] = *a3;
  *(_DWORD *)&v8[4] = ShellWindowManagement::GetWindowTrackState(a1, 1);
  if ( *(_DWORD *)&v8[4] != 2 )
  {
    *(struct tagRECT *)&v8[24] = *WindowMargins::ReduceRect(
                                    (WindowMargins *)v7,
                                    (struct tagRECT *)a1,
                                    (const struct tagWND *)(*((_QWORD *)a1 + 5) + 88LL),
                                    0LL);
    LogicalToPhysicalInPlaceRect((__int64)a1, (__int64)&v8[24]);
    *(_OWORD *)&v8[40] = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
    LogicalToPhysicalInPlaceRect((__int64)a1, (__int64)&v8[40]);
  }
  v9 = a4;
  NotifyShell::WindowPosAndStateApplied(a1, (const struct tagWND *)v8, v6);
}
