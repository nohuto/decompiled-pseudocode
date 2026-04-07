/*
 * XREFs of ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18007EA04
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x1800151F0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x18000ACD4 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ??$?8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@$$T@Z @ 0x18000BDF0 (--$-8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV-$shared_ptr@VCCachedBorderBrush@CWindowBo.c)
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18001B974 (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001F4A0 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ @ 0x180020370 (-IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180022CA0 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?AdjustNonClientBackgroundTreePosition@CTopLevelWindow@@AEAAJXZ @ 0x1800258DC (-AdjustNonClientBackgroundTreePosition@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetCaptionColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18004C930 (-SetCaptionColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x18004E050 (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 *     ?ClearAll@CLegacyNonClientBackground@@QEAAXXZ @ 0x18005EA38 (-ClearAll@CLegacyNonClientBackground@@QEAAXXZ.c)
 *     ??$GetFirstNonNull@VCSpriteVisual@@VCAccent@@VCSystemBackdropVisual@@@CTopLevelWindow@@AEAAPEAVCVisual@@PEAVCSpriteVisual@@PEAVCAccent@@PEAVCSystemBackdropVisual@@@Z @ 0x180064008 (--$GetFirstNonNull@VCSpriteVisual@@VCAccent@@VCSystemBackdropVisual@@@CTopLevelWindow@@AEAAPEAVC.c)
 *     ?Create@CLegacyNonClientBackground@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x18006969C (-Create@CLegacyNonClientBackground@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetBorderColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800B8CAC (-SetBorderColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaBackground(CTopLevelWindow *this)
{
  char v2; // dl
  struct CVisual **v3; // rdi
  CBaseObject **v4; // rcx
  __int64 v5; // rcx
  int inserted; // esi
  __int64 v7; // rdx
  struct CVisual *FirstNon; // rax
  CVisual *v10; // rcx
  __int64 v11; // rax
  CLegacyNonClientBackground *v12; // rcx
  int v13; // xmm1_4
  int v14; // xmm2_4
  __int64 v15; // rax
  CLegacyNonClientBackground *v16; // rcx
  int v17; // xmm1_4
  int v18; // xmm2_4
  int v19; // eax
  unsigned int v20; // edi
  int v21; // eax
  unsigned int v22; // ebx
  CBaseObject **v23; // rcx
  struct _MARGINS v24; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]

  if ( (*(_BYTE *)(*((_QWORD *)this + 87) + 736LL) & 8) != 0
    && !AreAllMarginsZero((const struct _MARGINS *)((char *)this + 588))
    && v2 )
  {
    v3 = (struct CVisual **)((char *)this + 256);
    if ( std::operator==<CWindowBorder::CCachedBorderBrush>((_QWORD *)this + 32) )
    {
      Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(v4);
      inserted = CLegacyNonClientBackground::Create(
                   *((struct CWindowData **)this + 87),
                   (struct CLegacyNonClientBackground **)this + 32);
      if ( inserted < 0 )
      {
        v7 = 3644LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)inserted,
          v24.cxLeftWidth);
        return (unsigned int)inserted;
      }
      if ( *((_DWORD *)this + 190) == 4 )
      {
        inserted = CContainerVisual::InsertChildAfter(*((CContainerVisual **)this + 29), *v3, 0LL);
        if ( inserted < 0 )
        {
          v7 = 3650LL;
          goto LABEL_7;
        }
      }
      else
      {
        FirstNon = (struct CVisual *)CTopLevelWindow::GetFirstNonNull<CSpriteVisual,CAccent,CSystemBackdropVisual>(
                                       v5,
                                       *((_QWORD *)this + 34),
                                       *((_QWORD *)this + 30),
                                       *((_QWORD *)this + 33));
        inserted = CContainerVisual::InsertChildAfter(*((CContainerVisual **)this + 29), *v3, FirstNon);
        if ( inserted < 0 )
        {
          v7 = 3655LL;
          goto LABEL_7;
        }
      }
      v10 = *v3;
      v24 = 0LL;
      CVisual::SetInsetFromParent(v10, &v24);
    }
    inserted = CTopLevelWindow::UpdateNCAreaGeometry((CLegacyNonClientBackground **)this);
    if ( inserted < 0 )
    {
      v7 = 3663LL;
      goto LABEL_7;
    }
    inserted = CTopLevelWindow::UpdateColorizationColor((CGlassColorizationResources **)this);
    if ( inserted < 0 )
    {
      v7 = 3666LL;
      goto LABEL_7;
    }
    if ( CTopLevelWindow::IsSheetOfGlass(this) )
      v11 = *((_QWORD *)this + 70);
    else
      v11 = *((_QWORD *)this + 69);
    v12 = *v3;
    *(float *)&v13 = *(float *)(v11 + 32) * *(float *)(v11 + 20);
    *(float *)&v14 = *(float *)(v11 + 32) * *(float *)(v11 + 24);
    *(float *)&v24.cxLeftWidth = *(float *)(v11 + 32) * *(float *)(v11 + 16);
    v24.cyBottomHeight = *(_DWORD *)(v11 + 28);
    v24.cxRightWidth = v13;
    v24.cyTopHeight = v14;
    inserted = CLegacyNonClientBackground::SetBorderColor(v12, (const struct _D3DCOLORVALUE *)&v24);
    if ( inserted < 0 )
    {
      v7 = 3684LL;
      goto LABEL_7;
    }
    v15 = *((_QWORD *)this + 70);
    v16 = *v3;
    *(float *)&v17 = *(float *)(v15 + 32) * *(float *)(v15 + 20);
    *(float *)&v18 = *(float *)(v15 + 32) * *(float *)(v15 + 24);
    *(float *)&v24.cxLeftWidth = *(float *)(v15 + 32) * *(float *)(v15 + 16);
    v24.cyBottomHeight = *(_DWORD *)(v15 + 28);
    v24.cxRightWidth = v17;
    v24.cyTopHeight = v18;
    v19 = CLegacyNonClientBackground::SetCaptionColor(v16, (const struct _D3DCOLORVALUE *)&v24);
    v20 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE65,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v19,
        v24.cxLeftWidth);
      return v20;
    }
    v21 = CTopLevelWindow::AdjustNonClientBackgroundTreePosition(this);
    v22 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE67,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v21,
        v24.cxLeftWidth);
      return v22;
    }
  }
  else
  {
    v23 = (CBaseObject **)*((_QWORD *)this + 32);
    if ( v23 )
      CLegacyNonClientBackground::ClearAll(v23);
  }
  return 0LL;
}
