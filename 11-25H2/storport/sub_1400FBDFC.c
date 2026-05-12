/*
 * XREFs of sub_1400FBDFC @ 0x1400FBDFC
 * Callers:
 *     sub_140197C28 @ 0x140197C28 (sub_140197C28.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1401016D0 @ 0x1401016D0 (sub_1401016D0.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400FBDFC(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // r13d
  __int64 v5; // rcx
  __int128 *v7; // r15
  unsigned int v8; // r14d
  __int64 v9; // r11
  __int64 v10; // r8
  unsigned int v11; // r12d
  unsigned int v12; // ecx
  unsigned int v13; // esi
  unsigned __int64 v14; // rdi
  _QWORD *v15; // r9
  __int64 v16; // r10
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // r8d
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // r9
  int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // rcx
  char v30; // al
  unsigned int v31; // r9d
  unsigned __int16 v32; // di
  unsigned __int64 v33; // r11
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // r8
  _DWORD *v38; // rdx
  __int64 v39; // rcx
  unsigned __int64 v40; // rax
  char v41; // al
  bool v42; // zf
  unsigned int v43; // r8d
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // r8
  char v48; // [rsp+30h] [rbp-49h]
  char v49; // [rsp+31h] [rbp-48h]
  int v50; // [rsp+34h] [rbp-45h]
  unsigned int v51; // [rsp+34h] [rbp-45h]
  __int64 v52; // [rsp+38h] [rbp-41h]
  __int64 v53; // [rsp+40h] [rbp-39h]
  unsigned __int64 v54; // [rsp+48h] [rbp-31h]
  __int128 v55; // [rsp+50h] [rbp-29h] BYREF
  int v56; // [rsp+60h] [rbp-19h]
  __int64 v57; // [rsp+68h] [rbp-11h]
  void *Dst; // [rsp+70h] [rbp-9h]
  __int128 v59; // [rsp+80h] [rbp+7h] BYREF

  v52 = 0LL;
  v4 = 0;
  v59 = 0LL;
  v50 = 1;
  v55 = 0LL;
  if ( !(unsigned __int8)sub_1401016D0() )
    return 3221225659LL;
  if ( (a2[2] & 1) != 0 )
  {
    v7 = &v59;
    v8 = 1;
    *((_QWORD *)&v59 + 1) = *(_QWORD *)(v5 + 424) * *(unsigned int *)(v5 + 64);
  }
  else
  {
    v22 = 0;
    v7 = (__int128 *)((char *)a2 + (unsigned int)a2[5]);
    v8 = a2[6] >> 4;
    if ( v8 )
    {
      v23 = *(unsigned int *)(v5 + 64);
      do
      {
        if ( *(_QWORD *)&v7[v22] % (__int64)v23
          || (v24 = *((_QWORD *)&v7[v22] + 1), v24 % v23)
          || !v24
          || v24 + *(_QWORD *)&v7[v22] > *(_QWORD *)(a1 + 424) * v23 )
        {
          v25 = -1073741811;
          goto LABEL_75;
        }
        ++v22;
      }
      while ( v22 < v8 );
    }
  }
  v9 = *(_QWORD *)(a1 + 16);
  v10 = *(_QWORD *)(v9 + 600);
  if ( !v10 || (v11 = *(_DWORD *)(v10 + 4)) == 0 )
    v11 = -1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 176) + 24LL) & 0x10) != 0 )
  {
    v12 = *(_DWORD *)(a1 + 84);
    if ( v12 )
    {
      if ( v11 >= v12 )
        v11 -= v11 % v12;
    }
  }
  v13 = 0;
  if ( v8 )
  {
    v14 = *(unsigned int *)(a1 + 64);
    v15 = (_QWORD *)v7 + 1;
    v16 = v8;
    do
    {
      if ( *v15 / v14 )
        v13 += (*v15 / v14 - 1) / v11 + 1;
      v15 += 2;
      --v16;
    }
    while ( v16 );
  }
  if ( !v10 || (v17 = *(unsigned __int8 *)(v10 + 3), !(_BYTE)v17) )
  {
    v18 = *(_DWORD *)(v9 + 620);
    v17 = 256;
    if ( v18 )
    {
      v19 = v18 >> 4;
      if ( v19 <= 0x100 )
        v17 = v19;
    }
  }
  if ( v13 >= v17 )
    v13 = v17;
  if ( v10 && (v20 = *(_QWORD *)(v10 + 8)) != 0 )
  {
    v21 = 0xFFFFFFFFLL;
    if ( v20 < 0xFFFFFFFF )
      v21 = *(_QWORD *)(v10 + 8);
    v57 = v21;
  }
  else
  {
    v57 = (0x40000000u / *(_DWORD *)(a1 + 64)) << 6;
  }
  while ( 1 )
  {
    v4 = 16 * v13;
    v25 = sub_1400E736C(*(_QWORD *)(a1 + 16), 16 * v13, v10, (void **)&v55, (_QWORD *)&v55 + 1, 0);
    if ( v25 >= 0 )
      break;
    if ( !v50 )
      goto LABEL_75;
    v13 >>= 1;
    --v50;
  }
  v26 = *(_QWORD *)(a1 + 16);
  Dst = (void *)v55;
  v52 = sub_1401225EC(v26);
  v27 = v52;
  if ( !v52 )
  {
    v25 = -1073741670;
    goto LABEL_75;
  }
  v28 = v57;
  v29 = 0LL;
  v54 = 0LL;
  v30 = 1;
  v31 = 0;
  v51 = 0;
  v32 = 0;
  v53 = 0LL;
  v33 = 0LL;
  while ( 1 )
  {
    do
    {
      if ( v30 )
      {
        v34 = v31++;
        v51 = v31;
        v53 = *(_QWORD *)&v7[v34];
        v29 = *((_QWORD *)&v7[v34] + 1);
        v54 = v29;
      }
      if ( v29 )
      {
        while ( v32 < v13 )
        {
          if ( v33 >= v28 )
          {
            v27 = v52;
            v31 = v51;
            goto LABEL_58;
          }
          v35 = v29 / *(unsigned int *)(a1 + 64);
          v36 = v11;
          if ( v35 <= v11 )
            v36 = v35;
          v37 = v28 - v33;
          if ( v36 + v33 <= v28 )
            v37 = v36;
          v38 = Dst;
          v39 = 2LL * v32;
          v33 += v37;
          *((_QWORD *)Dst + v39 + 1) = v53 / *(unsigned int *)(a1 + 64);
          v38[2 * v39 + 1] = v37;
          v40 = v37 * *(unsigned int *)(a1 + 64);
          v53 += v40;
          v29 = v54 - v40;
          v54 = v29;
          ++v32;
          if ( !v29 )
          {
            v27 = v52;
            v31 = v51;
            goto LABEL_58;
          }
        }
        v27 = v52;
        v31 = v51;
LABEL_62:
        v48 = 0;
LABEL_63:
        v41 = 0;
        goto LABEL_64;
      }
LABEL_58:
      if ( v29 )
        goto LABEL_62;
      v48 = 1;
      if ( v31 != v8 )
        goto LABEL_63;
      v41 = 1;
LABEL_64:
      v49 = v41;
      if ( v32 == v13 )
        break;
      if ( v33 == v28 )
        break;
      v42 = v41 == 0;
      v30 = v48;
    }
    while ( v42 );
    v43 = 16 * v32;
    if ( v43 > v4 )
      break;
    v44 = *(_DWORD *)(a1 + 56);
    v45 = *(_QWORD *)v27 + 4096LL;
    *(_DWORD *)(v45 + 44) |= 4u;
    *(_BYTE *)v45 = 9;
    *(_DWORD *)(v45 + 4) = v44;
    *(_BYTE *)(v45 + 40) = v32 - 1;
    *(_QWORD *)(v45 + 24) = *((_QWORD *)&v55 + 1);
    *(_DWORD *)(*(_QWORD *)v27 + 4256LL) &= ~1u;
    *(_DWORD *)(*(_QWORD *)v27 + 4256LL) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)v27 + 4256LL) |= 2u;
    *(_QWORD *)(*(_QWORD *)v27 + 4184LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)v27 + 4192LL) = sub_1400E90F0;
    *(_QWORD *)(*(_QWORD *)v27 + 4200LL) = v27;
    *(_OWORD *)(*(_QWORD *)v27 + 4160LL) = v55;
    *(_DWORD *)(*(_QWORD *)v27 + 4248LL) = v43;
    v46 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1048LL);
    if ( v46 && (*(_DWORD *)(v46 + 24) & 0x10000000) != 0 )
      *(_DWORD *)(*(_QWORD *)v27 + 4256LL) |= 0x100u;
    v25 = sub_1400BD378(*(PVOID *)(a1 + 16), v27);
    if ( v25 < 0 )
      goto LABEL_75;
    v56 = 0;
    memset_0(Dst, 0, v4);
    v27 = v52;
    v33 = 0LL;
    v28 = v57;
    v29 = v54;
    v31 = v51;
    v30 = v48;
    if ( v49 )
      goto LABEL_75;
    v32 = v56;
  }
  v25 = -1073741789;
LABEL_75:
  sub_140122C20(*(_QWORD *)(a1 + 16), v52);
  if ( (_QWORD)v55 )
    sub_1400F5FEC(*(_QWORD *)(a1 + 16), v4, v47, v55, *((__int64 *)&v55 + 1));
  return (unsigned int)v25;
}
