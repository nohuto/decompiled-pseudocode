/*
 * XREFs of ?ShellRequestedStateChangeReasonToString@KeyboardHosting@@YAPEBGW4ShellRequestedStateChangeReason@1@@Z @ 0x18046FC90
 * Callers:
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x1800D3E80 (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x18046E760 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardView_ea_18046E760.c)
 *     ?OnShellViewCoordinatorShowRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEBUShowShellViewRequestedEventArgs@Shell@7WindowsUdk@winrt@@@Z @ 0x18046E8A4 (-OnShellViewCoordinatorShowRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall KeyboardHosting::ShellRequestedStateChangeReasonToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  if ( a1 <= 5 )
  {
    if ( a1 == 5 )
      return L"InputPaneTryShow";
    if ( !a1 )
      return L"AccessibilityKeyboardRequestShow";
    v1 = a1 - 1;
    if ( !v1 )
      return L"HotKey";
    v2 = v1 - 1;
    if ( !v2 )
      return L"PendingRequestExecute_CoreKeyboardClientRegistered";
    v3 = v2 - 1;
    if ( !v3 )
      return L"PendingRequestExecute_InputAppActivated";
    if ( v3 == 1 )
      return L"PendingRequestExecute_InputAppResumed";
    return L"Unknown";
  }
  v5 = a1 - 6;
  if ( !v5 )
    return L"HardwareKeyboardUIEnabled";
  v6 = v5 - 1;
  if ( !v6 )
    return L"DeferredRequestExecute_Timer";
  v7 = v6 - 1;
  if ( !v7 )
    return L"DeferredRequestExecute_EditControlSelectionChanged";
  if ( v7 != 1 )
    return L"Unknown";
  return L"ViewCoordinator";
}
