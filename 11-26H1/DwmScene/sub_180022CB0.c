/*
 * XREFs of sub_180022CB0 @ 0x180022CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180022CB0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 40);
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *a2 = *(_QWORD *)(a1 + 32);
  a2[1] = *(_QWORD *)(a1 + 40);
  return a2;
}
