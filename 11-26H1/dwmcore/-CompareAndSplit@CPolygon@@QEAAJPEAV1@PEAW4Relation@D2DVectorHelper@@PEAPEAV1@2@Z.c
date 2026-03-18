/*
 * XREFs of ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801A20A0
 * Callers:
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x180073624 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180042890 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180063BB0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArray@UPoint@CPolygon@@$0A@@@QEAAJPEFBUPoint@CPolygon@@I@Z @ 0x1801A2758 (-AddMultipleAndSet@-$DynArray@UPoint@CPolygon@@$0A@@@QEAAJPEFBUPoint@CPolygon@@I@Z.c)
 *     ?Transpose@CMILMatrix@@QEAAXXZ @ 0x1801A2BEC (-Transpose@CMILMatrix@@QEAAXXZ.c)
 *     ?D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z @ 0x1801A2C48 (-D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z @ 0x180261614 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z.c)
 *     ?PlaneVectorIntersection@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x1802616F4 (-PlaneVectorIntersection@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPolygon::CompareAndSplit(
        CPolygon *this,
        struct CPolygon *a2,
        enum D2DVectorHelper::Relation *a3,
        struct CPolygon **a4,
        struct CPolygon **a5)
{
  int v5; // r14d
  int v6; // ebx
  __int128 v9; // xmm0
  __m128i v10; // xmm1
  int v11; // r12d
  __m128i v12; // xmm0
  struct CPolygon *v13; // r15
  __m128i v14; // xmm1
  int v15; // eax
  bool v16; // al
  struct Windows::Foundation::Numerics::float4x4 *v17; // r8
  bool v18; // al
  unsigned int v19; // edx
  unsigned int v20; // r9d
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  __int128 v23; // xmm0
  int v24; // r9d
  __int64 v25; // r8
  int v26; // edx
  struct D2D_VECTOR_4F v27; // xmm8
  float v28; // xmm9_4
  float v29; // xmm10_4
  struct D2D_VECTOR_4F v30; // xmm11
  float v31; // xmm11_4
  struct D2D_VECTOR_4F v32; // xmm3
  int v33; // r10d
  struct D2D_VECTOR_4F v34; // xmm4
  int v35; // r11d
  float v36; // xmm5_4
  int v37; // edx
  float v38; // xmm3_4
  int v39; // esi
  unsigned int v40; // r13d
  __int64 v41; // rax
  struct D2D_VECTOR_4F v42; // xmm6
  float v43; // xmm3_4
  int v44; // eax
  int v45; // eax
  int v47; // eax
  int v48; // eax
  struct D2D_VECTOR_4F v49; // xmm0
  int v50; // r10d
  int v51; // eax
  int v52; // eax
  int v53; // eax
  struct D2D_VECTOR_4F v54; // xmm0
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  unsigned int v60; // eax
  struct D2D_VECTOR_4F *v61; // [rsp+28h] [rbp-E0h]
  unsigned int v62; // [rsp+30h] [rbp-D8h]
  int v63; // [rsp+38h] [rbp-D0h]
  int v64; // [rsp+3Ch] [rbp-CCh]
  int v65; // [rsp+40h] [rbp-C8h]
  struct CPolygon *v67; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v68[3]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v69[3]; // [rsp+70h] [rbp-98h] BYREF
  __m128i si128; // [rsp+88h] [rbp-80h]
  __m128i v71; // [rsp+98h] [rbp-70h]
  __m128i v72; // [rsp+A8h] [rbp-60h]
  int v73; // [rsp+B8h] [rbp-50h]
  struct D2D_VECTOR_4F v74; // [rsp+C8h] [rbp-40h] BYREF
  int v75; // [rsp+D8h] [rbp-30h]
  struct CPolygon **v76; // [rsp+E0h] [rbp-28h]
  struct CPolygon **v77; // [rsp+E8h] [rbp-20h]
  struct D2D_VECTOR_4F v78; // [rsp+F8h] [rbp-10h] BYREF
  __m128i v79; // [rsp+108h] [rbp+0h]
  __m128i v80; // [rsp+118h] [rbp+10h]
  __m128i v81; // [rsp+128h] [rbp+20h]
  int v82; // [rsp+138h] [rbp+30h]
  struct D2D_VECTOR_4F v83; // [rsp+148h] [rbp+40h] BYREF
  __m128i v84; // [rsp+158h] [rbp+50h]
  __m128i v85; // [rsp+168h] [rbp+60h]
  __m128i v86; // [rsp+178h] [rbp+70h]
  int v87; // [rsp+188h] [rbp+80h]
  char v88[16]; // [rsp+190h] [rbp+88h] BYREF
  struct D2D_VECTOR_4F v89; // [rsp+1A0h] [rbp+98h] BYREF
  struct D2D_VECTOR_4F v90; // [rsp+1B0h] [rbp+A8h] BYREF
  int v91; // [rsp+1C0h] [rbp+B8h]
  struct D2D_VECTOR_4F v92; // [rsp+1C8h] [rbp+C0h] BYREF
  int v93; // [rsp+1D8h] [rbp+D0h]
  _QWORD v94[2]; // [rsp+1E8h] [rbp+E0h] BYREF
  int v95; // [rsp+1F8h] [rbp+F0h]
  __int64 v96; // [rsp+1FCh] [rbp+F4h]
  _BYTE v97[128]; // [rsp+208h] [rbp+100h] BYREF
  _QWORD v98[2]; // [rsp+288h] [rbp+180h] BYREF
  int v99; // [rsp+298h] [rbp+190h]
  __int64 v100; // [rsp+29Ch] [rbp+194h]
  _BYTE v101[128]; // [rsp+2A8h] [rbp+1A0h] BYREF

  v5 = 0;
  v77 = a5;
  v76 = a4;
  v92 = 0LL;
  v6 = 0;
  *a4 = 0LL;
  *a5 = 0LL;
  v9 = *((_OWORD *)a2 + 9);
  v90 = 0LL;
  v99 = 6;
  v10 = *((__m128i *)a2 + 10);
  v98[0] = v101;
  v11 = 0;
  *(_OWORD *)&v69[1] = v9;
  v12 = *((__m128i *)a2 + 11);
  v98[1] = v101;
  v13 = 0LL;
  si128 = v10;
  v14 = *((__m128i *)a2 + 12);
  v94[0] = v97;
  v94[1] = v97;
  v93 = 0;
  v91 = 0;
  v15 = *((_DWORD *)a2 + 52);
  v100 = 6LL;
  v95 = 6;
  v96 = 6LL;
  v63 = 0;
  v71 = v12;
  v72 = v14;
  v73 = v15;
  v82 = 0;
  v68[0] = 0LL;
  v67 = 0LL;
  v16 = Windows::Foundation::Numerics::invert((Windows::Foundation::Numerics *)&v69[1], (__m128 *)&v69[1], a3);
  LOWORD(v73) = v73 & 0xC003;
  if ( v16 )
  {
    CMILMatrix::Multiply((CPolygon *)((char *)this + 144), (__m128 *)&v69[1], (struct CMILMatrix *)&v69[1]);
  }
  else
  {
    v73 = 10666;
    *(__m128i *)&v69[1] = _mm_load_si128((const __m128i *)&_xmm);
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v71 = _mm_load_si128((const __m128i *)&_xmm);
    v72 = _mm_load_si128((const __m128i *)&_xmm);
  }
  v18 = Windows::Foundation::Numerics::invert((Windows::Foundation::Numerics *)&v69[1], (__m128 *)&v69[1], v17);
  LOWORD(v73) = v73 & 0xC003;
  if ( v18 )
  {
    v83 = *(struct D2D_VECTOR_4F *)&v69[1];
    v87 = v73;
    v84 = si128;
    v85 = v71;
    v86 = v72;
    CMILMatrix::Transpose((CMILMatrix *)&v83);
    v82 = v87;
    v78 = v83;
    v21 = v85;
    v79 = v84;
    v22 = v86;
  }
  else
  {
    v78 = (struct D2D_VECTOR_4F)_mm_load_si128((const __m128i *)&_xmm);
    v21 = _mm_load_si128((const __m128i *)&_xmm);
    v79 = _mm_load_si128((const __m128i *)&_xmm);
    v22 = _mm_load_si128((const __m128i *)&_xmm);
    BYTE1(v82) = BYTE1(v82) & 0xC0 | 0x29;
    v73 = 0;
    LOBYTE(v82) = -86;
  }
  v80 = v21;
  v23 = *((_OWORD *)this + 8);
  v81 = v22;
  v89 = 0LL;
  *(_OWORD *)&v68[1] = v23;
  D3DXVec4TransformArray(
    (struct D2DVector4 *)&v89,
    v19,
    (const struct D2DVector4 *)&v68[1],
    v20,
    (const struct D2DMatrix *)&v78,
    v62);
  v25 = *((_QWORD *)a2 + 2);
  v26 = *((_DWORD *)a2 + 10);
  v27 = v89;
  v28 = _mm_shuffle_ps((__m128)v89, (__m128)v89, 85).m128_f32[0];
  v29 = _mm_shuffle_ps((__m128)v89, (__m128)v89, 170).m128_f32[0];
  v30 = v89;
  v89.y = v28;
  v31 = _mm_shuffle_ps((__m128)v30, (__m128)v30, 255).m128_f32[0];
  v32 = *(struct D2D_VECTOR_4F *)(v25 + 20LL * (unsigned int)(v26 - 2));
  v33 = *(_DWORD *)(v25 + 20LL * (unsigned int)(v26 - 2) + 16);
  v89.z = v29;
  *(struct D2D_VECTOR_4F *)&v68[1] = v27;
  v64 = v33;
  v89.w = v31;
  v34 = *(struct D2D_VECTOR_4F *)(v25 + 20LL * (unsigned int)(v26 - 1));
  v75 = v33;
  v74 = v32;
  v92 = v34;
  v35 = *(_DWORD *)(v25 + 20LL * (unsigned int)(v26 - 1) + 16);
  v93 = v35;
  v36 = (float)((float)((float)(v28 * _mm_shuffle_ps((__m128)v32, (__m128)v32, 85).m128_f32[0]) + (float)(v27.x * v32.x))
              + (float)(v29 * _mm_shuffle_ps((__m128)v32, (__m128)v32, 170).m128_f32[0]))
      + (float)(v31 * _mm_shuffle_ps((__m128)v32, (__m128)v32, 255).m128_f32[0]);
  if ( v36 > 0.00390625 )
  {
    v37 = 1;
  }
  else
  {
    v37 = 0;
    if ( v36 < -0.00390625 )
      v37 = 2;
  }
  v38 = (float)((float)((float)(v28 * _mm_shuffle_ps((__m128)v34, (__m128)v34, 85).m128_f32[0]) + (float)(v27.x * v34.x))
              + (float)(v29 * _mm_shuffle_ps((__m128)v34, (__m128)v34, 170).m128_f32[0]))
      + (float)(v31 * _mm_shuffle_ps((__m128)v34, (__m128)v34, 255).m128_f32[0]);
  if ( v38 > 0.00390625 )
  {
    v39 = 1;
  }
  else
  {
    v39 = 0;
    if ( v38 < -0.00390625 )
      v39 = 2;
  }
  v40 = 0;
  while ( v40 < *((_DWORD *)a2 + 10) )
  {
    v41 = *((_QWORD *)a2 + 2);
    v42 = *(struct D2D_VECTOR_4F *)(v41 + 20LL * v40);
    v65 = *(_DWORD *)(v41 + 20LL * v40 + 16);
    v43 = (float)((float)((float)(v28 * _mm_shuffle_ps((__m128)v42, (__m128)v42, 85).m128_f32[0])
                        + (float)(v27.x * v42.x))
                + (float)(v29 * _mm_shuffle_ps((__m128)v42, (__m128)v42, 170).m128_f32[0]))
        + (float)(v31 * _mm_shuffle_ps((__m128)v42, (__m128)v42, 255).m128_f32[0]);
    if ( v43 > 0.00390625 )
    {
      v5 = 1;
    }
    else if ( v43 < -0.00390625 )
    {
      v5 = 2;
    }
    if ( v39 != 1 )
    {
      if ( v39 == 2 )
      {
        if ( v37 == 1 )
        {
          v54 = *D2DVectorHelper::PlaneVectorIntersection((D2DVectorHelper *)v88, &v89, &v74, &v92, v61);
          v91 = 0;
          v90 = v54;
          v55 = DynArray<CPolygon::Point,0>::AddMultipleAndSet(v98, &v90);
          v6 = v55;
          if ( v55 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v55, 0x124u, 0LL);
            goto LABEL_30;
          }
          v91 = v64;
          v56 = DynArray<CPolygon::Point,0>::AddMultipleAndSet(v94, &v90);
          v6 = v56;
          if ( v56 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v56, 0x127u, 0LL);
            goto LABEL_30;
          }
        }
        v57 = DynArray<CPolygon::Point,0>::AddMultipleAndSet(v94, &v92);
        v6 = v57;
        if ( v57 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v57, 0x12Du, 0LL);
          goto LABEL_30;
        }
        ++v11;
      }
      else
      {
        v90 = v34;
        if ( v37 == 1 )
        {
          if ( v5 != 2 )
            goto LABEL_20;
          v91 = 0;
          v58 = DynArray<CPolygon::Point,0>::AddMultipleAndSet(v98, &v90);
          v6 = v58;
          if ( v58 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v58, 0x13Fu, 0LL);
            goto LABEL_30;
          }
          v91 = v93;
          v59 = DynArray<CPolygon::Point,0>::AddMultipleAndSet(v94, &v90);
          v6 = v59;
          if ( v59 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v59, 0x142u, 0LL);
            goto LABEL_30;
          }
        }
        else
        {
          if ( v37 == 2 && v5 == 1 )
          {
            v91 = v35;
            v47 = DynArray<CPolygon::Point,0>::AddMultipleAndSet(v98, &v90);
            v6 = v47;
            if ( v47 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v47, 0x14Au, 0LL);
              goto LABEL_30;
            }
            v91 = 0;
            v48 = DynArray<CPolygon::Point,0>::AddMultipleAndSet(v94, &v90);
            v6 = v48;
            if ( v48 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v48, 0x14Du, 0LL);
              goto LABEL_30;
            }
            goto LABEL_22;
          }
LABEL_20:
          v44 = DynArray<CPolygon::Point,0>::AddMultipleAndSet(v98, &v92);
          v6 = v44;
          if ( v44 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v44, 0x151u, 0LL);
            goto LABEL_30;
          }
          v45 = DynArray<CPolygon::Point,0>::AddMultipleAndSet(v94, &v92);
          v6 = v45;
          if ( v45 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v45, 0x152u, 0LL);
            goto LABEL_30;
          }
        }
      }
LABEL_22:
      v24 = v63;
      goto LABEL_23;
    }
    if ( v37 == 2 )
    {
      v49 = *D2DVectorHelper::PlaneVectorIntersection((D2DVectorHelper *)&v68[1], &v89, &v74, &v92, v61);
      v91 = v50;
      v90 = v49;
      v51 = DynArray<CPolygon::Point,0>::AddMultipleAndSet(v98, &v90);
      v6 = v51;
      if ( v51 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v51, 0x10Bu, 0LL);
        goto LABEL_30;
      }
      v91 = 0;
      v52 = DynArray<CPolygon::Point,0>::AddMultipleAndSet(v94, &v90);
      v6 = v52;
      if ( v52 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v52, 0x10Eu, 0LL);
        goto LABEL_30;
      }
    }
    v53 = DynArray<CPolygon::Point,0>::AddMultipleAndSet(v98, &v92);
    v6 = v53;
    if ( v53 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v53, 0x113u, 0LL);
      goto LABEL_30;
    }
    v24 = ++v63;
LABEL_23:
    v37 = v39;
    v35 = v65;
    ++v40;
    v39 = v5;
    v64 = v93;
    v5 = 0;
    v75 = v93;
    v74 = v92;
    v93 = v65;
    v34 = v42;
    v92 = v42;
  }
  if ( !v24 )
  {
    *(_DWORD *)a3 = v11 != 0 ? 2 : 0;
    goto LABEL_30;
  }
  if ( !v11 )
  {
    *(_DWORD *)a3 = 1;
    goto LABEL_30;
  }
  *(_DWORD *)a3 = 3;
  v6 = CPolygon::Create(v98, a2, v68);
  if ( v6 < 0 )
  {
    v60 = 372;
  }
  else
  {
    v6 = CPolygon::Create(v94, a2, &v67);
    if ( v6 >= 0 )
    {
      *v76 = (struct CPolygon *)v68[0];
      *v77 = v67;
      goto LABEL_30;
    }
    v13 = v67;
    v60 = 373;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v60, 0LL);
  if ( v68[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v68[0] + 8LL))(v68[0]);
  if ( v13 )
    (*(void (__fastcall **)(struct CPolygon *))(*(_QWORD *)v13 + 8LL))(v13);
LABEL_30:
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v94);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v98);
  return (unsigned int)v6;
}
