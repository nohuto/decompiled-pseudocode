/*
 * XREFs of KscpStringLengthFromUser @ 0x140C64DC0
 * Callers:
 *     KscpStringLengthFromUserSmap @ 0x140C64E00 (KscpStringLengthFromUserSmap.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall KscpStringLengthFromUser(unsigned __int64 a1)
{
  _BYTE *v1; // rax

  if ( a1 > 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  v1 = (_BYTE *)a1;
  while ( *v1++ != 0 )
    ;
  return &v1[-a1 - 1];
}
