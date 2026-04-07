/*
 * XREFs of ?AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800602B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?OnAccentPolicyChanged@CWindowData@@QEAAXXZ @ 0x180060874 (-OnAccentPolicyChanged@CWindowData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::AccentPolicyChange(CWindowList *this, struct IDwmWindow *a2)
{
  struct CWindowData *v4; // rbx
  _DWORD *v5; // rax
  struct CWindowData *v7[2]; // [rsp+28h] [rbp-20h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v7[0] = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, v7);
  v4 = v7[0];
  if ( v7[0] )
  {
    v5 = (_DWORD *)(*(__int64 (__fastcall **)(struct IDwmWindow *, struct CWindowData **))(*(_QWORD *)a2 + 216LL))(
                     a2,
                     v7);
    if ( *((_DWORD *)v4 + 42) != *v5 || *((_DWORD *)v4 + 43) != v5[1] || *((_DWORD *)v4 + 44) != v5[2] )
    {
      *(_OWORD *)((char *)v4 + 168) = *(_OWORD *)(*(__int64 (__fastcall **)(struct IDwmWindow *, struct CWindowData **))(*(_QWORD *)a2 + 216LL))(
                                                   a2,
                                                   v7);
      CWindowData::OnAccentPolicyChanged(v4);
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
