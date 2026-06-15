/*
 * XREFs of sub_140033800 @ 0x140033800
 * Callers:
 *     sub_1400335C8 @ 0x1400335C8 (sub_1400335C8.c)
 * Callees:
 *     sub_1400AD738 @ 0x1400AD738 (sub_1400AD738.c)
 *     sub_1400AD960 @ 0x1400AD960 (sub_1400AD960.c)
 */

__int64 __fastcall sub_140033800(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( *(_WORD *)(a2 + 2) != 48 )
  {
LABEL_5:
    result = 3221225647LL;
    goto LABEL_4;
  }
  if ( *(_DWORD *)(a2 + 40) != 1 )
  {
    if ( *(_DWORD *)(a2 + 40) == 2 )
    {
      result = sub_1400AD960(a1, &v4);
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  result = sub_1400AD738(a1, &v4);
LABEL_4:
  *(_DWORD *)(a2 + 44) = result;
  return result;
}
