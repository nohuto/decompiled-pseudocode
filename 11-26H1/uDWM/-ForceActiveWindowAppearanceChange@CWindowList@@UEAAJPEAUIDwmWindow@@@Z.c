/*
 * XREFs of ?ForceActiveWindowAppearanceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180079CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?OnForceActiveWindowAppearanceUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800CBA08 (-OnForceActiveWindowAppearanceUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ForceActiveWindowAppearanceChange(CWindowList *this, struct IDwmWindow *a2)
{
  struct CWindowData *v4; // rbx
  char v5; // al
  struct CWindowData *v7; // [rsp+40h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+48h] [rbp+20h]

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v7 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v7);
  v4 = v7;
  if ( v7 )
  {
    v5 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 256LL))(a2);
    if ( *((_QWORD *)v4 + 55) )
    {
      if ( v5 != ((*((_BYTE *)v4 + 739) & 0x10) != 0) )
      {
        *((_BYTE *)v4 + 739) ^= (*((_BYTE *)v4 + 739) ^ (16 * v5)) & 0x10;
        CTopLevelWindow::OnForceActiveWindowAppearanceUpdated(*((CTopLevelWindow **)v4 + 55));
      }
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
