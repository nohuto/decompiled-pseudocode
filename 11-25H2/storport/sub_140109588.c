/*
 * XREFs of sub_140109588 @ 0x140109588
 * Callers:
 *     sub_140101854 @ 0x140101854 (sub_140101854.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1400F787C @ 0x1400F787C (sub_1400F787C.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     memmove @ 0x14013C680 (memmove.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140109588(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi
  unsigned int v5; // r15d
  unsigned int v6; // r12d
  _BYTE *v7; // rbx
  __int64 v8; // r8
  int v9; // esi
  __int64 v10; // r8
  unsigned __int8 v11; // dl
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // rdi
  int v16; // r13d
  int v17; // r13d
  unsigned int v18; // r15d
  _BYTE *v19; // rax
  unsigned __int16 v20; // r10
  char v21; // r11
  __int64 v22; // r9
  char v23; // cl
  char v24; // al
  char v25; // al
  __int64 v26; // r9
  __int16 v27; // r10
  __int64 v28; // r8
  __int64 v29; // rax
  unsigned __int64 v30; // r8
  char v31; // cl
  char v32; // al
  char v33; // al
  __int64 v34; // r8
  int v35; // r13d
  _BYTE *v36; // rax
  unsigned __int16 v37; // r10
  unsigned __int16 v38; // r8
  char v39; // al
  unsigned __int64 v40; // rcx
  int v41; // r13d
  _BYTE *v42; // rax
  __int16 v43; // dx
  unsigned __int16 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rdx
  _BYTE *v47; // rcx
  __int64 v48; // r8
  unsigned int Size; // [rsp+34h] [rbp-34h]
  size_t Size_4; // [rsp+38h] [rbp-30h]
  _BYTE *Dst; // [rsp+40h] [rbp-28h]
  _OWORD v53[2]; // [rsp+48h] [rbp-20h] BYREF
  char v55; // [rsp+B8h] [rbp+50h]
  int v56; // [rsp+C8h] [rbp+60h]

  Dst = *(_BYTE **)(a2 + 24);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = a2;
  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  Size = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v53[0] = 0LL;
  Size_4 = sub_1401225EC(v3);
  if ( !Size_4 )
    goto LABEL_2;
  while ( 1 )
  {
    v6 = 48;
    if ( v5 > 0x30 )
      v6 = v5;
    v9 = sub_1400E736C(*(_QWORD *)(a1 + 16), v6, v8, (void **)v53, (_QWORD *)v53 + 1, 0);
    if ( v9 < 0 )
      goto LABEL_49;
    *(_DWORD *)(*(_QWORD *)Size_4 + 4256LL) &= ~1u;
    *(_DWORD *)(*(_QWORD *)Size_4 + 4256LL) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)Size_4 + 4256LL) |= 2u;
    *(_QWORD *)(*(_QWORD *)Size_4 + 4184LL) = v4;
    *(_QWORD *)(*(_QWORD *)Size_4 + 4192LL) = sub_1400E90F0;
    *(_QWORD *)(*(_QWORD *)Size_4 + 4200LL) = Size_4;
    *(_QWORD *)(*(_QWORD *)Size_4 + 4216LL) = a1;
    *(_OWORD *)(*(_QWORD *)Size_4 + 4160LL) = v53[0];
    *(_DWORD *)(*(_QWORD *)Size_4 + 4248LL) = v6;
    v10 = *(_QWORD *)Size_4 + 4096LL;
    v11 = **(_BYTE **)(*(_QWORD *)(a1 + 16) + 1264LL);
    v12 = *((_QWORD *)&v53[0] + 1);
    *(_DWORD *)(v10 + 4) = *(_DWORD *)(a1 + 56);
    *(_QWORD *)(v10 + 24) = v12;
    *(_DWORD *)(v10 + 40) = (v6 >> 2) - 1;
    v13 = *(_DWORD *)(v10 + 44);
    *(_BYTE *)v10 = 14;
    *(_DWORD *)(v10 + 44) = v13 ^ (v13 ^ (v11 >> 3)) & 1;
    v56 = sub_1400BD378(*(PVOID *)(a1 + 16), Size_4);
    v9 = v56;
    if ( v56 < 0 )
      goto LABEL_49;
    v14 = *(_QWORD *)(a1 + 16);
    v15 = *(_QWORD *)(*(_QWORD *)Size_4 + 4160LL);
    v16 = *(unsigned __int16 *)(v15 + 5);
    v5 = (**(_BYTE **)(v14 + 1264) & 8) != 0 ? (v16 + 1) << 6 : 24 * (v16 + 1);
    if ( v6 >= v5 )
      break;
    sub_1400F5FEC(*(_QWORD *)(a1 + 16), v6, v14, *(__int64 *)&v53[0], *((__int64 *)&v53[0] + 1));
    v4 = a2;
    v53[0] = 0LL;
  }
  if ( (Dst[8] & 0x1F) == 0 )
  {
    v41 = 8 * v16;
    v18 = v41 + 8;
    v42 = (_BYTE *)sub_1400143E0(64LL, (unsigned int)(v41 + 8), 1296982354LL, *(_QWORD *)(a1 + 8));
    v7 = v42;
    if ( v42 )
    {
      v42[3] = *(_BYTE *)v15;
      v42[2] = *(_BYTE *)(v15 + 1);
      v42[1] = *(_BYTE *)(v15 + 2);
      *v42 = *(_BYTE *)(v15 + 3);
      v42[6] = BYTE1(v41);
      v42[5] = BYTE2(v41);
      v42[4] = HIBYTE(v41);
      v42[7] = v41;
      if ( v41 )
      {
        v43 = *(_WORD *)(v15 + 5);
        v44 = 0;
        if ( (**(_BYTE **)(*(_QWORD *)(a1 + 16) + 1264LL) & 8) != 0 )
        {
          if ( v43 )
          {
            do
            {
              v46 = v44++;
              v47 = &v42[8 * v46];
              v46 <<= 6;
              v47[15] = *(_BYTE *)(v46 + v15 + 72);
              v47[14] = *(_BYTE *)(v46 + v15 + 73);
              v47[13] = *(_BYTE *)(v46 + v15 + 74);
              v47[12] = *(_BYTE *)(v46 + v15 + 75);
              v47[11] = *(_BYTE *)(v46 + v15 + 76);
              v47[10] = *(_BYTE *)(v46 + v15 + 77);
              v47[9] = *(_BYTE *)(v46 + v15 + 78);
              v47[8] = *(_BYTE *)(v46 + v15 + 79);
            }
            while ( v44 < *(_WORD *)(v15 + 5) );
          }
        }
        else if ( v43 )
        {
          do
          {
            v45 = v44++;
            v42[8 * v45 + 15] = *(_BYTE *)(v15 + 24 * v45 + 40);
            v42[8 * v45 + 14] = *(_BYTE *)(v15 + 24 * v45 + 41);
            v42[8 * v45 + 13] = *(_BYTE *)(v15 + 24 * v45 + 42);
            v42[8 * v45 + 12] = *(_BYTE *)(v15 + 24 * v45 + 43);
            v42[8 * v45 + 11] = *(_BYTE *)(v15 + 24 * v45 + 44);
            v42[8 * v45 + 10] = *(_BYTE *)(v15 + 24 * v45 + 45);
            v42[8 * v45 + 9] = *(_BYTE *)(v15 + 24 * v45 + 46);
            v42[8 * v45 + 8] = *(_BYTE *)(v15 + 24 * v45 + 47);
          }
          while ( v44 < *(_WORD *)(v15 + 5) );
        }
      }
      goto LABEL_46;
    }
    goto LABEL_2;
  }
  if ( (Dst[8] & 0x1F) != 1 )
  {
    if ( (Dst[8] & 0x1F) != 3 )
    {
      v9 = -1073741811;
      goto LABEL_49;
    }
    v17 = 32 * v16;
    v18 = v17 + 8;
    v19 = (_BYTE *)sub_1400143E0(64LL, (unsigned int)(v17 + 8), 1296982354LL, *(_QWORD *)(a1 + 8));
    v7 = v19;
    if ( v19 )
    {
      v19[3] = *(_BYTE *)v15;
      v19[2] = *(_BYTE *)(v15 + 1);
      v19[1] = *(_BYTE *)(v15 + 2);
      *v19 = *(_BYTE *)(v15 + 3);
      v19[6] = BYTE1(v17);
      v19[5] = BYTE2(v17);
      v19[4] = HIBYTE(v17);
      v19[7] = v17;
      if ( v17 )
      {
        v20 = 0;
        if ( *(_WORD *)(v15 + 5) )
        {
          v21 = 15;
          do
          {
            v22 = 32LL * v20;
            if ( (**(_BYTE **)(*(_QWORD *)(a1 + 16) + 1264LL) & 8) != 0 )
            {
              v30 = (unsigned __int64)v20 << 6;
              v7[v22 + 15] = *(_BYTE *)(v30 + v15 + 72);
              v7[v22 + 14] = *(_BYTE *)(v30 + v15 + 73);
              v7[v22 + 13] = *(_BYTE *)(v30 + v15 + 74);
              v7[v22 + 12] = *(_BYTE *)(v30 + v15 + 75);
              v7[v22 + 11] = *(_BYTE *)(v30 + v15 + 76);
              v7[v22 + 10] = *(_BYTE *)(v30 + v15 + 77);
              v7[v22 + 9] = *(_BYTE *)(v30 + v15 + 78);
              v7[v22 + 8] = *(_BYTE *)(v30 + v15 + 79);
              v31 = v7[v22 + 20] | 2;
              v7[v22 + 20] = v31;
              v32 = *(_BYTE *)(v30 + v15 + 66) ^ v31;
              v7[v22 + 21] &= v21;
              v7[v22 + 20] = v31 ^ v32 & 1;
              v33 = sub_1400F787C(*(unsigned __int8 *)(v15 + 4));
              v7[v26 + 21] = v21 & v33;
              v7[v26 + 27] = *(_BYTE *)(v34 + v15 + 64);
              v7[v26 + 26] = *(_BYTE *)(v34 + v15 + 65);
              v7[v26 + 31] = 8;
              v7[v26 + 30] = 0;
              v7[v26 + 29] = 0;
              v7[v26 + 28] = 0;
              v29 = *(_QWORD *)(v34 + v15 + 80);
            }
            else
            {
              v7[v22 + 15] = *(_BYTE *)(v15 + 24LL * v20 + 40);
              v7[v22 + 14] = *(_BYTE *)(v15 + 24LL * v20 + 41);
              v7[v22 + 13] = *(_BYTE *)(v15 + 24LL * v20 + 42);
              v7[v22 + 12] = *(_BYTE *)(v15 + 24LL * v20 + 43);
              v7[v22 + 11] = *(_BYTE *)(v15 + 24LL * v20 + 44);
              v7[v22 + 10] = *(_BYTE *)(v15 + 24LL * v20 + 45);
              v7[v22 + 9] = *(_BYTE *)(v15 + 24LL * v20 + 46);
              v7[v22 + 8] = *(_BYTE *)(v15 + 24LL * v20 + 47);
              v23 = v7[v22 + 20] | 2;
              v7[v22 + 20] = v23;
              v24 = *(_BYTE *)(v15 + 24LL * v20 + 26) ^ v23;
              v7[v22 + 21] &= v21;
              v7[v22 + 20] = v23 ^ v24 & 1;
              v25 = sub_1400F787C(*(unsigned __int8 *)(v15 + 4));
              v7[v26 + 21] = v21 & v25;
              v7[v26 + 27] = *(_BYTE *)(v15 + 8 * v28 + 24);
              v7[v26 + 26] = *(_BYTE *)(v15 + 8 * v28 + 25);
              v7[v26 + 31] = 8;
              v7[v26 + 30] = 0;
              v7[v26 + 29] = 0;
              v7[v26 + 28] = 0;
              v29 = *(_QWORD *)(v15 + 8 * v28 + 32);
            }
            v20 = v27 + 1;
            *(_QWORD *)&v7[v26 + 32] = v29;
          }
          while ( v20 < *(_WORD *)(v15 + 5) );
          v9 = v56;
          v18 = v17 + 8;
        }
      }
      goto LABEL_46;
    }
LABEL_2:
    v9 = -1073741670;
    goto LABEL_49;
  }
  v55 = *(_BYTE *)(v15 + 4);
  v35 = v55 != 0 ? 0x10 : 0;
  v18 = v35 + 8;
  v36 = (_BYTE *)sub_1400143E0(64LL, (unsigned int)(v35 + 8), 1296982354LL, *(_QWORD *)(a1 + 8));
  v7 = v36;
  if ( !v36 )
    goto LABEL_2;
  v36[3] = *(_BYTE *)v15;
  v36[2] = *(_BYTE *)(v15 + 1);
  v36[1] = *(_BYTE *)(v15 + 2);
  *v36 = *(_BYTE *)(v15 + 3);
  v36[6] = BYTE1(v35);
  v36[7] = v35;
  v36[5] = BYTE2(v35);
  v36[4] = HIBYTE(v35);
  if ( !v55 )
    goto LABEL_46;
  v36[21] = sub_1400F787C(*(unsigned __int8 *)(v15 + 4)) & 0xF;
  if ( (unsigned __int8)(*(_BYTE *)(v15 + 4) - 5) <= 1u )
  {
    *((_QWORD *)v7 + 1) = 0LL;
    goto LABEL_46;
  }
  v37 = *(_WORD *)(v15 + 5);
  v38 = 0;
  if ( !v37 )
    goto LABEL_46;
  while ( (**(_BYTE **)(*(_QWORD *)(a1 + 16) + 1264LL) & 8) == 0 )
  {
    if ( (*(_BYTE *)(v15 + 24LL * v38 + 26) & 1) != 0 )
    {
      v7[15] = *(_BYTE *)(v15 + 24LL * v38 + 40);
      v7[14] = *(_BYTE *)(v15 + 24LL * v38 + 41);
      v7[13] = *(_BYTE *)(v15 + 24LL * v38 + 42);
      v7[12] = *(_BYTE *)(v15 + 24LL * v38 + 43);
      v7[11] = *(_BYTE *)(v15 + 24LL * v38 + 44);
      v7[10] = *(_BYTE *)(v15 + 24LL * v38 + 45);
      v7[9] = *(_BYTE *)(v15 + 24LL * v38 + 46);
      v39 = *(_BYTE *)(v15 + 24LL * v38 + 47);
      goto LABEL_32;
    }
LABEL_34:
    if ( ++v38 >= v37 )
      goto LABEL_46;
  }
  v40 = (unsigned __int64)v38 << 6;
  if ( (*(_BYTE *)(v40 + v15 + 66) & 1) == 0 )
    goto LABEL_34;
  v7[15] = *(_BYTE *)(v40 + v15 + 72);
  v7[14] = *(_BYTE *)(v40 + v15 + 73);
  v7[13] = *(_BYTE *)(v40 + v15 + 74);
  v7[12] = *(_BYTE *)(v40 + v15 + 75);
  v7[11] = *(_BYTE *)(v40 + v15 + 76);
  v7[10] = *(_BYTE *)(v40 + v15 + 77);
  v7[9] = *(_BYTE *)(v40 + v15 + 78);
  v39 = *(_BYTE *)(v40 + v15 + 79);
LABEL_32:
  v7[8] = v39;
LABEL_46:
  memset_0(Dst, 0, Size);
  if ( v18 >= *((unsigned __int16 *)Dst + 5) )
    v18 = *((unsigned __int16 *)Dst + 5);
  memmove(Dst, v7, v18);
LABEL_49:
  sub_140122C20(*(_QWORD *)(a1 + 16), Size_4);
  if ( *(_QWORD *)&v53[0] )
    sub_1400F5FEC(*(_QWORD *)(a1 + 16), v6, v48, *(__int64 *)&v53[0], *((__int64 *)&v53[0] + 1));
  if ( v7 )
    ExFreePoolWithTag(v7, 0x4D4E6152u);
  return (unsigned int)v9;
}
