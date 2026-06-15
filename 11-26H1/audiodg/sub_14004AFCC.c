/*
 * XREFs of sub_14004AFCC @ 0x14004AFCC
 * Callers:
 *     sub_14004B664 @ 0x14004B664 (sub_14004B664.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14004AFCC(unsigned __int16 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( (_WORD)result == 0xFFFE )
  {
    if ( a1[8] >= 0x16u
      && *(_QWORD *)(a1 + 13) == 0x80001000000000LL
      && *(_DWORD *)(a1 + 17) == 939567616
      && a1[19] == 29083 )
    {
      return a1[12];
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
