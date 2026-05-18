/*
 * XREFs of sub_1800946C4 @ 0x1800946C4
 * Callers:
 *     sub_1800946A0 @ 0x1800946A0 (sub_1800946A0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_1800143E4 @ 0x1800143E4 (sub_1800143E4.c)
 *     sub_18001490C @ 0x18001490C (sub_18001490C.c)
 *     sub_180016EFC @ 0x180016EFC (sub_180016EFC.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_18004E8E8 @ 0x18004E8E8 (sub_18004E8E8.c)
 *     sub_180052460 @ 0x180052460 (sub_180052460.c)
 *     sub_18005D23C @ 0x18005D23C (sub_18005D23C.c)
 *     sub_18005DC88 @ 0x18005DC88 (sub_18005DC88.c)
 */

__int64 __fastcall sub_1800946C4(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 *v6; // rax
  __int64 *v7; // rbx
  __int64 *v8; // rax
  __int64 *v9; // rax
  int v10; // eax
  void *v11; // rdx
  __int64 *v12; // rax
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-50h] BYREF
  __int64 v18; // [rsp+28h] [rbp-48h]
  __m128i si128; // [rsp+30h] [rbp-40h] BYREF
  int v20; // [rsp+40h] [rbp-30h]
  int v21; // [rsp+44h] [rbp-2Ch]
  int v22; // [rsp+48h] [rbp-28h]
  int v23; // [rsp+4Ch] [rbp-24h]
  unsigned __int32 v24; // [rsp+50h] [rbp-20h]
  unsigned __int32 v25; // [rsp+54h] [rbp-1Ch]
  int v26; // [rsp+58h] [rbp-18h]
  int v27; // [rsp+5Ch] [rbp-14h]
  int v28; // [rsp+60h] [rbp-10h]

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 3984) + 512LL);
  v5 = sub_1800181BC(&si128, (__int64)&unk_1801CCF98);
  v6 = sub_18004E8E8(v4, &v17, (__int64)v5);
  v7 = (__int64 *)(a1 + 304);
  sub_180011F5C((_QWORD *)(a1 + 304), v6);
  if ( v18 )
    sub_180010EC8(v18);
  v8 = (__int64 *)sub_18005DC88(*v7, &v17);
  sub_180011F5C((_QWORD *)(a1 + 288), v8);
  if ( v18 )
    sub_180010EC8(v18);
  v9 = sub_18005D23C(*v7, &v17);
  sub_180011F5C((_QWORD *)(a1 + 272), v9);
  if ( v18 )
    sub_180010EC8(v18);
  sub_18001490C(a1 + 336, byte_1800F9DE0, 0LL);
  v10 = *(_DWORD *)(a1 + 372);
  switch ( v10 )
  {
    case 8:
      v11 = &unk_1801CD238;
      break;
    case 16:
      v11 = &unk_1801CD258;
      break;
    case 32:
      v11 = &unk_1801CD278;
      break;
    default:
      goto LABEL_14;
  }
  sub_1800143E4(a1 + 336, (__int64)v11);
LABEL_14:
  v12 = sub_180016EFC(*(_QWORD **)(a2 + 3984), &v17);
  sub_180011F5C((_QWORD *)(a1 + 320), v12);
  if ( v18 )
    sub_180010EC8(v18);
  v13 = *(_QWORD *)(a1 + 320);
  v14 = sub_180011CC4(&si128, "Image Processing Blur Sampler");
  sub_1800292C4(v13, (__int64)v14);
  v15 = *(_QWORD *)(a1 + 320);
  si128 = _mm_load_si128((const __m128i *)&xmmword_180191490);
  v20 = 0;
  v23 = 0;
  v25 = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 170).m128_u32[0];
  v24 = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 85).m128_u32[0];
  v26 = 0;
  v21 = 1;
  v22 = 7;
  v27 = 0;
  v28 = 2139095039;
  return sub_180052460(v15, &si128, 0LL);
}
