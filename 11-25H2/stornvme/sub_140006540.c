/*
 * XREFs of sub_140006540 @ 0x140006540
 * Callers:
 *     sub_140001040 @ 0x140001040 (sub_140001040.c)
 *     sub_1400020E0 @ 0x1400020E0 (sub_1400020E0.c)
 *     sub_140006260 @ 0x140006260 (sub_140006260.c)
 *     sub_14000CC70 @ 0x14000CC70 (sub_14000CC70.c)
 *     sub_140019450 @ 0x140019450 (sub_140019450.c)
 *     sub_140021288 @ 0x140021288 (sub_140021288.c)
 *     sub_140029BE8 @ 0x140029BE8 (sub_140029BE8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140006540(_DWORD *a1)
{
  __int64 result; // rax
  unsigned int v2; // edx
  unsigned int v3; // edx

  result = (unsigned int)a1[52];
  if ( (unsigned int)result > 0x200000 )
    result = 0x200000LL;
  v2 = a1[8];
  if ( v2 && (unsigned int)result >= v2 )
    result = v2;
  v3 = a1[13];
  if ( v3 )
  {
    if ( v3 < (unsigned int)result )
      return v3;
  }
  return result;
}
