/*
 * XREFs of sub_1400279C4 @ 0x1400279C4
 * Callers:
 *     sub_1400028E0 @ 0x1400028E0 (sub_1400028E0.c)
 * Callees:
 *     sub_140002330 @ 0x140002330 (sub_140002330.c)
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 *     sub_14001B6D0 @ 0x14001B6D0 (sub_14001B6D0.c)
 */

__int64 __fastcall sub_1400279C4(__int64 a1, __int64 a2)
{
  unsigned __int8 *v3; // rax
  _BYTE *v4; // r8
  __int64 v5; // r11
  unsigned __int8 *v6; // r9
  unsigned int v7; // r10d
  unsigned int v8; // ebx
  unsigned int v9; // edx
  int v11; // eax
  unsigned int v12; // eax
  unsigned __int8 *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // r11
  unsigned int *v16; // [rsp+50h] [rbp+18h] BYREF

  v16 = 0LL;
  v3 = (unsigned __int8 *)sub_14000B900(a2, &v16);
  v6 = v3;
  v7 = 4;
  if ( *v4 != 21 )
    v7 = 8;
  if ( (v4[1] & 0x10) == 0 )
    goto LABEL_7;
  if ( !v3 )
  {
    v8 = -1056964605;
LABEL_8:
    sub_140002330(v5, 6, 5, 0x24u);
    return v8;
  }
  v9 = *v16;
  if ( *v16 < v7 )
  {
LABEL_7:
    v8 = -1056964601;
    goto LABEL_8;
  }
  if ( *v4 == 21 )
  {
    v11 = v3[3];
  }
  else
  {
    BYTE1(v16) = v3[6];
    LOBYTE(v16) = v3[7];
    v11 = (unsigned __int16)v16;
  }
  v12 = v7 + v11;
  v13 = &v6[v12];
  if ( (v12 < v9 ? v9 - v12 : 0) >= 0xC
    && (*v13 & 0x3F) == 8
    && v13[1] == 10
    && (*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 525LL) & 1) != 0 )
  {
    *(_BYTE *)(a1 + 3956) = *(_BYTE *)(a1 + 3956) ^ (*(_BYTE *)(a1 + 3956) ^ (v13[2] >> 2)) & 1 | 2;
    v14 = sub_140005000(v5);
    *(_BYTE *)(v14 + 4225) = *(_BYTE *)(v14 + 4225) & 0xFC | 1;
    sub_1400042C0(a1, v15);
    sub_14001B6D0(v14 + 4096, (v13[2] & 4) != 0, (*(_BYTE *)(a1 + 3956) & 4) != 0);
    return 0LL;
  }
  else
  {
    sub_140002330(v5, 6, 5, 0x24u);
    return 3238002694LL;
  }
}
