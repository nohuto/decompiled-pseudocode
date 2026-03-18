/*
 * XREFs of sub_140029F2C @ 0x140029F2C
 * Callers:
 *     sub_14001E95C @ 0x14001E95C (sub_14001E95C.c)
 *     sub_140023AC0 @ 0x140023AC0 (sub_140023AC0.c)
 * Callees:
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 *     sub_140020924 @ 0x140020924 (sub_140020924.c)
 */

__int64 __fastcall sub_140029F2C(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // r9
  int i; // ecx
  __int64 v5; // r8
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 1656);
  sub_140009580(a1, a1 + 1008);
  for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= i )
    ++i;
  *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
  sub_140020924(a1, *(_QWORD *)(a1 + 1104) + 4096LL, 6, v3, v7, 0, *(_QWORD *)(a1 + 1664), -1, 0);
  sub_1400092F0(a1, a1 + 1016);
  LOBYTE(v5) = 1;
  result = sub_140008130(a1, a1 + 1016, v5);
  if ( *(_BYTE *)(a1 + 1019) == 1 )
  {
    *(_BYTE *)(a1 + 4064) = *(_BYTE *)v1;
    *(_BYTE *)(a1 + 4065) = *(_BYTE *)(v1 + 1);
    *(_BYTE *)(a1 + 4066) = *(_BYTE *)(v1 + 2);
    *(_BYTE *)(a1 + 4067) = *(_BYTE *)(v1 + 3);
    *(_DWORD *)(a1 + 4068) = *(_DWORD *)(v1 + 4);
    result = *(_QWORD *)(v1 + 8);
    *(_QWORD *)(a1 + 4072) = result;
  }
  return result;
}
