/*
 * XREFs of ?UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ @ 0x18004B30C
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18007DF14 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ??$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18000ABC4 (--$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUIComposi.c)
 *     ??$?8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@$$T@Z @ 0x18000BDF0 (--$-8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV-$shared_ptr@VCCachedBorderBrush@CWindowBo.c)
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18001B974 (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ??$?9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@01@$$T@Z @ 0x1800357D0 (--$-9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV-$ComP.c)
 *     ?GetCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x18004BB14 (-GetCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 *     ?ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z @ 0x18004BE28 (-ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z.c)
 *     ??$GetBrush@UICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18004CE98 (--$GetBrush@UICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUIComposi.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CSpriteVisual@@SAJPEAPEAV1@@Z @ 0x180078528 (-Create@CSpriteVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CTopLevelWindow::UpdateCaptionAccentColor(CTopLevelWindow *this)
{
  struct CSpriteVisual **v2; // rbx
  bool v3; // zf
  _QWORD *v4; // rcx
  int v6; // eax
  int inserted; // edi
  unsigned int CaptionColor; // eax
  CBaseObject **v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  char *i; // rax
  struct CVisual *v13; // r8
  __int64 *v14; // rcx
  __int64 v15; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-10h] BYREF
  char vars0; // [rsp+30h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  unsigned int v19; // [rsp+50h] [rbp+20h]
  __int64 v20; // [rsp+58h] [rbp+28h] BYREF

  v2 = (struct CSpriteVisual **)((char *)this + 272);
  v3 = *((_DWORD *)this + 190) == 3;
  v4 = (_QWORD *)((char *)this + 272);
  if ( v3 )
  {
    if ( !std::operator==<CWindowBorder::CCachedBorderBrush>(v4) )
      goto LABEL_3;
    Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(v9);
    inserted = CSpriteVisual::Create(v2);
    if ( inserted >= 0 )
    {
      v16[0] = *((_QWORD *)this + 30);
      v16[1] = *((_QWORD *)this + 33);
      for ( i = (char *)v16; i != &vars0; i += 8 )
      {
        v13 = *(struct CVisual **)i;
        if ( *(_QWORD *)i )
          goto LABEL_25;
      }
      v13 = 0LL;
LABEL_25:
      inserted = CContainerVisual::InsertChildAfter(*((CContainerVisual **)this + 29), *v2, v13);
      if ( inserted >= 0 )
      {
LABEL_3:
        if ( !Microsoft::WRL::operator!=<Windows::UI::Composition::ICompositionProjectedShadowReceiver>(v2) )
          return 0LL;
        v20 = 0LL;
        v6 = CSpriteVisual::GetBrush<Windows::UI::Composition::ICompositionColorBrush>(*v2, &v20);
        inserted = v6;
        if ( v6 < 0 )
        {
          v11 = 381LL;
        }
        else
        {
          if ( v20 )
            goto LABEL_7;
          v14 = *(__int64 **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 40LL);
          v15 = *v14;
          v20 = 0LL;
          v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v15 + 56))(v14, &v20);
          inserted = v6;
          if ( v6 >= 0 )
          {
            v6 = CSpriteVisual::SetBrush<Windows::UI::Composition::ICompositionColorBrush *>((__int64)*v2, v20);
            inserted = v6;
            if ( v6 >= 0 )
            {
LABEL_7:
              CaptionColor = CTopLevelWindow::GetCaptionColor(this);
              *(_WORD *)((char *)&v19 + 1) = CaptionColor;
              HIBYTE(v19) = BYTE2(CaptionColor);
              LOBYTE(v19) = -1;
              v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 56LL))(v20, v19);
              inserted = v6;
              if ( v6 < 0 )
              {
                v11 = 397LL;
              }
              else
              {
                v6 = CTopLevelWindow::ResizeVisualToTitlebar(this, *v2);
                inserted = v6;
                if ( v6 >= 0 )
                {
                  if ( v20 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
                  return 0LL;
                }
                v11 = 399LL;
              }
              goto LABEL_18;
            }
            v11 = 386LL;
          }
          else
          {
            v11 = 385LL;
          }
        }
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)v6,
          v16[0]);
        wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v20);
        return (unsigned int)inserted;
      }
      v10 = 363LL;
    }
    else
    {
      v10 = 351LL;
    }
  }
  else
  {
    if ( !Microsoft::WRL::operator!=<Windows::UI::Composition::ICompositionProjectedShadowReceiver>(v4) )
      goto LABEL_3;
    inserted = CContainerVisual::RemoveChild(*((CContainerVisual **)this + 29), *v2);
    if ( inserted >= 0 )
    {
      Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(v2);
      goto LABEL_3;
    }
    v10 = 370LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)(unsigned int)inserted,
    v16[0]);
  return (unsigned int)inserted;
}
