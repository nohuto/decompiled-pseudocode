/*
 * XREFs of sub_180037410 @ 0x180037410
 * Callers:
 *     sub_180069C00 @ 0x180069C00 (sub_180069C00.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012B20 @ 0x180012B20 (sub_180012B20.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_18001FF74 @ 0x18001FF74 (sub_18001FF74.c)
 *     sub_180020074 @ 0x180020074 (sub_180020074.c)
 *     sub_180030C74 @ 0x180030C74 (sub_180030C74.c)
 *     sub_18003197C @ 0x18003197C (sub_18003197C.c)
 *     sub_180033D5C @ 0x180033D5C (sub_180033D5C.c)
 *     sub_180034588 @ 0x180034588 (sub_180034588.c)
 *     sub_1800349D0 @ 0x1800349D0 (sub_1800349D0.c)
 *     sub_180036FAC @ 0x180036FAC (sub_180036FAC.c)
 *     sub_180038908 @ 0x180038908 (sub_180038908.c)
 *     sub_18006F91C @ 0x18006F91C (sub_18006F91C.c)
 *     sub_18006FB60 @ 0x18006FB60 (sub_18006FB60.c)
 *     sub_180097D90 @ 0x180097D90 (sub_180097D90.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_180037410(__int64 a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r15
  __int64 *v11; // rsi
  __m128i *v12; // rdi
  _QWORD *v13; // r12
  __m128i *v14; // rax
  __m128i v15; // xmm2
  __m128i v16; // xmm3
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 *v22; // rax
  __int64 v23; // rdx
  volatile __int32 *v24; // rcx
  __int128 v26; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v27[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+70h] [rbp-98h] BYREF
  __int64 v29; // [rsp+78h] [rbp-90h]
  __int64 v30; // [rsp+80h] [rbp-88h] BYREF
  __int64 v31; // [rsp+88h] [rbp-80h]
  __int64 v32[3]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v33[4]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v34[8]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v35[8]; // [rsp+108h] [rbp+0h] BYREF
  _OWORD v36[3]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v37[4]; // [rsp+178h] [rbp+70h] BYREF

  v2 = (_QWORD *)(a1 + 464);
  v3 = sub_180012C40(&v26, (_QWORD *)(a1 + 464));
  sub_18001FF74(
    v35,
    v3,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    707,
    (__int64)"UpdateScenes",
    (__int64)"UpdateScenes");
  sub_180011CC4(v37, "UpdateScenes");
  v4 = sub_180033D5C(a1, &v28);
  sub_1800162D0(&v26, v4);
  sub_180030C74(v33, (__int64)&v26);
  if ( *((_QWORD *)&v26 + 1) )
    sub_180010F00(*((volatile signed __int32 **)&v26 + 1));
  if ( v29 )
    sub_180010EC8(v29);
  sub_1800129D0((__int64)v37);
  v5 = sub_180012C40(&v26, v2);
  sub_18001FF74(
    v34,
    v5,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    712,
    (__int64)"UpdateScenes",
    (__int64)"kSpectreRenderCB_BeginFrame");
  sub_180011CC4(v36, "kSpectreRenderCB_BeginFrame");
  v6 = sub_180033D5C(a1, &v30);
  sub_1800162D0(&v26, v6);
  sub_180030C74(v32, (__int64)&v26);
  if ( *((_QWORD *)&v26 + 1) )
    sub_180010F00(*((volatile signed __int32 **)&v26 + 1));
  if ( v31 )
    sub_180010EC8(v31);
  sub_1800129D0((__int64)v36);
  *(_QWORD *)&v26 = *(_QWORD *)(a1 + 968);
  DWORD2(v26) = 0;
  sub_180012B20(v27);
  sub_180097D90(v26, &v26);
  v26 = 0LL;
  *(_OWORD *)&v27[1] = 0LL;
  sub_1800349D0(a1, 0, &v27[1], &v26);
  sub_18003197C((__int64)v32);
  sub_180020074((__int64)v34);
  v10 = *(_QWORD *)(a1 + 712);
  v27[1] = v10;
  v11 = *(__int64 **)(a1 + 704);
  if ( v11 != (__int64 *)v10 )
  {
    v12 = (__m128i *)(a1 + 200);
    v13 = (_QWORD *)(a1 + 256);
    do
    {
      v14 = (__m128i *)sub_18006FB60(a1 + 376, v7, v8, v9);
      v15 = *v14;
      v36[0] = *v14;
      v16 = v14[1];
      v36[1] = v16;
      v36[2] = v14[2];
      v20 = sub_18006FB60(a1 + 200, v17, v18, v19);
      if ( sub_180034588(v20) && !sub_180034588((__int64)v36) )
      {
        while ( _InterlockedExchange((volatile __int32 *)(a1 + 248), 1) )
          ;
        *v12 = v15;
        *(_DWORD *)(a1 + 216) = _mm_cvtsi128_si32(v16);
        v22 = sub_180012B20((__int64 *)&v26);
        v23 = *v22;
        *(_QWORD *)(a1 + 280) = *v22;
        sub_180038908(a1 + 248, v23, 3LL);
        v10 = v27[1];
      }
      *(__m128i *)(a1 + 376) = *v12;
      *(_OWORD *)(a1 + 392) = *(_OWORD *)(a1 + 216);
      *(_OWORD *)(a1 + 408) = *(_OWORD *)(a1 + 232);
      sub_180038908(a1 + 424, v21, 5LL);
      if ( (_QWORD *)(a1 + 432) != v13 )
        sub_18006F91C(a1 + 432, *v13, (__int64)(*(_QWORD *)(a1 + 264) - *v13) >> 3);
      *(_QWORD *)(a1 + 456) = *(_QWORD *)(a1 + 280);
      sub_180036FAC((_QWORD *)a1, v11);
      v11 += 2;
    }
    while ( v11 != (__int64 *)v10 );
  }
  v24 = (volatile __int32 *)(a1 + 248);
  while ( _InterlockedExchange(v24, 1) )
    ;
  *(_OWORD *)(a1 + 220) = *(_OWORD *)(a1 + 200);
  *(_DWORD *)(a1 + 236) = *(_DWORD *)(a1 + 216);
  *(_DWORD *)(a1 + 200) = -1082130432;
  *(_DWORD *)(a1 + 204) = -1082130432;
  *(_QWORD *)(a1 + 208) = 2LL;
  *(_DWORD *)(a1 + 216) = 0;
  v27[1] = 2LL;
  *(_QWORD *)(a1 + 240) = 2LL;
  sub_180038908(v24, v7, 3LL);
  sub_18003197C((__int64)v33);
  return sub_180020074((__int64)v35);
}
