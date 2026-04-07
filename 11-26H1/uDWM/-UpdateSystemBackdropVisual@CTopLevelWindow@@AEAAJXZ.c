/*
 * XREFs of ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x1800CBE44
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18007DF14 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ??$?8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@$$T@Z @ 0x18000BDF0 (--$-8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV-$shared_ptr@VCCachedBorderBrush@CWindowBo.c)
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18001B974 (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x1800204DC (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?GetEffectiveSystemBackdropType@CTopLevelWindow@@AEBA?AW4SYSTEMBACKDROP_TYPE@@XZ @ 0x180020860 (-GetEffectiveSystemBackdropType@CTopLevelWindow@@AEBA-AW4SYSTEMBACKDROP_TYPE@@XZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180022CA0 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CSystemBackdropVisual@@SAJW4SYSTEMBACKDROP_TYPE@@PEAPEAV1@@Z @ 0x180027194 (-Create@CSystemBackdropVisual@@SAJW4SYSTEMBACKDROP_TYPE@@PEAPEAV1@@Z.c)
 *     ?UpdateBrush@CSystemBackdropVisual@@QEAAJ_N0000@Z @ 0x180027990 (-UpdateBrush@CSystemBackdropVisual@@QEAAJ_N0000@Z.c)
 *     ??$?9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@01@$$T@Z @ 0x1800357D0 (--$-9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV-$ComP.c)
 *     ?ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z @ 0x18004BE28 (-ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z.c)
 *     ?EnableTreatment@CWindowBackgroundTreatmentVisual@@QEAAXXZ @ 0x18007530C (-EnableTreatment@CWindowBackgroundTreatmentVisual@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateSystemBackdropVisual(CTopLevelWindow *this)
{
  int v1; // eax
  struct CVisual **v3; // rbx
  int inserted; // esi
  __int64 v5; // rdx
  __int64 v6; // r8
  int EffectiveSystemBackdropType; // esi
  CBaseObject **v8; // rcx
  CVisual *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r8
  bool v14; // cl
  bool v15; // r10
  int updated; // eax
  unsigned int v17; // ebx
  struct _MARGINS v18; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = *((_DWORD *)this + 190);
  if ( v1 == 2 || (unsigned int)(v1 - 3) <= 1 )
  {
    EffectiveSystemBackdropType = CTopLevelWindow::GetEffectiveSystemBackdropType((__int64)this);
    if ( EffectiveSystemBackdropType == 3 )
      CWindowBackgroundTreatmentVisual::EnableTreatment(*((CWindowBackgroundTreatmentVisual **)this + 25));
    v3 = (struct CVisual **)((char *)this + 264);
    if ( std::operator==<CWindowBorder::CCachedBorderBrush>((_QWORD *)this + 33) )
    {
      Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(v8);
      inserted = CSystemBackdropVisual::Create(EffectiveSystemBackdropType, (CSystemBackdropVisual **)this + 33);
      if ( inserted < 0 )
      {
        v5 = 307LL;
        goto LABEL_16;
      }
      inserted = CContainerVisual::InsertChildAfter(*((CContainerVisual **)this + 29), *v3, 0LL);
      if ( inserted < 0 )
      {
        v5 = 310LL;
        goto LABEL_16;
      }
    }
  }
  else
  {
    v3 = (struct CVisual **)((char *)this + 264);
    if ( Microsoft::WRL::operator!=<Windows::UI::Composition::ICompositionProjectedShadowReceiver>((_QWORD *)this + 33) )
    {
      inserted = CContainerVisual::RemoveChild(*((CContainerVisual **)this + 29), *v3);
      if ( inserted < 0 )
      {
        v5 = 317LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v5,
          (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)inserted);
        return (unsigned int)inserted;
      }
      Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(v3);
    }
  }
  if ( !Microsoft::WRL::operator!=<Windows::UI::Composition::ICompositionProjectedShadowReceiver>(v3) )
    return 0LL;
  if ( *((_DWORD *)this + 190) == 4 )
  {
    inserted = CTopLevelWindow::ResizeVisualToTitlebar(this, (LONG *)*v3, v6);
    if ( inserted < 0 )
    {
      v5 = 326LL;
      goto LABEL_16;
    }
  }
  else
  {
    v10 = *v3;
    v18 = 0LL;
    CVisual::SetInsetFromParent(v10, &v18);
  }
  LOBYTE(v12) = CDesktopManager::IsHighContrastMode();
  v13 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53);
  LOBYTE(v13) = *(_BYTE *)(v13 + 633);
  updated = CSystemBackdropVisual::UpdateBrush(*v3, (*(_BYTE *)(v11 + 736) & 2) != 0, v13, v12, v14, v15);
  v17 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x153,
    (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)(unsigned int)updated);
  return v17;
}
