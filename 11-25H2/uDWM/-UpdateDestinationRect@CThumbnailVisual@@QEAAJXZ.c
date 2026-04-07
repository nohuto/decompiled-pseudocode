/*
 * XREFs of ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x1800133E8
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180014140 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CSizeResourceProxy@@QEAAJAEBUD2D_SIZE_F@@@Z @ 0x1800130FC (-Update@CSizeResourceProxy@@QEAAJAEBUD2D_SIZE_F@@@Z.c)
 *     ?Update@CRectResourceProxy@@QEAAJAEBUD2D_RECT_F@@@Z @ 0x180013350 (-Update@CRectResourceProxy@@QEAAJAEBUD2D_RECT_F@@@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180013380 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x180013CB8 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x1800150BC (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x1800151E0 (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x1800154D0 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003F2BC (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?ClampToMaxTextureSizeImpl@CDesktopManager@@AEAA?AUD2D_SIZE_F@@KK@Z @ 0x180073DB0 (-ClampToMaxTextureSizeImpl@CDesktopManager@@AEAA-AUD2D_SIZE_F@@KK@Z.c)
 *     ??$IntersectRectT@UD2D_POINTANDSIZE_L@@@@YAHPEAUD2D_POINTANDSIZE_L@@PEBU0@1@Z @ 0x180082408 (--$IntersectRectT@UD2D_POINTANDSIZE_L@@@@YAHPEAUD2D_POINTANDSIZE_L@@PEBU0@1@Z.c)
 *     ?GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x180099708 (-GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     ?GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x180099724 (-GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateDestinationRect(CThumbnailVisual *this)
{
  unsigned int v2; // edi
  bool IsImmersiveIconic; // r15
  bool IsThumbnailCVIStatic; // al
  __int64 v5; // rdx
  __m128i v6; // xmm6
  bool v7; // r9
  char v8; // r13
  int v9; // esi
  int v10; // r14d
  CRectResourceProxy *v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  CDesktopManager *v14; // rcx
  unsigned int v15; // r8d
  float *v16; // rax
  float IconicWidth; // xmm1_4
  float v18; // xmm2_4
  int v19; // eax
  int v20; // r12d
  int v21; // r15d
  int v22; // r14d
  int v23; // esi
  struct CRectangleGeometryProxy **v24; // rbx
  int v25; // eax
  CSecondaryWindowRepresentation *v27; // rcx
  _DWORD *v28; // r8
  int v29; // ecx
  __int32 v30; // eax
  int v31; // ecx
  int v32; // ecx
  __int32 v33; // eax
  int v34; // ecx
  int v35; // eax
  FLOAT v36; // xmm2_4
  CSecondaryWindowRepresentation *v37; // r9
  int IconicHeight; // eax
  int v39; // r10d
  FLOAT v40; // xmm1_4
  CSecondaryWindowRepresentation *v41; // rcx
  CSecondaryWindowRepresentation *v42; // rcx
  int v43; // eax
  CRectResourceProxy *v44; // rcx
  int v45; // eax
  int RectangleGeometry; // eax
  int v47; // edx
  int v48; // r8d
  int v49; // ecx
  int v50; // r8d
  int v51; // ecx
  D2D_SIZE_F v52; // [rsp+38h] [rbp-39h] BYREF
  unsigned int v53[4]; // [rsp+48h] [rbp-29h] BYREF
  __int128 v54; // [rsp+58h] [rbp-19h] BYREF
  __m128i v55; // [rsp+68h] [rbp-9h] BYREF
  struct D2D_RECT_F v56; // [rsp+78h] [rbp+7h] BYREF

  v2 = 0;
  IsImmersiveIconic = CThumbnailVisual::_IsImmersiveIconic(this);
  IsThumbnailCVIStatic = CThumbnailVisual::_IsThumbnailCVIStatic(this);
  v5 = *((_QWORD *)this + 41);
  v6 = 0LL;
  v7 = IsThumbnailCVIStatic;
  v55 = 0LL;
  v8 = *(_BYTE *)(v5 + 34);
  if ( !v8 )
  {
    if ( v5 )
    {
      v28 = *(_DWORD **)(v5 + 16);
      if ( v28 )
      {
        v29 = 0;
        v55.m128i_i32[0] = -*((_DWORD *)this + 16);
        v55.m128i_i32[1] = -*((_DWORD *)this + 17);
        if ( v28[57] - v28[55] >= 0 )
          v29 = v28[57] - v28[55];
        v30 = v55.m128i_i32[2];
        v31 = v29 - v28[68] - v28[67];
        if ( v31 > 0 )
          v30 = v31;
        v32 = 0;
        v55.m128i_i32[2] = v30;
        if ( v28[58] - v28[56] >= 0 )
          v32 = v28[58] - v28[56];
        v33 = v55.m128i_i32[3];
        v34 = v32 - v28[70] - v28[69];
        if ( v34 > 0 )
          v33 = v34;
        v55.m128i_i32[3] = v33;
        v6 = _mm_loadu_si128(&v55);
      }
    }
  }
  if ( v7 )
  {
    *((__m128i *)this + 30) = v6;
    return v2;
  }
  if ( *((_QWORD *)this + 45) && *((_QWORD *)this + 46) )
  {
    v9 = *((_DWORD *)this + 18);
    v10 = *((_DWORD *)this + 19);
    *((_QWORD *)&v54 + 1) = __PAIR64__(v10, v9);
    *(_QWORD *)&v54 = 0LL;
    if ( !v8 && v5 && *(_QWORD *)(v5 + 16) && (*(_DWORD *)(v5 + 36) & 0x100000) != 0 && *((_BYTE *)this + 434) )
      CThumbnailVisual::SetDirtyFlags(this, 0x10000u);
    if ( IsImmersiveIconic )
    {
      v35 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(this, 0LL);
      v2 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0x3FCu, 0LL);
        return v2;
      }
      v36 = (float)(v9 / 2
                  - (int)CSecondaryWindowRepresentation::GetIconicWidth(*((CSecondaryWindowRepresentation **)this + 42))
                  / 2);
      v56.left = v36;
      IconicHeight = CSecondaryWindowRepresentation::GetIconicHeight(v37);
      v40 = (float)(v10 / v39 - IconicHeight / v39);
      v56.top = v40;
      v56.right = (float)(int)CSecondaryWindowRepresentation::GetIconicWidth(v41) + v36;
      v43 = CSecondaryWindowRepresentation::GetIconicHeight(v42);
      v44 = (CRectResourceProxy *)*((_QWORD *)this + 45);
      v56.bottom = (float)v43 + v40;
      v45 = CRectResourceProxy::Update(v44, &v56);
      v2 = v45;
      if ( v45 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v45, 0x404u, 0LL);
        return v2;
      }
    }
    else
    {
      v11 = (CRectResourceProxy *)*((_QWORD *)this + 45);
      v56.left = 0.0;
      v56.top = 0.0;
      v56.right = (float)v9 + 0.0;
      v56.bottom = (float)v10 + 0.0;
      v12 = CRectResourceProxy::Update(v11, &v56);
      v2 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x40Fu, 0LL);
        return v2;
      }
    }
    v13 = *((_QWORD *)this + 53);
    if ( !v13 || !*((_BYTE *)this + 434) )
    {
      v14 = 0LL;
      v52 = 0LL;
      if ( IsImmersiveIconic )
      {
        IconicWidth = (float)(int)CSecondaryWindowRepresentation::GetIconicWidth(*((CSecondaryWindowRepresentation **)this
                                                                                 + 42));
        v52.width = IconicWidth;
        v18 = (float)(int)CSecondaryWindowRepresentation::GetIconicHeight(v27);
      }
      else
      {
        if ( v13 )
        {
          v14 = (CDesktopManager *)(unsigned int)(*((_DWORD *)this + 69) - *((_DWORD *)this + 67));
          v15 = 0;
          if ( *((_DWORD *)this + 68) - *((_DWORD *)this + 66) >= 0 )
            v15 = *((_DWORD *)this + 68) - *((_DWORD *)this + 66);
        }
        else
        {
          v15 = v9;
        }
        v16 = (float *)CDesktopManager::ClampToMaxTextureSizeImpl(v14, (unsigned int)v53, v15);
        IconicWidth = *v16;
        v18 = v16[1];
        v52.width = *v16;
      }
      v52.height = v18;
      if ( !*((_BYTE *)this + 434)
        || (*((float *)this + 109) != IconicWidth || *((float *)this + 110) != v18)
        && (*(_DWORD *)(*((_QWORD *)this + 41) + 36LL) & 0x100000) == 0 )
      {
        v19 = CSizeResourceProxy::Update(*((CSizeResourceProxy **)this + 46), &v52);
        v2 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x42Du, 0LL);
          return v2;
        }
        *(D2D_SIZE_F *)((char *)this + 436) = v52;
        *((_BYTE *)this + 434) = 1;
      }
    }
    *(_OWORD *)v53 = 0LL;
    if ( v8 )
      *(_OWORD *)v53 = v54;
    else
      IntersectRectT<D2D_POINTANDSIZE_L>(v53, &v54, &v55);
    if ( CThumbnailVisual::_HasBorder(this) && *((_QWORD *)this + 48) )
    {
      v23 = v53[3];
      v22 = v53[2];
      v21 = v53[1];
      v20 = v53[0];
      RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                            v53[0],
                            v53[1],
                            v53[2],
                            v53[3],
                            (struct CRectangleGeometryProxy **)this + 48);
      v2 = RectangleGeometry;
      if ( RectangleGeometry < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectangleGeometry, 0x443u, 0LL);
        return v2;
      }
      v47 = *((_DWORD *)this + 111);
      v48 = *((_DWORD *)this + 18);
      v49 = *((_DWORD *)this + 19);
      LODWORD(v54) = v47;
      DWORD1(v54) = v47;
      v50 = v48 - 2 * v47;
      v51 = v49 - 2 * v47;
      *((_QWORD *)&v54 + 1) = __PAIR64__(v51, v50);
      if ( v50 <= 0 || v51 <= 0 )
        goto LABEL_21;
      if ( v8 )
      {
        v20 = v47;
        v21 = v47;
        v22 = v50;
        v23 = v51;
        goto LABEL_21;
      }
      IntersectRectT<D2D_POINTANDSIZE_L>(v53, &v54, &v55);
    }
    v20 = v53[0];
    v21 = v53[1];
    v22 = v53[2];
    v23 = v53[3];
LABEL_21:
    *((_OWORD *)this + 28) = v54;
    *((__m128i *)this + 30) = v6;
    v24 = (struct CRectangleGeometryProxy **)((char *)this + 376);
    if ( *v24 )
    {
      v25 = ResourceHelper::CreateRectangleGeometry(v20, v21, v22, v23, v24);
      v2 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0x45Cu, 0LL);
    }
  }
  return v2;
}
