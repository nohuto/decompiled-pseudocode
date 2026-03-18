/*
 * XREFs of ?bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z @ 0x1400E8220
 * Callers:
 *     NtGdiCreateEllipticRgn @ 0x1400E5970 (NtGdiCreateEllipticRgn.c)
 *     GreEllipse @ 0x1400E6D70 (GreEllipse.c)
 * Callees:
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall bEllipse(struct EPATHOBJ *a1, struct EBOX *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rsi
  unsigned int v11; // r12d
  __int64 v12; // rcx
  int v13; // r10d
  int v14; // r8d
  int v15; // r9d
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // kr00_8
  _DWORD v21[2]; // [rsp+20h] [rbp-79h] BYREF
  _DWORD *v22; // [rsp+28h] [rbp-71h] BYREF
  __int64 v23; // [rsp+30h] [rbp-69h]
  __int64 v24; // [rsp+38h] [rbp-61h]
  __int16 v25; // [rsp+40h] [rbp-59h]
  _DWORD v26[24]; // [rsp+50h] [rbp-49h] BYREF

  v4 = *((int *)a2 + 14);
  v5 = 1922922357 * v4;
  v6 = 1922922357LL * *((int *)a2 + 12);
  LODWORD(v4) = *((_DWORD *)a2 + 8) + v4;
  v7 = *((int *)a2 + 13);
  v8 = *((int *)a2 + 15);
  v21[0] = v4;
  v6 >>= 32;
  v21[1] = v8 + *((_DWORD *)a2 + 9);
  v9 = (1922922357 * v8) >> 32;
  v5 >>= 32;
  v24 = 0LL;
  v25 = 0;
  v10 = (1922922357 * v7) >> 32;
  v11 = 1;
  v22 = v21;
  v23 = 1LL;
  EPATHOBJ::bMoveTo(a1, 0LL, &v22);
  v12 = *((_QWORD *)a2 + 1);
  v13 = *((_DWORD *)a2 + 12);
  v14 = *((_DWORD *)a2 + 13);
  v15 = *((_DWORD *)a2 + 14);
  v16 = *((_DWORD *)a2 + 15);
  v26[1] = HIDWORD(v12) - v9;
  v26[0] = v12 - v5;
  v26[3] = HIDWORD(v12) - v10;
  v26[5] = HIDWORD(v12) - v14;
  v26[2] = v12 - v6;
  v26[4] = v12 - v13;
  v17 = *((_QWORD *)a2 + 2);
  v26[7] = v10 + HIDWORD(v17);
  v26[9] = HIDWORD(v17) - v9;
  v26[6] = v6 + v17;
  v26[11] = HIDWORD(v17) - v16;
  v26[8] = v17 - v5;
  v26[10] = v17 - v15;
  v18 = *((_QWORD *)a2 + 3);
  v26[13] = v9 + HIDWORD(v18);
  v26[15] = v10 + HIDWORD(v18);
  v26[17] = v14 + HIDWORD(v18);
  v26[12] = v5 + v18;
  v26[14] = v6 + v18;
  v26[16] = v13 + v18;
  v19 = *((_QWORD *)a2 + 4);
  v26[18] = v19 - v6;
  v26[19] = HIDWORD(v19) - v10;
  v26[21] = v9 + HIDWORD(v19);
  v26[23] = v16 + HIDWORD(v19);
  v26[22] = v15 + v19;
  v26[20] = v5 + v19;
  v24 = 0LL;
  v25 = 0;
  v22 = v26;
  v23 = 12LL;
  if ( !(unsigned __int8)EPATHOBJ::bPolyBezierTo(a1, 0LL, &v22, 12LL) || !EPATHOBJ::bCloseFigure(a1) )
    return 0;
  return v11;
}
