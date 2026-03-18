/*
 * XREFs of sub_14002CDD0 @ 0x14002CDD0
 * Callers:
 *     sub_140021B90 @ 0x140021B90 (sub_140021B90.c)
 * Callees:
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 *     sub_140021AD8 @ 0x140021AD8 (sub_140021AD8.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_14002CDD0(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  unsigned __int16 v3; // bp
  __int64 v5; // rdi
  __int64 v6; // r15
  unsigned __int16 v7; // ax
  __int64 v8; // rcx
  int v9; // r11d
  _QWORD *v11; // r14
  __int64 v12; // rbx
  _WORD *v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // r13
  int v16; // ecx
  __int64 v17; // r8
  __int16 v18; // ax
  __int64 v19; // r10
  int v20; // edx
  int v21; // r8d
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int16 v25; // dx
  __int16 v26; // r9
  unsigned __int16 v28; // [rsp+90h] [rbp+18h]

  v3 = 0;
  if ( *(_BYTE *)(a3 + 2) == 40 )
    v5 = *(_QWORD *)(a3 + 64);
  else
    v5 = *(_QWORD *)(a3 + 24);
  v6 = *(unsigned int *)(v5 + 36);
  v7 = sub_140021AD8(a1);
  v28 = v7;
  if ( v7 == 0xFFFF )
    return 5LL;
  v11 = (_QWORD *)(v8 + 968);
  v12 = 6LL * v7;
  *(_WORD *)(*(_QWORD *)(v8 + 968) + 8 * v12 + 24) = v9;
  *(_QWORD *)(*(_QWORD *)(v8 + 968) + 8 * v12 + 16) = (unsigned int)(*(_DWORD *)(a1 + 200) * (2 * v9 + 1))
                                                    + *(_QWORD *)(a1 + 176)
                                                    + 4096LL;
  v13 = (_WORD *)(v5 + 56);
  v14 = *(_QWORD *)(v5 + 44);
  if ( v14 )
  {
    *(_QWORD *)(*v11 + 48LL * v7) = v14;
  }
  else
  {
    v16 = (unsigned __int16)*v13;
    if ( (_WORD)v16 && (*(_DWORD *)(a1 + 128) & 1) != 0 )
    {
      sub_140006100(a1, 16 * v16);
      return 8LL;
    }
  }
  *(_WORD *)(*v11 + 48LL * v7 + 26) = *v13;
  *(_WORD *)(*v11 + 48LL * v7 + 32) ^= (*(_WORD *)(v5 + 58) ^ *(_WORD *)(*v11 + 48LL * v7 + 32)) & 2;
  if ( (*(_DWORD *)(v5 + 68) & 0xF) == 0 )
    goto LABEL_16;
  v15 = v11;
  if ( *(_DWORD *)(v5 + 52) )
  {
    if ( (*(_BYTE *)(v5 + 58) & 1) == 0 )
    {
      v15 = (_QWORD *)(a1 + 968);
      goto LABEL_12;
    }
LABEL_16:
    v15 = (_QWORD *)(a1 + 968);
    *(_DWORD *)(*v11 + 48LL * v7 + 28) = *(_DWORD *)(v5 + 52);
    v17 = 6LL * v7;
    v18 = *(_WORD *)(*v11 + 48LL * v7 + 32);
    *(_WORD *)(*v11 + 8 * v17 + 32) = v18 ^ (*(_WORD *)(v5 + 58) ^ v18) & 1;
    goto LABEL_17;
  }
LABEL_12:
  *(_DWORD *)(*v11 + 48LL * v7 + 28) = v9;
  *(_WORD *)(*v11 + 48LL * v7 + 32) |= 1u;
LABEL_17:
  sub_140009580(a1, a1 + 1008);
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
  v19 = *(_QWORD *)(a1 + 1104) + 4096LL;
  v20 = *(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4140LL);
  *(_BYTE *)v19 = 5;
  *(_QWORD *)(v19 + 24) = *(_QWORD *)(*v11 + 48LL * v28);
  *(_WORD *)(v19 + 40) = a2;
  *(_WORD *)(v19 + 42) = *(_WORD *)(*v11 + 48LL * v28 + 26) - 1;
  v21 = v20 ^ (v20 ^ (*(unsigned __int16 *)(*v11 + 48LL * v28 + 32) >> 1)) & 1;
  *(_DWORD *)(v19 + 44) = v21;
  *(_DWORD *)(v19 + 44) = v21 ^ ((unsigned __int8)v21 ^ (unsigned __int8)(2 * *(_WORD *)(*v11 + 48LL * v28 + 32))) & 2;
  *(_WORD *)(v19 + 46) = *(_WORD *)(*v11 + 48LL * v28 + 28);
  sub_1400092F0(a1, a1 + 1016);
  LOBYTE(v22) = 1;
  sub_140008130(a1, a1 + 1016, v22);
  if ( *(_BYTE *)(a1 + 1019) == 1 )
  {
    v23 = *v11;
    ++*(_WORD *)(a1 + 954);
    *(_QWORD *)(v23 + 48LL * v28 + 40) = *(_QWORD *)(v5 + 60);
    sub_140032C80(v6 + v5 + 28, 0LL, 120LL);
    *(_QWORD *)(v6 + v5 + 36) = *(_QWORD *)(*(_QWORD *)(a1 + 968) + 48LL * v28);
    *(_QWORD *)(v6 + v5 + 44) = *(_QWORD *)(*(_QWORD *)(a1 + 968) + 48LL * v28 + 8);
    if ( (*(_DWORD *)(v5 + 68) & 0x30) == 0x10 )
      v24 = *(_DWORD *)(a1 + 200) * (2 * (unsigned int)a2 + 1);
    else
      v24 = *(_QWORD *)(*v15 + 48LL * v28 + 16);
    *(_QWORD *)(v6 + v5 + 52) = v24;
    v25 = *(_WORD *)(v6 + v5 + 68);
    *(_WORD *)(v6 + v5 + 60) = *(_WORD *)(*v15 + 48LL * v28 + 24);
    *(_WORD *)(v6 + v5 + 62) = *(_WORD *)(*v15 + 48LL * v28 + 26);
    v26 = v25 ^ (*(_WORD *)(*v15 + 48LL * v28 + 32) ^ v25) & 1;
    *(_WORD *)(v6 + v5 + 68) = v26;
    *(_WORD *)(v6 + v5 + 68) = v26 ^ (*(_WORD *)(*v15 + 48LL * v28 + 32) ^ v26) & 2;
    *(_DWORD *)(v6 + v5 + 64) = *(_DWORD *)(*v15 + 48LL * v28 + 28);
  }
  else
  {
    return 10;
  }
  return v3;
}
