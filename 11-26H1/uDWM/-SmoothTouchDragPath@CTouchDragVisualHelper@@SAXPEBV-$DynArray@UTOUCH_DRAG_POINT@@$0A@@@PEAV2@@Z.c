/*
 * XREFs of ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x1800561D8
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18007D614 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001C390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Reset@?$DynArray@PEAVCWindowData@@$0A@@@QEAAXH@Z @ 0x18004AB50 (-Reset@-$DynArray@PEAVCWindowData@@$0A@@@QEAAXH@Z.c)
 *     ?GetMidPoint@CTouchDragVisualHelper@@CA?AUTOUCH_DRAG_POINT@@PEBU2@0@Z @ 0x1800566C0 (-GetMidPoint@CTouchDragVisualHelper@@CA-AUTOUCH_DRAG_POINT@@PEBU2@0@Z.c)
 *     ?Normalize@CTouchDragVisualHelper@@SAXPEAUD2D_VECTOR_2F@@@Z @ 0x18008B27C (-Normalize@CTouchDragVisualHelper@@SAXPEAUD2D_VECTOR_2F@@@Z.c)
 *     ?Add@CTouchDragVisualHelper@@SA?AUD2D_VECTOR_2F@@PEBU2@0@Z @ 0x18008D934 (-Add@CTouchDragVisualHelper@@SA-AUD2D_VECTOR_2F@@PEBU2@0@Z.c)
 *     ?Multiply@CTouchDragVisualHelper@@SA?AUD2D_VECTOR_2F@@PEBU2@M@Z @ 0x18008DAB4 (-Multiply@CTouchDragVisualHelper@@SA-AUD2D_VECTOR_2F@@PEBU2@M@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

void __fastcall CTouchDragVisualHelper::SmoothTouchDragPath(__int64 *a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 i; // rbx
  __int64 v6; // r9
  __int64 v7; // rax
  __int128 *v8; // r8
  __int128 v9; // xmm0
  __m128i v10; // xmm2
  __int64 v11; // r9
  struct D2D_VECTOR_2F *v12; // rdx
  __int128 v13; // xmm0
  __int64 v14; // r8
  __int64 v15; // rax
  __m128i v16; // xmm3
  int v17; // r15d
  float v18; // xmm7_4
  float v19; // xmm9_4
  float v20; // xmm6_4
  float v21; // xmm5_4
  struct D2D_VECTOR_2F v22; // rax
  __int64 v23; // xmm4_8
  __int64 v24; // r9
  __int64 v25; // rax
  unsigned int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 MidPoint; // rax
  int v30; // eax
  __int128 v31; // xmm0
  struct D2D_VECTOR_2F *v32; // rax
  __int64 v33; // rax
  __int128 v34; // xmm1
  int v35; // eax
  __int64 v36; // rcx
  struct D2D_VECTOR_2F v37; // rax
  __int64 v38; // rdx
  __int128 v39; // xmm0
  int v40; // eax
  struct D2D_VECTOR_2F v41; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_VECTOR_2F v42; // [rsp+40h] [rbp-C8h] BYREF
  struct D2D_VECTOR_2F v43; // [rsp+48h] [rbp-C0h] BYREF
  struct D2D_VECTOR_2F v44[3]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v45[3]; // [rsp+68h] [rbp-A0h] BYREF
  int v46; // [rsp+80h] [rbp-88h]
  D2D_VECTOR_2F v47[2]; // [rsp+88h] [rbp-80h] BYREF
  FLOAT v48; // [rsp+98h] [rbp-70h]
  struct D2D_VECTOR_2F v49[2]; // [rsp+A0h] [rbp-68h] BYREF
  int v50; // [rsp+B0h] [rbp-58h]
  struct D2D_VECTOR_2F v51[2]; // [rsp+B8h] [rbp-50h] BYREF
  FLOAT x; // [rsp+C8h] [rbp-40h]

  v2 = *((_DWORD *)a1 + 6);
  DynArray<CWindowData *,0>::Reset(a2);
  for ( i = 0LL; (unsigned int)i < v2; i = (unsigned int)(i + 2) )
  {
    v6 = *a1;
    if ( (int)i + 4 > v2 )
    {
      if ( (_DWORD)i )
      {
        MidPoint = CTouchDragVisualHelper::GetMidPoint(v47, v6 + 20 * i, v6 + 20LL * (unsigned int)(i + 1));
        v10 = *(__m128i *)MidPoint;
        v30 = *(_DWORD *)(MidPoint + 16);
      }
      else
      {
        v10 = *(__m128i *)v6;
        v30 = *(_DWORD *)(v6 + 16);
      }
      v46 = v30;
      *(__m128i *)&v45[1] = v10;
      v31 = *(_OWORD *)(v6 + 20LL * (unsigned int)(i + 1));
      v50 = *(_DWORD *)(v6 + 20LL * (unsigned int)(i + 1) + 16);
      *(_OWORD *)&v49[0].x = v31;
      if ( (int)i + 3 <= v2 )
        v32 = (struct D2D_VECTOR_2F *)(v6 + 20LL * (unsigned int)(i + 2));
      else
        v32 = v49;
      v16 = *(__m128i *)&v32->x;
      x = v32[2].x;
      *(__m128i *)&v51[0].x = v16;
      v33 = CTouchDragVisualHelper::GetMidPoint(v47, v49, v51);
      LODWORD(i) = v2;
      v34 = *(_OWORD *)v33;
      LODWORD(v45[0]) = *(_DWORD *)(v33 + 16);
      *(_OWORD *)&v44[1].x = v34;
    }
    else
    {
      if ( (_DWORD)i )
      {
        v7 = CTouchDragVisualHelper::GetMidPoint(v47, v6 + 20 * i, v6 + 20LL * (unsigned int)(i + 1));
        v9 = *v8;
        v10 = *(__m128i *)v7;
        v46 = *(_DWORD *)(v7 + 16);
        v50 = *((_DWORD *)v8 + 4);
        *(_OWORD *)&v49[0].x = v9;
        v12 = (struct D2D_VECTOR_2F *)(v11 + 20LL * (unsigned int)(i + 2));
        v13 = *(_OWORD *)&v12->x;
        *(FLOAT *)v45 = v12[2].x;
        v14 = v11 + 20LL * (unsigned int)(i + 3);
      }
      else
      {
        v14 = v6 + 60;
        v39 = *(_OWORD *)(v6 + 20);
        v46 = *(_DWORD *)(v6 + 16);
        v12 = &v44[1];
        v10 = *(__m128i *)v6;
        v50 = *(_DWORD *)(v6 + 36);
        v40 = *(_DWORD *)(v6 + 56);
        *(_OWORD *)&v49[0].x = v39;
        LODWORD(v45[0]) = v40;
        v13 = *(_OWORD *)(v6 + 40);
      }
      *(__m128i *)&v45[1] = v10;
      *(_OWORD *)&v44[1].x = v13;
      v15 = CTouchDragVisualHelper::GetMidPoint(v47, v12, v14);
      v16 = *(__m128i *)v15;
      x = *(float *)(v15 + 16);
      *(__m128i *)&v51[0].x = v16;
    }
    v17 = _mm_cvtsi128_si32(v16);
    v18 = 0.0;
    v19 = (float)(_mm_cvtsi128_si32(v10) - v17);
    do
    {
      v47[0].x = 0.0;
      v20 = 1.0 - v18;
      v44[0] = CTouchDragVisualHelper::Multiply(
                 (const struct D2D_VECTOR_2F *)((char *)&v45[1] + 4),
                 (float)(v20 * v20) * v20);
      v41 = CTouchDragVisualHelper::Multiply((struct D2D_VECTOR_2F *)&v49[0].y, (float)((float)(v20 * 3.0) * v20) * v18);
      v43 = CTouchDragVisualHelper::Multiply(
              (struct D2D_VECTOR_2F *)&v44[1].y,
              (float)((float)((float)(1.0 - v18) * 3.0) * v18) * v18);
      v42 = CTouchDragVisualHelper::Multiply((struct D2D_VECTOR_2F *)&v51[0].y, (float)(v18 * v18) * v18);
      v41 = CTouchDragVisualHelper::Add(v44, &v41);
      v41 = CTouchDragVisualHelper::Add(&v41, &v43);
      CTouchDragVisualHelper::Add(&v41, &v42);
      v44[0] = CTouchDragVisualHelper::Multiply(
                 (const struct D2D_VECTOR_2F *)((char *)&v45[1] + 4),
                 (float)((float)(v18 - 1.0) * 3.0) * (float)(1.0 - v18));
      v41 = CTouchDragVisualHelper::Multiply(
              (struct D2D_VECTOR_2F *)&v49[0].y,
              (float)((float)((float)((float)(v18 - 1.0) + (float)(v18 - 1.0)) * v18) + v21) * 3.0);
      v43 = CTouchDragVisualHelper::Multiply(
              (struct D2D_VECTOR_2F *)&v44[1].y,
              (float)((float)((float)(v20 + v20) * v18) - (float)(v18 * v18)) * 3.0);
      v42 = CTouchDragVisualHelper::Multiply((struct D2D_VECTOR_2F *)&v51[0].y, (float)(v18 * 3.0) * v18);
      v41 = CTouchDragVisualHelper::Add(v44, &v41);
      v43 = CTouchDragVisualHelper::Add(&v41, &v43);
      v41 = v43;
      v22 = CTouchDragVisualHelper::Add(&v41, &v42);
      v42 = v22;
      LODWORD(v47[1].y) = LODWORD(v22.y) ^ _xmm;
      v48 = v22.x;
      *(_QWORD *)&v47[0].y = v23;
      CTouchDragVisualHelper::Normalize((D2D_VECTOR_2F *)&v47[1].y);
      LODWORD(v47[0].x) = v17 + (int)(float)(v19 * (float)(1.0 - v18));
      v25 = *(unsigned int *)(a2 + 24);
      v26 = v25 + 1;
      if ( (int)v25 + 1 < (unsigned int)v25 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB7u, 0LL);
      }
      else if ( v26 > *(_DWORD *)(a2 + 20) )
      {
        v42 = (struct D2D_VECTOR_2F)v47;
        v35 = DynArrayImpl<0>::Grow(a2, 0x14u, 1, v24, (unsigned __int64 *)&v42);
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0xC2u, 0LL);
        }
        else
        {
          v36 = *(_QWORD *)a2;
          v37 = v42;
          v38 = (unsigned int)(20 * *(_DWORD *)(a2 + 24));
          *(_OWORD *)(v38 + v36) = *(_OWORD *)*(_QWORD *)&v42;
          *(_DWORD *)(v38 + v36 + 16) = *(_DWORD *)(*(_QWORD *)&v37 + 16LL);
          ++*(_DWORD *)(a2 + 24);
        }
      }
      else
      {
        v27 = *(_QWORD *)a2;
        v28 = 5 * v25;
        *(_OWORD *)(v27 + 4 * v28) = *(_OWORD *)&v47[0].x;
        *(FLOAT *)(v27 + 4 * v28 + 16) = v48;
        *(_DWORD *)(a2 + 24) = v26;
      }
      v18 = v18 + 0.2;
    }
    while ( v18 < 1.0 );
  }
}
