/*
 * XREFs of sub_140009CB0 @ 0x140009CB0
 * Callers:
 *     sub_14000A4C0 @ 0x14000A4C0 (sub_14000A4C0.c)
 * Callees:
 *     sub_14000EE10 @ 0x14000EE10 (sub_14000EE10.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140009CB0(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( a1[19] )
    a1[9] = 0LL;
  result = sub_14000EE10();
  v3 = a1[11];
  if ( v3 )
  {
    result = sub_1400B6010(v3);
    a1[11] = 0LL;
  }
  return result;
}
