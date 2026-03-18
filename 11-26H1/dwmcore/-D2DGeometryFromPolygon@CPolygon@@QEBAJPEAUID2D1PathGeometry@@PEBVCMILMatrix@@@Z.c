/*
 * XREFs of ?D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z @ 0x1800CFBC8
 * Callers:
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x1800CF1A8 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180042890 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_4F@@PEAU2@I@Z @ 0x1800D0184 (-Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_4F@@PEAU2@I@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPolygon::D2DGeometryFromPolygon(
        const struct D2D_POINT_4F **this,
        struct ID2D1PathGeometry *a2,
        __m128 *a3)
{
  __m128 v3; // xmm1
  __int32 v4; // eax
  __m128 v7; // xmm0
  __m128 v8; // xmm1
  __m128 v9; // xmm0
  __m128 v10; // xmm6
  __int64 (__fastcall *v11)(struct ID2D1PathGeometry *, __int64 *); // rax
  __m128 v12; // xmm7
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // rdi
  __m128 v18; // xmm0
  __m128 v19; // xmm1
  void (__fastcall *v20)(__int64, unsigned __int64); // rax
  int v21; // eax
  __int64 v23; // [rsp+38h] [rbp-59h] BYREF
  __m128 v24[4]; // [rsp+48h] [rbp-49h] BYREF
  __int32 v25; // [rsp+88h] [rbp-9h]
  __int128 v26; // [rsp+98h] [rbp+7h] BYREF

  v3 = a3[1];
  v4 = a3[4].m128_i32[0];
  v23 = 0LL;
  v26 = 0LL;
  v7 = *a3;
  v25 = v4;
  v24[1] = v3;
  v8 = a3[3];
  v24[0] = v7;
  v9 = a3[2];
  v24[3] = v8;
  v24[2] = v9;
  CMILMatrix::Multiply((const struct CMILMatrix *)(this + 18), v24, (struct CMILMatrix *)v24);
  CMILMatrix::Transform((CMILMatrix *)v24, this[2], (struct D2D_POINT_4F *)&v26, 1u);
  v10 = (__m128)(unsigned int)v26;
  v12 = (__m128)DWORD1(v26);
  v10.m128_f32[0] = *(float *)&v26 / *((float *)&v26 + 3);
  v11 = *(__int64 (__fastcall **)(struct ID2D1PathGeometry *, __int64 *))(*(_QWORD *)a2 + 136LL);
  v12.m128_f32[0] = *((float *)&v26 + 1) / *((float *)&v26 + 3);
  *(float *)&v26 = *(float *)&v26 / *((float *)&v26 + 3);
  *((float *)&v26 + 1) = *((float *)&v26 + 1) / *((float *)&v26 + 3);
  v13 = v11(a2, &v23);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x21Du, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v23 + 40LL))(
      v23,
      _mm_unpacklo_ps(v10, v12).m128_u64[0],
      0LL);
    v15 = *((_DWORD *)this + 10);
    if ( v15 > 1 )
    {
      v16 = 20LL;
      v17 = v15 - 1;
      do
      {
        CMILMatrix::Transform(
          (CMILMatrix *)v24,
          (const struct D2D_POINT_4F *)((char *)this[2] + v16),
          (struct D2D_POINT_4F *)&v26,
          1u);
        v18 = (__m128)(unsigned int)v26;
        v19 = (__m128)DWORD1(v26);
        v20 = *(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v23 + 80LL);
        *(float *)&v26 = *(float *)&v26 / *((float *)&v26 + 3);
        v18.m128_f32[0] = *(float *)&v26;
        *((float *)&v26 + 1) = *((float *)&v26 + 1) / *((float *)&v26 + 3);
        v19.m128_f32[0] = *((float *)&v26 + 1);
        v20(v23, _mm_unpacklo_ps(v18, v19).m128_u64[0]);
        v16 += 20LL;
        --v17;
      }
      while ( v17 );
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 64LL))(v23, 1LL);
    v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 72LL))(v23);
    v14 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x231u, 0LL);
  }
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  return v14;
}
