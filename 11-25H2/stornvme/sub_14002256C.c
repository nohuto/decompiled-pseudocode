/*
 * XREFs of sub_14002256C @ 0x14002256C
 * Callers:
 *     sub_140003520 @ 0x140003520 (sub_140003520.c)
 * Callees:
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_140006580 @ 0x140006580 (sub_140006580.c)
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_14002256C(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v4; // r15d
  __int64 v6; // r13
  _DWORD *v7; // rsi
  unsigned int v8; // eax
  __int64 result; // rax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int *v12; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+20h]

  v2 = 0;
  v12 = 0LL;
  v4 = 0;
  v13 = sub_140005000(a2);
  v6 = sub_14000B900(a2, &v12);
  v7 = (_DWORD *)(v6 + 28);
  v8 = *v12;
  if ( *v12 >= 0x54 )
  {
    v10 = v8 - 28;
    if ( (v10 & 3) != 0 )
    {
      if ( v10 )
        sub_140032C80(v7, 0LL, v10);
    }
    else
    {
      v11 = v10 >> 2;
      if ( v11 )
        sub_140032C80(v7, 0LL, 4LL * v11);
    }
    sub_140006100(a1, 0x200u);
    *(_BYTE *)(a2 + 3) = 4;
    v2 = -1056964605;
  }
  else
  {
    if ( v8 < 0x24 )
    {
      *(_BYTE *)(a2 + 3) = 6;
      return 3238002694LL;
    }
    v4 = 8;
    *(_BYTE *)(a2 + 3) = 1;
  }
  *(_DWORD *)(v6 + 32) = 56;
  *v7 = 56;
  result = v2;
  *(_DWORD *)(v6 + 24) = v4;
  return result;
}
