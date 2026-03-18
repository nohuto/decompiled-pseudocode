/*
 * XREFs of sub_140007660 @ 0x140007660
 * Callers:
 *     sub_1400073E0 @ 0x1400073E0 (sub_1400073E0.c)
 * Callees:
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 */

__int64 __fastcall sub_140007660(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  __int64 v3; // rdi
  __int16 v6; // si
  unsigned __int16 v7; // bp
  unsigned __int16 v8; // ax
  int v9; // ebp
  __int16 v10; // si
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // ax
  __int64 v13; // rax
  char v14; // cl
  __int64 result; // rax

  v3 = a2;
  if ( a2 )
  {
    v6 = *(_WORD *)(a1 + 330);
    v7 = *(_WORD *)(a1 + 332);
  }
  else
  {
    *(_DWORD *)(a1 + 330) = 0;
    if ( *(_BYTE *)(a1 + 20) )
    {
      v6 = 1;
      v7 = 1;
    }
    else
    {
      v8 = *(_WORD *)(a1 + 40);
      if ( !v8 )
      {
        v8 = *(_WORD *)(a1 + 234);
        if ( (unsigned int)(*(_DWORD *)(a1 + 160) - 3) > 1 )
          v8 *= 2;
      }
      v9 = *(_DWORD *)(a1 + 124);
      v10 = *(_WORD *)(a1 + 42);
      v11 = v8 + v9;
      if ( !v9 )
        v11 = v8;
      if ( !v10 )
      {
        v12 = *(_WORD *)(a1 + 272);
        v10 = 1;
        if ( v12 > 1u )
          v10 = v12 - 1;
      }
      v7 = v10 + v9;
      if ( !*(_DWORD *)(a1 + 124) )
        v7 = v10;
      v6 = v7;
      if ( v11 > v7 )
        v6 = v11;
    }
  }
  sub_140009580(a1, a1 + 1008);
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
  v13 = *(_QWORD *)(a1 + 1104);
  *(_BYTE *)(v13 + 4096) = 9;
  *(_BYTE *)(v13 + 4136) = 7;
  *(_WORD *)(v13 + 4140) = v6 - 1;
  *(_WORD *)(v13 + 4142) = v7 - 1;
  *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4192LL) = sub_140005BE0;
  *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4200LL) = v3;
  sub_1400092F0(a1, a1 + 1016);
  sub_140008130(a1, a1 + 1016, a3);
  v14 = *(_BYTE *)(a1 + 1019);
  if ( v14 == 1 )
    return 0LL;
  result = 3238002689LL;
  if ( v14 == 5 )
    return 3238002700LL;
  return result;
}
