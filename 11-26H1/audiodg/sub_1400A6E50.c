/*
 * XREFs of sub_1400A6E50 @ 0x1400A6E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400A6E50(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
  {
    result = 0LL;
    *(_OWORD *)a3 = 0LL;
    *(_OWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 32) = 0LL;
  }
  return result;
}
