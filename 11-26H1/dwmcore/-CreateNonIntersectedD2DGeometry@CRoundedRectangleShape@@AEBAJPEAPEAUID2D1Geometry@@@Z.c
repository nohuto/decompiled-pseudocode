/*
 * XREFs of ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x180050DB0
 * Callers:
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180050A30 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x180051CD0 (-AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z.c)
 *     ?HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x180052C00 (-HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?IsEllipse@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x180052C74 (-IsEllipse@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x180171630 (-GetBaseRect@CRoundedRectangleGeometryData@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?CreateRectangleGeometry@CD2DFactory@@QEAAJAEBUD2D_RECT_F@@PEAPEAUID2D1RectangleGeometry@@@Z @ 0x1801B2590 (-CreateRectangleGeometry@CD2DFactory@@QEAAJAEBUD2D_RECT_F@@PEAPEAUID2D1RectangleGeometry@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRoundedRectangleShape::CreateNonIntersectedD2DGeometry(
        CRoundedRectangleShape *this,
        struct ID2D1Geometry **a2)
{
  __int64 v2; // r9
  unsigned int v5; // ebx
  CRoundedRectangleGeometryData *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, struct ID2D1RectangleGeometry **); // rdi
  int v12; // eax
  int v13; // eax
  struct ID2D1Geometry *v14; // rax
  __int64 v15; // rcx
  struct ID2D1RectangleGeometry *v16; // rdx
  struct ID2D1RectangleGeometry *v17; // rcx
  __int64 v18; // rax
  float v20; // xmm3_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  int v24; // eax
  const struct D2D_RECT_F *BaseRect; // rax
  CD2DFactory *v26; // rcx
  int v27; // eax
  struct ID2D1RectangleGeometry *v28; // [rsp+30h] [rbp-20h] BYREF
  struct ID2D1Geometry *v29; // [rsp+38h] [rbp-18h] BYREF
  int v30; // [rsp+40h] [rbp-10h]
  int v31; // [rsp+44h] [rbp-Ch]

  v2 = *((_QWORD *)this + 2);
  v5 = 0;
  if ( *(float *)(v2 + 64) <= 0.0 )
  {
    if ( CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(v2 + 16)) )
    {
      if ( CRoundedRectangleGeometryData::IsEllipse(v6) )
      {
        v20 = *(float *)(v7 + 4);
        v21 = *(float *)v7;
        if ( *(_BYTE *)(v7 + 52) )
        {
          v22 = v21 + *(float *)(v7 + 8);
          v23 = v20 + *(float *)(v7 + 12);
        }
        else
        {
          v22 = *(float *)(v7 + 8);
          v23 = *(float *)(v7 + 12);
        }
        *(float *)&v29 = (float)(v22 + v21) * 0.5;
        *((float *)&v29 + 1) = (float)(v23 + v20) * 0.5;
        v30 = *(_DWORD *)(v8 + 32);
        v31 = *(_DWORD *)(v8 + 36);
        v28 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
        v24 = (*(__int64 (__fastcall **)(__int64, struct ID2D1Geometry **, struct ID2D1RectangleGeometry **))(*(_QWORD *)g_DeviceManager + 56LL))(
                g_DeviceManager,
                &v29,
                &v28);
        v5 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x17Cu, 0LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
          return v5;
        }
        *a2 = v28;
      }
    }
    else
    {
      v28 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
      BaseRect = (const struct D2D_RECT_F *)CRoundedRectangleGeometryData::GetBaseRect(
                                              *((_QWORD *)this + 2) + 16LL,
                                              &v29);
      v27 = CD2DFactory::CreateRectangleGeometry(v26, BaseRect, &v28);
      v5 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x16Du, 0LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
        return v5;
      }
      *a2 = v28;
      v28 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
    }
  }
  if ( !*a2 )
  {
    v29 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
    v9 = (*(__int64 (__fastcall **)(__int64, struct ID2D1Geometry **))(*(_QWORD *)g_DeviceManager + 80LL))(
           g_DeviceManager,
           &v29);
    v5 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x185u, 0LL);
    }
    else
    {
      v10 = (__int64)v29;
      v28 = 0LL;
      v11 = *(__int64 (__fastcall **)(__int64, struct ID2D1RectangleGeometry **))(*(_QWORD *)v29 + 136LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
      v12 = v11(v10, &v28);
      v5 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x188u, 0LL);
        v17 = v28;
        if ( !v28 )
          goto LABEL_11;
        v28 = 0LL;
        v18 = *(_QWORD *)v17;
      }
      else
      {
        CRoundedRectangleShape::AddNonIntersectedD2DGeometry(this, v28);
        v13 = (*(__int64 (__fastcall **)(struct ID2D1RectangleGeometry *))(*(_QWORD *)v28 + 72LL))(v28);
        v5 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x18Au, 0LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
          return v5;
        }
        v14 = v29;
        v15 = 0LL;
        v16 = v28;
        v29 = 0LL;
        *a2 = v14;
        if ( !v16 )
          goto LABEL_12;
        v28 = 0LL;
        v17 = v16;
        v18 = *(_QWORD *)v16;
      }
      (*(void (__fastcall **)(struct ID2D1RectangleGeometry *))(v18 + 16))(v17);
    }
LABEL_11:
    v15 = (__int64)v29;
LABEL_12:
    if ( v15 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  return v5;
}
