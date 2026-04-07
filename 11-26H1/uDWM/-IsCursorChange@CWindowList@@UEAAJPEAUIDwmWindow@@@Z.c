/*
 * XREFs of ?IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18006ACE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     CWindowList::ForEachSoftwareCursorListener__CWindowList::IsCursorChange_::_8_::_lambda_1___ @ 0x18006ADC4 (CWindowList--ForEachSoftwareCursorListener__CWindowList--IsCursorChange_--_8_--_lambda_1___.c)
 *     ?SetIsCursor@CVisual@@QEAAJ_N@Z @ 0x18006AE6C (-SetIsCursor@CVisual@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::IsCursorChange(CWindowList *this, struct IDwmWindow *a2)
{
  char v4; // al
  CVisual *v5; // rcx
  struct CWindowData *v7; // [rsp+50h] [rbp+18h] BYREF
  struct CWindowData **v8; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  CWindowList::GetSyncedWindowData(this, a2, 1, &v7);
  if ( v7 )
  {
    v4 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 344LL))(a2);
    *((_BYTE *)v7 + 740) ^= (*((_BYTE *)v7 + 740) ^ (2 * v4)) & 2;
    v5 = (CVisual *)*((_QWORD *)v7 + 55);
    if ( v5 )
    {
      CVisual::SetIsCursor(v5, (*((_BYTE *)v7 + 740) & 2) != 0);
      v8 = &v7;
      CWindowList::ForEachSoftwareCursorListener__CWindowList::IsCursorChange_::_8_::_lambda_1___(this, &v8);
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
