/*
 * XREFs of sub_14005A458 @ 0x14005A458
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14005A458(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
  {
    result = a1[1];
    *(_QWORD *)(*a1 + 8LL) = result;
  }
  return result;
}
