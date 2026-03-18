/*
 * XREFs of sub_14000D650 @ 0x14000D650
 * Callers:
 *     sub_14001FD58 @ 0x14001FD58 (sub_14001FD58.c)
 *     sub_140020624 @ 0x140020624 (sub_140020624.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14000D650(unsigned __int16 *a1)
{
  int v1; // eax

  if ( !a1 )
    return 0xFFFFFFFFLL;
  v1 = 10000;
  if ( (*((_BYTE *)a1 + 3) & 1) != 0 )
    v1 = 100;
  return (unsigned int)*a1 * v1;
}
