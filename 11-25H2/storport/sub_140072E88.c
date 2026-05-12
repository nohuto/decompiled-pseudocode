/*
 * XREFs of sub_140072E88 @ 0x140072E88
 * Callers:
 *     sub_1400437BC @ 0x1400437BC (sub_1400437BC.c)
 *     sub_140055758 @ 0x140055758 (sub_140055758.c)
 *     sub_14007985C @ 0x14007985C (sub_14007985C.c)
 *     sub_14012F9F4 @ 0x14012F9F4 (sub_14012F9F4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140072E88(_DWORD *a1, int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r8

  if ( a1[5] )
    return 0LL;
  v2 = a1[6];
  if ( !v2 )
    return 0LL;
  if ( v2 < a2 + 1 )
    return 0LL;
  v3 = (unsigned int)a1[7];
  if ( (unsigned int)v3 < 0x28 )
    return 0LL;
  else
    return (__int64)&a1[6 * a2] + v3;
}
