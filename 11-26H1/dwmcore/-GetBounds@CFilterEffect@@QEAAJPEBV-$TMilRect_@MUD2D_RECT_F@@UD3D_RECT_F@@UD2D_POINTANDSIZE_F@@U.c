/*
 * XREFs of ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800161B4
 * Callers:
 *     ?GetBoundsWithEffects@CVisual@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180015E50 (-GetBoundsWithEffects@CVisual@@UEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800161B4 (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 * Callees:
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800161B4 (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArray@UInputBoundsPair@@$0A@@@QEAAJPEFBUInputBoundsPair@@I@Z @ 0x1801CD434 (-AddMultipleAndSet@-$DynArray@UInputBoundsPair@@$0A@@@QEAAJPEFBUInputBoundsPair@@I@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFilterEffect::GetBounds(__int64 a1, _OWORD *a2, __int64 a3)
{
  int v3; // eax
  __int128 v7; // xmm0
  int Bounds; // eax
  unsigned int v9; // ebx
  int v10; // r9d
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rbx
  int v14; // r12d
  __int64 v15; // rcx
  char v16; // al
  __int64 v17; // rcx
  __m128i v18; // xmm1
  unsigned __int64 v19; // xmm0_8
  unsigned int v21; // [rsp+20h] [rbp-49h]
  __int128 v22; // [rsp+30h] [rbp-39h] BYREF
  __int64 v23; // [rsp+40h] [rbp-29h]
  int v24; // [rsp+48h] [rbp-21h]
  _BYTE v25[20]; // [rsp+50h] [rbp-19h] BYREF
  int v26; // [rsp+68h] [rbp-1h] BYREF
  __int128 v27; // [rsp+6Ch] [rbp+3h]

  v3 = *(_DWORD *)(a1 + 40);
  v23 = 0LL;
  v24 = 0;
  *(_DWORD *)(a1 + 40) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 4)) & 0xC;
  v22 = 0LL;
  if ( (((unsigned __int8)v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 4)) & 0xC) & 0xC) != 4 )
  {
    v9 = -2147467259;
    v21 = 205;
LABEL_21:
    v10 = v9;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v21, 0LL);
    goto LABEL_23;
  }
  if ( *(_DWORD *)(a1 + 328) )
  {
    v11 = *(int *)(a1 + 328);
    v12 = 0LL;
    v9 = 0;
    while ( v12 < v11 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 8 * v12);
      v14 = *(_DWORD *)(*(_QWORD *)(a1 + 312) + 4 * v12);
      *(_OWORD *)v25 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcEmpty;
      v15 = *(_QWORD *)(v13 + 24);
      if ( v15 )
      {
        v16 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 64LL))(v15, 51LL);
        v17 = *(_QWORD *)(v13 + 24);
        if ( v16 )
        {
          Bounds = CFilterEffect::GetBounds(v17, a2, v25);
          v9 = Bounds;
          if ( Bounds < 0 )
          {
            v21 = 231;
            goto LABEL_5;
          }
        }
        else
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 64LL))(v17, 31LL) )
          {
            v9 = -2147467263;
            v21 = 249;
            goto LABEL_21;
          }
          v18 = *(__m128i *)(v13 + 4);
          *(_QWORD *)v25 = 0LL;
          v19 = _mm_srli_si128(v18, 8).m128i_u64[0];
          *(float *)&v25[8] = (float)((int)v19 - v18.m128i_i32[0]);
          *(float *)&v25[12] = (float)(HIDWORD(v19) - v18.m128i_i32[1]);
        }
      }
      else
      {
        *(_OWORD *)v25 = *a2;
      }
      v26 = v14;
      v27 = *(_OWORD *)v25;
      Bounds = DynArray<InputBoundsPair,0>::AddMultipleAndSet(&v22, &v26);
      v9 = Bounds;
      if ( Bounds < 0 )
      {
        v21 = 258;
        goto LABEL_5;
      }
      ++v12;
    }
  }
  else
  {
    v7 = *a2;
    *(_DWORD *)v25 = 0;
    *(_OWORD *)&v25[4] = v7;
    Bounds = DynArray<InputBoundsPair,0>::AddMultipleAndSet(&v22, v25);
    v9 = Bounds;
    if ( Bounds < 0 )
    {
      v21 = 211;
LABEL_5:
      v10 = Bounds;
      goto LABEL_22;
    }
  }
  (*(void (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)a1 + 224LL))(a1, &v22, a3);
LABEL_23:
  *(_DWORD *)(a1 + 40) ^= (*(_DWORD *)(a1 + 40) ^ (4 * (*(_DWORD *)(a1 + 40) >> 2) - 4)) & 0xC;
  DynArrayImpl<1>::~DynArrayImpl<1>(&v22);
  return v9;
}
