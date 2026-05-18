/*
 * XREFs of sub_1800929B0 @ 0x1800929B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_1800434CC @ 0x1800434CC (sub_1800434CC.c)
 *     sub_18004357C @ 0x18004357C (sub_18004357C.c)
 *     sub_180043738 @ 0x180043738 (sub_180043738.c)
 *     sub_180043898 @ 0x180043898 (sub_180043898.c)
 *     sub_18004E254 @ 0x18004E254 (sub_18004E254.c)
 *     sub_1800608B8 @ 0x1800608B8 (sub_1800608B8.c)
 *     sub_180064854 @ 0x180064854 (sub_180064854.c)
 *     sub_18006BDBC @ 0x18006BDBC (sub_18006BDBC.c)
 *     sub_18007EAEC @ 0x18007EAEC (sub_18007EAEC.c)
 *     sub_18007EB5C @ 0x18007EB5C (sub_18007EB5C.c)
 *     sub_18007ED34 @ 0x18007ED34 (sub_18007ED34.c)
 *     sub_18007F1B0 @ 0x18007F1B0 (sub_18007F1B0.c)
 *     sub_180090840 @ 0x180090840 (sub_180090840.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800929B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  char v7; // r15
  unsigned int v8; // ebx
  __int64 v9; // r12
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // rdx
  __int16 v13; // cx
  char v14; // r14
  char v15; // r13
  char v16; // cl
  __int64 v17; // rbx
  __int64 *v18; // rax
  __int64 v19; // rbx
  int v20; // ebx
  _DWORD *v21; // rax
  __int32 v22; // xmm1_4
  unsigned int v23; // edx
  __int64 v24; // rax
  unsigned int v25; // edx
  __int64 v26; // rax
  unsigned int v27; // edx
  __int64 v28; // rax
  unsigned int v29; // edx
  __int64 v30; // rax
  unsigned int v31; // edx
  __int64 v32; // rax
  __m128 si128; // [rsp+20h] [rbp-60h] BYREF
  __int64 v35; // [rsp+30h] [rbp-50h] BYREF
  __int64 v36; // [rsp+38h] [rbp-48h]
  __int64 v37; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v38[4]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v39; // [rsp+68h] [rbp-18h] BYREF

  si128.m128_u64[0] = a4;
  v7 = *(_BYTE *)(a3 + 162);
  v8 = 1;
  if ( v7 )
  {
    switch ( v7 )
    {
      case 2:
        *(_DWORD *)(a2 + 188) = 1;
        break;
      case 3:
        *(_DWORD *)(a2 + 188) = 3;
        break;
      case 4:
        *(_DWORD *)(a2 + 188) = 2;
        break;
    }
  }
  else
  {
    *(_BYTE *)(a2 + 184) = 1;
    *(_DWORD *)(a2 + 188) = 0;
  }
  *(_WORD *)(a2 + 112) = *(_WORD *)(a3 + 160);
  v37 = a4;
  v9 = a4 + 832;
  v10 = sub_180033D14(*(_QWORD *)(a4 + 3984), 1);
  v11 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801C9998, 0LL);
  v13 = *(_WORD *)(a2 + 112);
  if ( !v11 || (v13 & 0x10) == 0 )
  {
    v14 = 0;
    goto LABEL_14;
  }
  v14 = 1;
  if ( (v13 & 0x20) != 0 )
  {
LABEL_14:
    v15 = 1;
    goto LABEL_15;
  }
  v15 = 0;
LABEL_15:
  v16 = v13 & 1;
  if ( !v14 || !v16 )
    v8 = 0;
  sub_1800434CC(a2, v12, v8);
  if ( !v8 )
  {
    *(_WORD *)(a2 + 112) &= ~1u;
    *(_WORD *)(a2 + 112) |= 2u;
  }
  v17 = *(_QWORD *)(*(_QWORD *)(si128.m128_u64[0] + 3984) + 512LL);
  sub_1800181BC(v38, (__int64)&unk_1801CCF38);
  si128.m128_u64[0] = (unsigned __int64)v38;
  si128.m128_u64[1] = (unsigned __int64)&v39;
  v18 = sub_1800608B8(&v35, (__m128i *)&si128);
  v19 = sub_18004E254(v17, (void **)v18);
  sub_18000BFA4((__int64)v38, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_18004357C(a2, v19, v14);
  v20 = *(_DWORD *)(a3 + 4);
  if ( (v20 & 1) != 0 )
  {
    si128.m128_i32[0] = *(_DWORD *)(a3 + 16);
    si128 = _mm_mul_ps(
              _mm_add_ps(
                _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                           _mm_and_ps(
                                             _mm_shuffle_ps((__m128)si128.m128_u32[0], (__m128)si128.m128_u32[0], 0),
                                             (__m128)xmmword_1800FA140),
                                           (__m128)xmmword_1800FA1A0)),
                (__m128)xmmword_1800FA190),
              (__m128)xmmword_180109180);
    if ( v15 )
    {
      v21 = sub_180064854((int *)&si128, &v35);
      si128.m128_u64[0] = *(_QWORD *)v21;
      si128.m128_i32[2] = v21[2];
      v22 = v21[3];
      si128.m128_i32[3] = v22;
    }
    else
    {
      v22 = si128.m128_i32[3];
    }
    if ( !v14 && *(float *)&v22 < 1.0 && !v7 )
      *(_DWORD *)(a2 + 188) = 3;
    v23 = *(_DWORD *)(a3 + 20);
    if ( v23 )
    {
      v24 = sub_18006BDBC(v9, v23, a5);
      sub_180043738(a2, (__int64)&unk_1801CBE58, v24, v9);
      sub_18007EAEC(*(_QWORD *)(a2 + 120), (__int64)&unk_1801CBFF8, *(_BYTE *)(a3 + 32));
      sub_180090840(&v37, (__int64)&v35);
      sub_180043898(a2, (__int64)&unk_1801CBE58, &v35);
      if ( v15 )
      {
        si128.m128_u64[0] = 0x3F8000003F800000LL;
        si128.m128_i32[2] = 1065353216;
      }
      if ( v36 )
        sub_180010EC8(v36);
    }
    sub_18007EB5C(*(_QWORD *)(a2 + 120), (__int64)&unk_1801CBD98, &si128);
  }
  if ( (v20 & 2) != 0 )
  {
    si128.m128_i32[0] = *(_DWORD *)(a3 + 36);
    si128 = _mm_mul_ps(
              _mm_add_ps(
                _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                           _mm_and_ps(
                                             _mm_shuffle_ps((__m128)si128.m128_u32[0], (__m128)si128.m128_u32[0], 0),
                                             (__m128)xmmword_1800FA140),
                                           (__m128)xmmword_1800FA1A0)),
                (__m128)xmmword_1800FA190),
              (__m128)xmmword_180109180);
    if ( v15 )
      si128 = *(__m128 *)sub_180064854((int *)&si128, &v35);
    v25 = *(_DWORD *)(a3 + 40);
    if ( v25 )
    {
      v26 = sub_18006BDBC(v9, v25, a5);
      sub_180043738(a2, (__int64)&unk_1801CBE98, v26, v9);
      sub_18007EAEC(*(_QWORD *)(a2 + 120), (__int64)&unk_1801CC018, *(_BYTE *)(a3 + 56));
      sub_180090840(&v37, (__int64)&v35);
      sub_180043898(a2, (__int64)&unk_1801CBE98, &v35);
      if ( v15 )
        si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_1801916B0);
      if ( v36 )
        sub_180010EC8(v36);
    }
    sub_18007EB5C(*(_QWORD *)(a2 + 120), (__int64)&unk_1801CBDB8, &si128);
  }
  if ( (v20 & 4) != 0 )
  {
    v27 = *(_DWORD *)(a3 + 84);
    if ( v27 )
    {
      v28 = sub_18006BDBC(v9, v27, a5);
      sub_180043738(a2, (__int64)&unk_1801CBE78, v28, v9);
      sub_18007EAEC(*(_QWORD *)(a2 + 120), (__int64)&unk_1801CBFD8, *(_BYTE *)(a3 + 100));
      sub_180090840(&v37, (__int64)&v35);
      sub_180043898(a2, (__int64)&unk_1801CBE78, &v35);
      if ( v36 )
        sub_180010EC8(v36);
    }
    if ( v14 )
    {
      si128.m128_i32[0] = *(_DWORD *)(a3 + 96);
      si128.m128_i32[1] = si128.m128_i32[0];
      si128.m128_u64[1] = 0x3F8000003F800000LL;
    }
    else
    {
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_1801916B0);
    }
    sub_18007F1B0(*(_QWORD *)(a2 + 120), (__int64)&unk_1801CBDF8, &si128);
  }
  if ( (v20 & 0x10) != 0 )
  {
    v29 = *(_DWORD *)(a3 + 68);
    if ( v29 )
    {
      v30 = sub_18006BDBC(v9, v29, a5);
      sub_180043738(a2, (__int64)&unk_1801CBEB8, v30, v9);
      sub_18007EAEC(*(_QWORD *)(a2 + 120), (__int64)&unk_1801CC038, *(_BYTE *)(a3 + 80));
      sub_180090840(&v37, (__int64)&v35);
      sub_180043898(a2, (__int64)&unk_1801CBEB8, &v35);
      if ( v36 )
        sub_180010EC8(v36);
    }
    if ( v14 )
    {
      si128.m128_i32[0] = *(_DWORD *)(a3 + 60);
      si128 = _mm_mul_ps(
                _mm_add_ps(
                  _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                             _mm_and_ps(
                                               _mm_shuffle_ps((__m128)si128.m128_u32[0], (__m128)si128.m128_u32[0], 0),
                                               (__m128)xmmword_1800FA140),
                                             (__m128)xmmword_1800FA1A0)),
                  (__m128)xmmword_1800FA190),
                (__m128)xmmword_180109180);
      if ( v15 )
        si128 = *(__m128 *)sub_180064854((int *)&si128, &v35);
      sub_18007EB5C(*(_QWORD *)(a2 + 120), (__int64)&unk_1801CBE38, &si128);
    }
  }
  if ( (v20 & 0x20) != 0 )
  {
    v31 = *(_DWORD *)(a3 + 120);
    if ( v31 )
    {
      v32 = sub_18006BDBC(v9, v31, a5);
      sub_180043738(a2, (__int64)&unk_1801CBEF8, v32, v9);
      sub_18007EAEC(*(_QWORD *)(a2 + 120), (__int64)&unk_1801CC058, *(_BYTE *)(a3 + 140));
      sub_180090840(&v37, (__int64)&v35);
      sub_180043898(a2, (__int64)&unk_1801CBEF8, &v35);
      if ( v36 )
        sub_180010EC8(v36);
    }
    if ( v14 )
      sub_18007ED34(*(_QWORD *)(a2 + 120), (__int64)&unk_1801CBE18);
  }
  return sub_18007ED34(*(_QWORD *)(a2 + 120), (__int64)&unk_1801CBF98);
}
