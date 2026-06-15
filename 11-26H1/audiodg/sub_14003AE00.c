/*
 * XREFs of sub_14003AE00 @ 0x14003AE00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14003AE00(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( a2[1] )
    sub_1400B6010(*(_QWORD *)(a1 + 280));
  result = sub_1400B6010(*a2);
  *a2 = 0LL;
  a2[1] = 0LL;
  return result;
}
