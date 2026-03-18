/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x1801CCD80
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180022120 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsInfinite@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180057D50 (-IsInfinite@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800590B0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArray@UInputBoundsPair@@$0A@@@QEAAJPEFBUInputBoundsPair@@I@Z @ 0x1801CD434 (-AddMultipleAndSet@-$DynArray@UInputBoundsPair@@$0A@@@QEAAJPEFBUInputBoundsPair@@I@Z.c)
 *     ?InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x18020B724 (-InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_RECT_F@@.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFilterEffect::CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive(
        _DWORD *a1,
        __int64 a2,
        float *a3,
        __int64 a4,
        float *a5,
        float *a6)
{
  int v6; // eax
  unsigned int v8; // edi
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 i; // r15
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rcx
  char v16; // al
  __int64 v17; // rcx
  int v18; // eax
  int v19; // r9d
  unsigned int v20; // eax
  __m128i v21; // xmm0
  int v22; // eax
  const struct D2D_RECT_F *v23; // rcx
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm1_4
  __int64 v27; // rdx
  unsigned int v29; // [rsp+20h] [rbp-B9h]
  struct D2D_RECT_F v30; // [rsp+40h] [rbp-99h] BYREF
  int v31; // [rsp+50h] [rbp-89h]
  __int64 v32; // [rsp+58h] [rbp-81h]
  __int64 v33; // [rsp+60h] [rbp-79h]
  __int128 v34; // [rsp+68h] [rbp-71h] BYREF
  __int64 v35; // [rsp+78h] [rbp-61h]
  int v36; // [rsp+80h] [rbp-59h]
  struct D2D_RECT_F v37; // [rsp+88h] [rbp-51h] BYREF
  struct D2D_RECT_F v38; // [rsp+98h] [rbp-41h] BYREF
  _BYTE v39[20]; // [rsp+A8h] [rbp-31h] BYREF
  __int128 v40; // [rsp+C0h] [rbp-19h] BYREF
  __int128 v41; // [rsp+D0h] [rbp-9h] BYREF

  v6 = a1[10];
  v8 = 0;
  v34 = 0LL;
  v32 = a2;
  v35 = 0LL;
  v36 = 0;
  a1[10] = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 4)) & 0xC;
  v10 = a2;
  v41 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v38 = 0LL;
  v40 = 0LL;
  if ( (((unsigned __int8)v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 4)) & 0xC) & 0xC) == 4 )
  {
    (*(void (__fastcall **)(_DWORD *, __int64, float *, _DWORD *, struct D2D_RECT_F *, __int128 *))(*(_QWORD *)a1 + 264LL))(
      a1,
      a2,
      a3,
      a1 + 84,
      &v38,
      &v40);
    v11 = (int)a1[82];
    if ( (_DWORD)v11 )
    {
      v33 = (int)a1[82];
      v37 = 0LL;
      for ( i = 0LL; i < v11; ++i )
      {
        v13 = *((_QWORD *)a1 + 40);
        v37 = v38;
        v14 = *(_QWORD *)(v13 + 8 * i);
        v15 = *(_QWORD *)(v14 + 24);
        v31 = *(_DWORD *)(*((_QWORD *)a1 + 39) + 4 * i);
        if ( v15 )
        {
          v16 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 64LL))(v15, 51LL);
          v17 = *(_QWORD *)(v14 + 24);
          if ( v16 )
          {
            v10 = v32;
            *(struct D2D_RECT_F *)v39 = v37;
            v18 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, __int64, float *, struct D2D_RECT_F *))(*(_QWORD *)v17 + 248LL))(
                    v17,
                    v32,
                    v39,
                    v17 + 336,
                    a5,
                    &v37);
            v8 = v18;
            if ( v18 < 0 )
            {
              v29 = 429;
LABEL_10:
              v19 = v18;
              goto LABEL_45;
            }
          }
          else
          {
            if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 64LL))(v17, 31LL) )
            {
              v8 = -2147467263;
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467263, 0x1C2u, 0LL);
              goto LABEL_46;
            }
            v20 = *(_DWORD *)(v14 + 12) - *(_DWORD *)(v14 + 4);
            *(_QWORD *)&v30.left = 0LL;
            v21 = _mm_cvtsi32_si128(v20);
            v22 = *(_DWORD *)(v14 + 16) - *(_DWORD *)(v14 + 8);
            v10 = v32;
            LODWORD(v30.right) = _mm_cvtepi32_ps(v21).m128_u32[0];
            v30.bottom = (float)v22;
            CMILMatrix::Transform2DBoundsHelper<1>(v32, &v30, &v30.left);
            if ( v30.left > v37.left )
              v37.left = v30.left;
            if ( v30.top > v37.top )
              v37.top = v30.top;
            if ( v37.right > v30.right )
              v37.right = v30.right;
            if ( v37.bottom > v30.bottom )
              v37.bottom = v30.bottom;
            if ( IsEmpty(&v37) )
            {
              *(_QWORD *)&v37.right = 0LL;
              *(_QWORD *)&v37.left = 0LL;
            }
            TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(a5, &v37.left);
          }
        }
        else
        {
          TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(a5, &v37.left);
          v10 = v32;
        }
        if ( (float)(v37.right - v37.left) > 0.0000099999997 && (float)(v37.bottom - v37.top) > 0.0000099999997 )
        {
          if ( !(unsigned __int8)CFilterEffect::InvertTransformToCalc2DBounds(v10, &v37, &v37) )
          {
            v29 = 465;
            goto LABEL_44;
          }
          *(_DWORD *)v39 = v31;
          *(struct D2D_RECT_F *)&v39[4] = v37;
          v18 = DynArray<InputBoundsPair,0>::AddMultipleAndSet(&v34, v39);
          v8 = v18;
          if ( v18 < 0 )
          {
            v29 = 468;
            goto LABEL_10;
          }
        }
        v11 = v33;
      }
      (*(void (__fastcall **)(_DWORD *, __int128 *, __int128 *))(*(_QWORD *)a1 + 224LL))(a1, &v34, &v41);
      CMILMatrix::Transform2DBoundsHelper<1>(v10, (const struct D2D_RECT_F *)&v41, a6);
      if ( TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(a6) )
      {
        if ( *a3 > *a6 )
          *a6 = *a3;
        v24 = a3[1];
        if ( v24 > a6[1] )
          a6[1] = v24;
        v25 = a3[2];
        if ( a6[2] > v25 )
          a6[2] = v25;
        v26 = a3[3];
        if ( a6[3] > v26 )
          a6[3] = v26;
        if ( IsEmpty(v23) )
        {
          *((_QWORD *)a6 + 1) = v27;
          *(_QWORD *)a6 = v27;
        }
      }
    }
    else
    {
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(a5, &v38.left);
      *(_OWORD *)a6 = v40;
    }
  }
  else
  {
    v29 = 387;
LABEL_44:
    v19 = -2147467259;
    v8 = -2147467259;
LABEL_45:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, v29, 0LL);
  }
LABEL_46:
  a1[10] ^= (a1[10] ^ (4 * (a1[10] >> 2) - 4)) & 0xC;
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)&v34);
  return v8;
}
