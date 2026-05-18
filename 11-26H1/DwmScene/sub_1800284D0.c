/*
 * XREFs of sub_1800284D0 @ 0x1800284D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800541A4 @ 0x1800541A4 (sub_1800541A4.c)
 */

__int64 __fastcall sub_1800284D0(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    return sub_1800541A4();
  return result;
}
