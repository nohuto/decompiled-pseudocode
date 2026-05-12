/*
 * XREFs of sub_140182DB8 @ 0x140182DB8
 * Callers:
 *     sub_140182D00 @ 0x140182D00 (sub_140182D00.c)
 *     sub_140182DF0 @ 0x140182DF0 (sub_140182DF0.c)
 * Callees:
 *     sub_140182DF0 @ 0x140182DF0 (sub_140182DF0.c)
 */

__int64 __fastcall sub_140182DB8(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 0x200) != 0 )
    return sub_140182DF0(a1, *a1, a2);
  else
    return *a1;
}
