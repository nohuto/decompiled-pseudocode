/*
 * XREFs of sub_1400229C8 @ 0x1400229C8
 * Callers:
 *     sub_140003520 @ 0x140003520 (sub_140003520.c)
 * Callees:
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_140006580 @ 0x140006580 (sub_140006580.c)
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 *     sub_140023430 @ 0x140023430 (sub_140023430.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_1400229C8(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v5; // rsi
  unsigned int v7; // eax
  unsigned int v8; // eax
  _DWORD *v10; // [rsp+88h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 1560);
  v10 = 0LL;
  sub_140005000(a2);
  v5 = sub_14000B900(a2, &v10);
  if ( *v10 >= 0x44u )
  {
    v7 = *v10 - 28;
    if ( (v7 & 3) != 0 )
    {
      if ( *v10 != 28 )
        sub_140032C80(v5 + 28, 0LL, v7);
    }
    else
    {
      v8 = v7 >> 2;
      if ( v8 )
        sub_140032C80(v5 + 28, 0LL, 4LL * v8);
    }
    *(_DWORD *)(v5 + 32) = 40;
    *(_DWORD *)(v5 + 28) = 40;
    *(_WORD *)(v5 + 36) = sub_140023430(*(unsigned __int16 *)(v2 + 268));
    *(_WORD *)(v5 + 38) = sub_140023430(*(unsigned __int16 *)(v2 + 266));
    sub_140006100(a1, 0x200u);
    *(_BYTE *)(a2 + 3) = 4;
    return (unsigned int)-1056964605;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
    return (unsigned int)-1056964602;
  }
}
