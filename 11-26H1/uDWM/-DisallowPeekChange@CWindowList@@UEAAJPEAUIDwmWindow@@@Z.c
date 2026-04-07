/*
 * XREFs of ?DisallowPeekChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E0C00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::DisallowPeekChange(CWindowList *this, struct IDwmWindow *a2)
{
  struct CWindowData *v4; // rbx
  char v5; // al
  struct CWindowData *v7; // [rsp+40h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v7 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v7);
  v4 = v7;
  if ( v7 )
  {
    v5 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 264LL))(a2);
    *((_BYTE *)v4 + 739) &= ~0x80u;
    *((_BYTE *)v4 + 739) |= v5 << 7;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return 0LL;
}
