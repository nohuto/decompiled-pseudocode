/*
 * XREFs of sub_18001F3E4 @ 0x18001F3E4
 * Callers:
 *     sub_1800563BC @ 0x1800563BC (sub_1800563BC.c)
 *     sub_1800D1ECC @ 0x1800D1ECC (sub_1800D1ECC.c)
 *     sub_1800DBD75 @ 0x1800DBD75 (sub_1800DBD75.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18001EB54 @ 0x18001EB54 (sub_18001EB54.c)
 */

__int64 __fastcall sub_18001F3E4(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
  {
    sub_18001EB54(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
    return sub_18000E26C(*(void **)(a1 + 8), 32LL * *(_QWORD *)(a1 + 16));
  }
  return result;
}
