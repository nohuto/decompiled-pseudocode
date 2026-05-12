/*
 * XREFs of sub_14006D084 @ 0x14006D084
 * Callers:
 *     sub_1400068E0 @ 0x1400068E0 (sub_1400068E0.c)
 *     sub_14000DC80 @ 0x14000DC80 (sub_14000DC80.c)
 *     sub_140027C30 @ 0x140027C30 (sub_140027C30.c)
 *     sub_140054A1C @ 0x140054A1C (sub_140054A1C.c)
 *     sub_14006D7C4 @ 0x14006D7C4 (sub_14006D7C4.c)
 * Callees:
 *     sub_14006CFBC @ 0x14006CFBC (sub_14006CFBC.c)
 *     sub_14006D380 @ 0x14006D380 (sub_14006D380.c)
 */

unsigned __int64 __fastcall sub_14006D084(__int64 a1, ULONG_PTR a2)
{
  char v4; // al
  int v5; // r8d
  char v6; // al

  if ( a2 > *(_QWORD *)(a1 + 3464) )
  {
    v4 = sub_14006CFBC(a1);
    ++*(_DWORD *)(a1 + 3476);
    v6 = v4 - 1;
    if ( byte_140168DAA )
    {
      if ( (byte_1401694F4 & 2) != 0 )
        sub_14006D380(
          a1 + 242,
          a1 + 177,
          v5,
          a1 + 168,
          a1 + 177,
          a1 + 242,
          a2,
          *(_QWORD *)(a1 + 3464),
          *(_DWORD *)(a1 + 932),
          *(_QWORD *)(a1 + 3416),
          *(_DWORD *)(a1 + 3472),
          v6);
    }
    KeBugCheckEx(0x2Cu, 0x16AAuLL, a2, *(_QWORD *)(a1 + 3464), 0LL);
  }
  return a2 * *(unsigned int *)(a1 + 932) / *(_QWORD *)(a1 + 3416);
}
