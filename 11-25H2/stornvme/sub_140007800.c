/*
 * XREFs of sub_140007800 @ 0x140007800
 * Callers:
 *     sub_1400073E0 @ 0x1400073E0 (sub_1400073E0.c)
 * Callees:
 *     sub_1400070B0 @ 0x1400070B0 (sub_1400070B0.c)
 *     sub_140007A70 @ 0x140007A70 (sub_140007A70.c)
 *     sub_140008150 @ 0x140008150 (sub_140008150.c)
 *     sub_14000C8C0 @ 0x14000C8C0 (sub_14000C8C0.c)
 */

__int64 __fastcall sub_140007800(__int64 a1, unsigned __int8 a2)
{
  __int64 v4; // rbp
  unsigned int v5; // edi
  int v6; // ecx
  __int64 v8; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v9; // [rsp+C8h] [rbp+20h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  StorPortExtendedFunction(47LL, a1, &v9, &v8);
  v4 = v8;
  v5 = sub_140007A70(a1, a2, 0LL);
  if ( v5 )
  {
    v6 = 23;
LABEL_3:
    *(_DWORD *)(a1 + 28) = v6;
    sub_1400070B0(a1);
    return v5;
  }
  v5 = sub_140008150(a1, a2, 0LL);
  if ( v5 )
  {
    v6 = 22;
    goto LABEL_3;
  }
  StorPortExtendedFunction(47LL, a1, &v9, &v8);
  if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
  {
    sub_14000C8C0(v8 - v4, v9);
    StorPortExtendedFunction(86LL, a1, 0LL, 0LL);
  }
  return 0LL;
}
