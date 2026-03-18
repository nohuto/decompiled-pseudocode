/*
 * XREFs of sub_1400323F4 @ 0x1400323F4
 * Callers:
 *     sub_140047070 @ 0x140047070 (sub_140047070.c)
 *     sub_140047230 @ 0x140047230 (sub_140047230.c)
 *     sub_1400472AC @ 0x1400472AC (sub_1400472AC.c)
 *     sub_140049078 @ 0x140049078 (sub_140049078.c)
 *     sub_140049168 @ 0x140049168 (sub_140049168.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1400323F4(_QWORD *a1)
{
  while ( 1 )
  {
    if ( a1 >= qword_1400418C0 )
      return 0LL;
    if ( *a1 )
      break;
    ++a1;
  }
  return a1;
}
