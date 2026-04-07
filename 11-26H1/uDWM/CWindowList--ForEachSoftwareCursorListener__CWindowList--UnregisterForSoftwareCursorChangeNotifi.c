/*
 * XREFs of CWindowList::ForEachSoftwareCursorListener__CWindowList::UnregisterForSoftwareCursorChangeNotification_::_2_::_lambda_1___ @ 0x18008C068
 * Callers:
 *     ?UnregisterForSoftwareCursorChangeNotification@CWindowList@@QEAAXPEAUISoftwareCursorChangeListener@@@Z @ 0x1800787D8 (-UnregisterForSoftwareCursorChangeNotification@CWindowList@@QEAAXPEAUISoftwareCursorChangeListen.c)
 * Callees:
 *     _CWindowList::UnregisterForSoftwareCursorChangeNotification_::_2_::_lambda_1_::operator() @ 0x1800DF71C (_CWindowList--UnregisterForSoftwareCursorChangeNotification_--_2_--_lambda_1_--operator().c)
 */

void __fastcall CWindowList::ForEachSoftwareCursorListener__CWindowList::UnregisterForSoftwareCursorChangeNotification_::_2_::_lambda_1___(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // r11
  int v5; // r11d

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 664); i = (unsigned int)(v5 + 1) )
  {
    if ( !(unsigned __int8)CWindowList::UnregisterForSoftwareCursorChangeNotification_::_2_::_lambda_1_::operator()(
                             a2,
                             *(_QWORD *)(*(_QWORD *)(a1 + 640) + 8 * i)) )
      break;
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
}
