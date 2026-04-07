/*
 * XREFs of ?SetSystemBackdropType@CWindowList@@UEAAJPEAUIDwmWindow@@W4SYSTEMBACKDROP_TYPE@@@Z @ 0x1800E8520
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnSystemBackdropUpdated@CWindowData@@QEAAXXZ @ 0x180088160 (-OnSystemBackdropUpdated@CWindowData@@QEAAXXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowList::SetSystemBackdropType(CWindowList *a1, struct IDwmWindow *a2, int a3)
{
  CWindowData *v6; // rcx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+20h] [rbp-18h] BYREF
  CWindowData *v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = 0LL;
  CWindowList::GetSyncedWindowData(a1, a2, 1, &v9);
  v6 = v9;
  if ( v9 && *((_DWORD *)v9 + 51) != a3 )
  {
    *((_DWORD *)v9 + 51) = a3;
    CWindowData::OnSystemBackdropUpdated(v6);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return 0LL;
}
