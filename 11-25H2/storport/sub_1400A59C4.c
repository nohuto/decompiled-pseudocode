/*
 * XREFs of sub_1400A59C4 @ 0x1400A59C4
 * Callers:
 *     sub_140182D00 @ 0x140182D00 (sub_140182D00.c)
 *     sub_140182EC0 @ 0x140182EC0 (sub_140182EC0.c)
 *     sub_140182F3C @ 0x140182F3C (sub_140182F3C.c)
 *     sub_1401B9078 @ 0x1401B9078 (sub_1401B9078.c)
 *     sub_1401B9168 @ 0x1401B9168 (sub_1401B9168.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1400A59C4(_QWORD *a1)
{
  while ( a1 < qword_1401675F8 )
  {
    if ( *a1 )
      return a1;
    ++a1;
  }
  return 0LL;
}
