/*
 * XREFs of sub_14003AFC4 @ 0x14003AFC4
 * Callers:
 *     sub_140061EC0 @ 0x140061EC0 (sub_140061EC0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14003AFC4(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = sub_1400B6010(v4);
  *a1 = a2;
  return result;
}
