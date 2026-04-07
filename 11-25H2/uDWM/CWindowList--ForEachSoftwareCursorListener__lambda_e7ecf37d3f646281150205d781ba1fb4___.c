/*
 * XREFs of CWindowList::ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___ @ 0x180086078
 * Callers:
 *     ?UnregisterForSoftwareCursorChangeNotification@CWindowList@@QEAAXPEAUISoftwareCursorChangeListener@@@Z @ 0x18008604C (-UnregisterForSoftwareCursorChangeNotification@CWindowList@@QEAAXPEAUISoftwareCursorChangeListen.c)
 * Callees:
 *     _lambda_e7ecf37d3f646281150205d781ba1fb4_::operator() @ 0x1800E29E4 (_lambda_e7ecf37d3f646281150205d781ba1fb4_--operator().c)
 */

void __fastcall CWindowList::ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // r11
  int v5; // r11d

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 664); i = (unsigned int)(v5 + 1) )
  {
    if ( !(unsigned __int8)lambda_e7ecf37d3f646281150205d781ba1fb4_::operator()(
                             a2,
                             *(_QWORD *)(*(_QWORD *)(a1 + 640) + 8 * i)) )
      break;
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
}
