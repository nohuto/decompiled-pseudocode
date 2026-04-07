/*
 * XREFs of ?UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ @ 0x1800592D4
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18000D460 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x1800078BC (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ??$?9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@01@$$T@Z @ 0x18000F840 (--$-9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV-$ComP.c)
 *     ?GetCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x180012D98 (-GetCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001C7A4 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ??$?8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@$$T@Z @ 0x18001CBD4 (--$-8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV-$shared_ptr@VCCachedBorderBrush@CWindowBo.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180065BD0 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CSpriteVisual@@SAJPEAPEAV1@@Z @ 0x180088F20 (-Create@CSpriteVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z @ 0x180094858 (-ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CTopLevelWindow::UpdateCaptionAccentColor(CTopLevelWindow *this)
{
  struct CSpriteVisual **v2; // rbx
  bool v3; // zf
  _QWORD *v4; // rcx
  unsigned int CaptionColor; // eax
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  int inserted; // esi
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 (__fastcall *v13)(__int64, GUID *, __int64); // r10
  int v14; // eax
  int v15; // eax
  CBaseObject **v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  char *i; // rax
  struct CVisual *v20; // r8
  __int64 v21; // rdx
  _QWORD v22[2]; // [rsp+20h] [rbp-10h] BYREF
  char vars0; // [rsp+30h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  unsigned int v25; // [rsp+50h] [rbp+20h]
  __int64 v26; // [rsp+58h] [rbp+28h] BYREF
  __int64 v27; // [rsp+60h] [rbp+30h] BYREF

  v2 = (struct CSpriteVisual **)((char *)this + 288);
  v3 = *((_DWORD *)this + 200) == 3;
  v4 = (_QWORD *)((char *)this + 288);
  if ( v3 )
  {
    if ( !std::operator==<CWindowBorder::CCachedBorderBrush>(v4) )
      goto LABEL_3;
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(v16);
    inserted = CSpriteVisual::Create(v2);
    if ( inserted >= 0 )
    {
      v18 = *((_QWORD *)this + 35);
      v22[0] = *((_QWORD *)this + 32);
      v22[1] = v18;
      for ( i = (char *)v22; i != &vars0; i += 8 )
      {
        v20 = *(struct CVisual **)i;
        if ( *(_QWORD *)i )
          goto LABEL_32;
      }
      v20 = 0LL;
LABEL_32:
      inserted = CContainerVisual::InsertChildAfter(*((CContainerVisual **)this + 31), *v2, v20);
      if ( inserted >= 0 )
        goto LABEL_3;
      v17 = 407LL;
    }
    else
    {
      v17 = 395LL;
    }
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)(unsigned int)inserted,
      v22[0]);
    return (unsigned int)inserted;
  }
  if ( Microsoft::WRL::operator!=<Windows::UI::Composition::ICompositionProjectedShadowReceiver>(v4) )
  {
    inserted = CContainerVisual::RemoveChild(*((CContainerVisual **)this + 31), (struct CVisualProxy **)*v2);
    if ( inserted >= 0 )
    {
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(v2);
      goto LABEL_3;
    }
    v17 = 414LL;
    goto LABEL_26;
  }
LABEL_3:
  if ( !Microsoft::WRL::operator!=<Windows::UI::Composition::ICompositionProjectedShadowReceiver>(v2) )
    return 0LL;
  CaptionColor = CTopLevelWindow::GetCaptionColor(this);
  *(_WORD *)((char *)&v25 + 1) = CaptionColor;
  HIBYTE(v25) = BYTE2(CaptionColor);
  LOBYTE(v25) = -1;
  v26 = 0LL;
  v7 = *(__int64 **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 40LL);
  v8 = *v7;
  v26 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v8 + 64))(v7, v25, &v26);
  inserted = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B3,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)(unsigned int)v9,
      v22[0]);
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  else
  {
    v27 = 0LL;
    v11 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v27);
    v14 = v13(v12, &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46, v11);
    inserted = v14;
    if ( v14 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)*v2 + 18) + 56LL))(*((_QWORD *)*v2 + 18), v27);
      inserted = v15;
      if ( v15 < 0 )
      {
        v21 = 440LL;
      }
      else
      {
        v15 = CTopLevelWindow::ResizeVisualToTitlebar(this, *v2);
        inserted = v15;
        if ( v15 >= 0 )
        {
          if ( v27 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
          if ( v26 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          return 0LL;
        }
        v21 = 442LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v15,
        v22[0]);
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v27);
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v26);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B7,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v14,
        v22[0]);
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
  }
  return (unsigned int)inserted;
}
