/*
 * XREFs of sub_180086D20 @ 0x180086D20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_180014E04 @ 0x180014E04 (sub_180014E04.c)
 *     sub_180014ED4 @ 0x180014ED4 (sub_180014ED4.c)
 *     sub_18001896C @ 0x18001896C (sub_18001896C.c)
 *     sub_18003B59C @ 0x18003B59C (sub_18003B59C.c)
 *     sub_18003B78C @ 0x18003B78C (sub_18003B78C.c)
 *     sub_18003BCCC @ 0x18003BCCC (sub_18003BCCC.c)
 *     sub_1800403B8 @ 0x1800403B8 (sub_1800403B8.c)
 *     sub_18004068C @ 0x18004068C (sub_18004068C.c)
 *     sub_1800412E0 @ 0x1800412E0 (sub_1800412E0.c)
 *     sub_180048CF4 @ 0x180048CF4 (sub_180048CF4.c)
 *     sub_1800593B4 @ 0x1800593B4 (sub_1800593B4.c)
 *     sub_18005A85C @ 0x18005A85C (sub_18005A85C.c)
 *     sub_18005A92C @ 0x18005A92C (sub_18005A92C.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180086D20(__int64 a1)
{
  __int64 result; // rax
  float v3; // xmm6_4
  float v4; // xmm7_4
  char v5; // r14
  __int64 v6; // rsi
  __int64 v7; // r15
  __m128i si128; // xmm8
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rbx
  _OWORD *v12; // rax
  float *v13; // r8
  float v14; // xmm0_4
  __int64 *v15; // rax
  __int64 v16; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+30h] [rbp-D8h]
  __int64 v18; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C8h]
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v21[4]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+70h] [rbp-98h] BYREF
  __int64 v23; // [rsp+78h] [rbp-90h]
  __int64 v24; // [rsp+80h] [rbp-88h] BYREF
  __int64 v25; // [rsp+88h] [rbp-80h]
  __int64 v26; // [rsp+90h] [rbp-78h] BYREF
  __int64 v27; // [rsp+98h] [rbp-70h]
  __int64 v28; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-50h]
  __int64 v30; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v31; // [rsp+C8h] [rbp-40h]
  __int128 v32; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v33; // [rsp+E0h] [rbp-28h]
  _OWORD v34[4]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v35; // [rsp+128h] [rbp+20h] BYREF
  __int128 v36; // [rsp+148h] [rbp+40h]
  __int128 v37; // [rsp+158h] [rbp+50h]
  _QWORD v38[4]; // [rsp+168h] [rbp+60h] BYREF
  __int128 v39[4]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v40[4]; // [rsp+1C8h] [rbp+C0h] BYREF
  _BYTE v41[96]; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v42; // [rsp+248h] [rbp+140h] BYREF
  _UNKNOWN *retaddr; // [rsp+2A0h] [rbp+198h] BYREF

  result = (__int64)&retaddr;
  if ( *(_BYTE *)(a1 + 1953) )
  {
    result = sub_180012A94(a1 + 56, &v26);
    v3 = 3.4028235e38;
    v4 = -3.4028235e38;
    v5 = 0;
    v6 = *(_QWORD *)(a1 + 416);
    v7 = *(_QWORD *)(a1 + 424);
    if ( v6 != v7 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_180191660);
      do
      {
        sub_180013440(v40, v6);
        v9 = *(_QWORD *)sub_18001367C(v26, &v28);
        v10 = sub_180013440(v38, (__int64)v40);
        sub_1800403B8(v9, &v20, (__int64)v10);
        if ( v29 )
          sub_180010EC8(v29);
        if ( *(_BYTE *)(v20 + 80) )
        {
          sub_18004068C(v20, &v18);
          sub_180012C40(&v16, &v18);
          while ( 1 )
          {
            v11 = v16;
            if ( !v16 )
              break;
            if ( *(_DWORD *)(a1 + 1960) == 1 || sub_18003B59C(v16) )
            {
              sub_180014E04(v11, &v24);
              sub_180014ED4(v11, &v22);
              if ( v24 && v22 )
              {
                v32 = *(_OWORD *)(v24 + 88);
                v33 = *(_QWORD *)(v24 + 104);
                *(__m128i *)&v21[1] = si128;
                v21[3] = 0x3F8000003F800000LL;
                v12 = (_OWORD *)sub_1800593B4(a1, 0, 1);
                v34[0] = *v12;
                v34[1] = v12[1];
                v34[2] = v12[2];
                v34[3] = v12[3];
                sub_18003BCCC(v11, v39);
                sub_18001896C((__int64)&v35, v39, v34);
                sub_1800412E0((unsigned __int64 *)&v32, (__int64)&v21[1], *(double *)&v36, *(double *)&v37);
                sub_180048CF4((unsigned __int64 *)&v21[1], (__int64)v41);
                v13 = (float *)v41;
                do
                {
                  v14 = -v13[2];
                  if ( v14 > v4 )
                    v4 = -v13[2];
                  if ( v3 > v14 )
                    v3 = -v13[2];
                  v13 += 3;
                }
                while ( v13 != (float *)&v42 );
                v5 = 1;
              }
              if ( v23 )
                sub_180010EC8(v23);
              if ( v25 )
                sub_180010EC8(v25);
            }
            v15 = sub_18003B78C(v18, &v30, &v16);
            sub_180011F5C(&v16, v15);
            if ( v31 )
              sub_180010EC8(v31);
          }
          if ( v17 )
            sub_180010EC8(v17);
          if ( v19 )
            sub_180010EC8(v19);
        }
        if ( v21[0] )
          sub_180010EC8(v21[0]);
        result = sub_180014244((__int64)v40);
        v6 += 32LL;
      }
      while ( v6 != v7 );
      if ( v5 )
      {
        result = *(unsigned int *)(a1 + 316);
        if ( (_DWORD)result == 1 || (_DWORD)result == 2 )
        {
          if ( v3 < 0.001 )
            v3 = 0.001;
          if ( v4 < 0.001 )
            v4 = 0.001;
        }
        if ( fabs(v4 - v3) > 0.0000099999997 )
        {
          sub_18005A92C(a1, v3);
          result = sub_18005A85C(a1, v4);
        }
      }
    }
    if ( v27 )
      return sub_180010EC8(v27);
  }
  return result;
}
