/*
 * XREFs of sub_1401351D4 @ 0x1401351D4
 * Callers:
 *     sub_14008C3E8 @ 0x14008C3E8 (sub_14008C3E8.c)
 * Callees:
 *     sub_140136180 @ 0x140136180 (sub_140136180.c)
 *     sub_1401361CC @ 0x1401361CC (sub_1401361CC.c)
 *     sub_140138200 @ 0x140138200 (sub_140138200.c)
 */

__int64 __fastcall sub_1401351D4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r10

  if ( !a3 )
    return 3221225485LL;
  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_DWORD *)(a3 + 32) = 0;
  result = sub_140136180(a1, a2);
  if ( (int)result >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 28), 1, 0) == 1 )
    {
      return 2147483665LL;
    }
    else
    {
      result = sub_140138200(a1, v6, 33794, 3, v7 + 4, 32, v7);
      if ( (int)result < 0 )
        result = sub_1401361CC(a1, a2, (unsigned int)result);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  return result;
}
