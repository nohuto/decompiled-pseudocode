/*
 * XREFs of ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180124D00
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x180013208 (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AlignRectFToPointAndSizeL@@YAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUD2D_POINTANDSIZE_L@@@Z @ 0x18005C0B4 (-AlignRectFToPointAndSizeL@@YAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18005C5A0 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18005EB50 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x180124F78 (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokeP.c)
 *     ?DrawGenericInk@CDrawingContext@@QEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x180125298 (-DrawGenericInk@CDrawingContext@@QEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z.c)
 *     ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180125FD8 (-TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x180184B40 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@@Z @ 0x180236C1C (-PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGenericInk::Draw(
        CGenericInk *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  struct CD3DDevice *v5; // rdx
  int v6; // r14d
  int DirectInkWetStroke; // eax
  unsigned int v9; // ebx
  bool v10; // r12
  struct IDCompositionDirectInkWetStrokePartner *v11; // rbx
  bool v12; // si
  char v13; // r15
  int v14; // eax
  int v15; // eax
  unsigned int v16; // esi
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  bool v21[8]; // [rsp+30h] [rbp-A9h] BYREF
  struct D2D_RECT_F v22; // [rsp+38h] [rbp-A1h] BYREF
  int v23; // [rsp+48h] [rbp-91h] BYREF
  struct IDCompositionDirectInkWetStrokePartner *v24; // [rsp+50h] [rbp-89h] BYREF
  __int128 v25; // [rsp+58h] [rbp-81h] BYREF
  struct D2D_RECT_F v26; // [rsp+68h] [rbp-71h] BYREF
  __int128 v27; // [rsp+78h] [rbp-61h] BYREF
  _BYTE v28[64]; // [rsp+90h] [rbp-49h] BYREF
  int v29; // [rsp+D0h] [rbp-9h]
  struct D2D_RECT_F v30; // [rsp+E0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+5Fh]

  v5 = (struct CD3DDevice *)*((_QWORD *)a2 + 4);
  v6 = 0;
  v24 = 0LL;
  DirectInkWetStroke = CGenericInk::GetDirectInkWetStroke(this, v5, &v24);
  v9 = DirectInkWetStroke;
  if ( DirectInkWetStroke >= 0 )
  {
    v10 = 0;
    v11 = v24;
    v12 = 0;
    v21[0] = 0;
    v13 = 0;
    if ( CCommonRegistryData::GammaBlendPencil )
    {
      v23 = 0;
      v16 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *, int *))(*(_QWORD *)v24 + 64LL))(
              v24,
              &v23);
      if ( (v16 & 0x80000000) != 0 )
      {
        v18 = 218LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
          (const char *)v16);
        if ( !v11 )
          return v16;
LABEL_22:
        (*(void (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *))(*(_QWORD *)v11 + 16LL))(v11);
        return v16;
      }
      if ( !v23 || (v12 = 1, !CDrawingContext::IsHDRTarget(a2)) )
        v12 = 0;
    }
    if ( *((_QWORD *)this + 11) )
    {
      v14 = CSuperWetInkManager::TryRegisterSuperWetForDraw(
              *(CSuperWetInkManager **)(*((_QWORD *)this + 3) + 656LL),
              this,
              a2,
              v12,
              v21);
      v10 = v21[0];
      v6 = v14;
    }
    if ( !v12 )
      goto LABEL_6;
    v30 = 0LL;
    v16 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *, struct D2D_RECT_F *))(*(_QWORD *)v11 + 32LL))(
            v11,
            &v30);
    if ( (v16 & 0x80000000) != 0 )
    {
      v18 = 236LL;
      goto LABEL_21;
    }
    v29 = 0;
    v26 = v30;
    v22 = 0LL;
    v25 = 0LL;
    v27 = 0LL;
    CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 280), (struct CMILMatrix *)v28);
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v28, &v26, &v22.left);
    CDrawingContext::GetClipBoundsWorld((__int64)a2, (float *)&v25);
    if ( *(float *)&v25 > v22.left )
      LODWORD(v22.left) = v25;
    if ( *((float *)&v25 + 1) > v22.top )
      v22.top = *((FLOAT *)&v25 + 1);
    if ( v22.right > *((float *)&v25 + 2) )
      v22.right = *((FLOAT *)&v25 + 2);
    if ( v22.bottom > *((float *)&v25 + 3) )
      v22.bottom = *((FLOAT *)&v25 + 3);
    if ( IsEmpty(&v22) )
    {
      *(_QWORD *)&v22.right = 0LL;
      *(_QWORD *)&v22.left = 0LL;
    }
    v19 = AlignRectFToPointAndSizeL(&v22.left, &v27);
    v16 = v19;
    if ( v19 < 0 )
    {
      v20 = 255LL;
LABEL_49:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
        (const char *)(unsigned int)v19);
LABEL_52:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
      return v16;
    }
    if ( SDWORD2(v27) > 0 && SHIDWORD(v27) > 0 )
    {
      v19 = CDrawingContext::PushGammaBlendLayer(a2, (const struct D2D_POINTANDSIZE_L *)&v27);
      v16 = v19;
      if ( v19 < 0 )
      {
        v20 = 259LL;
        goto LABEL_49;
      }
      v13 = 1;
    }
LABEL_6:
    dword_1803DE364 |= 1u;
    v15 = CDrawingContext::DrawGenericInk(a2, v11, !v10);
    v16 = v15;
    if ( v15 >= 0 )
    {
      if ( v6 >= 0 )
      {
        if ( v13 )
          CDrawingContext::PopLayerInternal(a2);
        if ( v11 )
          (*(void (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *))(*(_QWORD *)v11 + 16LL))(v11);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x117,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
        (const char *)(unsigned int)v6);
      if ( v13 )
        CDrawingContext::PopLayerInternal(a2);
      v16 = v6;
      goto LABEL_52;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x115,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
      (const char *)(unsigned int)v15);
    if ( v13 )
      CDrawingContext::PopLayerInternal(a2);
    if ( !v11 )
      return v16;
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD0,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
    (const char *)(unsigned int)DirectInkWetStroke);
  if ( v24 )
    (*(void (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *))(*(_QWORD *)v24 + 16LL))(v24);
  return v9;
}
