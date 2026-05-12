/*
 * XREFs of sub_140040914 @ 0x140040914
 * Callers:
 *     sub_14017E628 @ 0x14017E628 (sub_14017E628.c)
 *     sub_140185144 @ 0x140185144 (sub_140185144.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall sub_140040914(__int64 a1)
{
  signed __int64 result; // rax
  signed __int64 v2; // rtt

  *(_BYTE *)(a1 + 37) = 1;
  result = *(_QWORD *)(a1 + 88);
  do
  {
    if ( (result & 3) != 0 )
      break;
    v2 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), result | 2, result);
  }
  while ( v2 != result );
  return result;
}
