/*
 * XREFs of ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000FCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180010474 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ClientMarginsChange(CWindowList *this, struct IDwmWindow *a2)
{
  struct CWindowData *v4; // rbx
  int v6; // edx
  CWindowList *v7; // rcx
  struct CWindowData *v8[2]; // [rsp+28h] [rbp-20h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8[0] = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, v8);
  v4 = v8[0];
  if ( v8[0] )
  {
    *(_OWORD *)v8 = 0LL;
    (*(void (__fastcall **)(struct IDwmWindow *, struct CWindowData **))(*(_QWORD *)a2 + 104LL))(a2, v8);
    v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 120LL))(a2);
    if ( *((_DWORD *)v4 + 75) != v6
      || (v7 = (CWindowList *)LODWORD(v8[0]), *((_DWORD *)v4 + 67) != LODWORD(v8[0]))
      || (v7 = (CWindowList *)HIDWORD(v8[0]),
          *((struct CWindowData **)v4 + 34) != *(struct CWindowData **)((char *)v8 + 4))
      || *((_DWORD *)v4 + 70) != HIDWORD(v8[1]) )
    {
      *((_DWORD *)v4 + 75) = v6;
      *(_OWORD *)((char *)v4 + 268) = *(_OWORD *)v8;
      CWindowList::OnClientMarginsChange(v7, v4);
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
