/*
 * XREFs of ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180268440
 * Callers:
 *     <none>
 * Callees:
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800211E0 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800BAF10 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?GetCurrentFlipExSurface@CWindowNode@@QEBAPEAVCCompositionSurfaceBitmap@@XZ @ 0x1800DFBBC (-GetCurrentFlipExSurface@CWindowNode@@QEBAPEAVCCompositionSurfaceBitmap@@XZ.c)
 *     ?GetEffectiveBounds@CWindowNode@@AEBAJ_NAEBVCShapePtr@@PEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@PEA_N@Z @ 0x1802020AC (-GetEffectiveBounds@CWindowNode@@AEBAJ_NAEBVCShapePtr@@PEAV-$TMilRect_@HUtagRECT@@UMil3DRectL@@U.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1802021A4 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?Invalidate@CWindowNode@@AEAAXW4ContentType@1@W4VisualDirty@@@Z @ 0x180206DB0 (-Invalidate@CWindowNode@@AEAAXW4ContentType@1@W4VisualDirty@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?GetFlipExSurfaceClipShape@CWindowNode@@AEBAXPEAVCShapePtr@@@Z @ 0x1802683B4 (-GetFlipExSurfaceClipShape@CWindowNode@@AEBAXPEAVCShapePtr@@@Z.c)
 *     ?ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ @ 0x180268734 (-ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowNode::OnChanged(CWindowNode *a1, int a2, struct CCompositionSurfaceBitmap *a3)
{
  char v6; // r14
  unsigned int v7; // ebx
  int (__fastcall **v8)(struct CCompositionSurfaceBitmap *, GUID *, __int64 *); // rax
  __int64 i; // rax
  struct CCompositionSurfaceBitmap *CurrentFlip; // rax
  const struct D2D_RECT_F *v11; // rbx
  const struct D2D_RECT_F *v12; // rdi
  float v13; // xmm7_4
  float v14; // xmm8_4
  float v15; // xmm6_4
  float v16; // xmm9_4
  const char *v17; // r9
  struct D2D_RECT_F v19; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v22[4]; // [rsp+58h] [rbp-B0h]
  __int64 v23; // [rsp+68h] [rbp-A0h] BYREF
  char v24; // [rsp+70h] [rbp-98h]
  _BYTE v25[64]; // [rsp+78h] [rbp-90h] BYREF
  int v26; // [rsp+B8h] [rbp-50h]
  _QWORD v27[2]; // [rsp+C8h] [rbp-40h] BYREF
  const struct D2D_RECT_F *v28; // [rsp+D8h] [rbp-30h]
  const struct D2D_RECT_F *v29; // [rsp+E0h] [rbp-28h]
  __int64 *v30; // [rsp+E8h] [rbp-20h]
  _BYTE v31[16]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v32; // [rsp+100h] [rbp-8h] BYREF

  if ( a2 != 5 )
  {
    if ( a3 )
    {
      v6 = 1;
      if ( CWindowNode::ProcessReadyFlipExSurfaces(a1) )
        return 0LL;
    }
    else
    {
      v6 = 0;
    }
    v7 = 4;
    if ( (*((_BYTE *)a1 + 96) & 4) == 0 )
    {
      if ( a2 != 1 || !v6 || a3 != CWindowNode::GetCurrentFlipExSurface(a1) )
        goto LABEL_34;
      v8 = *(int (__fastcall ***)(struct CCompositionSurfaceBitmap *, GUID *, __int64 *))a3;
      v20 = 0LL;
      if ( (*v8)(a3, &GUID_c155b649_2c5b_416a_b836_bbda56b2ec27, &v20) >= 0 )
      {
        v23 = 0LL;
        v24 = 0;
        v19 = 0LL;
        CWindowNode::GetFlipExSurfaceClipShape(a1, (struct CShapePtr *)&v23);
        if ( (int)CWindowNode::GetEffectiveBounds((__int64)a1, 1, &v23, (int *)&v19, 0LL) >= 0 )
        {
          v27[0] = &CRectanglesShape::`vftable';
          v21 = 0LL;
          v28 = (const struct D2D_RECT_F *)v31;
          v27[1] = 0LL;
          v29 = (const struct D2D_RECT_F *)v31;
          v30 = &v32;
          v32 = 0LL;
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)v20 + 24LL))(v20, &v21, v27) )
          {
            for ( i = 0LL; i < 4; ++i )
              *(float *)&v22[i] = (float)*(int *)((char *)&v19.left + i * 4);
            v26 = 0;
            v19 = 0LL;
            CurrentFlip = CWindowNode::GetCurrentFlipExSurface(a1);
            if ( (int)CWindowNode::ApplyTextureToLocalTransform(
                        a1,
                        (__int64 *)(((unsigned __int64)CurrentFlip + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)CurrentFlip >> 64)),
                        (CMILMatrix *)v25,
                        0LL,
                        0LL) >= 0 )
            {
              v11 = v28;
              v12 = v29;
              v13 = *(float *)&v22[3];
              v14 = *(float *)&v22[2];
              v15 = *(float *)&v22[1];
              v16 = *(float *)v22;
              while ( v11 != v12 )
              {
                CMILMatrix::Transform2DBoundsHelper<0>((__int64)v25, v11, &v19.left);
                if ( v16 > v19.left )
                  v19.left = v16;
                if ( v15 > v19.top )
                  v19.top = v15;
                if ( v19.right > v14 )
                  v19.right = v14;
                if ( v19.bottom > v13 )
                  v19.bottom = v13;
                if ( IsEmpty(&v19) )
                {
                  *(_QWORD *)&v19.right = 0LL;
                  *(_QWORD *)&v19.left = 0LL;
                }
                else
                {
                  CVisual::AddAdditionalDirtyRect((__int64)a1, &v19.left, 1, v17);
                }
                ++v11;
              }
              v7 = 0;
            }
          }
          CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v27);
        }
        CShapePtr::~CShapePtr((CShapePtr *)&v23);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v20);
      if ( v7 )
LABEL_34:
        CWindowNode::Invalidate(a1, 3, v7);
    }
  }
  return 0LL;
}
