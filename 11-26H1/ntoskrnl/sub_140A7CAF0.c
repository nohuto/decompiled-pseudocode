/*
 * XREFs of sub_140A7CAF0 @ 0x140A7CAF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A7CAF0(_QWORD *a1, __int64 a2)
{
  if ( !a1 )
    return a2 != 0;
  if ( a2 )
    return a2 - *a1;
  return -1LL;
}
