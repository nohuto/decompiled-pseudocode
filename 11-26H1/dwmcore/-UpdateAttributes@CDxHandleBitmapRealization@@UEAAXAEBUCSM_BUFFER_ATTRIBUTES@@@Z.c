/*
 * XREFs of ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1800E5AB0
 * Callers:
 *     ?UpdateAttributes@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1801BD820 (-UpdateAttributes@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@.c)
 *     ?UpdateAttributes@CDxHandleStereoBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1802AEDE0 (-UpdateAttributes@CDxHandleStereoBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800E5E38 (-IsInfinite@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800E69E8 (-IsEmpty@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x1800F51D4 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?InvalidateDecodeBitmap@CBitmapRealization@@IEAAX_N@Z @ 0x18018E8C4 (-InvalidateDecodeBitmap@CBitmapRealization@@IEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDxHandleBitmapRealization::UpdateAttributes(
        CDxHandleBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  _OWORD *v2; // r14
  int *v4; // rbp
  unsigned int v6; // r13d
  int v7; // r12d
  char v8; // al
  __m128i v9; // xmm2
  int v10; // edx
  __int64 v11; // rcx
  char *v12; // r15
  char v13; // si
  int v14; // eax
  _DWORD *v15; // rax
  _QWORD *v16; // r14
  __int64 v17; // r8
  _DWORD *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r9
  int v21; // r10d
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rsi
  void (__fastcall *v26)(__int64, _QWORD); // rdi
  unsigned int *v27; // rax
  __int64 v28; // rdi
  struct ID2DBitmapCacheSource *v29; // rdx
  char v30; // [rsp+80h] [rbp+8h]
  int v31; // [rsp+88h] [rbp+10h] BYREF
  int v32; // [rsp+90h] [rbp+18h] BYREF

  v2 = (_OWORD *)((char *)this - 224);
  v4 = (int *)((char *)this - 176);
  v6 = 3;
  v7 = 3;
  if ( *((_DWORD *)this - 56) )
    v7 = *((_DWORD *)this - 56);
  v31 = *v4;
  (*(void (__fastcall **)(char *, int *))(*((_QWORD *)this - 31) + 56LL))((char *)this - 248, &v32);
  v8 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 31) + 64LL))((char *)this - 248);
  v9 = *(__m128i *)((char *)this - 172);
  v10 = *((_DWORD *)a2 + 34) & 1;
  v30 = v8;
  if ( v10 != (*((_DWORD *)this - 22) & 1) || *((_QWORD *)a2 + 1) != *((_QWORD *)this - 27) )
  {
    v22 = *((_QWORD *)a2 + 1);
    if ( !v10 || !v22 )
      LODWORD(v22) = -1;
    *((_DWORD *)this - 8) = v22;
    v2 = (_OWORD *)((char *)this - 224);
    v4 = (int *)((char *)this - 176);
  }
  v11 = *((_QWORD *)this + 6);
  v12 = (char *)this + 48;
  *v2 = *(_OWORD *)a2;
  v2[1] = *((_OWORD *)a2 + 1);
  v2[2] = *((_OWORD *)a2 + 2);
  v2[3] = *((_OWORD *)a2 + 3);
  v2[4] = *((_OWORD *)a2 + 4);
  v2[5] = *((_OWORD *)a2 + 5);
  v2[6] = *((_OWORD *)a2 + 6);
  v2[7] = *((_OWORD *)a2 + 7);
  v2[8] = *((_OWORD *)a2 + 8);
  if ( v11 )
  {
    v13 = 0;
    v14 = 3;
    if ( *(_DWORD *)v2 )
    {
      v14 = *(_DWORD *)v2;
      v4 = (int *)((char *)this - 176);
    }
    if ( v7 != v14 )
    {
      v23 = *(_QWORD *)(v11 + 72);
      v24 = v11 + 72;
      if ( *(_DWORD *)v2 )
        v6 = *(_DWORD *)v2;
      (*(void (__fastcall **)(__int64, _QWORD))(v23 + 144))(v24, v6);
      v13 = 1;
      v12 = (char *)this + 48;
    }
    if ( v31 != *v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)v12 + 72LL) + 152LL))(*(_QWORD *)v12 + 72LL);
      v13 = 1;
    }
    v15 = (_DWORD *)(*(__int64 (__fastcall **)(char *, int *))(*((_QWORD *)this - 31) + 56LL))((char *)this - 248, &v31);
    if ( v32 == *v15 )
    {
      v16 = v12;
    }
    else
    {
      v25 = *(_QWORD *)v12;
      v26 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)v12 + 72LL) + 160LL);
      v27 = (unsigned int *)(*(__int64 (__fastcall **)(char *, int *))(*((_QWORD *)this - 31) + 56LL))(
                              (char *)this - 248,
                              &v31);
      v26(v25 + 72, *v27);
      v13 = 1;
      v16 = (_QWORD *)((char *)this + 48);
    }
    if ( v30 != (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 31) + 64LL))((char *)this - 248) )
    {
      v28 = *(_QWORD *)v12;
      *(_BYTE *)(v28 + 236) = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 31) + 64LL))((char *)this - 248);
    }
    if ( v13 )
    {
      v29 = (struct ID2DBitmapCacheSource *)(*v16 + 88LL);
      if ( !*v16 )
        v29 = 0LL;
      CD2DBitmapCache::InitializeCache((CDxHandleBitmapRealization *)((char *)this - 328), v29);
      CBitmapRealization::InvalidateDecodeBitmap((CDxHandleBitmapRealization *)((char *)this - 328), 0);
    }
  }
  v17 = (unsigned int)_mm_cvtsi128_si32(v9);
  v18 = (_DWORD *)((char *)this - 172);
  if ( (_DWORD)v17 != *((_DWORD *)this - 43) )
  {
    v19 = v9.m128i_u32[1];
    goto LABEL_22;
  }
  v19 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v9, 4));
  if ( (_DWORD)v19 != v18[1] )
  {
LABEL_22:
    v20 = v9.m128i_u32[2];
    goto LABEL_23;
  }
  v20 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v9, 8));
  if ( (_DWORD)v20 == v18[2] )
  {
    v21 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 12));
    if ( v21 == v18[3] )
      return;
    goto LABEL_24;
  }
LABEL_23:
  v21 = v9.m128i_i32[3];
LABEL_24:
  if ( (v21 > (int)v19 && (int)v20 > (int)v17
     || !(unsigned __int8)TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IsEmpty(v18, v19, v17, v20))
    && (((_DWORD)v17 != 0x80000000 || (_DWORD)v20 != 0x7FFFFFFF) && ((_DWORD)v19 != 0x80000000 || v21 != 0x7FFFFFFF)
     || !(unsigned __int8)TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IsInfinite(v18)) )
  {
    *((_BYTE *)this - 8) = 0;
  }
}
