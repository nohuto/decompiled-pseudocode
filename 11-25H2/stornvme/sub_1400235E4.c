/*
 * XREFs of sub_1400235E4 @ 0x1400235E4
 * Callers:
 *     sub_1400028E0 @ 0x1400028E0 (sub_1400028E0.c)
 * Callees:
 *     sub_140002330 @ 0x140002330 (sub_140002330.c)
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_140006580 @ 0x140006580 (sub_140006580.c)
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 *     sub_1400282E0 @ 0x1400282E0 (sub_1400282E0.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_1400235E4(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  char v7; // al
  char v8; // al
  unsigned int *v10; // [rsp+40h] [rbp-28h] BYREF

  v10 = 0LL;
  v4 = sub_14000B900(a2, &v10);
  v5 = v4;
  if ( v4 && (v6 = *v10, v6 >= 0xA) )
  {
    if ( (v6 & 3) != 0 )
    {
      sub_140032C80(v4, 0LL, *v10);
    }
    else if ( (unsigned int)v6 >> 2 )
    {
      sub_140032C80(v4, 0LL, 4LL * ((unsigned int)v6 >> 2));
    }
    v7 = *(_BYTE *)(v5 + 6);
    *(_WORD *)(v5 + 4) = 0;
    *(_DWORD *)v5 = 201326605;
    *(_BYTE *)(v5 + 6) = v7 & 0x40 | 3;
    *(_BYTE *)(v5 + 7) = 2;
    *(_BYTE *)(v5 + 9) = -1;
    if ( v6 >= 0x10 )
    {
      *(_WORD *)(v5 + 10) = 256;
      v8 = *(_BYTE *)(v5 + 12) & 0x40;
      *(_BYTE *)(v5 + 13) = 2;
      *(_BYTE *)(v5 + 12) = v8 | 3;
      *(_BYTE *)(v5 + 15) = sub_1400282E0(*(unsigned __int16 *)(a1 + 220));
    }
    sub_140006100(a1, 0x200u);
    *(_BYTE *)(a2 + 3) = 4;
    return 0LL;
  }
  else
  {
    sub_140002330(a2, 6, 5, 0x24u);
    return 3238002694LL;
  }
}
