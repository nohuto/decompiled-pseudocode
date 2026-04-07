/*
 * XREFs of ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x1800DFA18
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800184F0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DismissCurrentTouchResizeHighlight@CWindowList@@QEAAXXZ @ 0x1800E0C90 (-DismissCurrentTouchResizeHighlight@CWindowList@@QEAAXXZ.c)
 *     ?IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800E1A80 (-IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x1800429A0 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x180044858 (-IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ.c)
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x18005E5B8 (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 *     ?EnsureAcrylicSheet@CWindowList@@AEAAJXZ @ 0x18006F9CC (-EnsureAcrylicSheet@CWindowList@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKM@Z @ 0x1800957FC (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKM@Z.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKM@Z @ 0x18009586C (-AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKM@Z.c)
 *     ?GetResizeBorderOffsets@CTopLevelWindow@@QEAA?AUtagRECT@@I@Z @ 0x1800CB568 (-GetResizeBorderOffsets@CTopLevelWindow@@QEAA-AUtagRECT@@I@Z.c)
 */

__int64 __fastcall CWindowList::ApplyWindowResizeStateTransition(CWindowList *this)
{
  float v2; // xmm6_4
  struct CWindowData *v3; // rdx
  int v4; // ebx
  __int64 v5; // rdx
  CAcrylicSheet *v7; // rbx
  const struct tagRECT *ResizeBorderOffsets; // rax
  CAcrylicSheet *v9; // rcx
  struct tagRECT v10; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( (*(_BYTE *)(*((_QWORD *)this + 87) + 741LL) & 0x20) == 0 )
  {
    if ( !CDesktopManager::IsWindowAnimationEnabled() || (unsigned __int8)CDesktopManager::CheckAnyPreference(0x10u) )
      v2 = FLOAT_0_000001;
    else
      v2 = FLOAT_0_1;
    v3 = (struct CWindowData *)*((_QWORD *)this + 87);
    if ( (*((_BYTE *)v3 + 741) & 0x10) != 0 )
    {
      v4 = CWindowList::EnsureAcrylicSheet(this);
      if ( v4 < 0 )
      {
        v5 = 3587LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v5,
          (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v4);
        return (unsigned int)v4;
      }
      v7 = (CAcrylicSheet *)*((_QWORD *)this + 67);
      ResizeBorderOffsets = CTopLevelWindow::GetResizeBorderOffsets(
                              *(CTopLevelWindow **)(*((_QWORD *)this + 87) + 440LL),
                              &v10,
                              *(_DWORD *)(*((_QWORD *)this + 87) + 848LL));
      CAcrylicSheet::AnimateRect(v7, ResizeBorderOffsets, v2);
    }
    else
    {
      v9 = (CAcrylicSheet *)*((_QWORD *)this + 67);
      if ( v9 )
        CAcrylicSheet::AnimateRect(v9, v3, v2);
    }
  }
  v4 = CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(this, 0);
  if ( v4 < 0 )
  {
    v5 = 3605LL;
    goto LABEL_9;
  }
  return 0LL;
}
