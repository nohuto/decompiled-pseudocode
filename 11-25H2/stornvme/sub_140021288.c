/*
 * XREFs of sub_140021288 @ 0x140021288
 * Callers:
 *     sub_14000CFB0 @ 0x14000CFB0 (sub_14000CFB0.c)
 * Callees:
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_140006540 @ 0x140006540 (sub_140006540.c)
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 *     sub_140020F40 @ 0x140020F40 (sub_140020F40.c)
 *     sub_140021AB0 @ 0x140021AB0 (sub_140021AB0.c)
 *     sub_14002510C @ 0x14002510C (sub_14002510C.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_140021288(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  char v13; // r9
  unsigned int v15; // eax
  unsigned __int64 v16; // r8
  unsigned int v17; // eax
  unsigned int v18; // r12d
  unsigned int v19; // r12d
  unsigned int *ScatterGatherList; // rax
  int v21; // r9d
  unsigned int v22; // r9d
  __int64 v23; // r9
  int v24; // eax
  int v25; // eax
  unsigned __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // [rsp+120h] [rbp+18h] BYREF
  unsigned int *v29; // [rsp+128h] [rbp+20h]

  v3 = 0;
  v29 = 0LL;
  v5 = sub_140005000(a2);
  v6 = sub_14000B900(a2, &v28);
  v7 = v6;
  v8 = v6 + *(unsigned int *)(v6 + 44);
  if ( *(_DWORD *)v8 == 2 && *(_DWORD *)(v8 + 4) >= 0x20u )
    v9 = v6 + *(unsigned int *)(v6 + 44);
  else
    v9 = 0LL;
  v10 = *(unsigned int *)(v6 + 48);
  if ( v9 )
  {
    if ( (unsigned int)v10 < 0x20 )
      goto LABEL_10;
    v11 = *(_QWORD *)(v9 + 16);
    v12 = v11 + 32;
  }
  else
  {
    if ( (unsigned int)v10 < 0x18 )
      goto LABEL_10;
    v11 = *(_QWORD *)(v8 + 16);
    v12 = v11 + 24;
  }
  if ( v10 < v12 || !v11 || (*(_BYTE *)(v8 + 8) & 3) != 0 || (*(_QWORD *)(v8 + 16) & 3) != 0 )
    goto LABEL_10;
  v15 = sub_140006540((_DWORD *)a1);
  if ( v16 > v15 )
  {
    *(_DWORD *)(v7 + 20) = 4;
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(a1 + 24) & 0x800) == 0 )
  {
    sub_14002510C(a1, sub_140023BF0, 0LL);
    *(_DWORD *)(a1 + 24) |= 0x800u;
  }
  v17 = sub_140021AB0(a1);
  if ( v17 )
  {
    if ( *(_QWORD *)(v8 + 16) % (unsigned __int64)v17 )
    {
LABEL_10:
      *(_DWORD *)(v7 + 20) = 3;
LABEL_11:
      v3 = -1056964602;
LABEL_12:
      v13 = 21;
      goto LABEL_13;
    }
  }
  if ( (*(_DWORD *)(a1 + 56) & 8) != 0 )
  {
    v24 = *(_DWORD *)(v7 + 44);
    if ( v9 )
      v25 = v24 + 32;
    else
      v25 = v24 + 24;
    *(_DWORD *)(v5 + 4176) = v25;
    goto LABEL_43;
  }
  LODWORD(v28) = (((unsigned int)sub_140006540((_DWORD *)a1) - 1) >> 12) + 2;
  v18 = 24 * v28 + 16;
  StorPortExtendedFunction(0LL, a1, v18, 1701672526LL);
  if ( v29 )
  {
    v19 = v18 >> 2;
    if ( v19 )
      sub_140032C80(v29, 0LL, 4LL * v19);
    ScatterGatherList = (unsigned int *)StorPortGetScatterGatherList(a1, a2);
    v21 = *(_DWORD *)(v7 + 44);
    if ( v9 )
      v22 = v21 + 32;
    else
      v22 = v21 + 24;
    if ( !sub_140020F40(ScatterGatherList, v29, v28, v22) )
    {
      if ( v29 )
      {
        StorPortExtendedFunction(1LL, a1, v29, v23);
        v29 = 0LL;
      }
      *(_DWORD *)(v7 + 20) = 4;
      v3 = -1056964607;
      goto LABEL_12;
    }
    *(_QWORD *)(v5 + 4176) = v29;
LABEL_43:
    *(_BYTE *)(v5 + 4225) |= 3u;
    sub_1400042C0(a1, a2);
    v26 = *(_QWORD *)(v8 + 8);
    v27 = (*(_QWORD *)(v8 + 16) >> 2) - 1;
    *(_BYTE *)(v5 + 4096) = 17;
    *(_DWORD *)(v5 + 4136) = v27;
    *(_DWORD *)(v5 + 4140) = v26 >> 2;
    *(_QWORD *)(v5 + 4192) = sub_140023F70;
    return v3;
  }
  v13 = 4;
  *(_DWORD *)(v7 + 20) = 1;
  v3 = -1056964605;
LABEL_13:
  *(_BYTE *)(a2 + 3) = v13;
  if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
    StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
  return v3;
}
