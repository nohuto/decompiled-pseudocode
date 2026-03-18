/*
 * XREFs of sub_140047128 @ 0x140047128
 * Callers:
 *     sub_140047070 @ 0x140047070 (sub_140047070.c)
 *     sub_140047160 @ 0x140047160 (sub_140047160.c)
 * Callees:
 *     sub_140047160 @ 0x140047160 (sub_140047160.c)
 */

__int64 __fastcall sub_140047128(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 0x200) != 0 )
    return sub_140047160(a1, *a1, a2);
  else
    return *a1;
}
