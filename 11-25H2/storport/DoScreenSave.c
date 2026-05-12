/*
 * XREFs of DoScreenSave @ 0x14003A05C
 * Callers:
 *     sub_140061988 @ 0x140061988 (sub_140061988.c)
 * Callees:
 *     sub_140001010 @ 0x140001010 (sub_140001010.c)
 *     sub_1400019C0 @ 0x1400019C0 (sub_1400019C0.c)
 *     sub_140016930 @ 0x140016930 (sub_140016930.c)
 *     sub_1400179D0 @ 0x1400179D0 (sub_1400179D0.c)
 *     sub_140037A5C @ 0x140037A5C (sub_140037A5C.c)
 *     sub_140037B0C @ 0x140037B0C (sub_140037B0C.c)
 *     sub_14003F840 @ 0x14003F840 (sub_14003F840.c)
 *     sub_140042400 @ 0x140042400 (sub_140042400.c)
 *     sub_14004DAE8 @ 0x14004DAE8 (sub_14004DAE8.c)
 *     sub_1400534CC @ 0x1400534CC (sub_1400534CC.c)
 *     sub_1400536E8 @ 0x1400536E8 (sub_1400536E8.c)
 *     sub_140058750 @ 0x140058750 (sub_140058750.c)
 *     sub_14005A31C @ 0x14005A31C (sub_14005A31C.c)
 *     sub_14008DDF0 @ 0x14008DDF0 (sub_14008DDF0.c)
 *     sub_1400A6398 @ 0x1400A6398 (sub_1400A6398.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_14017AF58 @ 0x14017AF58 (sub_14017AF58.c)
 *     sub_14017B0EC @ 0x14017B0EC (sub_14017B0EC.c)
 */

__int64 __fastcall DoScreenSave(__int64 a1)
{
  int v1; // edx
  __int64 v2; // r13
  int v4; // r15d
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // r14d
  __int64 v8; // rcx
  int v9; // edi
  int v10; // r8d
  unsigned int v11; // r12d
  unsigned int v12; // esi
  int v13; // r8d
  int v14; // eax
  ULONG v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // ecx
  __int64 v20; // rax
  unsigned int v21; // esi
  const int *v22; // rdx
  const int *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v28; // [rsp+78h] [rbp-90h] BYREF
  ULONG v29; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v30; // [rsp+80h] [rbp-88h] BYREF
  int v31; // [rsp+84h] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+88h] [rbp-80h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-60h]
  __int64 v34; // [rsp+B0h] [rbp-58h]
  ULONG *v35; // [rsp+B8h] [rbp-50h]
  __int64 v36; // [rsp+C0h] [rbp-48h]
  char v37[16]; // [rsp+C8h] [rbp-40h] BYREF
  int *v38; // [rsp+D8h] [rbp-30h]
  __int64 v39; // [rsp+E0h] [rbp-28h]
  char v40[16]; // [rsp+E8h] [rbp-20h] BYREF
  int *v41; // [rsp+F8h] [rbp-10h]
  __int64 v42; // [rsp+100h] [rbp-8h]
  int *v43; // [rsp+108h] [rbp+0h]
  __int64 v44; // [rsp+110h] [rbp+8h]

  v1 = *(_DWORD *)a1;
  v2 = 0LL;
  v29 = 0;
  v4 = 0;
  if ( v1 == 1314275652 )
  {
    v5 = a1 + 274;
  }
  else if ( v1 == 1094997074 )
  {
    v5 = a1 + 482;
  }
  else
  {
    v5 = 98LL;
  }
  v6 = 316LL;
  if ( v1 != 1314275652 )
    v6 = 524LL;
  v7 = ((*(_DWORD *)(v6 + a1) + 7) & 0xFFFFFFF8) + 1184;
  if ( *(_BYTE *)v5 == 1 )
  {
    v4 = (*(_DWORD *)(*(_QWORD *)(a1 + 608) + 184LL) & 0x80u) != 0 ? 224 : 184;
    v7 += v4;
  }
  v9 = sub_1400534CC(a1);
  if ( v9 < 0 )
  {
    *(_DWORD *)(a1 + 6188) = 13;
    goto LABEL_43;
  }
  v11 = sub_1400019C0(a1, &v29);
  if ( v11 > *(_DWORD *)(a1 + 972) )
  {
    if ( (byte_1401694F6 & 0x20) != 0 )
      sub_140058750(
        v8,
        (unsigned int)&unk_14014A5B0,
        v10,
        *(_DWORD *)(a1 + 56),
        *(_QWORD *)(a1 + 4728),
        *(_QWORD *)(a1 + 4720),
        *(_BYTE *)(a1 + 4371));
    v11 = *(_DWORD *)(a1 + 972);
  }
  v12 = 0;
  if ( !v11 )
    goto LABEL_42;
  do
  {
    v9 = sub_140001010(
           *(_QWORD *)(a1 + 960) + 320LL * v12,
           *(_DWORD *)(a1 + 588),
           v7,
           *(_QWORD *)(a1 + 8),
           *(_BYTE *)(a1 + 4370),
           v4);
    if ( v9 < 0 )
      break;
    v8 = *(_QWORD *)(a1 + 960);
    ++v12;
    v14 = *(_DWORD *)(v8 + v2 + 136);
    *(_DWORD *)(v8 + v2 + 32) = v14;
    *(_DWORD *)(v8 + v2 + 28) = v14;
    v2 += 320LL;
  }
  while ( v12 < v11 );
  if ( !v12 )
  {
LABEL_42:
    *(_DWORD *)(a1 + 6188) = 14;
    if ( v9 >= 0 )
      goto LABEL_47;
    goto LABEL_43;
  }
  if ( v12 != v11 && (byte_1401694F6 & 0x20) != 0 )
    sub_140058750(
      v8,
      (unsigned int)&unk_1401499D0,
      v13,
      *(_DWORD *)(a1 + 56),
      *(_QWORD *)(a1 + 4728),
      *(_QWORD *)(a1 + 4720),
      *(_BYTE *)(a1 + 4371));
  v15 = v29 - 1;
  *(_DWORD *)(a1 + 968) = v12;
  v16 = (v12 + v15 - (v12 + v15) % v12) % v12;
  *(_DWORD *)(a1 + 976) = (v12 + v15 - (v12 + v15) % v12) / v12;
  if ( v12 > 1 )
  {
    sub_14005A31C(a1, 0LL);
    if ( *(_QWORD *)(a1 + 4960) )
      sub_1400A6398(a1);
  }
  if ( *(_BYTE *)(a1 + 4370) )
  {
    if ( !(unsigned __int8)sub_14017B0EC(a1 + 880, v16) )
    {
      v9 = sub_14017AF58(v17, *(_QWORD *)(a1 + 32), a1 + 384);
      if ( v9 < 0 )
      {
        *(_DWORD *)(a1 + 6188) = 15;
        goto LABEL_43;
      }
    }
  }
  v18 = *(_QWORD *)(a1 + 8);
  v19 = *(_DWORD *)(a1 + 432);
  if ( v19 > *(_DWORD *)(v18 + 152) )
    *(_DWORD *)(v18 + 152) = v19;
  v9 = sub_14004DAE8((PUNICODE_STRING)(a1 + 40));
  if ( v9 < 0 )
  {
    *(_DWORD *)(a1 + 6188) = 16;
LABEL_43:
    if ( *(_DWORD *)(a1 + 968) )
    {
      v21 = 0;
      do
        sub_140016930(*(_QWORD *)(a1 + 960) + 320LL * v21++, *(_QWORD *)(a1 + 8), *(_BYTE *)(a1 + 4370));
      while ( v21 < *(_DWORD *)(a1 + 968) );
      *(_DWORD *)(a1 + 968) = 0;
    }
    goto LABEL_47;
  }
  v20 = *(_QWORD *)(a1 + 608);
  *(_DWORD *)(a1 + 5780) = -1;
  if ( *(_DWORD *)(v20 + 4) == 5 && (int)sub_14008DDF0(*(_QWORD *)(a1 + 32), a1 + 5780) < 0 )
    *(_DWORD *)(a1 + 5780) = -2;
  sub_1400536E8(a1);
  *(_BYTE *)(a1 + 356) = 0;
  *(_DWORD *)(a1 + 344) = 1;
  *(_QWORD *)(a1 + 348) = 1LL;
  if ( (unsigned __int8)sub_140042400(a1 + 376, 14LL) && *(int *)(a1 + 604) < 0 && !sub_1400179D0(a1) && byte_1401688A9 )
    *(_BYTE *)(a1 + 112) |= 2u;
LABEL_47:
  if ( (unsigned int)dword_140168178 > 5 && (unsigned __int8)sub_14003F840(v8, 0x400000000000LL) )
  {
    v22 = *(const int **)(a1 + 4720);
    v33 = a1 + 5064;
    v29 = *(_DWORD *)(a1 + 56);
    v35 = &v29;
    v34 = 16LL;
    v36 = 4LL;
    sub_140037B0C((__int64)v37, v22);
    v23 = *(const int **)(a1 + 4728);
    LOBYTE(v28) = *(_BYTE *)(a1 + 4276);
    v38 = &v28;
    v39 = 1LL;
    sub_140037B0C((__int64)v40, v23);
    v24 = *(unsigned int *)(a1 + 588);
    v41 = &v31;
    v31 = v24;
    v43 = &v30;
    v42 = 4LL;
    v30 = v9;
    v44 = 4LL;
    sub_140037A5C(v24, (unsigned __int8 *)dword_140155DE9, v25, v26, 9u, &v32);
  }
  return (unsigned int)v9;
}
