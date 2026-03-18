/*
 * XREFs of sub_14001B094 @ 0x14001B094
 * Callers:
 *     sub_14001B23C @ 0x14001B23C (sub_14001B23C.c)
 * Callees:
 *     sub_14001B0C8 @ 0x14001B0C8 (sub_14001B0C8.c)
 */

__int64 __fastcall sub_14001B094(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 2) != 0 )
    return *a1;
  else
    return sub_14001B0C8(a1, *a1, a2);
}
