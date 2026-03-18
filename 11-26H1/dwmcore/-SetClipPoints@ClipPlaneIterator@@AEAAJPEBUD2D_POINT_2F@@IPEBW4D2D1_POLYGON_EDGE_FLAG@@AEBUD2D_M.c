/*
 * XREFs of ?SetClipPoints@ClipPlaneIterator@@AEAAJPEBUD2D_POINT_2F@@IPEBW4D2D1_POLYGON_EDGE_FLAG@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801B4390
 * Callers:
 *     ?ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18005E6F4 (-ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV-$TMilRect_@HUtagRECT@@.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveAt@?$DynArray@URoudTripRequestTracker@CComposition@@$0A@@@QEAAJI@Z @ 0x18014EBF8 (-RemoveAt@-$DynArray@URoudTripRequestTracker@CComposition@@$0A@@@QEAAJI@Z.c)
 *     ?TransformPoints@MILMatrix3x2@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z @ 0x18019A654 (-TransformPoints@MILMatrix3x2@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?RemoveAt@?$DynArray@W4D2D1_POLYGON_EDGE_FLAG@@$0A@@@QEAAJI@Z @ 0x18024F640 (-RemoveAt@-$DynArray@W4D2D1_POLYGON_EDGE_FLAG@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall ClipPlaneIterator::SetClipPoints(
        ClipPlaneIterator *this,
        const struct D2D_POINT_2F *a2,
        unsigned int a3,
        const enum D2D1_POLYGON_EDGE_FLAG *a4,
        const struct D2D_MATRIX_3X2_F *a5)
{
  const struct D2D_POINT_2F *v6; // rdi
  __int64 v8; // rax
  FLOAT x; // xmm0_4
  FLOAT y; // xmm1_4
  int v11; // eax
  const enum D2D1_POLYGON_EDGE_FLAG *v12; // r15
  __int64 v13; // r12
  __int64 v14; // rax
  __m128 x_low; // xmm6
  __m128 y_low; // xmm7
  unsigned int v17; // edx
  int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // r8d
  int v21; // eax
  unsigned int v22; // edx
  unsigned int i; // edi
  __int64 v24; // rax
  float v25; // xmm0_4
  float v26; // xmm1_4
  __int64 v28; // r8
  unsigned int j; // ecx
  float v30; // xmm1_4
  float v31; // xmm0_4
  unsigned int v32; // edi
  unsigned int v33; // ecx
  int v34; // r9d
  struct D2D_POINT_2F *v35; // rdx
  FLOAT dy; // xmm1_4
  _BYTE *v37; // rcx
  __int64 v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rdi
  unsigned int k; // esi
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  int v45; // xmm0_4
  _BYTE *v46; // rdx
  __int64 v47; // rcx
  int v48; // xmm0_4
  unsigned int v49; // edx
  unsigned int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // r8d
  int v53; // eax
  int v54; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v55; // [rsp+38h] [rbp-48h]
  __int128 v56; // [rsp+40h] [rbp-40h] BYREF
  FLOAT dx; // [rsp+50h] [rbp-30h]
  FLOAT v58; // [rsp+54h] [rbp-2Ch]

  v6 = a2;
  if ( a3 >= 3 )
  {
    v8 = a3 - 1;
    x = a2[v8].x;
    y = a2[v8].y;
    if ( a4 )
      v11 = *((_DWORD *)a4 + v8);
    else
      v11 = 0;
    v54 = v11;
    v12 = a4;
    v13 = a3;
    while ( 1 )
    {
      v14 = *((unsigned int *)this + 12);
      x_low = (__m128)LODWORD(v6->x);
      y_low = (__m128)LODWORD(v6->y);
      *(_QWORD *)&v56 = __PAIR64__(LODWORD(y), LODWORD(x));
      v17 = v14 + 1;
      *((_QWORD *)&v56 + 1) = __PAIR64__(y_low.m128_u32[0], x_low.m128_u32[0]);
      if ( (int)v14 + 1 < (unsigned int)v14 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB7u, 0LL);
      }
      else if ( v17 <= *((_DWORD *)this + 11) )
      {
        *(_OWORD *)(*((_QWORD *)this + 3) + 16 * v14) = v56;
        *((_DWORD *)this + 12) = v17;
      }
      else
      {
        v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 24, 16, 1, &v56);
        if ( v18 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0xC2u, 0LL);
      }
      if ( a4 )
      {
        v19 = *((_DWORD *)this + 20);
        v20 = v19 + 1;
        if ( v19 + 1 < v19 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB7u, 0LL);
        }
        else if ( v20 <= *((_DWORD *)this + 19) )
        {
          *(_DWORD *)(*((_QWORD *)this + 7) + 4LL * *((unsigned int *)this + 20)) = v54;
          *((_DWORD *)this + 20) = v20;
        }
        else
        {
          v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 56, 4, 1, &v54);
          if ( v21 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0xC2u, 0LL);
        }
        v54 = *(_DWORD *)v12;
      }
      ++v6;
      v12 = (const enum D2D1_POLYGON_EDGE_FLAG *)((char *)v12 + 4);
      v55 = _mm_unpacklo_ps(x_low, y_low).m128_u64[0];
      if ( !--v13 )
        break;
      y = *((FLOAT *)&v55 + 1);
      LODWORD(x) = v55;
    }
    v22 = *((_DWORD *)this + 12);
    for ( i = 0; i < v22; ++i )
    {
      v24 = *((_QWORD *)this + 3);
      v25 = *(float *)(v24 + 16LL * i + 12) - *(float *)(v24 + 16LL * i + 4);
      v26 = *(float *)(v24 + 16LL * i + 8) - *(float *)(v24 + 16LL * i);
      if ( (float)((float)(v25 * v25) + (float)(v26 * v26)) <= 1.0e-12 )
      {
        DynArray<CComposition::RoudTripRequestTracker,0>::RemoveAt((__int64 *)this + 3, i);
        if ( a4 )
          DynArray<enum D2D1_POLYGON_EDGE_FLAG,0>::RemoveAt((char *)this + 56, i);
        --i;
      }
      v22 = *((_DWORD *)this + 12);
    }
    if ( v22 >= 3 )
    {
      for ( j = 0; j < v22; ++j )
      {
        v28 = *((_QWORD *)this + 3);
        v30 = (float)((float)(*(float *)(v28 + 16LL * j + 12) - *(float *)(v28 + 16LL * j + 4))
                    * (float)(*(float *)(v28 + 16LL * (v22 - 1) + 8) - *(float *)(v28 + 16LL * (v22 - 1))))
            - (float)((float)(*(float *)(v28 + 16LL * j + 8) - *(float *)(v28 + 16LL * j))
                    * (float)(*(float *)(v28 + 16LL * (v22 - 1) + 12) - *(float *)(v28 + 16LL * (v22 - 1) + 4)));
        if ( COERCE_FLOAT(LODWORD(v30) & _xmm) > 0.000001 )
          break;
      }
      if ( v30 <= 0.0 )
        v31 = FLOAT_1_0;
      else
        v31 = FLOAT_N1_0;
      v32 = 0;
      *((float *)this + 4) = v31;
      if ( a4 && *((_DWORD *)this + 12) )
      {
        v37 = (_BYTE *)*((_QWORD *)this + 7);
        v38 = *((unsigned int *)this + 12);
        do
        {
          v39 = v32++;
          if ( (*v37 & 1) == 0 )
            v32 = v39;
          v37 += 4;
          --v38;
        }
        while ( v38 );
      }
      if ( v32 )
      {
        v33 = *((_DWORD *)this + 12);
        if ( v33 == v32 )
        {
          *(_BYTE *)this = 1;
          *((_DWORD *)this + 12) = 0;
          *((_DWORD *)this + 20) = 0;
        }
        else if ( v33 - v32 > 4 )
        {
          if ( v32 >= 2 )
          {
            for ( k = 1; k < v33; ++k )
            {
              v42 = *((_QWORD *)this + 7);
              if ( (*(_BYTE *)(v42 + 4LL * k) & 1) != 0 && (*(_BYTE *)(v42 + 4LL * (k - 1)) & 1) != 0 )
              {
                v43 = *((_QWORD *)this + 3);
                v44 = 2LL * (k - 1);
                v45 = *(_DWORD *)(v43 + 16LL * k + 12);
                *(_DWORD *)(v43 + 8 * v44 + 8) = *(_DWORD *)(v43 + 16LL * k + 8);
                *(_DWORD *)(v43 + 8 * v44 + 12) = v45;
                DynArray<CComposition::RoudTripRequestTracker,0>::RemoveAt((__int64 *)this + 3, k);
                DynArray<enum D2D1_POLYGON_EDGE_FLAG,0>::RemoveAt((char *)this + 56, k);
                --v32;
                --k;
              }
              v33 = *((_DWORD *)this + 12);
            }
            if ( v32 >= 2 )
            {
              v46 = (_BYTE *)*((_QWORD *)this + 7);
              if ( (*v46 & 1) != 0 && (v46[4 * (*((_DWORD *)this + 20) - 1)] & 1) != 0 )
              {
                v47 = *((_QWORD *)this + 3);
                v48 = *(_DWORD *)(v47 + 16LL * (unsigned int)(*((_DWORD *)this + 12) - 1) + 4);
                *(_DWORD *)(v47 + 8) = *(_DWORD *)(v47 + 16LL * (unsigned int)(*((_DWORD *)this + 12) - 1));
                *(_DWORD *)(v47 + 12) = v48;
                v33 = *((_DWORD *)this + 12) - 1;
                --*((_DWORD *)this + 20);
                *((_DWORD *)this + 12) = v33;
              }
            }
          }
          v49 = 0;
          v54 = 0;
          if ( v33 )
          {
            v50 = 0;
            do
            {
              if ( (*(_BYTE *)(*((_QWORD *)this + 7) + 4LL * v50) & 1) != 0 )
              {
                v51 = *((_DWORD *)this + 28);
                v52 = v51 + 1;
                if ( v51 + 1 < v51 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB7u, 0LL);
                }
                else if ( v52 > *((_DWORD *)this + 27) )
                {
                  v53 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 88, 4, 1, &v54);
                  if ( v53 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v53, 0xC2u, 0LL);
                }
                else
                {
                  *(_DWORD *)(*((_QWORD *)this + 11) + 4LL * v51) = v49;
                  *((_DWORD *)this + 28) = v52;
                }
                v49 = v54;
              }
              v50 = ++v49;
              v54 = v49;
            }
            while ( v49 < *((_DWORD *)this + 12) );
          }
        }
        else
        {
          v40 = 0LL;
          if ( v33 )
          {
            do
            {
              if ( (*(_BYTE *)(*((_QWORD *)this + 7) + 4 * v40) & 1) != 0 )
              {
                DynArray<CComposition::RoudTripRequestTracker,0>::RemoveAt((__int64 *)this + 3, v40);
                DynArray<enum D2D1_POLYGON_EDGE_FLAG,0>::RemoveAt((char *)this + 56, (unsigned int)v40);
                LODWORD(v40) = v40 - 1;
              }
              v40 = (unsigned int)(v40 + 1);
            }
            while ( (unsigned int)v40 < *((_DWORD *)this + 12) );
          }
        }
      }
      v34 = *((_DWORD *)this + 12);
      if ( v34 )
      {
        v35 = (struct D2D_POINT_2F *)*((_QWORD *)this + 3);
        dy = a5->dy;
        v56 = *(_OWORD *)&a5->m11;
        dx = a5->dx;
        v58 = dy;
        MILMatrix3x2::TransformPoints((MILMatrix3x2 *)&v56, v35, v35, 2 * v34);
      }
    }
    else
    {
      *((_DWORD *)this + 12) = 0;
    }
  }
  return 0LL;
}
