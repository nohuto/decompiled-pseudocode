/*
 * XREFs of sub_180056F84 @ 0x180056F84
 * Callers:
 *     sub_180056128 @ 0x180056128 (sub_180056128.c)
 *     sub_1800DBD63 @ 0x1800DBD63 (sub_1800DBD63.c)
 * Callees:
 *     sub_1800564DC @ 0x1800564DC (sub_1800564DC.c)
 */

__int64 __fastcall sub_180056F84(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)a1 )
    return sub_1800564DC(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), *(__int64 **)(a1 + 16));
  return result;
}
