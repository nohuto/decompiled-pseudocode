/*
 * XREFs of sub_18008FD00 @ 0x18008FD00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C444 @ 0x18000C444 (sub_18000C444.c)
 *     sub_18008FBE0 @ 0x18008FBE0 (sub_18008FBE0.c)
 */

_QWORD *__fastcall sub_18008FD00(_QWORD *lpMem, char a2)
{
  sub_18008FBE0(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000C444(lpMem);
  return lpMem;
}
