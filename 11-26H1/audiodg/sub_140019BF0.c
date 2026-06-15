/*
 * XREFs of sub_140019BF0 @ 0x140019BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140019BF0(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedExchange64((volatile __int64 *)(a1 + 664), 0LL);
  *(_QWORD *)(a1 + 672) = result;
  if ( result )
  {
    result ^= *(_QWORD *)(a1 + 688);
    *(_QWORD *)(a1 + 808) = result;
  }
  else
  {
    *(_QWORD *)(a1 + 808) = 0LL;
  }
  return result;
}
