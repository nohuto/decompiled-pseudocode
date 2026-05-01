/*
 * XREFs of ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x1801FB070
 * Callers:
 *     ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x1802973E0 (-SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_.c)
 *     CDelayIAMOperations::CDelayedOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___::operator() @ 0x1802DDFA0 (CDelayIAMOperations--CDelayedOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___--operator().c)
 * Callees:
 *     ?SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z @ 0x1800AD91C (-SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z.c)
 *     ?CanChangeForeground@@YAJXZ @ 0x1800AE468 (-CanChangeForeground@@YAJXZ.c)
 *     ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x1801FB0D8 (-_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ.c)
 *     ?ResultFromLastError@@YAJXZ @ 0x1801FB250 (-ResultFromLastError@@YAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApplicationManager::_ActivateIamSpecialWindow(CApplicationManager *this)
{
  __int64 result; // rax
  CApplicationManagerUtility *v3; // rax
  HWND v4; // rdx

  result = CApplicationManager::_ValidateCallerUiContextForDesktopSwitch(this);
  if ( (int)result >= 0 )
  {
    result = CanChangeForeground();
    if ( (int)result >= 0 )
    {
      v3 = (CApplicationManagerUtility *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 94) + 24LL))(*((_QWORD *)this + 94));
      result = CApplicationManagerUtility::SetForegroundWindow(v3, v4);
      if ( (int)result >= 0 )
      {
        if ( AllowSetForegroundWindow(0xFFFFFFFF) )
          return 0LL;
        else
          return ResultFromLastError();
      }
    }
  }
  return result;
}
