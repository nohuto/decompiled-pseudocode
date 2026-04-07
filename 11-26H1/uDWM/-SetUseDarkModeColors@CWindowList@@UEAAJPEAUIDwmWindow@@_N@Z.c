/*
 * XREFs of ?SetUseDarkModeColors@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x18004E2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18004E89C (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::SetUseDarkModeColors(CWindowList *this, struct IDwmWindow *a2, char a3)
{
  CWindowData *v6; // rcx
  struct CWindowData *v8; // [rsp+58h] [rbp+20h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v8);
  v6 = v8;
  if ( v8 && ((*((_BYTE *)v8 + 741) & 2) != 0) != a3 )
  {
    *((_BYTE *)v8 + 741) = (2 * a3) | *((_BYTE *)v8 + 741) & 0xFD;
    CWindowData::OnColorizationUpdated(v6);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
