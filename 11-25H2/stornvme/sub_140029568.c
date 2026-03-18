/*
 * XREFs of sub_140029568 @ 0x140029568
 * Callers:
 *     sub_14002AED8 @ 0x14002AED8 (sub_14002AED8.c)
 * Callees:
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 *     sub_140020924 @ 0x140020924 (sub_140020924.c)
 */

__int64 __fastcall sub_140029568(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v7; // r9
  unsigned int v8; // edi
  int i; // edx
  __int64 v10; // r8
  char v11; // al
  int v12; // [rsp+20h] [rbp-38h]

  if ( (*(_DWORD *)(a1 + 56) & 0x40000) != 0 )
    return 3238002689LL;
  sub_140009580(a1, a1 + 1008);
  v8 = 0;
  for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= i )
    ++i;
  *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4160LL) = a2;
  *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4168LL) = a3;
  *(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4208LL) = 4096;
  sub_140020924(a1, *(_QWORD *)(a1 + 1104) + 4096LL, 2, v7, v12, 0, a3, 0, 0);
  sub_1400092F0(a1, a1 + 1016);
  LOBYTE(v10) = 1;
  sub_140008130(a1, a1 + 1016, v10);
  v11 = *(_BYTE *)(a1 + 1019);
  if ( v11 != 1 )
  {
    if ( v11 == 5 )
    {
      return (unsigned int)-1056964596;
    }
    else if ( v11 == 8 )
    {
      return (unsigned int)-1056964599;
    }
    else
    {
      v8 = -1056964607;
      if ( v11 == 9 )
        return (unsigned int)-1056964594;
    }
  }
  return v8;
}
