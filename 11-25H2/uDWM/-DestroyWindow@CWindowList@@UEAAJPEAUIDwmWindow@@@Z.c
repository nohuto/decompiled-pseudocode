/*
 * XREFs of ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180087220
 * Callers:
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800030D0 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001A2DC (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A0908 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnWindowDestroyed@CWindowArrangementTransition@@QEAAJXZ @ 0x1800E1764 (-OnWindowDestroyed@CWindowArrangementTransition@@QEAAJXZ.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_767b0072026fef5317467f2afcf76d8a___ @ 0x1800E243C (CWindowList--ForEachSoftwareCursorListener__lambda_767b0072026fef5317467f2afcf76d8a___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::DestroyWindow(CWindowArrangementTransition **this, struct IDwmWindow *a2)
{
  struct CWindowData *v4; // rdx
  void (__fastcall ***v5)(_QWORD, _QWORD); // rcx
  __int64 v6; // rbx
  int v7; // eax
  struct CWindowData *v8; // rdx
  struct CWindowData **v9; // rcx
  CWindowArrangementTransition *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct CWindowData *v13; // [rsp+60h] [rbp+30h] BYREF
  struct CWindowData **v14; // [rsp+68h] [rbp+38h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v13 = 0LL;
  CWindowList::GetSyncedWindowData((CWindowList *)this, a2, 1, &v13);
  v4 = v13;
  if ( v13 )
  {
    v5 = (void (__fastcall ***)(_QWORD, _QWORD))*((_QWORD *)v13 + 3);
    if ( v5 )
    {
      (**v5)(v5, 0LL);
      *((_QWORD *)v13 + 3) = 0LL;
      v4 = v13;
    }
    v6 = *((_QWORD *)v4 + 5);
    if ( (*((_BYTE *)v4 + 676) & 2) != 0 )
    {
      v14 = &v13;
      CWindowList::ForEachSoftwareCursorListener__lambda_767b0072026fef5317467f2afcf76d8a___(this, &v14);
      v4 = v13;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, struct CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 58)
                                                                 + 192LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
           v4);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8DD,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v7,
        (int)&CDesktopManager::s_csDwmInstance);
    if ( (*((_BYTE *)v13 + 672) & 4) == 0 )
    {
      v8 = *(struct CWindowData **)v13;
      v9 = (struct CWindowData **)*((_QWORD *)v13 + 1);
      if ( *(struct CWindowData **)(*(_QWORD *)v13 + 8LL) != v13 || *v9 != v13 )
        __fastfail(3u);
      *v9 = v8;
      *((_QWORD *)v8 + 1) = v9;
      *((_QWORD *)v13 + 1) = v13;
      *(_QWORD *)v13 = v13;
      CWindowList::ImmediateDestroyWindow((CWindowList *)this, v13);
    }
    v10 = this[66];
    if ( v10 && v6 == *((_QWORD *)v10 + 1) )
      CWindowArrangementTransition::OnWindowDestroyed(v10);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
