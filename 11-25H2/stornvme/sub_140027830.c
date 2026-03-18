/*
 * XREFs of sub_140027830 @ 0x140027830
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 *     sub_14000D680 @ 0x14000D680 (sub_14000D680.c)
 *     sub_140023430 @ 0x140023430 (sub_140023430.c)
 */

char __fastcall sub_140027830(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // r8
  __int16 *v8; // r9
  __int16 v9; // cx
  __int16 v10; // ax
  __int64 v11; // rdx
  unsigned __int8 v12; // r8^1
  char v13; // r11
  char v14; // r8d^2
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int8 v17; // di
  char v18; // si
  char v19; // al
  __int64 v21; // [rsp+50h] [rbp+18h] BYREF

  v4 = sub_140005000(a2);
  v6 = v4;
  if ( !v7 )
  {
    *(_BYTE *)(v5 + 3) = 4;
LABEL_3:
    *(_BYTE *)(v4 + 4225) |= 8u;
    return v4;
  }
  if ( *(_BYTE *)(v5 + 3) != 1 )
    goto LABEL_3;
  sub_14000B900(a2, &v21);
  v9 = *v8;
  LODWORD(v21) = *(_DWORD *)(v6 + 4200);
  v10 = sub_140023430(v9);
  if ( v14 )
  {
    v15 = 2LL * v12;
    *(_WORD *)(v11 + 8 * v15 + 58) = v10;
    *(_BYTE *)(v11 + 8 * v15 + 61) = v13;
LABEL_9:
    v17 = BYTE1(v21);
    if ( BYTE1(v21) >= (unsigned __int8)v21 )
    {
      v18 = BYTE2(v21);
      v13 = 0;
    }
    else
    {
      v17 = BYTE1(v21) + 1;
      *(_WORD *)((char *)&v21 + 1) = (unsigned __int8)(BYTE1(v21) + 1);
      v18 = 0;
    }
    goto LABEL_13;
  }
  v16 = 2LL * v12;
  *(_WORD *)(v11 + 8 * v16 + 56) = v10;
  *(_BYTE *)(v11 + 16 * (v12 + 2LL) + 28) = v13;
  *(_BYTE *)(v11 + 8 * v16 + 62) = v13;
  if ( !v12 && !*(_WORD *)(*(_QWORD *)(a1 + 1560) + 266LL) )
    goto LABEL_9;
  v17 = BYTE1(v21);
  v18 = v13;
  BYTE2(v21) = v13;
LABEL_13:
  v19 = *(_BYTE *)(v6 + 4225);
  if ( v13 )
  {
    *(_BYTE *)(v6 + 4225) = v19 & 0xFC | 1;
    sub_1400042C0(a1, a2);
    sub_14000D680(v6 + 4096, v17, v18);
    *(_BYTE *)(v6 + 4225) &= ~4u;
    *(_QWORD *)(v6 + 4192) = sub_140027830;
    *(_QWORD *)(v6 + 4200) = (unsigned int)v21;
    LOBYTE(v4) = sub_1400092F0(a1, a2);
  }
  else
  {
    LOBYTE(v4) = v19 | 8;
    *(_BYTE *)(v6 + 4225) = v4;
  }
  return v4;
}
