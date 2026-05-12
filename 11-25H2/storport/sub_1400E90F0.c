/*
 * XREFs of sub_1400E90F0 @ 0x1400E90F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400E90F0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 )
  {
    if ( a3 )
      *(_WORD *)(*a2 + 4260) = *(_WORD *)(a3 + 14);
    result = *a2;
    _interlockedbittestandreset((volatile signed __int32 *)(*a2 + 4256), 3u);
  }
  return result;
}
