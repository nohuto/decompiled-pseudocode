/*
 * XREFs of ?ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000F840
 * Callers:
 *     <none>
 * Callees:
 *     ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001032C (-OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ClientGlassChange(CWindowList *this, struct IDwmWindow *a2)
{
  struct CWindowData *v4; // rbx
  CWindowList *v5; // rcx
  struct CWindowData *v7; // [rsp+40h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+48h] [rbp+20h]

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v7 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 0, &v7);
  v4 = v7;
  if ( v7 )
  {
    (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 152LL))(a2, (char *)v7 + 284);
    CWindowList::OnClientGlassChange(v5, v4);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
