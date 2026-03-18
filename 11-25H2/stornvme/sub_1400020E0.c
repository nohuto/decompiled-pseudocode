/*
 * XREFs of sub_1400020E0 @ 0x1400020E0
 * Callers:
 *     sub_1400028E0 @ 0x1400028E0 (sub_1400028E0.c)
 * Callees:
 *     sub_140002330 @ 0x140002330 (sub_140002330.c)
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_140006540 @ 0x140006540 (sub_140006540.c)
 *     sub_140020F40 @ 0x140020F40 (sub_140020F40.c)
 *     sub_140021AB0 @ 0x140021AB0 (sub_140021AB0.c)
 *     sub_14002510C @ 0x14002510C (sub_14002510C.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_1400020E0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int8 *v5; // r8
  __int64 v6; // r9
  __int64 v7; // r14
  unsigned int v8; // ebx
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 result; // rax
  unsigned int v15; // eax
  unsigned int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // r9
  unsigned int v19; // r15d
  __int64 ScatterGatherList; // rax
  __int64 v21; // [rsp+70h] [rbp+18h] BYREF

  v21 = 0LL;
  v7 = sub_140005000(a2);
  v8 = v5[5] | ((v5[4] | (v5[3] << 8)) << 8);
  v9 = v5[8] | ((v5[7] | (v5[6] << 8)) << 8);
  if ( (v5[5] & 3) != 0 || (v5[8] & 3) != 0 )
  {
    LOBYTE(v6) = 36;
    LOBYTE(v5) = 5;
    LOBYTE(v4) = 6;
    sub_140002330(a2, v4, v5, v6);
    return 3238002694LL;
  }
  if ( v9 > (unsigned int)sub_140006540(a1, v4) )
    goto LABEL_4;
  if ( (*(_DWORD *)(a1 + 24) & 0x800) == 0 )
  {
    sub_14002510C(v11, sub_140023BF0, 0LL);
    *(_DWORD *)(a1 + 24) |= 0x800u;
  }
  v15 = sub_140021AB0(a1);
  v12 = v15;
  if ( v15 )
  {
    v10 = v9 % v15;
    if ( v9 % v15 )
    {
LABEL_4:
      LOBYTE(v13) = 36;
      LOBYTE(v12) = 5;
      LOBYTE(v10) = 21;
      sub_140002330(a2, v10, v12, v13);
      return 3238002694LL;
    }
  }
  if ( (*(_DWORD *)(a1 + 56) & 8) != 0 )
  {
    *(_DWORD *)(v7 + 4176) = v8;
    goto LABEL_22;
  }
  v16 = (((unsigned int)sub_140006540(a1, v10) - 1) >> 12) + 2;
  StorPortExtendedFunction(0LL, a1, 24 * v16 + 16, 1701672526LL);
  if ( v21 )
  {
    v19 = (24 * v16 + 16) >> 2;
    if ( v19 )
      sub_140032C80(v21, 0LL, 4LL * v19);
    ScatterGatherList = StorPortGetScatterGatherList(a1, a2);
    if ( !(unsigned __int8)sub_140020F40(ScatterGatherList, v21, v16, 0LL, &v21) )
    {
      if ( v21 )
      {
        StorPortExtendedFunction(1LL, a1, v21, v18);
        v21 = 0LL;
      }
      LOBYTE(v18) = 36;
      goto LABEL_18;
    }
    *(_QWORD *)(v7 + 4176) = v21;
LABEL_22:
    *(_BYTE *)(v7 + 4225) |= 3u;
    sub_1400042C0(a1, a2);
    *(_DWORD *)(v7 + 4136) = (v9 >> 2) - 1;
    result = 0LL;
    *(_BYTE *)(v7 + 4096) = 17;
    *(_DWORD *)(v7 + 4140) = v8 >> 2;
    *(_QWORD *)(v7 + 4192) = sub_140026BF0;
    return result;
  }
  v18 = 0LL;
LABEL_18:
  LOBYTE(v17) = 38;
  sub_140002330(a2, v17, 0LL, v18);
  return 3238002691LL;
}
