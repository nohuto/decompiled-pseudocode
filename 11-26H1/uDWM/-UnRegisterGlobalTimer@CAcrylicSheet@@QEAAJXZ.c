/*
 * XREFs of ?UnRegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ @ 0x18005E680
 * Callers:
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x18005E508 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     wil::details::lambda_call__CAcrylicSheet::StopAnimations_::_2_::_lambda_1___::_lambda_call__CAcrylicSheet::StopAnimations_::_2_::_lambda_1___ @ 0x18008D7E0 (wil--details--lambda_call__CAcrylicSheet--StopAnimations_--_2_--_lambda_1___--_lambda_call__CAcr.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180005C0C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CAcrylicSheet::UnRegisterGlobalTimer(CAcrylicSheet *this)
{
  if ( *((_BYTE *)this + 352) )
  {
    *((_BYTE *)this + 352) = 0;
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
  }
  return 0LL;
}
