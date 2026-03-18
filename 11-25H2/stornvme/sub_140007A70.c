/*
 * XREFs of sub_140007A70 @ 0x140007A70
 * Callers:
 *     sub_140007800 @ 0x140007800 (sub_140007800.c)
 *     sub_14001BA90 @ 0x14001BA90 (sub_14001BA90.c)
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     sub_14001F48C @ 0x14001F48C (sub_14001F48C.c)
 *     sub_14002E4EC @ 0x14002E4EC (sub_14002E4EC.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_140007A70(__int64 a1, unsigned __int8 a2, char a3)
{
  unsigned __int16 *v3; // r15
  __int64 v4; // rdi
  char v8; // r12
  unsigned __int16 i; // si
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // r8
  int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // r9
  char v16; // cl
  __int64 result; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // [rsp+30h] [rbp-20h]
  __int64 v21; // [rsp+38h] [rbp-18h]
  __int64 v22; // [rsp+90h] [rbp+40h]
  __int64 v23; // [rsp+A8h] [rbp+58h]

  v3 = (unsigned __int16 *)(a1 + 332);
  v22 = 0LL;
  v4 = 0LL;
  v23 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( (*(_DWORD *)(a1 + 128) & 8) == 0 || (v8 = 1, *v3 >= *(_WORD *)(a1 + 324)) )
    v8 = 0;
  for ( i = 1; i <= *v3; ++i )
  {
    if ( a3 )
    {
      StorPortExtendedFunction(0LL, a1, 128LL, 1701672526LL);
      if ( !v22 )
        goto LABEL_17;
      sub_140032C80(v22, 0LL, 128LL);
      sub_140006100(a1, 0x2000u);
      if ( !v23 )
      {
        sub_14001F48C(a1, v22);
LABEL_17:
        if ( v4 )
        {
          do
          {
            v18 = *(_QWORD *)(sub_140005000(v4) + 4200);
            v19 = *(_QWORD *)(v20 + 40);
            sub_14000CF50(a1, 0x2000LL, v20 + 56, *(_QWORD *)(v18 + 104));
            sub_14001F48C(a1, v18);
            v20 = v19;
            v4 = v19;
          }
          while ( v19 );
        }
        return 3238002689LL;
      }
      sub_140032C80(v23, 0LL, 4232LL);
      *(_BYTE *)(v22 + 11) = 0;
      *(_DWORD *)(v22 + 20) = 251658240;
      *(_QWORD *)(v22 + 96) = v23;
      *(_QWORD *)(v22 + 64) = v23;
      *(_QWORD *)(v22 + 104) = 0LL;
      *(_BYTE *)v22 = 1;
      *(_QWORD *)(v23 + 4200) = v22;
      v10 = v23;
    }
    else
    {
      sub_140009580(a1, a1 + 1008);
      v10 = *(_QWORD *)(a1 + 1104);
      v22 = a1 + 1008;
      v4 = v20;
      v23 = v10;
    }
    *(_BYTE *)(v10 + 4225) |= 1u;
    *(_BYTE *)(v23 + 4225) &= ~2u;
    *(_WORD *)(v23 + 4212) = 0;
    v11 = *(_QWORD *)(a1 + 944);
    v12 = 392LL * i;
    *(_BYTE *)(v23 + 4096) = 5;
    *(_QWORD *)(v23 + 4120) = *(_QWORD *)(*(_QWORD *)(a1 + 944) + v12 - 384);
    *(_WORD *)(v23 + 4136) = i;
    *(_WORD *)(v23 + 4138) = *(_WORD *)(a1 + 326) - 1;
    v13 = *(_DWORD *)(v23 + 4140) | 1;
    *(_DWORD *)(v23 + 4140) = v13;
    if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(v11 + v12 - 144) )
      v14 = v13 & 0xFFFFFFFD;
    else
      v14 = v13 | 2;
    *(_DWORD *)(v23 + 4140) = v14;
    *(_WORD *)(v23 + 4142) = *(_WORD *)(*(_QWORD *)(a1 + 944) + v12 - 216);
    if ( (a3 || v8) && (*(_QWORD *)(v23 + 4192) = sub_14002A960, v8) )
    {
      if ( v21 )
      {
        *(_QWORD *)(v21 + 40) = v22 + 8;
      }
      else
      {
        v4 = v22 + 8;
        v20 = v22 + 8;
      }
      v21 = v22 + 8;
    }
    else
    {
      sub_1400092F0(a1, v22 + 8);
      if ( a3 )
      {
        if ( *(_WORD *)(a1 + 472) == *(_WORD *)(a1 + 324) )
        {
          StorPortExtendedFunction(81LL, a1, 1000LL, v15);
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 996));
        }
      }
      else
      {
        sub_140008130(a1, v22 + 8, a2);
        v16 = *(_BYTE *)(v22 + 11);
        if ( v16 != 1 )
        {
          result = 3238002689LL;
          if ( v16 == 5 )
            return 3238002700LL;
          return result;
        }
      }
    }
  }
  if ( v8 && v4 )
    sub_14002E4EC(a1, v4);
  return 0LL;
}
