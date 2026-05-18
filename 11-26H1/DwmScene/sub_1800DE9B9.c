/*
 * XREFs of sub_1800DE9B9 @ 0x1800DE9B9
 * Callers:
 *     <none>
 * Callees:
 *     sub_180060CB4 @ 0x180060CB4 (sub_180060CB4.c)
 */

__int64 __fastcall sub_1800DE9B9(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 112) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 112) &= ~1u;
    return sub_180060CB4(*(_QWORD *)(a2 + 672));
  }
  return result;
}
