/*
 * XREFs of ?IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E5AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetIsCursor@CVisual@@QEAAJ_N@Z @ 0x18007CE08 (-SetIsCursor@CVisual@@QEAAJ_N@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_ed1615f7b10d86015f9199b5b2295a22___ @ 0x1800E25C4 (CWindowList--ForEachSoftwareCursorListener__lambda_ed1615f7b10d86015f9199b5b2295a22___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::IsCursorChange(CWindowList *this, struct IDwmWindow *a2)
{
  char v4; // al
  CVisualProxy **v5; // rcx
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+20h] [rbp-18h] BYREF
  struct CWindowData *v8; // [rsp+50h] [rbp+18h] BYREF
  struct CWindowData **v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  CWindowList::GetSyncedWindowData(this, a2, 1, &v8);
  if ( v8 )
  {
    v4 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 344LL))(a2);
    *((_BYTE *)v8 + 676) ^= (*((_BYTE *)v8 + 676) ^ (2 * v4)) & 2;
    v5 = (CVisualProxy **)*((_QWORD *)v8 + 55);
    if ( v5 )
    {
      CVisual::SetIsCursor(v5, (*((_BYTE *)v8 + 676) & 2) != 0);
      v9 = &v8;
      CWindowList::ForEachSoftwareCursorListener__lambda_ed1615f7b10d86015f9199b5b2295a22___(
        (__int64)this,
        (__int64 **)&v9);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
  return 0LL;
}
