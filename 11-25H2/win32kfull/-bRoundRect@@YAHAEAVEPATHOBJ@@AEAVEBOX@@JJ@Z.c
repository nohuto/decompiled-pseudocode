/*
 * XREFs of ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1400E6508
 * Callers:
 *     NtGdiCreateRoundRectRgn @ 0x1400E6250 (NtGdiCreateRoundRectRgn.c)
 *     NtGdiRoundRect @ 0x1400E6A70 (NtGdiRoundRect.c)
 * Callees:
 *     bFToL @ 0x1400A4410 (bFToL.c)
 *     ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x1400E69F0 (-efHalfDiff@@YA-AVEFLOAT@@JJ@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall bRoundRect(struct EPATHOBJ *a1, struct EBOX *a2)
{
  float v4; // eax
  float v5; // xmm2_4
  float v6; // eax
  int v7; // r9d
  int v8; // r10d
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  double v14; // xmm0_8
  double v15; // xmm3_8
  double v16; // xmm2_8
  unsigned int v17; // r8d
  double v18; // xmm4_8
  unsigned int v19; // r8d
  int v20; // ebx
  int v21; // edi
  int v22; // r15d
  __int64 v23; // r12
  __int64 v24; // r13
  int v25; // eax
  int v26; // eax
  __int64 v27; // kr00_8
  int v28; // ecx
  __int64 v29; // rcx
  int v30; // ecx
  __int64 v31; // kr08_8
  int v32; // eax
  int v33; // eax
  __int64 v34; // kr10_8
  int v36; // eax
  int v37; // ecx
  int v38; // [rsp+20h] [rbp-49h] BYREF
  int v39; // [rsp+24h] [rbp-45h]
  int *v40; // [rsp+28h] [rbp-41h] BYREF
  __int64 v41; // [rsp+30h] [rbp-39h]
  __int64 v42; // [rsp+38h] [rbp-31h]
  __int16 v43; // [rsp+40h] [rbp-29h]
  __int64 v44; // [rsp+48h] [rbp-21h] BYREF
  int v45; // [rsp+50h] [rbp-19h] BYREF
  int v46; // [rsp+54h] [rbp-15h] BYREF
  __int64 v47; // [rsp+58h] [rbp-11h]
  int v48; // [rsp+60h] [rbp-9h] BYREF
  int v49; // [rsp+64h] [rbp-5h]
  int v50; // [rsp+68h] [rbp-1h]
  int v51; // [rsp+6Ch] [rbp+3h]
  int v52; // [rsp+70h] [rbp+7h]
  int v53; // [rsp+74h] [rbp+Bh]

  efHalfDiff(*((unsigned int *)a2 + 16), *((unsigned int *)a2 + 18));
  v5 = v4;
  efHalfDiff(*((unsigned int *)a2 + 17), *((unsigned int *)a2 + 19));
  v9 = v6;
  if ( v5 == 0.0 || v6 == 0.0 )
  {
    v10 = FP_0_0;
    v11 = FP_0_0;
  }
  else
  {
    v36 = -v8;
    if ( v8 > 0 )
      v36 = v8;
    v37 = -v7;
    if ( v7 > 0 )
      v37 = v7;
    if ( v5 < 0.0 )
      LODWORD(v5) ^= _xmm;
    if ( v9 < 0.0 )
      LODWORD(v9) ^= _xmm;
    v10 = (float)v36 / v5;
    v11 = (float)v37 / v9;
  }
  if ( v10 <= FP_2_0 )
    v12 = v10 * 0.5;
  else
    v12 = FP_1_0;
  if ( v11 <= FP_2_0 )
    v13 = v11 * 0.5;
  else
    v13 = FP_1_0;
  *(_QWORD *)&v14 = COERCE_UNSIGNED_INT((float)*((int *)a2 + 12));
  *(_QWORD *)&v15 = COERCE_UNSIGNED_INT((float)*((int *)a2 + 13));
  *(float *)&v14 = *(float *)&v14 * v12;
  *(float *)&v15 = *(float *)&v15 * v12;
  *(_QWORD *)&v16 = COERCE_UNSIGNED_INT((float)*((int *)a2 + 15));
  *(float *)&v16 = *(float *)&v16 * v13;
  if ( (unsigned int)bFToL(v14, (int *)&v44, 6u) )
    bFToL(v15, (int *)&v44 + 1, v17);
  if ( (unsigned int)bFToL(v18, &v45, v17) )
    bFToL(v16, &v46, v19);
  v20 = v44;
  v21 = v45;
  v22 = HIDWORD(v44);
  v23 = (1922922357LL * (int)v44) >> 32;
  v47 = (1922922357LL * v45) >> 32;
  v24 = (1922922357LL * SHIDWORD(v44)) >> 32;
  v44 = (1922922357LL * v46) >> 32;
  v25 = *((_DWORD *)a2 + 2) - v45;
  v41 = 1LL;
  v38 = v25;
  v26 = *((_DWORD *)a2 + 3) - v46;
  v42 = 0LL;
  v39 = v26;
  v43 = 0;
  v40 = &v38;
  if ( !(unsigned __int8)EPATHOBJ::bMoveTo(a1, 0LL, &v40) )
    return 0LL;
  v27 = *((_QWORD *)a2 + 1);
  v48 = v27 - v47;
  v49 = HIDWORD(v27) - v44;
  v51 = HIDWORD(v27) - v24;
  v53 = HIDWORD(v27) - v22;
  v52 = v27 - v20;
  v42 = 0LL;
  v50 = v27 - v23;
  v40 = &v48;
  v43 = 0;
  v41 = 3LL;
  if ( !(unsigned __int8)EPATHOBJ::bPolyBezierTo(a1, 0LL, &v40, 3LL) )
    return 0LL;
  v28 = v20 + *((_DWORD *)a2 + 4);
  v40 = &v38;
  v38 = v28;
  v39 = v22 + *((_DWORD *)a2 + 5);
  v42 = 0LL;
  v43 = 0;
  v41 = 1LL;
  if ( !(unsigned __int8)EPATHOBJ::bPolyLineTo(a1, 0LL, &v40, 1LL) )
    return 0LL;
  v29 = *((_QWORD *)a2 + 2);
  v49 = v24 + HIDWORD(v29);
  v48 = v23 + v29;
  v50 = v29 - v47;
  v51 = HIDWORD(v29) - v44;
  v53 = HIDWORD(v29) - v46;
  v52 = v29 - v21;
  v42 = 0LL;
  v43 = 0;
  v40 = &v48;
  v41 = 3LL;
  if ( !(unsigned __int8)EPATHOBJ::bPolyBezierTo(a1, 0LL, &v40, 3LL) )
    return 0LL;
  v30 = v21 + *((_DWORD *)a2 + 6);
  v40 = &v38;
  v38 = v30;
  v39 = *((_DWORD *)a2 + 7) + v46;
  v42 = 0LL;
  v43 = 0;
  v41 = 1LL;
  if ( !(unsigned __int8)EPATHOBJ::bPolyLineTo(a1, 0LL, &v40, 1LL) )
    return 0LL;
  v31 = *((_QWORD *)a2 + 3);
  v51 = v24 + HIDWORD(v31);
  v53 = v22 + HIDWORD(v31);
  v48 = v47 + v31;
  v49 = v44 + HIDWORD(v31);
  v50 = v23 + v31;
  v52 = v20 + v31;
  v40 = &v48;
  v42 = 0LL;
  v43 = 0;
  v41 = 3LL;
  if ( !(unsigned __int8)EPATHOBJ::bPolyBezierTo(a1, 0LL, &v40, 3LL) )
    return 0LL;
  v32 = *((_DWORD *)a2 + 8) - v20;
  v42 = 0LL;
  v38 = v32;
  v33 = *((_DWORD *)a2 + 9) - v22;
  v43 = 0;
  v39 = v33;
  v40 = &v38;
  v41 = 1LL;
  if ( !(unsigned __int8)EPATHOBJ::bPolyLineTo(a1, 0LL, &v40, 1LL) )
    return 0LL;
  v34 = *((_QWORD *)a2 + 4);
  v49 = HIDWORD(v34) - v24;
  v48 = v34 - v23;
  v50 = v47 + v34;
  v51 = v44 + HIDWORD(v34);
  v53 = v46 + HIDWORD(v34);
  v52 = v21 + v34;
  v42 = 0LL;
  v40 = &v48;
  v43 = 0;
  v41 = 3LL;
  return (unsigned __int8)EPATHOBJ::bPolyBezierTo(a1, 0LL, &v40, 3LL) && EPATHOBJ::bCloseFigure(a1);
}
