/*
 * XREFs of ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800248D0
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180010470 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ??0AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z @ 0x18002397C (--0AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWind.c)
 *     ?OnWindowSizeUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180023F40 (-OnWindowSizeUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowOffsetUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800240E0 (-OnWindowOffsetUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?GetLivePreviewWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x180024744 (-GetLivePreviewWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 *     ?GetAbsoluteWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x1800247B8 (-GetAbsoluteWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AURec.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180043D08 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?_AddWindowToFilteredCapture@CProjectionBorderManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@PEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z @ 0x1800C3618 (-_AddWindowToFilteredCapture@CProjectionBorderManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENT.c)
 *     ?TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@AEAV?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@@Z @ 0x1800DF8C0 (-TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGloba.c)
 *     ??0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z @ 0x1800E0188 (--0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z.c)
 *     ?GetWindowBounds@CWindowList@@UEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x1800E57F0 (-GetWindowBounds@CWindowList@@UEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?GetBorderRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x180024A4C (-GetBorderRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 */

struct tagRECT *__fastcall CTopLevelWindow::GetActualWindowRect(
        CTopLevelWindow *this,
        struct tagRECT *__return_ptr retstr,
        char a3,
        char a4,
        bool a5)
{
  int v5; // esi
  __int64 v9; // r9
  LONG v10; // r14d
  LONG right; // r11d
  LONG bottom; // ebp
  LONG v13; // r11d
  LONG v14; // ebp
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r10
  int v19; // edx
  int v20; // r8d
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  struct tagRECT v25; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  *retstr = 0LL;
  if ( a5 && *(_QWORD *)(*((_QWORD *)this + 28) + 200LL) )
  {
    *retstr = *CTopLevelWindow::GetBorderRect(this, &v25, a3 != 1);
  }
  else
  {
    *retstr = *(struct tagRECT *)(*((_QWORD *)this + 89) + 48LL);
    if ( a3 )
      OffsetRect(retstr, -retstr->left, -retstr->top);
    if ( (*((_BYTE *)this + 200) & 4) == 0 || (v9 = 636LL, !a4) )
      v9 = 620LL;
    v10 = *(_DWORD *)((char *)this + v9) + retstr->left;
    right = retstr->right;
    bottom = retstr->bottom;
    retstr->left = v10;
    v13 = right - *(_DWORD *)((char *)this + v9 + 4);
    retstr->right = v13;
    retstr->top += *(_DWORD *)((char *)this + v9 + 8);
    v14 = bottom - *(_DWORD *)((char *)this + v9 + 12);
    retstr->bottom = v14;
    if ( a5 )
    {
      v16 = *((_QWORD *)this + 41);
      if ( v16 )
      {
        v17 = *((_QWORD *)this + 42);
        if ( v17 )
        {
          v18 = *((_QWORD *)this + 44);
          if ( v18 )
          {
            v19 = *((_DWORD *)this + 152) - *(_DWORD *)(v17 + 24) - *(_DWORD *)((char *)this + v9 + 4);
            v20 = *((_DWORD *)this + 154) - *(_DWORD *)(v18 + 28) - *(_DWORD *)((char *)this + v9 + 12);
            v21 = *((_DWORD *)this + 151) - *(_DWORD *)(v16 + 24);
            v22 = 0;
            v23 = v21 - *(_DWORD *)((char *)this + v9);
            if ( v23 >= 0 )
              v22 = v23;
            retstr->left = v10 + v22;
            v24 = 0;
            if ( v19 >= 0 )
              v24 = v19;
            retstr->right = v13 - v24;
            if ( v20 >= 0 )
              v5 = v20;
            retstr->bottom = v14 - v5;
          }
        }
      }
    }
  }
  return retstr;
}
