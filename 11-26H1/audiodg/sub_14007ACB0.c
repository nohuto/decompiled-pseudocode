/*
 * XREFs of sub_14007ACB0 @ 0x14007ACB0
 * Callers:
 *     sub_140077B60 @ 0x140077B60 (sub_140077B60.c)
 *     sub_14007CD34 @ 0x14007CD34 (sub_14007CD34.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14007ACB0(unsigned __int16 *a1)
{
  __int64 result; // rax
  char v2; // dl

  if ( *a1 )
    result = *a1;
  else
    result = a1[4] + 2LL;
  v2 = *((_BYTE *)a1 + 2);
  if ( v2 == 1 )
  {
    result += 2LL;
  }
  else if ( v2 == 2 )
  {
    result += 4LL;
  }
  return result;
}
