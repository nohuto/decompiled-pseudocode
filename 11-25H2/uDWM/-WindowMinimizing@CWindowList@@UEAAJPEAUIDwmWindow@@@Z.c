/*
 * XREFs of ?WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E8B90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180054FB4 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::WindowMinimizing(CWindowList *this, struct IDwmWindow *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  CWindowData *v7; // [rsp+40h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v7 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v7);
  if ( v7 && (*((_DWORD *)v7 + 29) & 0x20000000) == 0 )
    CWindowData::SnapshotWindow((struct CWindowSnapshot **)v7, v4, v5);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return 0LL;
}
