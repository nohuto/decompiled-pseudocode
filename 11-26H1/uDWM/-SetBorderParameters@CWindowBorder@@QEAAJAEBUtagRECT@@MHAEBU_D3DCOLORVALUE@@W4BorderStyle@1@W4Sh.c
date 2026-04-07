/*
 * XREFs of ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18001007C
 * Callers:
 *     ?InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000FF48 (-InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18005E6A8 (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18007DF14 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800DD3F4 (-AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAVCBorderSprite@@@Z @ 0x18000BAA4 (-CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAVCBorderSprite@@@Z.c)
 *     ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x18000FC00 (-SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ.c)
 *     ?SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z @ 0x1800117EC (-SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWindowBorder::SetBorderParameters(
        __int64 a1,
        const struct tagRECT *a2,
        float a3,
        int a4,
        float *a5,
        int a6,
        int a7)
{
  int v9; // ecx
  __int128 v10; // xmm0
  struct CBorderSprite *v11; // rdx
  int v13; // eax
  unsigned int v14; // edi
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v9 = *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 17) != 0 ? a7 : 0;
  if ( a3 == *(float *)(a1 + 248)
    && a4 == *(_DWORD *)(a1 + 252)
    && *a5 == *(float *)(a1 + 260)
    && a5[1] == *(float *)(a1 + 264)
    && a5[2] == *(float *)(a1 + 268)
    && a5[3] == *(float *)(a1 + 272)
    && a6 == *(_DWORD *)(a1 + 276)
    && v9 == *(_DWORD *)(a1 + 256) )
  {
    goto LABEL_10;
  }
  *(float *)(a1 + 248) = a3;
  *(_DWORD *)(a1 + 252) = a4;
  v10 = *(_OWORD *)a5;
  *(_DWORD *)(a1 + 256) = v9;
  *(_DWORD *)(a1 + 276) = a6;
  *(_OWORD *)(a1 + 260) = v10;
  CWindowBorder::SetBorderModeForContentClip((CWindowBorder *)a1);
  v11 = *(struct CBorderSprite **)(a1 + 208);
  if ( !v11 || (v13 = CWindowBorder::CreateAndAttachBorderBrush((CWindowBorder *)a1, v11), v14 = v13, v13 >= 0) )
  {
LABEL_10:
    CWindowBorder::SetBorderRect((CWindowBorder *)a1, a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29F,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v13,
      v15);
    return v14;
  }
}
