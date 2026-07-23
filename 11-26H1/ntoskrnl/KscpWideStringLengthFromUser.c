/*
 * XREFs of KscpWideStringLengthFromUser @ 0x140C64E20
 * Callers:
 *     KscpWideStringLengthFromUserSmap @ 0x140C64E60 (KscpWideStringLengthFromUserSmap.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KscpWideStringLengthFromUser(unsigned __int64 a1)
{
  _WORD *v1; // rax

  if ( a1 > 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  v1 = (_WORD *)a1;
  while ( *v1++ != 0 )
    ;
  return (unsigned __int64)&v1[a1 / 0xFFFFFFFFFFFFFFFEuLL - 1] >> 1;
}
