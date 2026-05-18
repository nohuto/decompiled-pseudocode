/*
 * XREFs of sub_1800579C0 @ 0x1800579C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_180016EFC @ 0x180016EFC (sub_180016EFC.c)
 *     sub_180026250 @ 0x180026250 (sub_180026250.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_180042444 @ 0x180042444 (sub_180042444.c)
 *     sub_180042544 @ 0x180042544 (sub_180042544.c)
 *     sub_180051E20 @ 0x180051E20 (sub_180051E20.c)
 *     sub_180052460 @ 0x180052460 (sub_180052460.c)
 *     sub_180056DC0 @ 0x180056DC0 (sub_180056DC0.c)
 *     sub_180057244 @ 0x180057244 (sub_180057244.c)
 *     sub_180081920 @ 0x180081920 (sub_180081920.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800579C0(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // esi
  __int64 v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 *v11; // rbx
  __int64 v12; // r12
  __int64 *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+28h] [rbp-D8h]
  __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h]
  _DWORD v20[18]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v21; // [rsp+88h] [rbp-78h]
  __int64 v22; // [rsp+90h] [rbp-70h] BYREF
  __int64 v23; // [rsp+98h] [rbp-68h]
  _QWORD v24[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v25[56]; // [rsp+C0h] [rbp-40h] BYREF
  char v26; // [rsp+280h] [rbp+180h] BYREF
  _QWORD v27[76]; // [rsp+390h] [rbp+290h] BYREF

  v21 = a2;
  v4 = sub_180012C40(&v18, a2)[1];
  if ( v4 )
    sub_180010EC8(v4);
  result = *a2;
  v6 = *(_DWORD *)(*a2 + 244);
  if ( v6 )
  {
    LODWORD(v16) = *(_DWORD *)(*a2 + 244);
    result = sub_180042544(a1 + 448, (__int64)&v16);
    if ( result == *(_QWORD *)(a1 + 448) )
    {
      sub_180029EF8(*a2 + 24, v7);
      sub_180056DC0((__int64)v25);
      v8 = sub_180042444(*(_QWORD *)(*a2 + 3984), &v16);
      sub_180011F5C(v27, v8);
      if ( v17 )
        sub_180010EC8(v17);
      memset(v20, 0, sizeof(v20));
      *(_QWORD *)&v20[1] = 2LL;
      *(_QWORD *)&v20[3] = 0LL;
      v20[5] = 0;
      LOBYTE(v20[6]) = 0;
      memset(&v20[7], 0, 32);
      v20[15] = 65793;
      LOBYTE(v20[16]) = 1;
      v20[17] = 3;
      sub_180081920(v27[0], v20, 0LL);
      sub_180016EFC(*(_QWORD **)(*a2 + 3984), &v18);
      *(_QWORD *)&v20[1] = 0LL;
      *(_QWORD *)&v20[3] = 0LL;
      v20[5] = 1;
      v20[6] = 7;
      *(_QWORD *)&v20[11] = 0x7F7FFFFF00000000LL;
      v20[0] = 2;
      v20[7] = 0;
      v20[8] = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 85).m128_u32[0];
      *(_QWORD *)&v20[9] = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 170).m128_u32[0];
      v9 = v18;
      v10 = sub_180011CC4(v24, "Camera Default Sampler");
      sub_1800292C4(v9, (__int64)v10);
      sub_180052460(v18, v20, 0LL);
      v11 = (__int64 *)&v26;
      v12 = 16LL;
      do
      {
        sub_180013540(v11, &v18);
        v11 += 2;
        --v12;
      }
      while ( v12 );
      v13 = sub_180026250(*a2, &v22, (__int64)v25, a1 + 24);
      LODWORD(v16) = v6;
      v14 = sub_180051E20((__int64 *)(a1 + 448), (__int64)v24, &v16);
      sub_180011F5C((_QWORD *)(*(_QWORD *)v14 + 40LL), v13);
      if ( v23 )
        sub_180010EC8(v23);
      if ( v19 )
        sub_180010EC8(v19);
      result = sub_180057244(v25);
    }
  }
  v15 = a2[1];
  if ( v15 )
    return sub_180010EC8(v15);
  return result;
}
