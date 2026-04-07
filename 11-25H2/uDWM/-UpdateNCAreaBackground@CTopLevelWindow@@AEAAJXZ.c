/*
 * XREFs of ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18000C5C4
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18000AA50 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x1800078BC (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18000E520 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ @ 0x18000E910 (-IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180010470 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetBorderColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800112BC (-SetBorderColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x1800118CC (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ??$?8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@$$T@Z @ 0x18001CBD4 (--$-8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV-$shared_ptr@VCCachedBorderBrush@CWindowBo.c)
 *     ?ClearAll@CLegacyNonClientBackground@@QEAAXXZ @ 0x18002207C (-ClearAll@CLegacyNonClientBackground@@QEAAXXZ.c)
 *     ?AdjustNonClientBackgroundTreePosition@CTopLevelWindow@@AEAAJXZ @ 0x18006A304 (-AdjustNonClientBackgroundTreePosition@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetCaptionColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18006AC9C (-SetCaptionColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ??$GetFirstNonNull@VCSpriteVisual@@VCAccent@@VCSystemBackdropVisual@@@CTopLevelWindow@@AEAAPEAVCVisual@@PEAVCSpriteVisual@@PEAVCAccent@@PEAVCSystemBackdropVisual@@@Z @ 0x180072D64 (--$GetFirstNonNull@VCSpriteVisual@@VCAccent@@VCSystemBackdropVisual@@@CTopLevelWindow@@AEAAPEAVC.c)
 *     ?Create@CLegacyNonClientBackground@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x180076D0C (-Create@CLegacyNonClientBackground@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTopLevelWindow::UpdateNCAreaBackground(CTopLevelWindow *this)
{
  bool v2; // cl
  CLegacyNonClientBackground *v3; // rcx
  unsigned int v4; // edi
  struct CVisual **v6; // rsi
  CBaseObject **v7; // rcx
  int inserted; // eax
  __int64 v9; // rax
  float v10; // xmm2_4
  float v11; // xmm1_4
  int v12; // xmm2_4
  int v13; // xmm0_4
  __int64 v14; // rax
  int v15; // eax
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct CVisual *FirstNon; // rax
  int v20; // eax
  CBaseObject *v21; // [rsp+20h] [rbp-40h] BYREF
  CBaseObject *v22; // [rsp+28h] [rbp-38h] BYREF
  struct _MARGINS v23; // [rsp+30h] [rbp-30h] BYREF
  struct _D3DCOLORVALUE v24; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v22 = 0LL;
  v21 = 0LL;
  v2 = (unsigned int)(*((_DWORD *)this + 200) - 2) > 1;
  if ( (*(_BYTE *)(*((_QWORD *)this + 89) + 672LL) & 8) == 0
    || !*((_DWORD *)this + 151) && !*((_DWORD *)this + 153) && !*((_DWORD *)this + 152) && !*((_DWORD *)this + 154)
    || !v2 )
  {
    v3 = (CLegacyNonClientBackground *)*((_QWORD *)this + 34);
    if ( v3 )
      CLegacyNonClientBackground::ClearAll(v3);
    return 0;
  }
  v6 = (struct CVisual **)((char *)this + 272);
  if ( (unsigned __int8)std::operator==<CWindowBorder::CCachedBorderBrush>((char *)this + 272) )
  {
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(v7);
    inserted = CLegacyNonClientBackground::Create(
                 *((struct CWindowData **)this + 89),
                 (struct CLegacyNonClientBackground **)this + 34);
    v4 = inserted;
    if ( inserted < 0 )
    {
      v17 = 3786LL;
      goto LABEL_22;
    }
    if ( *((_DWORD *)this + 200) == 4 )
    {
      inserted = CContainerVisual::InsertChildAfter(*((CContainerVisual **)this + 31), *v6, 0LL);
      v4 = inserted;
      if ( inserted < 0 )
      {
        v17 = 3792LL;
        goto LABEL_22;
      }
    }
    else
    {
      FirstNon = (struct CVisual *)CTopLevelWindow::GetFirstNonNull<CSpriteVisual,CAccent,CSystemBackdropVisual>(
                                     v18,
                                     *((_QWORD *)this + 36),
                                     *((_QWORD *)this + 32),
                                     *((_QWORD *)this + 35));
      v20 = CContainerVisual::InsertChildAfter(*((CContainerVisual **)this + 31), *v6, FirstNon);
      v4 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xED5,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)v20,
          (int)v21);
        goto LABEL_20;
      }
    }
    v23 = 0LL;
    CVisual::SetInsetFromParent(*v6, &v23);
  }
  inserted = CTopLevelWindow::UpdateNCAreaGeometry(this);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v17 = 3805LL;
    goto LABEL_22;
  }
  inserted = CTopLevelWindow::UpdateColorizationColor(this);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v17 = 3808LL;
    goto LABEL_22;
  }
  if ( CTopLevelWindow::IsSheetOfGlass(this) )
    v9 = *((_QWORD *)this + 72);
  else
    v9 = *((_QWORD *)this + 71);
  v10 = *(float *)(v9 + 32);
  v11 = v10;
  *(float *)&v23.cxLeftWidth = v10 * *(float *)(v9 + 16);
  *(float *)&v12 = v10 * *(float *)(v9 + 24);
  v13 = *(_DWORD *)(v9 + 28);
  *(float *)&v23.cxRightWidth = v11 * *(float *)(v9 + 20);
  v23.cyTopHeight = v12;
  v23.cyBottomHeight = v13;
  *(struct _D3DCOLORVALUE *)&v24.r = (struct _D3DCOLORVALUE)v23;
  inserted = CLegacyNonClientBackground::SetBorderColor(*((CLegacyNonClientBackground **)this + 34), &v24);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v17 = 3826LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)(unsigned int)inserted,
      (int)v21);
    return v4;
  }
  v14 = *((_QWORD *)this + 72);
  *(float *)&v23.cxLeftWidth = *(float *)(v14 + 16) * *(float *)(v14 + 32);
  *(float *)&v23.cxRightWidth = *(float *)(v14 + 20) * *(float *)(v14 + 32);
  *(float *)&v23.cyTopHeight = *(float *)(v14 + 24) * *(float *)(v14 + 32);
  v23.cyBottomHeight = *(_DWORD *)(v14 + 28);
  inserted = CLegacyNonClientBackground::SetCaptionColor(
               *((CLegacyNonClientBackground **)this + 34),
               (const struct _D3DCOLORVALUE *)&v23);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v17 = 3827LL;
    goto LABEL_22;
  }
  v15 = CTopLevelWindow::AdjustNonClientBackgroundTreePosition(this);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEF5,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)(unsigned int)v15,
      (int)v21);
    v4 = v16;
LABEL_20:
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v21);
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v22);
    return v4;
  }
  return 0;
}
