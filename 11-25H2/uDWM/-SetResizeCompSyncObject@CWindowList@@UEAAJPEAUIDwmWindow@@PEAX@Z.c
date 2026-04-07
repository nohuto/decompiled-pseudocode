/*
 * XREFs of ?SetResizeCompSyncObject@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z @ 0x1800E8480
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ @ 0x180058EA0 (-CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::SetResizeCompSyncObject(CWindowList *this, struct IDwmWindow *a2, void *a3)
{
  struct CWindowData *v7; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v7 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v7);
  CWindowList::CommitAndCloseResizeCompSyncObject(this);
  *((_QWORD *)this + 75) = a3;
  *((_BYTE *)this + 634) = 1;
  *((_QWORD *)this + 76) = *((_QWORD *)v7 + 5);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return 0LL;
}
