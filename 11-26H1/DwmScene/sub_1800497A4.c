/*
 * XREFs of sub_1800497A4 @ 0x1800497A4
 * Callers:
 *     sub_1800490A8 @ 0x1800490A8 (sub_1800490A8.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180049070 @ 0x180049070 (sub_180049070.c)
 */

__int64 __fastcall sub_1800497A4(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
  {
    sub_180049070(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
    return sub_18000E26C(*(void **)(a1 + 8), 88LL * *(_QWORD *)(a1 + 16));
  }
  return result;
}
