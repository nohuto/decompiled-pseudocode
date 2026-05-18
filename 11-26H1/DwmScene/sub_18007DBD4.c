/*
 * XREFs of sub_18007DBD4 @ 0x18007DBD4
 * Callers:
 *     sub_1800853D8 @ 0x1800853D8 (sub_1800853D8.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_18007DBD4(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_18000E26C(*(void **)(a1 + 8), 12LL * *(_QWORD *)(a1 + 16));
  return result;
}
