/*
 * XREFs of ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x18000B550
 * Callers:
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x18000F71C (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Create@CBorderSprite@@SAJPEAPEAV1@@Z @ 0x18000B99C (-Create@CBorderSprite@@SAJPEAPEAV1@@Z.c)
 *     ?CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAVCBorderSprite@@@Z @ 0x18000BAA4 (-CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAVCBorderSprite@@@Z.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18000D27C (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x18000FC00 (-SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ.c)
 *     ?SetClipRectangle@CWindowBorder@@AEAAXPEAVCRectangleGeometryProxy@@AEBUtagRECT@@@Z @ 0x180011AEC (-SetClipRectangle@CWindowBorder@@AEAAXPEAVCRectangleGeometryProxy@@AEBUtagRECT@@@Z.c)
 *     ?SetSize@CVisual@@QEAAXHH@Z @ 0x180012220 (-SetSize@CVisual@@QEAAXHH@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180014BFC (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18001B974 (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z @ 0x180063F18 (-SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z.c)
 *     ?CreateRectangleGeometryProxy@CCompositor@@QEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x180082CB0 (-CreateRectangleGeometryProxy@CCompositor@@QEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CWindowBorder::CreateBorderStructure(CWindowBorder *this)
{
  int v2; // eax
  unsigned int v3; // edi
  CVisual *v4; // rsi
  int v5; // r8d
  int v6; // edx
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64, GUID *, __int64); // r9
  __int64 v9; // r10
  int v10; // eax
  CCompositor *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  CBaseObject *v16; // rcx
  CVisual *v17; // rcx
  int inserted; // eax
  CBaseObject *v20; // rcx
  CBaseObject *v21; // rax
  CBaseObject *v22; // rcx
  CBaseObject *v23; // rcx
  CBaseObject *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  struct tagPOINT v31; // [rsp+20h] [rbp-20h] BYREF
  CBaseObject **v32; // [rsp+28h] [rbp-18h]
  CWindowBorder *v33; // [rsp+30h] [rbp-10h]
  char v34; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  CBaseObject *v36; // [rsp+78h] [rbp+38h] BYREF
  __int64 v37; // [rsp+80h] [rbp+40h] BYREF
  CVisual *v38; // [rsp+88h] [rbp+48h] BYREF

  v38 = 0LL;
  v2 = CBorderSprite::Create(&v38);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v2,
      v31.x);
    v17 = v38;
    if ( !v38 )
      return v3;
    goto LABEL_19;
  }
  v4 = v38;
  *((_BYTE *)v38 + 36) |= 8u;
  v31 = (struct tagPOINT)*((_QWORD *)this + 29);
  CVisual::SetOffset(v4, &v31);
  v5 = 0;
  if ( *((_DWORD *)this + 61) - *((_DWORD *)this + 59) >= 0 )
    v5 = *((_DWORD *)this + 61) - *((_DWORD *)this + 59);
  v6 = 0;
  if ( *((_DWORD *)this + 60) - *((_DWORD *)this + 58) >= 0 )
    v6 = *((_DWORD *)this + 60) - *((_DWORD *)this + 58);
  CVisual::SetSize(v4, v6, v5);
  v37 = 0LL;
  v7 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v37);
  v10 = v8(v9, &GUID_30be580d_f4b6_4ab7_80dd_3738cbac9f2c, v7);
  v3 = v10;
  if ( v10 < 0 )
  {
    v25 = 88LL;
LABEL_42:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v10,
      v31.x);
LABEL_54:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v37);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v38);
    return v3;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v37 + 56LL))(v37, 0LL);
  v3 = v10;
  if ( v10 < 0 )
  {
    v25 = 89LL;
    goto LABEL_42;
  }
  v36 = 0LL;
  v11 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  v36 = 0LL;
  v12 = CCompositor::CreateRectangleGeometryProxy(v11, &v36);
  v3 = v12;
  if ( v12 < 0 )
  {
    v26 = 93LL;
LABEL_45:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v12,
      v31.x);
LABEL_53:
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v36);
    goto LABEL_54;
  }
  CWindowBorder::SetClipRectangle(this, v36, (const struct tagRECT *)((char *)this + 232));
  v12 = CWindowBorder::CreateAndAttachBorderBrush(this, v4);
  v3 = v12;
  if ( v12 < 0 )
  {
    v26 = 97LL;
    goto LABEL_45;
  }
  v32 = &v36;
  v33 = this;
  v34 = 1;
  v13 = *((_QWORD *)this + 27);
  if ( v13 )
  {
    v14 = CVisualProxy::SetClip(*(CVisualProxy **)(v13 + 16), v36);
    v3 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x72,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
        (const char *)(unsigned int)v14,
        v31.x);
      v24 = v36;
      if ( v36 )
      {
        v27 = *((_QWORD *)this + 27);
        if ( v27 )
        {
          CVisualProxy::SetClip(*(CVisualProxy **)(v27 + 16), 0LL);
          CVisual::SetIgnoreClipForHitTest(*((CVisual **)this + 27), 0);
          v24 = v36;
        }
      }
      if ( v24 )
        CBaseObject::Release(v24);
      if ( v37 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      goto LABEL_18;
    }
    v15 = CVisual::SetIgnoreClipForHitTest(*((CVisual **)this + 27), 1);
    v3 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x73,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
        (const char *)(unsigned int)v15,
        v31.x);
      v16 = v36;
      if ( v36 )
      {
        v28 = *((_QWORD *)this + 27);
        if ( v28 )
        {
          CVisualProxy::SetClip(*(CVisualProxy **)(v28 + 16), 0LL);
          CVisual::SetIgnoreClipForHitTest(*((CVisual **)this + 27), 0);
          v16 = v36;
        }
      }
      if ( v16 )
        CBaseObject::Release(v16);
      if ( v37 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
LABEL_18:
      v17 = v4;
LABEL_19:
      CBaseObject::Release(v17);
      return v3;
    }
  }
  inserted = CContainerVisual::InsertChildAfter(this, v4, 0LL);
  v3 = inserted;
  if ( inserted < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x77,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)inserted,
      v31.x);
    if ( v36 )
    {
      v29 = *((_QWORD *)this + 27);
      if ( v29 )
      {
        CVisualProxy::SetClip(*(CVisualProxy **)(v29 + 16), 0LL);
        CVisual::SetIgnoreClipForHitTest(*((CVisual **)this + 27), 0);
      }
    }
    goto LABEL_53;
  }
  v38 = 0LL;
  v20 = (CBaseObject *)*((_QWORD *)this + 26);
  *((_QWORD *)this + 26) = v4;
  if ( v20 )
    CBaseObject::Release(v20);
  v21 = v36;
  v36 = 0LL;
  v22 = (CBaseObject *)*((_QWORD *)this + 28);
  *((_QWORD *)this + 28) = v21;
  if ( v22 )
    CBaseObject::Release(v22);
  CWindowBorder::SetBorderModeForContentClip(this);
  v23 = v36;
  if ( v36 )
  {
    v30 = *((_QWORD *)this + 27);
    if ( v30 )
    {
      CVisualProxy::SetClip(*(CVisualProxy **)(v30 + 16), 0LL);
      CVisual::SetIgnoreClipForHitTest(*((CVisual **)this + 27), 0);
      v23 = v36;
    }
  }
  if ( v23 )
    CBaseObject::Release(v23);
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  return 0LL;
}
