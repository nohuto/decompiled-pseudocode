/*
 * XREFs of sub_14002A340 @ 0x14002A340
 * Callers:
 *     sub_14001E95C @ 0x14001E95C (sub_14001E95C.c)
 *     sub_14002C324 @ 0x14002C324 (sub_14002C324.c)
 * Callees:
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 *     sub_140020924 @ 0x140020924 (sub_140020924.c)
 */

void __fastcall sub_14002A340(__int64 a1)
{
  unsigned __int8 *v1; // rbp
  unsigned int i; // esi
  __int64 v4; // r9
  int j; // edx
  __int64 v6; // r8
  int v7; // eax
  unsigned __int8 *v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // [rsp+20h] [rbp-48h]

  v1 = *(unsigned __int8 **)(a1 + 1656);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 224); ++i )
    {
      if ( *(_QWORD *)(a1 + 8LL * i + 1672) )
      {
        sub_140009580(a1, a1 + 1008);
        for ( j = 0; j < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= j )
          ++j;
        *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
        sub_140020924(a1, *(_QWORD *)(a1 + 1104) + 4096LL, 3, v4, v12, 0, *(_QWORD *)(a1 + 1664), i + 1, 0);
        sub_1400092F0(a1, a1 + 1016);
        LOBYTE(v6) = 1;
        sub_140008130(a1, a1 + 1016, v6);
        if ( *(_BYTE *)(a1 + 1019) == 1 )
        {
          v7 = *v1;
          v8 = v1;
          v9 = 0;
          while ( v7 && v9 < 0x1000 )
          {
            if ( v7 == 4 )
            {
              if ( v8[4] == 2 )
              {
                v11 = *(_QWORD *)(a1 + 8LL * i + 1672);
                *(_DWORD *)(v11 + 20) |= 0x100u;
                *(_DWORD *)(a1 + 24) |= 0x2000u;
              }
              break;
            }
            v10 = v8[1];
            v9 += v10 + 4;
            v8 += v10 + 4;
            v7 = *v8;
          }
        }
      }
    }
  }
}
