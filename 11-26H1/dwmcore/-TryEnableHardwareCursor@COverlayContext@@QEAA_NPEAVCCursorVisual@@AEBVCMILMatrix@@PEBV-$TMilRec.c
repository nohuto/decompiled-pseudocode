/*
 * XREFs of ?TryEnableHardwareCursor@COverlayContext@@QEAA_NPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E7258
 * Callers:
 *     ?CollectCursor@COcclusionContext@@QEAAXPEAVCCursorVisual@@@Z @ 0x1801DBAF0 (-CollectCursor@COcclusionContext@@QEAAXPEAVCCursorVisual@@@Z.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800111B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180022120 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800590B0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x180093B60 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800E4048 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetClipBox@CMonitorTransform@@QEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18018C160 (-GetClipBox@CMonitorTransform@@QEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?GetCursorShapeBounds@CCursorVisual@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCDesktopTree@@@Z @ 0x1801D9264 (-GetCursorShapeBounds@CCursorVisual@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAND.c)
 *     ?TryEnableHardwareCursor@CCursorVisual@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@_N@Z @ 0x1801DF864 (-TryEnableHardwareCursor@CCursorVisual@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@U.c)
 *     ?IsCursorScaledByHardware@COverlayContext@@QEBA_NPEBVCD3DDevice@@@Z @ 0x1801DF9E4 (-IsCursorScaledByHardware@COverlayContext@@QEBA_NPEBVCD3DDevice@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall COverlayContext::TryEnableHardwareCursor(
        COverlayContext *this,
        CResource *a2,
        __int128 *a3,
        const struct D2D_RECT_F *a4)
{
  __m128 v4; // xmm3
  __int64 v9; // r15
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int64 v12; // rdi
  __int128 v13; // xmm1
  __int64 v14; // rcx
  __int128 v15; // xmm0
  void (__fastcall *v16)(__int64); // rax
  __int128 v17; // xmm1
  const struct CD3DDevice *v18; // rdx
  char IsCursorScaledByHardware; // al
  const struct CMILMatrix *v20; // rbx
  __int64 v21; // rcx
  __m128 v22; // xmm1
  int v23; // eax
  __m128 v24; // xmm1
  int v25; // ecx
  int v26; // eax
  __m128 v27; // xmm0
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  char v36; // di
  int v37; // ebx
  __int64 *v38; // rax
  CResource *v39; // rbx
  __int64 v40; // rax
  const struct CVisualTree *v41; // rax
  float v43; // [rsp+28h] [rbp-41h]
  __int128 v44; // [rsp+30h] [rbp-39h] BYREF
  __m128 v45; // [rsp+40h] [rbp-29h] BYREF
  __int64 v46[2]; // [rsp+50h] [rbp-19h] BYREF
  __int128 v47; // [rsp+60h] [rbp-9h]
  __int128 v48; // [rsp+70h] [rbp+7h]
  __int128 v49; // [rsp+80h] [rbp+17h]
  int v50; // [rsp+90h] [rbp+27h]
  char v51; // [rsp+D0h] [rbp+67h] BYREF

  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 280LL))(*((_QWORD *)this + 7));
  if ( v9 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 256LL))(*((_QWORD *)this + 7));
    v11 = *a3;
    v12 = v10;
    v13 = a3[1];
    v50 = *((_DWORD *)a3 + 16);
    v14 = *(_QWORD *)v9;
    *(_OWORD *)v46 = v11;
    v15 = a3[2];
    v16 = *(void (__fastcall **)(__int64))(v14 + 40);
    v47 = v13;
    v17 = a3[3];
    v48 = v15;
    v49 = v17;
    v16(v9);
    IsCursorScaledByHardware = COverlayContext::IsCursorScaledByHardware(this, v18);
    v20 = (const struct CMILMatrix *)(v12 + (IsCursorScaledByHardware != 0 ? 204LL : 68LL));
    CMonitorTransform::GetClipBox(v12, (__int64)&v44, IsCursorScaledByHardware);
    if ( !a4 )
      goto LABEL_13;
    if ( CMILMatrix::Is2DAxisAlignedPreserving(v20) )
    {
      v45 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<1>(v21, a4, v45.m128_f32);
      v22 = 0LL;
      v22.m128_f32[0] = (float)(int)v45.m128_f32[0];
      v22.m128_f32[0] = _mm_cmplt_ss((__m128)v45.m128_u32[0], v22).m128_f32[0];
      v23 = _mm_cvtsi128_si32((__m128i)v22);
      v24 = 0LL;
      v25 = v23 + (int)v45.m128_f32[0];
      v26 = v44;
      if ( (int)v44 < v25 )
        v26 = v25;
      LODWORD(v44) = v26;
      v24.m128_f32[0] = (float)(int)v45.m128_f32[1];
      v24.m128_f32[0] = _mm_cmplt_ss((__m128)v45.m128_u32[1], v24).m128_f32[0];
      v27 = (__m128)v45.m128_u32[2];
      v28 = _mm_cvtsi128_si32((__m128i)v24);
      v24.m128_i32[0] = v45.m128_i32[2];
      v29 = v28 + (int)v45.m128_f32[1];
      v30 = DWORD1(v44);
      if ( SDWORD1(v44) < v29 )
        v30 = v29;
      DWORD1(v44) = v30;
      v27.m128_f32[0] = (float)(int)v45.m128_f32[2];
      v31 = _mm_cvtsi128_si32((__m128i)_mm_cmplt_ss(v27, v24));
      v27.m128_i32[0] = v45.m128_i32[3];
      v32 = (int)v45.m128_f32[2] - v31;
      v33 = DWORD2(v44);
      if ( v32 < SDWORD2(v44) )
        v33 = v32;
      DWORD2(v44) = v33;
      v4.m128_f32[0] = (float)(int)v45.m128_f32[3];
      v34 = (int)v45.m128_f32[3] - _mm_cvtsi128_si32((__m128i)_mm_cmplt_ss(v4, v27));
      v35 = HIDWORD(v44);
      if ( v34 < SHIDWORD(v44) )
        v35 = v34;
      HIDWORD(v44) = v35;
      if ( !TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(&v44) )
      {
LABEL_13:
        CMILMatrix::Multiply((CMILMatrix *)v46, v20);
        v36 = *(_BYTE *)(v12 + 281);
        v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 240LL))(v9);
        v38 = (__int64 *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 232LL))(v9, &v51);
        LOBYTE(v43) = v36;
        if ( CCursorVisual::TryEnableHardwareCursor((__int64)a2, *v38, v37, &v44, (__int64)v46, v43) )
        {
          v39 = (CResource *)*((_QWORD *)this + 2392);
          if ( v39 != a2 )
          {
            *((_QWORD *)this + 2392) = a2;
            if ( a2 )
              CMILRefCountImpl::AddReference((CResource *)((char *)a2 + 8));
            if ( v39 )
              CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v39);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 7) + 8LL) + 48LL))(*((_QWORD *)this + 7) + 8LL);
          }
          *((_BYTE *)this + 19359) = 1;
        }
        else
        {
          v40 = *((_QWORD *)a2 + 87);
          if ( v40 && *(_QWORD *)(v40 + 176) && *(_BYTE *)(v40 + 81) )
          {
            v41 = (const struct CVisualTree *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 56LL))(*((_QWORD *)this + 7));
            CCursorVisual::GetCursorShapeBounds(a2, &v45, v41);
            TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(
              (float *)this + 4790,
              v45.m128_f32);
          }
        }
      }
    }
  }
  return *((_BYTE *)this + 19359);
}
