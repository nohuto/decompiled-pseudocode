/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___::operator() @ 0x1802DDFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x18012A870 (-_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTO.c)
 *     ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x1801FB070 (-_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ.c)
 */

void __fastcall CDelayIAMOperations::CDelayedOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___::operator()(
        __int64 a1)
{
  __int64 v2; // rcx

  if ( *(_BYTE *)(a1 + 32)
    || (*(_BYTE *)(a1 + 48) & 4) != 0
    || (int)CApplicationManager::_ActivateIamSpecialWindow(*(CApplicationManager **)(a1 + 16)) >= 0 )
  {
    CApplicationManager::_PerformDesktopActivationCallouts(
      *(CApplicationManager **)(a1 + 16),
      *(struct IObjectArray **)(a1 + 24),
      *(_DWORD *)(a1 + 48));
  }
  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
    SetEvent(*(HANDLE *)(v2 + 8));
}
