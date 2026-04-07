/*
 * XREFs of ?AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E2BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnAccentPolicyChanged@CWindowData@@QEAAXXZ @ 0x180080544 (-OnAccentPolicyChanged@CWindowData@@QEAAXXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::AccentPolicyChange(CWindowList *this, struct IDwmWindow *a2)
{
  CWindowData *v4; // rbx
  _DWORD *v5; // rax
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+20h] [rbp-28h] BYREF
  CWindowData *v8[2]; // [rsp+28h] [rbp-20h] BYREF

  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8[0] = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, v8);
  v4 = v8[0];
  if ( v8[0] )
  {
    v5 = (_DWORD *)(*(__int64 (__fastcall **)(struct IDwmWindow *, CWindowData **))(*(_QWORD *)a2 + 216LL))(a2, v8);
    if ( *((_DWORD *)v4 + 42) != *v5 || *((_DWORD *)v4 + 43) != v5[1] || *((_DWORD *)v4 + 44) != v5[2] )
    {
      *(_OWORD *)((char *)v4 + 168) = *(_OWORD *)(*(__int64 (__fastcall **)(struct IDwmWindow *, CWindowData **))(*(_QWORD *)a2 + 216LL))(
                                                   a2,
                                                   v8);
      CWindowData::OnAccentPolicyChanged(v4);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
  return 0LL;
}
