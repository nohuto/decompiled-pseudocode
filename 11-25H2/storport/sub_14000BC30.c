/*
 * XREFs of sub_14000BC30 @ 0x14000BC30
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000BCAC @ 0x14000BCAC (sub_14000BCAC.c)
 *     sub_14000BD54 @ 0x14000BD54 (sub_14000BD54.c)
 *     sub_14000C348 @ 0x14000C348 (sub_14000C348.c)
 *     sub_14000CCB0 @ 0x14000CCB0 (sub_14000CCB0.c)
 *     sub_140020090 @ 0x140020090 (sub_140020090.c)
 */

__int64 __fastcall sub_14000BC30(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 result; // rax

  v5 = sub_14000BCAC(a1, a2, a3);
  if ( (unsigned __int8)sub_140020090(v5 + 376, 6LL) )
  {
    sub_14000CCB0(v5, a2);
  }
  else
  {
    *(_BYTE *)(v5 + 4561) = 1;
    result = sub_14000C348(a1, a2, sub_14000BCD0);
    if ( (int)result >= 0 )
      return result;
  }
  return sub_14000BD54(a2);
}
