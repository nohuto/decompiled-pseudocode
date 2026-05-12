/*
 * XREFs of sub_1400C6E90 @ 0x1400C6E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400C6E90(__int64 a1, __int64 *a2, _WORD *a3)
{
  int v3; // r10d
  __int64 result; // rax

  if ( a3 )
  {
    *(_WORD *)(*a2 + 4260) = a3[7];
    if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) == 0 )
    {
      v3 = *(unsigned __int16 *)(*a2 + 4260) >> 1;
      if ( (unsigned __int8)v3 <= 6u && !(_BYTE)v3 )
        *(_WORD *)(a1 + 56) = *a3;
    }
  }
  result = *a2;
  _interlockedbittestandreset((volatile signed __int32 *)(*a2 + 4256), 3u);
  return result;
}
