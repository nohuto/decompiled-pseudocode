/*
 * XREFs of ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180169910
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180022120 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800EA824 (-GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?ShouldHitTest@CWindowNode@@MEBA_NXZ @ 0x180169BE0 (-ShouldHitTest@CWindowNode@@MEBA_NXZ.c)
 *     ?GetContentBounds@CVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016A0B0 (-GetContentBounds@CVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180193F90 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?GetEffectiveBounds@CWindowNode@@AEBAJ_NAEBVCShapePtr@@PEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@PEA_N@Z @ 0x1802020AC (-GetEffectiveBounds@CWindowNode@@AEBAJ_NAEBVCShapePtr@@PEAV-$TMilRect_@HUtagRECT@@UMil3DRectL@@U.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?GetFlipExSurfaceClipShape@CWindowNode@@AEBAXPEAVCShapePtr@@@Z @ 0x1802683B4 (-GetFlipExSurfaceClipShape@CWindowNode@@AEBAXPEAVCShapePtr@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowNode::GetContentBounds(CWindowNode *this, float *a2)
{
  int ContentBounds; // eax
  unsigned int v5; // ebx
  bool v6; // zf
  int v7; // eax
  int EffectiveBounds; // eax
  __int64 i; // rax
  __int64 v10; // rdx
  int SpriteClipShape; // eax
  __int64 j; // rax
  float v13; // xmm1_4
  __m128i v14; // xmm0
  float v15; // xmm1_4
  int v16; // edi
  int v17; // eax
  unsigned int v19; // [rsp+20h] [rbp-50h]
  __int64 v20; // [rsp+30h] [rbp-40h] BYREF
  char v21; // [rsp+38h] [rbp-38h]
  float v22[4]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v23; // [rsp+50h] [rbp-20h] BYREF

  ContentBounds = CVisual::GetContentBounds();
  v5 = ContentBounds;
  if ( ContentBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ContentBounds, 0x1F2u, 0LL);
    return v5;
  }
  if ( !*((_BYTE *)this + 745) )
  {
    v6 = (*((_BYTE *)this + 896) & 4) == 0;
    v23 = 0LL;
    if ( !v6 )
    {
      v7 = CWindowNode::EnsureEffectiveSpriteClip(this);
      v5 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x200u, 0LL);
        return v5;
      }
      EffectiveBounds = CWindowNode::GetEffectiveBounds(this, 0LL, (char *)this + 880, &v23, 0LL);
      v5 = EffectiveBounds;
      if ( EffectiveBounds < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, EffectiveBounds, 0x201u, 0LL);
        return v5;
      }
      for ( i = 0LL; i < 16; i += 4LL )
        *(float *)((char *)&v20 + i) = (float)*(int *)((char *)&v23 + i);
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(a2, (float *)&v20);
    }
    if ( (*((_BYTE *)this + 896) & 8) != 0 )
    {
      v20 = 0LL;
      v21 = 0;
      CWindowNode::GetFlipExSurfaceClipShape(this, (struct CShapePtr *)&v20);
      LOBYTE(v10) = 1;
      SpriteClipShape = CWindowNode::GetEffectiveBounds(this, v10, &v20, &v23, 0LL);
      v5 = SpriteClipShape;
      if ( SpriteClipShape < 0 )
      {
        v19 = 522;
        goto LABEL_20;
      }
      for ( j = 0LL; j < 4; ++j )
        v22[j] = (float)*(int *)((char *)&v23 + j * 4);
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(a2, v22);
      CShapePtr::~CShapePtr((CShapePtr *)&v20);
    }
  }
  if ( CWindowNode::ShouldHitTest(this) )
  {
    v23 = 0LL;
    if ( !*((_QWORD *)this + 101) )
    {
      v13 = (float)*((int *)this + 177);
      *(float *)&v23 = (float)*((int *)this + 176);
      v14 = _mm_cvtsi32_si128(*((_DWORD *)this + 178));
      *((float *)&v23 + 1) = v13;
      v15 = (float)*((int *)this + 179);
      DWORD2(v23) = _mm_cvtepi32_ps(v14).m128_u32[0];
      *((float *)&v23 + 3) = v15;
LABEL_29:
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(a2, (float *)&v23);
      return v5;
    }
    v20 = 0LL;
    v21 = 0;
    SpriteClipShape = CWindowNode::GetSpriteClipShape(this, (struct CShapePtr *)&v20);
    v5 = SpriteClipShape;
    if ( SpriteClipShape >= 0 )
    {
      v16 = -2003304309;
      if ( v20
        && (v17 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)v20 + 48LL))(v20, &v23, 0LL),
            v16 = v17,
            v5 = v17,
            v17 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x137u, 0LL);
      }
      else
      {
        v5 = v16;
        if ( v16 >= 0 )
        {
          CShapePtr::~CShapePtr((CShapePtr *)&v20);
          goto LABEL_29;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x222u, 0LL);
      goto LABEL_21;
    }
    v19 = 545;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, SpriteClipShape, v19, 0LL);
LABEL_21:
    CShapePtr::~CShapePtr((CShapePtr *)&v20);
  }
  return v5;
}
