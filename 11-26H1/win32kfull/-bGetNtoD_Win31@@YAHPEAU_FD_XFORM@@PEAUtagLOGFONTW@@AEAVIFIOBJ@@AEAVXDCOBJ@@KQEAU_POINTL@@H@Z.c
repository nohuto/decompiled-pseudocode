/*
 * XREFs of ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1400C2ED0
 * Callers:
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1400C2DD8 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KQEAU_POINTL@@AEAVIFIOBJ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1400C40D8 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 * Callees:
 *     ?bGetNtoW_Win31@@YAHPEAUMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@KH@Z @ 0x1400C3444 (-bGetNtoW_Win31@@YAHPEAUMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@KH@Z.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEBAKXZ @ 0x14010F700 (-ulLogPixelsY@PDEVOBJ@@QEBAKXZ.c)
 *     ?bParityViolatingXform@@YAHAEBVXDCOBJ@@@Z @ 0x14022DDBC (-bParityViolatingXform@@YAHAEBVXDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall bGetNtoD_Win31(
        struct _FD_XFORM *a1,
        struct tagLOGFONTW *a2,
        struct IFIOBJ *a3,
        struct XDCOBJ *a4,
        unsigned int a5,
        struct _POINTL *const a6,
        int a7)
{
  unsigned int *v11; // rdx
  int v12; // ecx
  __int64 v13; // r8
  __m128 v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rcx
  LONG v18; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v20; // rcx
  unsigned int v21; // r14d
  int v22; // eax
  int v23; // r14d
  unsigned int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 lfEscapement; // rcx
  int v28; // edx
  __int64 v29; // rax
  int v30; // eax
  __m128i v31; // xmm0
  int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  int v35; // ecx
  int v36; // eax
  float v37; // xmm6_4
  int v38; // edx
  __int64 x; // rax
  int v40; // edx
  __int64 y; // rax
  __int64 v42; // rax
  unsigned int *v43; // [rsp+38h] [rbp-D0h] BYREF
  __m128 *v44; // [rsp+40h] [rbp-C8h] BYREF
  __m128 v45; // [rsp+48h] [rbp-C0h] BYREF
  __m128 v46; // [rsp+58h] [rbp-B0h]
  int v47; // [rsp+68h] [rbp-A0h]
  _DWORD v48[4]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v49; // [rsp+80h] [rbp-88h]
  __int64 v50; // [rsp+88h] [rbp-80h]
  int v51; // [rsp+90h] [rbp-78h]
  __m128 v52; // [rsp+98h] [rbp-70h] BYREF
  __m128 v53; // [rsp+A8h] [rbp-60h]
  int v54; // [rsp+B8h] [rbp-50h]
  __m128 v55[2]; // [rsp+C0h] [rbp-48h] BYREF
  int v56; // [rsp+E0h] [rbp-28h]

  v54 = 0;
  v52 = 0LL;
  v47 = 0;
  v53 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v11 = *(unsigned int **)(W32GetSessionState(a1, a2, a3) + 96);
  v43 = v11;
  if ( a6->x )
  {
    v12 = *(_DWORD *)(*(_QWORD *)a3 + 48LL);
    if ( (v12 & 0x3000010) == 0 )
    {
      if ( v11[5085]
        && (v12 & 0x200000) != 0
        && ((lfEscapement = (unsigned int)a2->lfEscapement,
             (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x40) != 0)
          ? (v28 = (int)(3600 - lNormAngle(lfEscapement)) / 900 % 4)
          : (v28 = (int)lNormAngle(lfEscapement) / 900),
            v28) )
      {
        v38 = v28 - 1;
        if ( !v38 )
        {
          x = a6->x;
          a1->eXX = 0.0;
          a1->eYY = 0.0;
          LODWORD(a1->eYX) = dword_140371940[x];
          LODWORD(a1->eXY) = dword_140371940[a6->y];
          return 1LL;
        }
        v40 = v38 - 1;
        if ( v40 )
        {
          if ( v40 == 1 )
          {
            y = a6->y;
            a1->eXX = 0.0;
            a1->eYY = 0.0;
            LODWORD(a1->eXY) = dword_140371968[y];
            LODWORD(a1->eYX) = dword_140371968[a6->x];
          }
          return 1LL;
        }
        v42 = a6->x;
        *(_QWORD *)&a1->eXY = 0LL;
        LODWORD(a1->eXX) = dword_140371940[v42];
        v30 = dword_140371968[a6->y];
      }
      else
      {
        v29 = a6->x;
        *(_QWORD *)&a1->eXY = 0LL;
        LODWORD(a1->eXX) = dword_140371968[v29];
        v30 = dword_140371940[a6->y];
      }
      LODWORD(a1->eYY) = v30;
      return 1LL;
    }
  }
  if ( !bGetNtoW_Win31((struct MATRIX *)&v52, a2, a3, a4, a5, a7) )
    return 0LL;
  v13 = *(_QWORD *)a4;
  v44 = &v45;
  if ( (*(_DWORD *)(*(_QWORD *)(v13 + 976) + 340LL) & 0x802) == 0x802 || (a5 & 2) != 0 )
  {
    v15 = v52;
    v47 = v54;
    v46 = v53;
  }
  else
  {
    if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v44, (const struct MATRIX *)&v52, (const struct MATRIX *)(v13 + 320), 0) )
      return 0LL;
    v15 = _mm_mul_ps(v45, (__m128)_xmm);
  }
  v16 = *(_QWORD *)a3;
  v45 = v15;
  v17 = *(unsigned int *)(v16 + 48);
  if ( (v17 & 4) == 0 )
  {
    v18 = a2->lfEscapement;
    if ( (v17 & 0x200000) != 0 )
    {
      v33 = lNormAngle((unsigned int)v18);
      v17 = v33;
      v18 = 900 * ((int)v33 / 900 % 4);
    }
    if ( v18 && ((a5 & 1) == 0 || v43[5085]) )
    {
      if ( (unsigned int)bParityViolatingXform(a4) )
        v18 = -v18;
      v31 = (__m128i)COERCE_UNSIGNED_INT((float)v18);
      v50 = 0LL;
      v51 = 0;
      *(float *)v31.m128i_i32 = *(float *)v31.m128i_i32 / 10.0;
      v48[0] = efCos((unsigned int)_mm_cvtsi128_si32(v31));
      v48[3] = v48[0];
      v32 = efSin((unsigned int)_mm_cvtsi128_si32(v31));
      v49 = 0LL;
      v48[2] = v32;
      v48[1] = v32 ^ _xmm;
      v56 = v47;
      v55[1] = v46;
      v55[0] = v45;
      if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v44, (const struct MATRIX *)v55, (const struct MATRIX *)v48, 0) )
        return 0LL;
    }
    v43 = *(unsigned int **)(*(_QWORD *)a4 + 48LL);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v17);
    v20 = v43[10];
    v21 = CurrentThreadDpiAwarenessContext;
    if ( (v20 & 1) == 0 || (v22 = CurrentThreadDpiAwarenessContext & 0xF, v22 == 1) || v22 == 2 )
      v23 = v43[540];
    else
      v23 = (v21 >> 8) & 0x1FF;
    v24 = W32GetCurrentThreadDpiAwarenessContext(v20);
    v25 = v43[10];
    if ( (v25 & 1) == 0 || (v25 = v24 & 0xF, (_DWORD)v25 == 1) || (_DWORD)v25 == 2 )
      v26 = v43[541];
    else
      v26 = (v24 >> 8) & 0x1FF;
    if ( v23 != v26 )
    {
      v34 = W32GetCurrentThreadDpiAwarenessContext(v25);
      if ( (v43[10] & 1) == 0 || (v35 = v34 & 0xF, v35 == 1) || v35 == 2 )
        v36 = v43[540];
      else
        v36 = (v34 >> 8) & 0x1FF;
      v37 = (float)v36 / (float)(int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v43);
      v55[0] = *(__m128 *)(*(_QWORD *)a4 + 320LL);
      if ( _mm_shuffle_ps(v55[0], v55[0], 85).m128_f32[0] == 0.0 && v55[0].m128_f32[2] == 0.0 )
      {
        v45.m128_f32[1] = v45.m128_f32[1] / v37;
        v45.m128_f32[2] = v45.m128_f32[2] * v37;
      }
      else
      {
        v45.m128_f32[0] = v45.m128_f32[0] * v37;
        v45.m128_f32[3] = v45.m128_f32[3] / v37;
      }
    }
  }
  *a1 = (struct _FD_XFORM)v45;
  return 1LL;
}
