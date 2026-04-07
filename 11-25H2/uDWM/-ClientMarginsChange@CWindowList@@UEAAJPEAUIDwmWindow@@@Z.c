/*
 * XREFs of ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E3510
 * Callers:
 *     <none>
 * Callees:
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800443C4 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??9@YA_NAEBU_MARGINS@@0@Z @ 0x180069580 (--9@YA_NAEBU_MARGINS@@0@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ClientMarginsChange(CWindowList *this, struct IDwmWindow *a2)
{
  struct CWindowData *v4; // rbx
  CWindowList *v5; // rcx
  int v6; // r8d
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+20h] [rbp-28h] BYREF
  struct CWindowData *v9[2]; // [rsp+28h] [rbp-20h] BYREF

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9[0] = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, v9);
  v4 = v9[0];
  if ( v9[0] )
  {
    *(_OWORD *)v9 = 0LL;
    (*(void (__fastcall **)(struct IDwmWindow *, struct CWindowData **))(*(_QWORD *)a2 + 104LL))(a2, v9);
    v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 120LL))(a2);
    if ( *((_DWORD *)v4 + 75) != v6 || operator!=((_DWORD *)v4 + 67, v9) )
    {
      *((_DWORD *)v4 + 75) = v6;
      *(_OWORD *)((char *)v4 + 268) = *(_OWORD *)v9;
      CWindowList::OnClientMarginsChange(v5, v4);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return 0LL;
}
