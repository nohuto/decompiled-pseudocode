/*
 * XREFs of ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x140111980
 * Callers:
 *     NtGdiCreateRoundRectRgn @ 0x140110F30 (NtGdiCreateRoundRectRgn.c)
 *     NtGdiRoundRect @ 0x140112B50 (NtGdiRoundRect.c)
 * Callees:
 *     bFToL @ 0x140111E60 (bFToL.c)
 *     ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x140111ED4 (-efHalfDiff@@YA-AVEFLOAT@@JJ@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall bRoundRect(struct EPATHOBJ *a1, struct EBOX *a2)
{
  float v4; // eax
  float v5; // xmm2_4
  float v6; // eax
  __int64 v7; // rcx
  int v8; // r9d
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r11
  int v14; // ebx
  int v15; // edi
  int v16; // r15d
  __int64 v17; // r12
  __int64 v18; // r13
  int v19; // eax
  int v20; // eax
  __int64 v21; // kr00_8
  int v22; // ecx
  int v23; // ecx
  __int64 v24; // rcx
  int v25; // ecx
  __int64 v26; // kr08_8
  int v27; // eax
  __int64 v28; // kr10_8
  int v30; // [rsp+20h] [rbp-49h] BYREF
  int v31; // [rsp+24h] [rbp-45h]
  int *v32; // [rsp+28h] [rbp-41h] BYREF
  __int64 v33; // [rsp+30h] [rbp-39h]
  __int64 v34; // [rsp+38h] [rbp-31h]
  __int16 v35; // [rsp+40h] [rbp-29h]
  __int64 v36; // [rsp+48h] [rbp-21h] BYREF
  int v37; // [rsp+50h] [rbp-19h] BYREF
  int v38; // [rsp+54h] [rbp-15h] BYREF
  __int64 v39; // [rsp+58h] [rbp-11h]
  int v40; // [rsp+60h] [rbp-9h] BYREF
  int v41; // [rsp+64h] [rbp-5h]
  int v42; // [rsp+68h] [rbp-1h]
  int v43; // [rsp+6Ch] [rbp+3h]
  int v44; // [rsp+70h] [rbp+7h]
  int v45; // [rsp+74h] [rbp+Bh]

  efHalfDiff(*((unsigned int *)a2 + 16), *((unsigned int *)a2 + 18));
  v5 = v4;
  efHalfDiff(*((unsigned int *)a2 + 17), *((unsigned int *)a2 + 19));
  if ( v5 != 0.0 && v6 != 0.0 )
  {
    v7 = (unsigned int)-v8;
    if ( v8 > 0 )
      v7 = (unsigned int)v8;
  }
  if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64 *, __int64))bFToL)(v7, &v36, 6LL) )
    bFToL(v9, (char *)&v36 + 4, v10);
  if ( (unsigned int)((__int64 (__fastcall *)(__int64, int *, __int64))bFToL)(v9, &v37, v10) )
    bFToL(v11, &v38, v12);
  v14 = v36;
  v15 = v37;
  v16 = HIDWORD(v36);
  v17 = (1922922357LL * (int)v36) >> 32;
  v39 = (1922922357LL * v37) >> 32;
  v18 = (1922922357LL * SHIDWORD(v36)) >> 32;
  v36 = (1922922357LL * v38) >> 32;
  v19 = *((_DWORD *)a2 + 2) - v37;
  v33 = 1LL;
  v30 = v19;
  v20 = *((_DWORD *)a2 + 3) - v38;
  v34 = v13;
  v31 = v20;
  v35 = v13;
  v32 = &v30;
  if ( !(unsigned __int8)EPATHOBJ::bMoveTo(a1, 0LL, &v32) )
    return 0LL;
  v21 = *((_QWORD *)a2 + 1);
  v40 = v21 - v39;
  v41 = HIDWORD(v21) - v36;
  v43 = HIDWORD(v21) - v18;
  v45 = HIDWORD(v21) - v16;
  v42 = v21 - v17;
  v32 = &v40;
  v44 = v21 - v14;
  v33 = 3LL;
  v34 = 0LL;
  v35 = 0;
  if ( !(unsigned __int8)EPATHOBJ::bPolyBezierTo(a1, 0LL, &v32, 3LL) )
    return 0LL;
  v22 = v14 + *((_DWORD *)a2 + 4);
  v32 = &v30;
  v30 = v22;
  v23 = *((_DWORD *)a2 + 5);
  v33 = 1LL;
  v31 = v16 + v23;
  v34 = 0LL;
  v35 = 0;
  if ( !(unsigned __int8)EPATHOBJ::bPolyLineTo(a1, 0LL, &v32, 1LL) )
    return 0LL;
  v24 = *((_QWORD *)a2 + 2);
  v41 = v18 + HIDWORD(v24);
  v40 = v17 + v24;
  v42 = v24 - v39;
  v43 = HIDWORD(v24) - v36;
  v45 = HIDWORD(v24) - v38;
  v44 = v24 - v15;
  v32 = &v40;
  v33 = 3LL;
  v34 = 0LL;
  v35 = 0;
  if ( !(unsigned __int8)EPATHOBJ::bPolyBezierTo(a1, 0LL, &v32, 3LL) )
    return 0LL;
  v25 = v15 + *((_DWORD *)a2 + 6);
  v32 = &v30;
  v30 = v25;
  v31 = *((_DWORD *)a2 + 7) + v38;
  v33 = 1LL;
  v34 = 0LL;
  v35 = 0;
  if ( !(unsigned __int8)EPATHOBJ::bPolyLineTo(a1, 0LL, &v32, 1LL) )
    return 0LL;
  v26 = *((_QWORD *)a2 + 3);
  v40 = v39 + v26;
  v41 = v36 + HIDWORD(v26);
  v43 = v18 + HIDWORD(v26);
  v45 = v16 + HIDWORD(v26);
  v42 = v17 + v26;
  v32 = &v40;
  v44 = v14 + v26;
  v33 = 3LL;
  v34 = 0LL;
  v35 = 0;
  if ( !(unsigned __int8)EPATHOBJ::bPolyBezierTo(a1, 0LL, &v32, 3LL) )
    return 0LL;
  v30 = *((_DWORD *)a2 + 8) - v14;
  v27 = *((_DWORD *)a2 + 9) - v16;
  v34 = 0LL;
  v31 = v27;
  v32 = &v30;
  v33 = 1LL;
  v35 = 0;
  if ( !(unsigned __int8)EPATHOBJ::bPolyLineTo(a1, 0LL, &v32, 1LL) )
    return 0LL;
  v28 = *((_QWORD *)a2 + 4);
  v41 = HIDWORD(v28) - v18;
  v40 = v28 - v17;
  v42 = v39 + v28;
  v43 = v36 + HIDWORD(v28);
  v45 = v38 + HIDWORD(v28);
  v32 = &v40;
  v44 = v15 + v28;
  v33 = 3LL;
  v34 = 0LL;
  v35 = 0;
  return (unsigned __int8)EPATHOBJ::bPolyBezierTo(a1, 0LL, &v32, 3LL) && EPATHOBJ::bCloseFigure(a1);
}
