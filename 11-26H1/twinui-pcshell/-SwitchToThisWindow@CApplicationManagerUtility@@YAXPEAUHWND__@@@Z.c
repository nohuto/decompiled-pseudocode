/*
 * XREFs of ?SwitchToThisWindow@CApplicationManagerUtility@@YAXPEAUHWND__@@@Z @ 0x1802B1C94
 * Callers:
 *     ?SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z @ 0x1802334F0 (-SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z.c)
 *     ?SwitchToLastActiveApp@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802ECE40 (-SwitchToLastActiveApp@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?SwitchToThisApp@CClassicWindowManager@@UEAAJPEBG@Z @ 0x1802ECEF0 (-SwitchToThisApp@CClassicWindowManager@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z @ 0x1800ADB64 (-GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z.c)
 */

void __fastcall CApplicationManagerUtility::SwitchToThisWindow(CApplicationManagerUtility *this, HWND a2)
{
  CApplicationManagerUtility *LastActiveVisiblePopupOrSelf; // rax

  LastActiveVisiblePopupOrSelf = CApplicationManagerUtility::GetLastActiveVisiblePopupOrSelf(this, a2);
  SwitchToThisWindow((HWND)LastActiveVisiblePopupOrSelf, 1);
}
