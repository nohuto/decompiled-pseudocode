/*
 * XREFs of sub_14002A02C @ 0x14002A02C
 * Callers:
 *     sub_14001E95C @ 0x14001E95C (sub_14001E95C.c)
 * Callees:
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 *     sub_14000D6D0 @ 0x14000D6D0 (sub_14000D6D0.c)
 *     sub_140020924 @ 0x140020924 (sub_140020924.c)
 *     sub_140032980 @ 0x140032980 (sub_140032980.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

char __fastcall sub_14002A02C(__int64 a1)
{
  _UNKNOWN **v1; // rax
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // r9
  int i; // edx
  __int64 v7; // r8
  __int64 v8; // r9
  int v10; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  v1 = &retaddr;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    LOBYTE(v1) = sub_14000D6D0(a1);
    if ( (_BYTE)v1 )
    {
      v3 = (_QWORD *)(a1 + 4224);
      v4 = *(_QWORD *)(a1 + 4224);
      if ( v4
        || (v10 = a1 + 4224, LODWORD(v1) = StorPortExtendedFunction(0LL, a1, 4096LL, 1701672526LL), !(_DWORD)v1)
        && (v4 = *v3) != 0 )
      {
        sub_140032C80(v4, 0LL, 4096LL);
        sub_140009580(a1, a1 + 1008);
        for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= i )
          ++i;
        *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
        sub_140020924(a1, *(_QWORD *)(a1 + 1104) + 4096LL, 23, v5, v10, 0, *(_QWORD *)(a1 + 1664), 0, 0);
        sub_1400092F0(a1, a1 + 1016);
        LOBYTE(v7) = 1;
        sub_140008130(a1, a1 + 1016, v7);
        if ( *(_BYTE *)(a1 + 1019) == 1 )
        {
          LOBYTE(v1) = sub_140032980(*v3, *(_QWORD *)(a1 + 1656), 4096LL);
        }
        else
        {
          LOBYTE(v1) = StorPortExtendedFunction(1LL, a1, *v3, v8);
          *v3 = 0LL;
        }
      }
    }
  }
  return (char)v1;
}
