/*
 * XREFs of sub_140021020 @ 0x140021020
 * Callers:
 *     sub_14000CFB0 @ 0x14000CFB0 (sub_14000CFB0.c)
 *     sub_140023C40 @ 0x140023C40 (sub_140023C40.c)
 * Callees:
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 *     sub_140023400 @ 0x140023400 (sub_140023400.c)
 */

__int64 __fastcall sub_140021020(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v3; // edi
  __int64 v5; // rsi
  __int64 v6; // r8
  _DWORD *v7; // r9
  __int64 v8; // r11
  char *v9; // r14
  char v10; // si
  int v11; // eax
  int v12; // edx
  unsigned int v13; // ecx
  __int64 v15; // [rsp+F0h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0;
  v5 = sub_140005000(a2);
  v7 = (_DWORD *)sub_14000B900(a2, &v15);
  v9 = (char *)v7 + (unsigned int)v7[11];
  if ( v7[12] < 0xCu )
  {
    v10 = 21;
    goto LABEL_5;
  }
  if ( (unsigned __int8)v9[8] > (unsigned __int8)((*(_BYTE *)(v6 + 260) >> 1) & 7) )
  {
    v10 = 40;
LABEL_5:
    v3 = -1056964602;
    v7[5] = 3;
    *(_BYTE *)(a2 + 3) = v10;
    if ( (*(_BYTE *)(v8 + 21) & 2) != 0 )
      StorPortExtendedFunction(87LL, v8, 0LL, 1LL);
    return v3;
  }
  v11 = v7[10];
  if ( (v11 & 0x40000000) != 0 )
  {
    *(_DWORD *)(v8 + 24) |= 0x10000u;
  }
  else if ( v11 >= 0 )
  {
    if ( ((v11 & 0x10000000) == 0 || _bittest((const signed __int32 *)(v8 + 24), 0xAu))
      && (!(unsigned __int8)sub_140023400(v8) || _bittest((const signed __int32 *)(v8 + 24), 0xAu)) )
    {
      v2 = 8;
    }
    else
    {
      v2 = 24;
    }
  }
  else
  {
    v2 = 16;
  }
  *(_BYTE *)(v5 + 4225) = *(_BYTE *)(v5 + 4225) & 0xFC | 1;
  sub_1400042C0(v8, a2);
  v12 = v9[8] & 7;
  v13 = *(_DWORD *)(v5 + 4136) & 0xFFFFFFF8;
  *(_BYTE *)(v5 + 4096) = 16;
  *(_QWORD *)(v5 + 4192) = sub_140023C40;
  *(_DWORD *)(v5 + 4136) = v2 | (v13 ^ v12) & 0xFFFFFFE7;
  return v3;
}
