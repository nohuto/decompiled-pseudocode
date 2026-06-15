/*
 * XREFs of sub_140029510 @ 0x140029510
 * Callers:
 *     sub_140028DF8 @ 0x140028DF8 (sub_140028DF8.c)
 *     sub_140028E18 @ 0x140028E18 (sub_140028E18.c)
 *     sub_140041440 @ 0x140041440 (sub_140041440.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140029510(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = *(_QWORD *)(*a1 + 24);
  if ( v2 )
  {
    sub_1400B6010(v2);
    *(_QWORD *)(*a1 + 24) = 0LL;
  }
  v3 = *(_QWORD *)(*a1 + 32);
  if ( v3 )
  {
    sub_1400B6010(v3);
    *(_QWORD *)(*a1 + 32) = 0LL;
  }
  result = *a1;
  v5 = *(_QWORD *)(*a1 + 48);
  if ( v5 )
  {
    sub_1400B6010(v5);
    result = *a1;
    *(_QWORD *)(*a1 + 48) = 0LL;
  }
  return result;
}
