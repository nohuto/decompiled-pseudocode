/*
 * XREFs of sub_1800D3010 @ 0x1800D3010
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D151C @ 0x1800D151C (sub_1800D151C.c)
 */

__int64 __fastcall sub_1800D3010(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0;
  if ( !(unsigned int)sub_1800D151C(a1, a2, &v5) )
    return v5;
  return a3;
}
