/*
 * XREFs of ?SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z @ 0x1800AD91C
 * Callers:
 *     ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x1801FB070 (-_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ.c)
 *     ?SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z @ 0x1802334F0 (-SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z.c)
 *     _lambda_962fc89a5bac582bde0e3fc2d93f2aaa_::operator() @ 0x1802DDF34 (_lambda_962fc89a5bac582bde0e3fc2d93f2aaa_--operator().c)
 *     ?SwitchToLastActiveApp@CImmersiveWindowManager@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802EAEB0 (-SwitchToLastActiveApp@CImmersiveWindowManager@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z @ 0x1800ADB64 (-GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z.c)
 */

__int64 __fastcall CApplicationManagerUtility::SetForegroundWindow(CApplicationManagerUtility *this, HWND a2)
{
  HWND LastActiveVisiblePopupOrSelf; // rax

  LastActiveVisiblePopupOrSelf = CApplicationManagerUtility::GetLastActiveVisiblePopupOrSelf(this, a2);
  return !SetForegroundWindow(LastActiveVisiblePopupOrSelf) ? 0x80070005 : 0;
}
