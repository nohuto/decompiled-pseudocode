/*
 * XREFs of ?GetContentBounds@CSpriteVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180079980
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180022120 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetBounds@CDropShadow@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800798A0 (-GetBounds@CDropShadow@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?GetDropShadow@CSpriteVisual@@IEBAPEAVCDropShadow@@XZ @ 0x18007A0F8 (-GetDropShadow@CSpriteVisual@@IEBAPEAVCDropShadow@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpriteVisual::GetContentBounds(CSpriteVisual *this, struct D2D_RECT_F *a2)
{
  int v2; // edi
  __int64 v5; // rcx
  int v6; // eax
  __int64 v8; // rcx
  __int64 i; // rcx
  __m128 v10; // xmm1
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm4_4
  CDropShadow *DropShadow; // rax
  int Bounds; // eax
  struct D2D_RECT_F v16; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0;
  *(_QWORD *)&a2->right = 0LL;
  *(_QWORD *)&a2->left = 0LL;
  v5 = *((_QWORD *)this + 31);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, char *, struct D2D_RECT_F *))(*(_QWORD *)v5 + 192LL))(
           v5,
           (char *)this + 140,
           a2);
    v2 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xD76u, 0LL);
  }
  if ( (*(unsigned __int8 (__fastcall **)(CSpriteVisual *))(*(_QWORD *)this + 296LL))(this) )
  {
    v8 = *((_QWORD *)this + 27);
    if ( (*(_DWORD *)(v8 + 4) & 0x100000) != 0 )
    {
      for ( i = v8 + 12; (*(_DWORD *)i & 0x7F000000) != 0xC000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
        ;
      v10 = *(__m128 *)(i + 4);
      LODWORD(v16.left) = v10.m128_i32[0];
      LODWORD(v11) = _mm_shuffle_ps(v10, v10, 85).m128_u32[0];
      LODWORD(v12) = _mm_shuffle_ps(v10, v10, 255).m128_u32[0];
      v16.top = v11;
      v16.right = _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
      v16.bottom = v12;
      if ( v16.right > v10.m128_f32[0] && v12 > v11 )
      {
        if ( IsEmpty(a2) )
        {
          *a2 = v16;
        }
        else
        {
          if ( a2->left > v10.m128_f32[0] )
            LODWORD(a2->left) = v10.m128_i32[0];
          if ( a2->top > v11 )
            a2->top = v11;
          if ( v13 > a2->right )
            a2->right = v13;
          if ( v12 > a2->bottom )
            a2->bottom = v12;
        }
      }
    }
  }
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xC3u, 0LL);
  }
  else if ( (**((_DWORD **)this + 28) & 0x40000) != 0 )
  {
    v16 = 0LL;
    DropShadow = CSpriteVisual::GetDropShadow(this);
    Bounds = CDropShadow::GetBounds(DropShadow, (float *)this + 35, (__int64)&v16);
    v2 = Bounds;
    if ( Bounds >= 0 )
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(&a2->left, &v16.left);
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bounds, 0xC9u, 0LL);
  }
  return (unsigned int)v2;
}
