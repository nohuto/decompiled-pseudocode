/*
 * XREFs of sub_18007B82C @ 0x18007B82C
 * Callers:
 *     sub_18007AD40 @ 0x18007AD40 (sub_18007AD40.c)
 *     sub_1800DD540 @ 0x1800DD540 (sub_1800DD540.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18007ACB0 @ 0x18007ACB0 (sub_18007ACB0.c)
 */

__int64 __fastcall sub_18007B82C(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
  {
    sub_18007ACB0(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
    return sub_18000E26C(*(void **)(a1 + 8), 56LL * *(_QWORD *)(a1 + 16));
  }
  return result;
}
