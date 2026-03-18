/*
 * XREFs of sub_140A6B4C0 @ 0x140A6B4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A6B4C0(_QWORD *a1, __int64 a2)
{
  if ( !a1 )
    return a2 != 0;
  if ( a2 )
    return a2 - *a1;
  return -1LL;
}
