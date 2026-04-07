/*
 * XREFs of ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800E5B80
 * Callers:
 *     ?OnDisableMoveSizeFeedbackChanged@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E6370 (-OnDisableMoveSizeFeedbackChanged@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x180037A44 (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 *     ?IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x1800399F0 (-IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18004B350 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?EnsureAcrylicSheet@CWindowList@@AEAAJXZ @ 0x18007DFFC (-EnsureAcrylicSheet@CWindowList@@AEAAJXZ.c)
 *     ?OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z @ 0x18008A8F0 (-OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z @ 0x1800A13DC (-StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z.c)
 *     ?OnIsInWindowMoveUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x1800D09CC (-OnIsInWindowMoveUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::IsInWindowMoveChange(
        CWindowList *this,
        struct IDwmWindow *a2,
        char a3,
        enum tagINPUT_MESSAGE_DEVICE_TYPE a4)
{
  __int64 v8; // rax
  __int64 v9; // rsi
  char v10; // r14
  const struct tagRECT **v11; // rdi
  const struct tagRECT *v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // r9
  __int64 v15; // rdx
  char v16; // cl
  int started; // eax
  CAcrylicSheet *v18; // rcx
  CTopLevelWindow3D *v19; // rcx
  CTopLevelWindow *v20; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+58h] [rbp+10h] BYREF

  v23 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  v9 = v8;
  if ( v8 && (*(_BYTE *)(v8 + 678) & 0x14) != 0 )
    a3 = 0;
  if ( ((a4 - 4) & 0xFFFFFFFB) != 0 || !a3 && (!v8 || (*(_BYTE *)(v8 + 677) & 0x10) == 0) )
    goto LABEL_37;
  if ( !CDesktopManager::IsWindowAnimationEnabled()
    || (v10 = 1, (unsigned __int8)CDesktopManager::CheckAnyPreference(0x10u)) )
  {
    v10 = 0;
  }
  v11 = (const struct tagRECT **)((char *)this + 696);
  v12 = (const struct tagRECT *)*((_QWORD *)this + 87);
  if ( v12 || (CWindowList::GetSyncedWindowData(this, a2, 1, (struct CWindowData **)this + 87), (v12 = *v11) != 0LL) )
  {
    if ( ((v12[42].top & 0x1000) != 0) != a3 || !v9 )
    {
      BYTE1(v12[42].top) = (16 * a3) | BYTE1(v12[42].top) & 0xEF;
      (*(void (__fastcall **)(struct IDwmWindow *, LONG *))(*(_QWORD *)a2 + 80LL))(a2, &(*v11)[13].bottom);
      v16 = BYTE1((*v11)[42].top);
      if ( (v16 & 0x40) == 0 )
      {
        if ( (v16 & 0x10) != 0 )
        {
          started = CWindowList::EnsureAcrylicSheet(this);
          v13 = started;
          if ( started < 0 )
          {
            v15 = 3156LL;
LABEL_20:
            v14 = (unsigned int)started;
            goto LABEL_21;
          }
        }
        if ( v10 )
        {
          v18 = (CAcrylicSheet *)*((_QWORD *)this + 67);
          if ( v18 )
          {
            if ( ((*v11)[42].top & 0x1000) != 0 )
            {
              started = CAcrylicSheet::StartAlphaAnimation(v18, 0.0, 1.0, 0.1);
              v13 = started;
              if ( started < 0 )
              {
                v15 = 3164LL;
                goto LABEL_20;
              }
            }
            else
            {
              started = CAcrylicSheet::StartAlphaAnimation(v18, 1.0, 0.0, 0.1);
              v13 = started;
              if ( started < 0 )
              {
                v15 = 3168LL;
                goto LABEL_20;
              }
            }
          }
        }
        v19 = *(CTopLevelWindow3D **)&(*v11)[28].left;
        if ( v19 )
        {
          if ( v10 )
          {
            started = CTopLevelWindow3D::OnIsInWindowMoveUpdated(v19, ((*v11)[42].top & 0x1000) != 0);
            v13 = started;
            if ( started < 0 )
            {
              v15 = 3174LL;
              goto LABEL_20;
            }
          }
        }
        v20 = *(CTopLevelWindow **)&(*v11)[27].right;
        if ( v20 )
          CTopLevelWindow::OnIsInWindowMove(v20, ((*v11)[42].top & 0x1000) != 0, *v11 + 3);
      }
    }
    started = CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(this, 0);
    v13 = started;
    if ( started < 0 )
    {
      v15 = 3184LL;
      goto LABEL_20;
    }
LABEL_37:
    v13 = 0;
    goto LABEL_38;
  }
  v13 = -2147024882;
  v14 = 2147942414LL;
  v15 = 3137LL;
LABEL_21:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)v14);
LABEL_38:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v23);
  return v13;
}
