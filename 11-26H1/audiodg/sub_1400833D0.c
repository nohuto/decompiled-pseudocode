/*
 * XREFs of sub_1400833D0 @ 0x1400833D0
 * Callers:
 *     sub_140082DA0 @ 0x140082DA0 (sub_140082DA0.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400265D8 @ 0x1400265D8 (sub_1400265D8.c)
 *     sub_1400499B8 @ 0x1400499B8 (sub_1400499B8.c)
 *     sub_14004D37C @ 0x14004D37C (sub_14004D37C.c)
 *     sub_140082000 @ 0x140082000 (sub_140082000.c)
 *     sub_140084120 @ 0x140084120 (sub_140084120.c)
 *     sub_1400842D8 @ 0x1400842D8 (sub_1400842D8.c)
 *     sub_140085590 @ 0x140085590 (sub_140085590.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1400833D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // r14
  unsigned __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 *v13; // rbx
  __int64 v14; // rcx
  unsigned int i; // esi
  _QWORD *v17; // rax
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  unsigned int v20; // eax
  int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // ebx
  __int64 v24; // rax
  unsigned __int64 v25; // kr10_8
  __int64 v26; // rax
  __int64 v27; // rsi
  _QWORD *v28; // rbx
  _QWORD *v29; // r9
  __int64 v30; // r10
  __int64 v31; // r8
  __int64 v32; // rdx
  unsigned int v33; // eax
  unsigned int v34; // ebx
  __int64 v35; // rax
  unsigned __int64 v36; // kr20_8
  __int64 v37; // rax
  __int64 v38; // rsi
  _QWORD *v39; // rbx
  _QWORD *v40; // r9
  __int64 v41; // r10
  __int64 v42; // r8
  __int64 v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // rax
  unsigned __int64 v46; // kr30_8
  __int64 v47; // rax
  __int64 v48; // rdx
  _QWORD *v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v54; // [rsp+60h] [rbp+8h] BYREF

  v6 = a1 + 832;
  v7 = sub_1400842D8(a1 + 832);
  v52 = a1;
  v8 = *(unsigned int *)(a2 + 16);
  *(_DWORD *)v7 = v8;
  v9 = v8;
  v10 = v8 << 6;
  if ( !is_mul_ok(v8, 0x40uLL) )
    v10 = -1LL;
  v11 = sub_1400499B8(v10, (__int64)&unk_1400C75FC);
  v12 = v11;
  if ( v11 )
    sub_14004D37C(v11, 64LL, v9);
  else
    v12 = 0LL;
  v13 = (__int64 *)(v7 + 8);
  sub_140082000((__int64 *)(v7 + 8), v12);
  if ( !*(_QWORD *)(v7 + 8) )
  {
    sub_14000C2A8(
      (int)retaddr,
      2455,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp",
      -2147024882);
    sub_140084120(v6);
    return 2147942414LL;
  }
  v54 = *(_QWORD **)a2;
  for ( i = 0; v54; ++i )
  {
    v17 = sub_1400265D8(v14, &v54);
    v18 = *v17;
    v19 = (unsigned __int64)i << 6;
    *(_DWORD *)(v19 + *v13) = *(_DWORD *)(*v17 + 192LL);
    *(_QWORD *)(*v13 + v19 + 8) = *(_QWORD *)(v18 + 184);
    *(_DWORD *)(*v13 + v19 + 16) = *(_DWORD *)(v18 + 224);
    *(_QWORD *)(*v13 + v19 + 24) = *(_QWORD *)(v18 + 216);
    v20 = *(_DWORD *)(v18 + 440);
    if ( v20 < 0x7FFFFFFF )
      v21 = v20 < 2 ? 1094930515 : 1094930482;
    else
      v21 = 1094930505;
    *(_DWORD *)(*v13 + v19 + 40) = v21;
    *(_OWORD *)(*v13 + v19 + 44) = *(_OWORD *)(v18 + 312);
    v14 = *v13;
    *(_QWORD *)(*v13 + v19 + 32) = *(_QWORD *)(v18 + 8);
  }
  v22 = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(v7 + 32) = v22;
  v23 = v22;
  v25 = v22;
  v24 = 24LL * v22;
  if ( !is_mul_ok(v25, 0x18uLL) )
    v24 = -1LL;
  v26 = sub_1400499B8(v24, (__int64)&unk_1400C75FC);
  v27 = v26;
  if ( v26 )
    sub_14004D37C(v26, 24LL, v23);
  else
    v27 = 0LL;
  v28 = (_QWORD *)(v7 + 40);
  sub_140082000((__int64 *)(v7 + 40), v27);
  if ( !*(_QWORD *)(v7 + 40) )
  {
    sub_14000C2A8(
      (int)retaddr,
      2488,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp",
      -2147024882);
    sub_140084120(v6);
    return 2147942414LL;
  }
  v29 = *(_QWORD **)(a2 + 48);
  v30 = 0LL;
  while ( v29 )
  {
    v31 = v29[2];
    v29 = (_QWORD *)*v29;
    v32 = 3 * v30;
    *(_QWORD *)(*v28 + 8 * v32) = *(_QWORD *)(v31 + 112);
    *(_QWORD *)(*v28 + 8 * v32 + 8) = *(_QWORD *)(v31 + 128);
    *(_DWORD *)(*v28 + 8 * v32 + 16) = *(_DWORD *)(v31 + 52);
    v30 = (unsigned int)(v30 + 1);
  }
  v33 = *(_DWORD *)(a2 + 112);
  *(_DWORD *)(v7 + 48) = v33;
  v34 = v33;
  v36 = v33;
  v35 = 24LL * v33;
  if ( !is_mul_ok(v36, 0x18uLL) )
    v35 = -1LL;
  v37 = sub_1400499B8(v35, (__int64)&unk_1400C75FC);
  v38 = v37;
  if ( v37 )
    sub_14004D37C(v37, 24LL, v34);
  else
    v38 = 0LL;
  v39 = (_QWORD *)(v7 + 56);
  sub_140082000((__int64 *)(v7 + 56), v38);
  if ( !*(_QWORD *)(v7 + 56) )
  {
    sub_14000C2A8(
      (int)retaddr,
      2505,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp",
      -2147024882);
    sub_140084120(v6);
    return 2147942414LL;
  }
  v40 = *(_QWORD **)(a2 + 96);
  v41 = 0LL;
  while ( v40 )
  {
    v42 = v40[2];
    v40 = (_QWORD *)*v40;
    v43 = 3 * v41;
    *(_QWORD *)(*v39 + 8 * v43) = *(_QWORD *)(v42 + 112);
    *(_QWORD *)(*v39 + 8 * v43 + 8) = *(_QWORD *)(v42 + 136);
    *(_DWORD *)(*v39 + 8 * v43 + 16) = *(_DWORD *)(v42 + 52);
    v41 = (unsigned int)(v41 + 1);
  }
  v44 = *(_DWORD *)(a3 + 16);
  *(_DWORD *)(v7 + 16) = v44;
  v46 = v44;
  v45 = 8LL * v44;
  if ( !is_mul_ok(v46, 8uLL) )
    v45 = -1LL;
  v47 = sub_1400499B8(v45, (__int64)&unk_1400C75FC);
  sub_140082000((__int64 *)(v7 + 24), v47);
  if ( !*(_QWORD *)(v7 + 24) )
  {
    sub_14000C2A8(
      (int)retaddr,
      2521,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp",
      -2147024882);
    sub_140084120(v6);
    return 2147942414LL;
  }
  v49 = *(_QWORD **)a3;
  v50 = 0LL;
  while ( v49 )
  {
    v51 = v49[2];
    v49 = (_QWORD *)*v49;
    *(_QWORD *)(*(_QWORD *)(v7 + 24) + 8 * v50) = *(_QWORD *)(v51 + 112);
    v50 = (unsigned int)(v50 + 1);
  }
  sub_140085590(v6, v48, 0LL, v50, v52, 1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 176));
  return 0LL;
}
