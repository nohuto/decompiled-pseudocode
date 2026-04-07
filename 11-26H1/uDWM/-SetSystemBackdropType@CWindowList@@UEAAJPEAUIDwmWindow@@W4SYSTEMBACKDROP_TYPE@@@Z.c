/*
 * XREFs of ?SetSystemBackdropType@CWindowList@@UEAAJPEAUIDwmWindow@@W4SYSTEMBACKDROP_TYPE@@@Z @ 0x18007D510
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?OnSystemBackdropUpdated@CWindowData@@QEAAXXZ @ 0x18004DEDC (-OnSystemBackdropUpdated@CWindowData@@QEAAXXZ.c)
 */

__int64 __fastcall CWindowList::SetSystemBackdropType(CWindowList *a1, struct IDwmWindow *a2, int a3)
{
  CWindowData *v6; // rcx
  struct CWindowData *v8; // [rsp+58h] [rbp+20h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = 0LL;
  CWindowList::GetSyncedWindowData(a1, a2, 1, &v8);
  v6 = v8;
  if ( v8 && *((_DWORD *)v8 + 51) != a3 )
  {
    *((_DWORD *)v8 + 51) = a3;
    CWindowData::OnSystemBackdropUpdated(v6);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
