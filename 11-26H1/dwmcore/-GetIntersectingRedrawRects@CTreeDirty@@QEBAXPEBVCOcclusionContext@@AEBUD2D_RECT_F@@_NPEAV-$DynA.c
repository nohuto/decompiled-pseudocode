/*
 * XREFs of ?GetIntersectingRedrawRects@CTreeDirty@@QEBAXPEBVCOcclusionContext@@AEBUD2D_RECT_F@@_NPEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x180237470
 * Callers:
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180234B84 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ?IsCurrent@COcclusionContext@@QEBA_NXZ @ 0x180055A40 (-IsCurrent@COcclusionContext@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@I_N@Z @ 0x1800CB340 (-GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@I_N@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800CE6C0 (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800F33F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CTreeDirty::GetIntersectingRedrawRects(
        __int64 a1,
        COcclusionContext *a2,
        float *a3,
        char a4,
        __int64 a5)
{
  unsigned int v9; // r14d
  _QWORD *v10; // r15
  _QWORD *v11; // rsi
  float v12; // xmm1_4
  int v13; // edx
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // edx
  int v17; // eax
  unsigned int j; // esi
  __m128 v19; // xmm1
  unsigned int v20; // eax
  unsigned int v21; // edx
  int v22; // eax
  unsigned int i; // [rsp+34h] [rbp-2Ch]
  struct D2D_RECT_F v25; // [rsp+40h] [rbp-20h] BYREF

  *(_DWORD *)(a5 + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize(a5, 0x10u);
  if ( *(_BYTE *)(a1 + 2326) )
  {
    if ( a4 && COcclusionContext::IsCurrent(a2) )
    {
      v9 = 0;
      for ( i = 0; v9 < *(_DWORD *)(a1 + 2304); i = v9 )
      {
        v10 = (_QWORD *)(a1 + 16LL * v9 + 456);
        v11 = (_QWORD *)*v10;
        if ( (_QWORD *)*v10 != v10 )
        {
          do
          {
            v12 = *a3;
            v25 = (struct D2D_RECT_F)_mm_loadu_si128((const __m128i *)(v11 + 3));
            if ( v12 > v25.left )
              v25.left = v12;
            if ( a3[1] > v25.top )
              v25.top = a3[1];
            if ( v25.right > a3[2] )
              v25.right = a3[2];
            if ( v25.bottom > a3[3] )
              v25.bottom = a3[3];
            if ( IsEmpty(&v25) )
            {
              *(_QWORD *)&v25.right = 0LL;
              *(_QWORD *)&v25.left = 0LL;
            }
            if ( !IsEmpty(&v25) )
            {
              v14 = CDirtyRegionAnnotation::GetZ((CDirtyRegionAnnotation *)v11, *(const struct CVisualTree **)a1, v13);
              if ( !COcclusionContext::IsOccluded((__int64)a2, (__m128 *)&v25, v14, 0) )
              {
                v15 = *(_DWORD *)(a5 + 24);
                v16 = v15 + 1;
                if ( v15 + 1 < v15 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB7u, 0LL);
                }
                else if ( v16 > *(_DWORD *)(a5 + 20) )
                {
                  v17 = DynArrayImpl<0>::AddMultipleAndSet(a5, 16, 1, &v25);
                  if ( v17 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0xC2u, 0LL);
                }
                else
                {
                  *(struct D2D_RECT_F *)(*(_QWORD *)a5 + 16LL * v15) = v25;
                  *(_DWORD *)(a5 + 24) = v16;
                }
              }
            }
            v11 = (_QWORD *)*v11;
          }
          while ( v11 != v10 );
          v9 = i;
        }
        ++v9;
      }
    }
    else
    {
      for ( j = 0; j < *(_DWORD *)(a1 + 2304); ++j )
      {
        v19 = (__m128)_mm_loadu_si128((const __m128i *)a3);
        v25 = (struct D2D_RECT_F)v19;
        if ( *(float *)(a1 + 16 * (j + 136LL)) > v19.m128_f32[0] )
        {
          v25.left = *(FLOAT *)(a1 + 16 * (j + 136LL));
          v19 = (__m128)v25;
        }
        if ( *(float *)(a1 + 16 * (j + 136LL) + 4) > _mm_shuffle_ps(v19, v19, 85).m128_f32[0] )
        {
          v25.top = *(FLOAT *)(a1 + 16 * (j + 136LL) + 4);
          v19 = (__m128)v25;
        }
        if ( _mm_shuffle_ps(v19, v19, 170).m128_f32[0] > *(float *)(a1 + 16 * (j + 136LL) + 8) )
        {
          v25.right = *(FLOAT *)(a1 + 16 * (j + 136LL) + 8);
          v19 = (__m128)v25;
        }
        if ( _mm_shuffle_ps(v19, v19, 255).m128_f32[0] > *(float *)(a1 + 16 * (j + 136LL) + 12) )
        {
          v25.bottom = *(FLOAT *)(a1 + 16 * (j + 136LL) + 12);
          v19 = (__m128)v25;
        }
        if ( IsEmpty(&v25) )
        {
          *(_QWORD *)&v25.right = 0LL;
          *(_QWORD *)&v25.left = 0LL;
          v19 = 0u;
        }
        if ( !IsEmpty(&v25) )
        {
          v20 = *(_DWORD *)(a5 + 24);
          v21 = v20 + 1;
          if ( v20 + 1 < v20 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB7u, 0LL);
          }
          else if ( v21 > *(_DWORD *)(a5 + 20) )
          {
            v22 = DynArrayImpl<0>::AddMultipleAndSet(a5, 16, 1, &v25);
            if ( v22 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0xC2u, 0LL);
          }
          else
          {
            *(__m128 *)(*(_QWORD *)a5 + 16LL * v20) = v19;
            *(_DWORD *)(a5 + 24) = v21;
          }
        }
      }
    }
  }
}
