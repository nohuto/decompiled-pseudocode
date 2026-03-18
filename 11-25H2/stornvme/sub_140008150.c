/*
 * XREFs of sub_140008150 @ 0x140008150
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

__int64 __fastcall sub_140008150(__int64 a1, unsigned __int8 a2, char a3)
{
  unsigned __int16 *v3; // r15
  __int64 v4; // rdi
  char v8; // r12
  unsigned __int16 i; // si
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r9
  char v13; // cl
  __int64 result; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // [rsp+30h] [rbp-20h]
  __int64 v18; // [rsp+38h] [rbp-18h]
  __int64 v19; // [rsp+90h] [rbp+40h]
  __int64 v20; // [rsp+A8h] [rbp+58h]

  v3 = (unsigned __int16 *)(a1 + 330);
  v19 = 0LL;
  v4 = 0LL;
  v20 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( (*(_DWORD *)(a1 + 128) & 8) == 0 || (v8 = 1, *v3 >= *(_WORD *)(a1 + 324)) )
    v8 = 0;
  for ( i = 1; i <= *v3; ++i )
  {
    if ( a3 )
    {
      StorPortExtendedFunction(0LL, a1, 128LL, 1701672526LL);
      if ( !v19 )
        goto LABEL_13;
      sub_140032C80(v19, 0LL, 128LL);
      sub_140006100(a1, 0x2000u);
      if ( !v20 )
      {
        sub_14001F48C(a1, v19);
LABEL_13:
        if ( v4 )
        {
          do
          {
            v15 = *(_QWORD *)(sub_140005000(v4) + 4200);
            v16 = *(_QWORD *)(v17 + 40);
            sub_14000CF50(a1, 0x2000LL, v17 + 56, *(_QWORD *)(v15 + 104));
            sub_14001F48C(a1, v15);
            v17 = v16;
            v4 = v16;
          }
          while ( v16 );
        }
        return 3238002689LL;
      }
      sub_140032C80(v20, 0LL, 4232LL);
      *(_BYTE *)(v19 + 11) = 0;
      *(_DWORD *)(v19 + 20) = 251658240;
      *(_QWORD *)(v19 + 96) = v20;
      *(_QWORD *)(v19 + 64) = v20;
      *(_QWORD *)(v19 + 104) = 0LL;
      *(_BYTE *)v19 = 1;
      *(_QWORD *)(v20 + 4200) = v19;
      v10 = v20;
    }
    else
    {
      sub_140009580(a1, a1 + 1008);
      v10 = *(_QWORD *)(a1 + 1104);
      v19 = a1 + 1008;
      v4 = v17;
      v20 = v10;
    }
    *(_BYTE *)(v10 + 4225) |= 1u;
    *(_BYTE *)(v20 + 4225) &= ~2u;
    *(_WORD *)(v20 + 4212) = 0;
    v11 = 208LL * i;
    *(_BYTE *)(v20 + 4096) = 1;
    *(_QWORD *)(v20 + 4120) = *(_QWORD *)(v11 + *(_QWORD *)(a1 + 936) - 200);
    *(_WORD *)(v20 + 4136) = i;
    *(_WORD *)(v20 + 4138) = *(_WORD *)(a1 + 326) - 1;
    *(_DWORD *)(v20 + 4140) = *(_DWORD *)(v20 + 4140) & 0xFFFFFFF8 | 5;
    *(_WORD *)(v20 + 4142) = *(_WORD *)(v11 + *(_QWORD *)(a1 + 936) - 150);
    if ( (a3 || v8) && (*(_QWORD *)(v20 + 4192) = sub_14002AC30, v8) )
    {
      if ( v18 )
      {
        *(_QWORD *)(v18 + 40) = v19 + 8;
      }
      else
      {
        v4 = v19 + 8;
        v17 = v19 + 8;
      }
      v18 = v19 + 8;
    }
    else
    {
      sub_1400092F0(a1, v19 + 8);
      if ( a3 )
      {
        if ( *(_WORD *)(a1 + 472) == *(_WORD *)(a1 + 324) )
        {
          StorPortExtendedFunction(81LL, a1, 1000LL, v12);
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 996));
        }
      }
      else
      {
        sub_140008130(a1, v19 + 8, a2);
        v13 = *(_BYTE *)(v19 + 11);
        if ( v13 != 1 )
        {
          result = 3238002689LL;
          if ( v13 == 5 )
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
