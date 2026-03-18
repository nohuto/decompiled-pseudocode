/*
 * XREFs of sub_140029BE8 @ 0x140029BE8
 * Callers:
 *     sub_140029900 @ 0x140029900 (sub_140029900.c)
 * Callees:
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_140006540 @ 0x140006540 (sub_140006540.c)
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     sub_140020894 @ 0x140020894 (sub_140020894.c)
 *     sub_140032980 @ 0x140032980 (sub_140032980.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_140029BE8(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned int v4; // eax
  __int64 v5; // rcx
  _QWORD *v6; // r12
  unsigned int v7; // ebx
  unsigned int v8; // r15d
  unsigned int v9; // edi
  __int64 v10; // r9
  _OWORD *v11; // rcx
  unsigned int v12; // edx
  unsigned int v13; // r13d
  unsigned int v14; // r13d
  __int64 v15; // rbx
  unsigned int v16; // r8d
  __int64 v17; // r8
  __int64 v18; // rbx
  unsigned int v19; // r8d
  __int64 v20; // r13
  __int64 v21; // r8
  _OWORD *v22; // rax
  _OWORD *v23; // rcx
  __int128 v24; // xmm1
  int v26; // [rsp+28h] [rbp-28h]
  unsigned int v27; // [rsp+90h] [rbp+40h]
  _OWORD *v28; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+58h]

  v2 = a2;
  v4 = sub_140006540((_DWORD *)a1);
  v6 = (_QWORD *)(v5 + 3968);
  v7 = 512;
  v28 = 0LL;
  v29 = 0LL;
  v27 = 512;
  v8 = v4;
  v9 = StorPortExtendedFunction(0LL, v5, (unsigned int)v2, 1701672526LL);
  if ( !v9 )
  {
    v11 = (_OWORD *)*v6;
    if ( *v6 )
    {
      if ( (v2 & 3) != 0 )
      {
        if ( (_DWORD)v2 )
          sub_140032C80(v11, 0LL, v2);
      }
      else if ( (unsigned int)v2 >> 2 )
      {
        sub_140032C80(v11, 0LL, 4LL * ((unsigned int)v2 >> 2));
      }
      v12 = v8;
      *(_DWORD *)(a1 + 3976) = v2;
      if ( (unsigned int)v2 < v8 )
        v12 = v2;
      v9 = sub_140006100(a1, v12);
      if ( !v9 )
      {
        if ( !v28 )
          return v9;
        while ( v7 < (unsigned int)v2 )
        {
          v13 = v8;
          if ( (unsigned int)v2 - v7 < v8 )
            v13 = v2 - v7;
          v14 = v13 & 0xFFFFFE00;
          if ( !v14 )
          {
            v9 = -1056964598;
            goto LABEL_23;
          }
          sub_140009580(a1, a1 + 1008);
          v15 = *(_QWORD *)(a1 + 1072);
          LOBYTE(v16) = 8;
          *(_BYTE *)(v15 + 4225) |= 3u;
          *(_WORD *)(v15 + 4212) = 0;
          sub_140020894(a1, v15, v16, v14, v29, v26, v27, 0, 1u);
          *(_BYTE *)(v15 + 4225) |= 4u;
          *(_QWORD *)(v15 + 4160) = v28;
          *(_QWORD *)(v15 + 4168) = v29;
          *(_DWORD *)(v15 + 4208) = v14;
          sub_1400092F0(a1, a1 + 1016);
          LOBYTE(v17) = 1;
          sub_140008130(a1, a1 + 1016, v17);
          if ( *(_BYTE *)(a1 + 1019) != 1 )
            goto LABEL_18;
          sub_140032980(*v6 + v27, v28, v14);
          v7 = v14 + v27;
          v27 += v14;
        }
        sub_140009580(a1, a1 + 1008);
        v18 = *(_QWORD *)(a1 + 1072);
        LOBYTE(v19) = 8;
        *(_BYTE *)(v18 + 4225) |= 3u;
        *(_WORD *)(v18 + 4212) = 0;
        sub_140020894(a1, v18, v19, 0x200u, v29, v26, 0LL, 1, *(_BYTE *)(a1 + 148) & 1);
        v20 = 4LL;
        *(_BYTE *)(v18 + 4225) |= 4u;
        *(_QWORD *)(v18 + 4160) = v28;
        *(_QWORD *)(v18 + 4168) = v29;
        *(_DWORD *)(v18 + 4208) = 512;
        sub_1400092F0(a1, a1 + 1016);
        LOBYTE(v21) = 1;
        sub_140008130(a1, a1 + 1016, v21);
        if ( *(_BYTE *)(a1 + 1019) != 1 )
        {
LABEL_18:
          v9 = -1056964607;
          goto LABEL_23;
        }
        v22 = (_OWORD *)*v6;
        v23 = v28;
        do
        {
          *v22 = *v23;
          v22[1] = v23[1];
          v22[2] = v23[2];
          v22[3] = v23[3];
          v22[4] = v23[4];
          v22[5] = v23[5];
          v22[6] = v23[6];
          v22 += 8;
          v24 = v23[7];
          v23 += 8;
          *(v22 - 1) = v24;
          --v20;
        }
        while ( v20 );
      }
    }
  }
LABEL_23:
  if ( v28 )
  {
    if ( (unsigned int)v2 < v8 )
      v8 = v2;
    sub_14000CF50(a1, v8, (__int64 *)&v28, v29);
  }
  if ( v9 )
  {
    if ( *v6 )
      StorPortExtendedFunction(1LL, a1, *v6, v10);
    *(_OWORD *)v6 = 0LL;
  }
  return v9;
}
