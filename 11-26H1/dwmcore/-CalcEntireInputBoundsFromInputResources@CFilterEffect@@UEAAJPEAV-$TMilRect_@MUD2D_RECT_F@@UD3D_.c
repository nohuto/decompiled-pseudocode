/*
 * XREFs of ?CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1801CD1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180022120 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800590B0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArray@UInputBoundsPair@@$0A@@@QEAAJPEFBUInputBoundsPair@@I@Z @ 0x1801CD434 (-AddMultipleAndSet@-$DynArray@UInputBoundsPair@@$0A@@@QEAAJPEFBUInputBoundsPair@@I@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFilterEffect::CalcEntireInputBoundsFromInputResources(__int64 a1, _OWORD *a2, __int64 a3)
{
  int v3; // eax
  __int64 v6; // r13
  __int64 v7; // rsi
  int v8; // ebx
  __int64 v9; // rbx
  int v10; // r12d
  __int64 v11; // rcx
  char v12; // al
  _OWORD *v13; // r14
  __int64 v14; // r9
  int v15; // r9d
  unsigned int v17; // eax
  __m128i v18; // xmm0
  int v19; // eax
  int v20; // eax
  __int128 v21; // xmm0
  float *v22; // rdx
  __int128 v23; // xmm0
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r10
  unsigned int v27; // [rsp+20h] [rbp-89h]
  __int128 v29; // [rsp+38h] [rbp-71h] BYREF
  struct D2D_RECT_F v30; // [rsp+48h] [rbp-61h] BYREF
  __int128 v31; // [rsp+58h] [rbp-51h] BYREF
  __int64 v32; // [rsp+68h] [rbp-41h]
  int v33; // [rsp+70h] [rbp-39h]
  __int128 v34; // [rsp+78h] [rbp-31h] BYREF
  __int64 v35; // [rsp+88h] [rbp-21h]
  int v36; // [rsp+90h] [rbp-19h]
  float v37[6]; // [rsp+98h] [rbp-11h] BYREF
  int v38; // [rsp+B0h] [rbp+7h] BYREF
  __int128 v39; // [rsp+B4h] [rbp+Bh]

  v3 = *(_DWORD *)(a1 + 40);
  v32 = 0LL;
  v33 = 0;
  *(_DWORD *)(a1 + 40) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 4)) & 0xC;
  v31 = 0LL;
  v29 = 0LL;
  if ( (((unsigned __int8)v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 4)) & 0xC) & 0xC) != 4 )
  {
    v8 = -2147467259;
    v27 = 500;
LABEL_9:
    v15 = v8;
    goto LABEL_10;
  }
  if ( *(_DWORD *)(a1 + 328) )
  {
    v6 = *(int *)(a1 + 328);
    v7 = 0LL;
    v8 = 0;
    while ( v7 < v6 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 8 * v7);
      v10 = *(_DWORD *)(*(_QWORD *)(a1 + 312) + 4 * v7);
      *(_OWORD *)v37 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcEmpty;
      v11 = *(_QWORD *)(v9 + 24);
      if ( v11 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 64LL))(v11, 51LL);
        v13 = *(_OWORD **)(v9 + 24);
        v14 = *(_QWORD *)v13;
        if ( v12 )
        {
          v8 = (*(__int64 (__fastcall **)(_OWORD *, _OWORD *, __int64))(v14 + 256))(v13, a2, a3);
          if ( v8 < 0 )
          {
            v27 = 525;
            goto LABEL_9;
          }
          v35 = 0LL;
          v34 = 0LL;
          v36 = 0;
          v23 = v13[21];
          v38 = v10;
          v39 = v23;
          v24 = DynArray<InputBoundsPair,0>::AddMultipleAndSet(&v34, &v38);
          v8 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x211u, 0LL);
            DynArrayImpl<1>::~DynArrayImpl<1>((__int64)&v34);
            goto LABEL_11;
          }
          (*(void (__fastcall **)(_OWORD *, __int128 *, float *))(*(_QWORD *)v13 + 224LL))(v13, &v34, v37);
          DynArrayImpl<1>::~DynArrayImpl<1>((__int64)&v34);
        }
        else
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_OWORD *, __int64))(v14 + 64))(v13, 31LL) )
          {
            v8 = -2147467263;
            v27 = 552;
            goto LABEL_9;
          }
          v17 = *(_DWORD *)(v9 + 12) - *(_DWORD *)(v9 + 4);
          *(_QWORD *)&v30.left = 0LL;
          v18 = _mm_cvtsi32_si128(v17);
          v19 = *(_DWORD *)(v9 + 16) - *(_DWORD *)(v9 + 8);
          LODWORD(v30.right) = _mm_cvtepi32_ps(v18).m128_u32[0];
          v30.bottom = (float)v19;
          CMILMatrix::Transform2DBoundsHelper<1>(a3, &v30, v37);
        }
      }
      else
      {
        *(_OWORD *)v37 = *a2;
      }
      v38 = v10;
      v39 = *(_OWORD *)v37;
      v20 = DynArray<InputBoundsPair,0>::AddMultipleAndSet(&v31, &v38);
      v8 = v20;
      if ( v20 < 0 )
      {
        v27 = 560;
        goto LABEL_20;
      }
      ++v7;
    }
    goto LABEL_23;
  }
  v21 = *a2;
  v37[0] = 0.0;
  *(_OWORD *)&v37[1] = v21;
  v20 = DynArray<InputBoundsPair,0>::AddMultipleAndSet(&v31, v37);
  v8 = v20;
  if ( v20 < 0 )
  {
    v27 = 507;
LABEL_20:
    v15 = v20;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, v27, 0LL);
    goto LABEL_11;
  }
LABEL_23:
  if ( v33 )
  {
    v22 = (float *)(v31 + 4);
    do
    {
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v29, v22);
      v22 = (float *)(v25 + 20);
    }
    while ( v26 != 1 );
  }
  *(_OWORD *)(a1 + 336) = v29;
LABEL_11:
  *(_DWORD *)(a1 + 40) ^= (*(_DWORD *)(a1 + 40) ^ (4 * (*(_DWORD *)(a1 + 40) >> 2) - 4)) & 0xC;
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)&v31);
  return (unsigned int)v8;
}
