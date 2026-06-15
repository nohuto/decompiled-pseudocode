/*
 * XREFs of sub_140080C8C @ 0x140080C8C
 * Callers:
 *     sub_140084120 @ 0x140084120 (sub_140084120.c)
 *     sub_1400842D8 @ 0x1400842D8 (sub_1400842D8.c)
 *     sub_140085590 @ 0x140085590 (sub_140085590.c)
 * Callees:
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 *     sub_1400499B8 @ 0x1400499B8 (sub_1400499B8.c)
 *     sub_14004D37C @ 0x14004D37C (sub_14004D37C.c)
 *     sub_140082000 @ 0x140082000 (sub_140082000.c)
 */

__int64 __fastcall sub_140080C8C(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // eax
  unsigned int v4; // ebp
  __int64 v6; // rax
  unsigned __int64 v7; // kr00_8
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rsi
  unsigned int i; // edx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int128 v17; // xmm3
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int j; // r8d
  __int64 v23; // rdx
  unsigned int v24; // eax
  __int64 *v25; // r14
  unsigned int v26; // ebp
  __int64 v27; // rax
  unsigned __int64 v28; // kr10_8
  __int64 v29; // rax
  __int64 v30; // rsi
  unsigned int k; // edx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int128 v35; // xmm1
  __int64 v36; // xmm0_8
  __int64 v37; // rax
  unsigned int v38; // eax
  __int64 *v39; // r14
  unsigned int v40; // ebp
  __int64 v41; // rax
  unsigned __int64 v42; // kr20_8
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 result; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int128 v49; // xmm1
  __int64 v50; // xmm0_8

  v2 = *a2;
  *(_DWORD *)a1 = *a2;
  v4 = v2;
  v7 = v2;
  v6 = (unsigned __int64)v2 << 6;
  if ( !is_mul_ok(v7, 0x40uLL) )
    v6 = -1LL;
  v8 = sub_1400499B8(v6, (__int64)&unk_1400C75FC);
  v9 = 0;
  v10 = v8;
  if ( v8 )
    sub_14004D37C(v8, 64LL, v4);
  else
    v10 = 0LL;
  sub_140082000(a1 + 8, v10);
  if ( !*(_QWORD *)(a1 + 8) )
    goto LABEL_31;
  for ( i = 0; i < *(_DWORD *)a1; *(_OWORD *)(v18 + v13 + 48) = v17 )
  {
    v12 = *((_QWORD *)a2 + 1);
    v13 = i++;
    v13 <<= 6;
    v14 = *(_OWORD *)(v13 + v12);
    v15 = *(_OWORD *)(v13 + v12 + 16);
    v16 = *(_OWORD *)(v13 + v12 + 32);
    v17 = *(_OWORD *)(v13 + v12 + 48);
    v18 = *(_QWORD *)(a1 + 8);
    *(_OWORD *)(v18 + v13) = v14;
    *(_OWORD *)(v18 + v13 + 16) = v15;
    *(_OWORD *)(v18 + v13 + 32) = v16;
  }
  v19 = a2[4];
  *(_DWORD *)(a1 + 16) = v19;
  v20 = 8 * v19;
  if ( !is_mul_ok(v19, 8uLL) )
    v20 = -1LL;
  v21 = sub_1400499B8(v20, (__int64)&unk_1400C75FC);
  sub_140082000(a1 + 24, v21);
  if ( !*(_QWORD *)(a1 + 24) )
    goto LABEL_31;
  for ( j = 0;
        j < *(_DWORD *)(a1 + 16);
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v23) = *(_QWORD *)(*((_QWORD *)a2 + 3) + 8 * v23) )
  {
    v23 = j++;
  }
  v24 = a2[8];
  v25 = (__int64 *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = v24;
  v26 = v24;
  v28 = v24;
  v27 = 24LL * v24;
  if ( !is_mul_ok(v28, 0x18uLL) )
    v27 = -1LL;
  v29 = sub_1400499B8(v27, (__int64)&unk_1400C75FC);
  v30 = v29;
  if ( v29 )
    sub_14004D37C(v29, 24LL, v26);
  else
    v30 = 0LL;
  sub_140082000(a1 + 40, v30);
  if ( !*v25 )
    goto LABEL_31;
  for ( k = 0; k < *(_DWORD *)(a1 + 32); *(_QWORD *)(v37 + 8 * v33 + 16) = v36 )
  {
    v32 = k++;
    v33 = 3 * v32;
    v34 = *((_QWORD *)a2 + 5);
    v35 = *(_OWORD *)(v34 + 8 * v33);
    v36 = *(_QWORD *)(v34 + 8 * v33 + 16);
    v37 = *v25;
    *(_OWORD *)(v37 + 8 * v33) = v35;
  }
  v38 = a2[12];
  v39 = (__int64 *)(a1 + 56);
  *(_DWORD *)(a1 + 48) = v38;
  v40 = v38;
  v42 = v38;
  v41 = 24LL * v38;
  if ( !is_mul_ok(v42, 0x18uLL) )
    v41 = -1LL;
  v43 = sub_1400499B8(v41, (__int64)&unk_1400C75FC);
  v44 = v43;
  if ( v43 )
    sub_14004D37C(v43, 24LL, v40);
  else
    v44 = 0LL;
  result = sub_140082000(a1 + 56, v44);
  if ( !*v39 )
LABEL_31:
    sub_14004639C(-2147024882);
  if ( *(_DWORD *)(a1 + 48) )
  {
    do
    {
      v46 = v9++;
      v47 = 3 * v46;
      v48 = *((_QWORD *)a2 + 7);
      v49 = *(_OWORD *)(v48 + 8 * v47);
      v50 = *(_QWORD *)(v48 + 8 * v47 + 16);
      result = *v39;
      *(_OWORD *)(result + 8 * v47) = v49;
      *(_QWORD *)(result + 8 * v47 + 16) = v50;
    }
    while ( v9 < *(_DWORD *)(a1 + 48) );
  }
  return result;
}
