/*
 * XREFs of sub_18008E2D0 @ 0x18008E2D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180016EFC @ 0x180016EFC (sub_180016EFC.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_18004E8E8 @ 0x18004E8E8 (sub_18004E8E8.c)
 *     sub_180052460 @ 0x180052460 (sub_180052460.c)
 *     sub_18005D23C @ 0x18005D23C (sub_18005D23C.c)
 *     sub_18005DC88 @ 0x18005DC88 (sub_18005DC88.c)
 *     sub_18008BB60 @ 0x18008BB60 (sub_18008BB60.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18008E2D0(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 *v6; // rax
  __int64 *v7; // rbx
  __int64 *v8; // rax
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // r14
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 *v16; // rax
  __int64 v18; // [rsp+30h] [rbp-50h] BYREF
  __int64 v19; // [rsp+38h] [rbp-48h]
  __m128i si128; // [rsp+40h] [rbp-40h] BYREF
  int v21; // [rsp+50h] [rbp-30h]
  int v22; // [rsp+54h] [rbp-2Ch]
  int v23; // [rsp+58h] [rbp-28h]
  int v24; // [rsp+5Ch] [rbp-24h]
  unsigned __int32 v25; // [rsp+60h] [rbp-20h]
  unsigned __int32 v26; // [rsp+64h] [rbp-1Ch]
  int v27; // [rsp+68h] [rbp-18h]
  int v28; // [rsp+6Ch] [rbp-14h]
  int v29; // [rsp+70h] [rbp-10h]

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 3984) + 512LL);
  v5 = sub_1800181BC(&si128, (__int64)&unk_1801CCF98);
  v6 = sub_18004E8E8(v4, &v18, (__int64)v5);
  v7 = (__int64 *)(a1 + 216);
  sub_180011F5C((_QWORD *)(a1 + 216), v6);
  if ( v19 )
    sub_180010EC8(v19);
  v8 = (__int64 *)sub_18005DC88(*v7, &v18);
  sub_180011F5C((_QWORD *)(a1 + 200), v8);
  if ( v19 )
    sub_180010EC8(v19);
  v9 = sub_18005D23C(*v7, &v18);
  sub_180011F5C((_QWORD *)(a1 + 248), v9);
  if ( v19 )
    sub_180010EC8(v19);
  v10 = sub_180016EFC(*(_QWORD **)(a2 + 3984), &v18);
  v11 = (__int64 *)(a1 + 264);
  sub_180011F5C((_QWORD *)(a1 + 264), v10);
  if ( v19 )
    sub_180010EC8(v19);
  v12 = *v11;
  v13 = sub_180011CC4(&si128, "Image Processing Bloom Sampler");
  sub_1800292C4(v12, (__int64)v13);
  v14 = *v11;
  si128 = _mm_load_si128((const __m128i *)&xmmword_180191490);
  v21 = 0;
  v24 = 0;
  v26 = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 170).m128_u32[0];
  v25 = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 85).m128_u32[0];
  v27 = 0;
  v22 = 1;
  v23 = 7;
  v28 = 0;
  v29 = 2139095039;
  sub_180052460(v14, &si128, 0LL);
  v15 = *(int *)(a1 + 144);
  v16 = sub_18008BB60(a1, &v18);
  sub_180011F5C((_QWORD *)(a1 + 184), v16);
  if ( v19 )
    sub_180010EC8(v19);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int))(**(_QWORD **)(a1 + 184) + 40LL))(
           *(_QWORD *)(a1 + 184),
           a2,
           2LL,
           (unsigned int)dword_180108FD8[v15],
           dword_180109110[v15]);
}
