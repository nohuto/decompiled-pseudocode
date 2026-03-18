/*
 * XREFs of ?IntersectGeometryWithSafeBounds@CD2DContext@@MEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAU2@@Z @ 0x180298850
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180013F60 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1802B96CC (ceilf_0.c)
 *     floorf_0 @ 0x1802B9708 (floorf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::IntersectGeometryWithSafeBounds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  _QWORD *v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  __m128 v14; // xmm6
  float v15; // xmm7_4
  __int32 v16; // xmm1_4
  float v17; // xmm0_4
  __m128 v18; // xmm8
  float v19; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm2_4
  unsigned int v23; // [rsp+28h] [rbp-A9h]
  __int64 v24; // [rsp+48h] [rbp-89h] BYREF
  __int64 v25; // [rsp+50h] [rbp-81h] BYREF
  __int64 v26; // [rsp+58h] [rbp-79h] BYREF
  __int64 v27; // [rsp+60h] [rbp-71h] BYREF
  __int64 v28; // [rsp+68h] [rbp-69h] BYREF
  _QWORD v29[2]; // [rsp+70h] [rbp-61h] BYREF
  __int128 X; // [rsp+80h] [rbp-51h] BYREF

  v25 = 0LL;
  v26 = 0LL;
  *a6 = 0LL;
  v27 = 0LL;
  v24 = 0LL;
  v28 = 0LL;
  v10 = *(_QWORD **)(a1 + 176);
  X = 0LL;
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v10 + 80LL))(*v10, &v25);
  v12 = v11;
  if ( v11 < 0 )
  {
    v23 = 1081;
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(***(_QWORD ***)(a1 + 176) + 80LL))(
            **(_QWORD **)(a1 + 176),
            &v27);
    v12 = v11;
    if ( v11 < 0 )
    {
      v23 = 1082;
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 136LL))(v25, &v26);
      v12 = v11;
      if ( v11 < 0 )
      {
        v23 = 1083;
      }
      else
      {
        v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 136LL))(v27, &v24);
        v12 = v11;
        if ( v11 < 0 )
        {
          v23 = 1084;
        }
        else
        {
          v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _DWORD, __int64))(*(_QWORD *)a3 + 88LL))(
                  a3,
                  a2,
                  1LL,
                  a4,
                  LODWORD(FLOAT_0_25),
                  v26);
          v12 = v11;
          if ( v11 < 0 )
          {
            v23 = 1092;
          }
          else
          {
            v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 72LL))(v26);
            v12 = v13;
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x446u, 0LL);
              goto LABEL_32;
            }
            v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v25 + 32LL))(v25, 0LL, &X);
            v12 = v11;
            if ( v11 < 0 )
            {
              v23 = 1099;
            }
            else
            {
              v14 = (__m128)(unsigned int)X;
              v15 = *((float *)&X + 2);
              if ( *(float *)&X > *((float *)&X + 2) )
                goto LABEL_32;
              COERCE_FLOAT(v16 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
              if ( COERCE_FLOAT(X & v16) < 8388608.0 )
              {
                v17 = floorf_0(*(float *)&X);
                v16 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
                v14 = (__m128)COERCE_UNSIGNED_INT((float)(int)v17);
              }
              v18 = (__m128)DWORD1(X);
              if ( COERCE_FLOAT(DWORD1(X) & v16) < 8388608.0 )
              {
                v19 = floorf_0(*((float *)&X + 1));
                v16 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
                v18 = (__m128)COERCE_UNSIGNED_INT((float)(int)v19);
              }
              if ( COERCE_FLOAT(LODWORD(v15) & v16) < 8388608.0 )
              {
                v20 = ceilf_0(v15);
                v16 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
                v15 = (float)(int)v20;
              }
              v21 = *((float *)&X + 3);
              if ( COERCE_FLOAT(HIDWORD(X) & v16) < 8388608.0 )
                v21 = (float)(int)ceilf_0(*((float *)&X + 3));
              if ( a5 )
              {
                *(_DWORD *)a5 = v14.m128_i32[0];
                *(float *)(a5 + 8) = v15;
                *(_DWORD *)(a5 + 4) = v18.m128_i32[0];
                *(float *)(a5 + 12) = v21;
              }
              v14.m128_f32[0] = v14.m128_f32[0] - 1.0;
              v18.m128_f32[0] = v18.m128_f32[0] - 1.0;
              *(_QWORD *)&X = __PAIR64__(v18.m128_u32[0], v14.m128_u32[0]);
              *((float *)&X + 2) = v15 + 1.0;
              *((float *)&X + 3) = v21 + 1.0;
              (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v24 + 40LL))(
                v24,
                _mm_unpacklo_ps(v14, v18).m128_u64[0],
                0LL);
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 64LL))(v24, 1LL);
              (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v24 + 40LL))(
                v24,
                _mm_unpacklo_ps((__m128)DWORD2(X), (__m128)HIDWORD(X)).m128_u64[0],
                0LL);
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 64LL))(v24, 1LL);
              v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 72LL))(v24);
              v12 = v11;
              if ( v11 < 0 )
              {
                v23 = 1145;
              }
              else
              {
                v29[0] = v25;
                v29[1] = v27;
                v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64, __int64 *))(***(_QWORD ***)(a1 + 176)
                                                                                              + 64LL))(
                        **(_QWORD **)(a1 + 176),
                        0LL,
                        v29,
                        2LL,
                        &v28);
                v12 = v11;
                if ( v11 >= 0 )
                {
                  *a6 = v28;
                  v28 = 0LL;
                  goto LABEL_32;
                }
                v23 = 1155;
              }
            }
          }
        }
      }
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, v23, 0LL);
LABEL_32:
  ReleaseInterface<ID2D1Geometry>(&v25);
  ReleaseInterface<ID2D1Geometry>(&v26);
  ReleaseInterface<ID2D1Geometry>(&v27);
  ReleaseInterface<ID2D1Geometry>(&v24);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  return v12;
}
