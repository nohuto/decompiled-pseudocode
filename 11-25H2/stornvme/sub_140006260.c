/*
 * XREFs of sub_140006260 @ 0x140006260
 * Callers:
 *     sub_1400024C0 @ 0x1400024C0 (sub_1400024C0.c)
 * Callees:
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_140004AF0 @ 0x140004AF0 (sub_140004AF0.c)
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_140006540 @ 0x140006540 (sub_140006540.c)
 *     sub_1400183B0 @ 0x1400183B0 (sub_1400183B0.c)
 *     sub_140020F40 @ 0x140020F40 (sub_140020F40.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_140006260(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r13
  bool v7; // zf
  __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned int v10; // esi
  __int64 v11; // rcx
  unsigned int v12; // r14d
  unsigned int v13; // r12d
  __int64 ScatterGatherList; // rax
  __int64 v15; // r9
  int v16; // r14d
  unsigned __int8 v17; // cl
  __int64 v18; // r14
  int v19; // eax
  int v20; // ecx
  __int64 result; // rax
  __int64 v22; // [rsp+78h] [rbp+10h] BYREF
  __int64 v23; // [rsp+80h] [rbp+18h]

  v4 = 0LL;
  v6 = sub_140005000(a2);
  v7 = *(_BYTE *)(v5 + 2) == 40;
  v22 = 0LL;
  if ( v7 )
    v8 = *(_QWORD *)(v5 + 64);
  else
    v8 = *(_QWORD *)(v5 + 24);
  v10 = sub_1400183B0(a1);
  if ( v10 )
    goto LABEL_31;
  if ( *(_DWORD *)(v8 + 36) )
  {
    v11 = *(unsigned int *)(v8 + 52);
    v4 = v8 + v11;
  }
  else
  {
    if ( !*(_DWORD *)(v8 + 32) )
    {
LABEL_21:
      if ( *(int *)(v8 + 12) >= 0 )
      {
        if ( *(_BYTE *)(a2 + 2) == 40 )
          v17 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
        else
          v17 = *(_BYTE *)(a2 + 7);
        if ( (unsigned int)v17 < *(_DWORD *)(a1 + 224) && (v18 = *(_QWORD *)(a1 + 8LL * v17 + 1672)) != 0 )
          v16 = *(_DWORD *)(v18 + 16);
        else
          v16 = 0;
      }
      else
      {
        v16 = *(_DWORD *)(v8 + 84);
      }
      *(_BYTE *)(v6 + 4225) = (v4 != 0 ? 2 : 0) | *(_BYTE *)(v6 + 4225) & 0xFC | (*(_DWORD *)(v8 + 56) == 1);
      sub_1400042C0(a1, a2);
      *(_BYTE *)(v6 + 4096) = *(_BYTE *)(v8 + 80);
      v19 = *(_DWORD *)(v6 + 4096);
      v20 = *(_DWORD *)(v8 + 80) ^ v19;
      *(_DWORD *)(v6 + 4100) = v16;
      *(_DWORD *)(v6 + 4096) = v19 ^ v20 & 0x300;
      *(_DWORD *)(v6 + 4136) = *(_DWORD *)(v8 + 120);
      *(_DWORD *)(v6 + 4140) = *(_DWORD *)(v8 + 124);
      *(_DWORD *)(v6 + 4144) = *(_DWORD *)(v8 + 128);
      *(_DWORD *)(v6 + 4148) = *(_DWORD *)(v8 + 132);
      *(_DWORD *)(v6 + 4152) = *(_DWORD *)(v8 + 136);
      *(_DWORD *)(v6 + 4156) = *(_DWORD *)(v8 + 140);
      *(_QWORD *)(v6 + 4192) = sub_140026C60;
      goto LABEL_31;
    }
    v11 = *(unsigned int *)(v8 + 48);
    v4 = v8 + v11;
  }
  v23 = v11;
  if ( !v4 )
    goto LABEL_21;
  if ( (*(_DWORD *)(a1 + 56) & 8) != 0 )
  {
    *(_DWORD *)(v6 + 4176) = v11;
    goto LABEL_21;
  }
  v12 = (((unsigned int)sub_140006540(a1, v9) - 1) >> 12) + 2;
  StorPortExtendedFunction(0LL, a1, 24 * v12 + 16, 1701672526LL);
  if ( !v22 )
  {
    *(_DWORD *)(v8 + 16) = 7;
    v10 = -1056964607;
    *(_BYTE *)(a2 + 3) = 21;
    goto LABEL_31;
  }
  v13 = (24 * v12 + 16) >> 2;
  if ( v13 )
    sub_140032C80(v22, 0LL, 4LL * v13);
  ScatterGatherList = StorPortGetScatterGatherList(a1, a2);
  if ( (unsigned __int8)sub_140020F40(ScatterGatherList, v22, v12, (unsigned int)v23, &v22) )
  {
    *(_QWORD *)(v6 + 4176) = v22;
    goto LABEL_21;
  }
  if ( v22 )
  {
    StorPortExtendedFunction(1LL, a1, v22, v15);
    v22 = 0LL;
  }
  *(_DWORD *)(v8 + 16) = 3;
  v10 = -1056964607;
  *(_BYTE *)(a2 + 3) = 21;
LABEL_31:
  if ( *(_BYTE *)(a2 + 3) )
    return v10;
  result = sub_140004AF0(a1, a2);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(v8 + 16) = 2;
    *(_BYTE *)(a2 + 3) = 4;
  }
  else
  {
    *(_DWORD *)(v8 + 16) = 0;
  }
  return result;
}
