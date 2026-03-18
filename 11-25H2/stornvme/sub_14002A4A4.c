/*
 * XREFs of sub_14002A4A4 @ 0x14002A4A4
 * Callers:
 *     sub_14001E95C @ 0x14001E95C (sub_14001E95C.c)
 *     sub_14002C324 @ 0x14002C324 (sub_14002C324.c)
 * Callees:
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 *     sub_140020924 @ 0x140020924 (sub_140020924.c)
 */

void __fastcall sub_14002A4A4(__int64 a1)
{
  __int64 v1; // r14
  unsigned int i; // esi
  __int64 v4; // rax
  __int64 v5; // r9
  int j; // edx
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-58h]

  v1 = *(_QWORD *)(a1 + 1656);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 224); ++i )
    {
      v4 = *(_QWORD *)(a1 + 8LL * i + 1672);
      if ( v4 && (*(_DWORD *)(v4 + 20) & 0x100) != 0 )
      {
        sub_140009580(a1, a1 + 1008);
        for ( j = 0; j < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= j )
          ++j;
        *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
        sub_140020924(a1, *(_QWORD *)(a1 + 1104) + 4096LL, 5, v5, v9, 2, *(_QWORD *)(a1 + 1664), i + 1, 0);
        sub_1400092F0(a1, a1 + 1016);
        LOBYTE(v7) = 1;
        sub_140008130(a1, a1 + 1016, v7);
        if ( *(_BYTE *)(a1 + 1019) == 1 )
        {
          *(_WORD *)(*(_QWORD *)(a1 + 8LL * i + 1672) + 120LL) ^= (*(_WORD *)v1 ^ *(_WORD *)(*(_QWORD *)(a1 + 8LL * i + 1672)
                                                                                           + 120LL)) & 1;
          *(_WORD *)(*(_QWORD *)(a1 + 8LL * i + 1672) + 120LL) ^= (*(_WORD *)v1 ^ *(_WORD *)(*(_QWORD *)(a1 + 8LL * i + 1672)
                                                                                           + 120LL)) & 2;
          v8 = *(_QWORD *)(a1 + 8LL * i + 1672);
          *(_WORD *)(v8 + 122) ^= (*(_WORD *)(v1 + 2) ^ *(_WORD *)(v8 + 122)) & 1;
          *(_DWORD *)(*(_QWORD *)(a1 + 8LL * i + 1672) + 124LL) = *(_DWORD *)(v1 + 4);
          *(_DWORD *)(*(_QWORD *)(a1 + 8LL * i + 1672) + 128LL) = *(_DWORD *)(v1 + 8);
          *(_DWORD *)(*(_QWORD *)(a1 + 8LL * i + 1672) + 132LL) = *(_DWORD *)(v1 + 12);
          *(_DWORD *)(*(_QWORD *)(a1 + 8LL * i + 1672) + 136LL) = *(_DWORD *)(v1 + 16);
          *(_QWORD *)(*(_QWORD *)(a1 + 8LL * i + 1672) + 144LL) = *(_QWORD *)(v1 + 2816);
          *(_BYTE *)(*(_QWORD *)(a1 + 8LL * i + 1672) + 152LL) = *(_BYTE *)(v1 + 2824);
        }
      }
    }
  }
}
