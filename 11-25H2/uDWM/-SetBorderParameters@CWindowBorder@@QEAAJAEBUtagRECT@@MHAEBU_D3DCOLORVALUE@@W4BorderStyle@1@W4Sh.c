/*
 * XREFs of ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18006D584
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18000D460 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18006CE4C (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 *     ?InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18006D448 (-InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E03BC (-AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z @ 0x18000A84C (-SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x180011894 (-SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ.c)
 *     ??$?8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@$$T@Z @ 0x18001CBD4 (--$-8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV-$shared_ptr@VCCachedBorderBrush@CWindowBo.c)
 *     ??4?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18003BAB0 (--4-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18003D79C (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAUISpriteVisual@Composition@UI@Windows@@@Z @ 0x18003E108 (-CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAUISpriteVisual@Composition@UI@Windows@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  int v8; // r11d
  float *v10; // r8
  int v11; // r10d
  __int128 v12; // xmm0
  std::_Ref_count_base *v13; // rbx
  __int64 (__fastcall ***v14)(struct Windows::UI::Composition::ISpriteVisual *, GUID *, __int64 *); // rdx
  int v15; // eax
  unsigned int v16; // ebx
  std::_Ref_count_base *v18[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = a6;
  v10 = a5;
  v11 = *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 17) != 0 ? a7 : 0;
  if ( a3 == *(float *)(a1 + 272)
    && a4 == *(_DWORD *)(a1 + 276)
    && *a5 == *(float *)(a1 + 284)
    && a5[1] == *(float *)(a1 + 288)
    && a5[2] == *(float *)(a1 + 292)
    && a5[3] == *(float *)(a1 + 296)
    && a6 == *(_DWORD *)(a1 + 300)
    && v11 == *(_DWORD *)(a1 + 280)
    && !std::operator==<CWindowBorder::CCachedBorderBrush>((_QWORD *)(a1 + 240)) )
  {
    goto LABEL_16;
  }
  *(float *)(a1 + 272) = a3;
  *(_DWORD *)(a1 + 276) = a4;
  v12 = *(_OWORD *)v10;
  *(_DWORD *)(a1 + 300) = v8;
  *(_DWORD *)(a1 + 280) = v11;
  *(_OWORD *)(a1 + 284) = v12;
  CWindowBorder::SetBorderModeForContentClip((CWindowBorder *)a1);
  *(_OWORD *)v18 = 0LL;
  std::shared_ptr<CWindowBorder::CCachedBorderBrush>::operator=((_QWORD *)(a1 + 240), (__int64 *)v18);
  if ( v18[1] && _InterlockedExchangeAdd((volatile signed __int32 *)v18[1] + 2, 0xFFFFFFFF) == 1 )
  {
    v13 = v18[1];
    (**(void (__fastcall ***)(std::_Ref_count_base *))v18[1])(v18[1]);
    std::_Ref_count_base::_Decwref(v13);
  }
  v14 = *(__int64 (__fastcall ****)(struct Windows::UI::Composition::ISpriteVisual *, GUID *, __int64 *))(a1 + 232);
  if ( !v14 || (v15 = CWindowBorder::CreateAndAttachBorderBrush((CWindowBorder *)a1, v14), v16 = v15, v15 >= 0) )
  {
LABEL_16:
    CWindowBorder::SetBorderRect((CWindowBorder *)a1, a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C8,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v15,
      (int)v18[0]);
    return v16;
  }
}
