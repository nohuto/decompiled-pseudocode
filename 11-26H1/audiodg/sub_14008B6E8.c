/*
 * XREFs of sub_14008B6E8 @ 0x14008B6E8
 * Callers:
 *     sub_14008BBF0 @ 0x14008BBF0 (sub_14008BBF0.c)
 *     sub_140093730 @ 0x140093730 (sub_140093730.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14008B6E8(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    *a2 = v2;
    sub_1400B6010(v2);
  }
  else
  {
    *a2 = 0LL;
  }
  return 0LL;
}
