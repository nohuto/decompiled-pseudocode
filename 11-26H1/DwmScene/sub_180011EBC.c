/*
 * XREFs of sub_180011EBC @ 0x180011EBC
 * Callers:
 *     sub_1800119CC @ 0x1800119CC (sub_1800119CC.c)
 *     sub_18002E04C @ 0x18002E04C (sub_18002E04C.c)
 *     sub_18002ECF8 @ 0x18002ECF8 (sub_18002ECF8.c)
 *     sub_180054650 @ 0x180054650 (sub_180054650.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180011964 @ 0x180011964 (sub_180011964.c)
 */

__int64 __fastcall sub_180011EBC(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
  {
    sub_180011964(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
    return sub_18000E26C(*(void **)(a1 + 8), 16LL * *(_QWORD *)(a1 + 16));
  }
  return result;
}
