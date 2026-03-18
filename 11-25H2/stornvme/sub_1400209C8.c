/*
 * XREFs of sub_1400209C8 @ 0x1400209C8
 * Callers:
 *     sub_140011670 @ 0x140011670 (sub_140011670.c)
 * Callees:
 *     sub_140032980 @ 0x140032980 (sub_140032980.c)
 */

__int64 __fastcall sub_1400209C8(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax

  if ( a2 )
  {
    sub_140032980(*(unsigned int *)(a1 + 24) + a1 + 8, a2, a3);
    result = 0LL;
    *(_BYTE *)(a4 + 3) = 1;
  }
  else
  {
    *(_BYTE *)(a4 + 3) = 6;
    return 3238002694LL;
  }
  return result;
}
