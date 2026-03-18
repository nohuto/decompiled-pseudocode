/*
 * XREFs of ?NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@Z @ 0x1402DB4A4
 * Callers:
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x140164A04 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A8E4 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1402DCAF4 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     ?SendShellNotificationsForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NPEAVCDwmWindowNotifyBatch@@PEBUSystemOperationData@1@@Z @ 0x1402E8874 (-SendShellNotificationsForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NPEAVCDwmWindowNo.c)
 * Callees:
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x140161F20 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ?GetWindowTrackState@ShellWindowManagement@@YA?AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z @ 0x1401D6970 (-GetWindowTrackState@ShellWindowManagement@@YA-AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z.c)
 *     LogicalToPhysicalInPlaceRect @ 0x140209634 (LogicalToPhysicalInPlaceRect.c)
 *     ?WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x140265DD0 (-WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z.c)
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
