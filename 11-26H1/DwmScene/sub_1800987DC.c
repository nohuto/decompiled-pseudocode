/*
 * XREFs of sub_1800987DC @ 0x1800987DC
 * Callers:
 *     ?_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z @ 0x180098458 (-_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800293DC @ 0x1800293DC (sub_1800293DC.c)
 *     sub_180029674 @ 0x180029674 (sub_180029674.c)
 *     sub_1800297F4 @ 0x1800297F4 (sub_1800297F4.c)
 *     sub_180099164 @ 0x180099164 (sub_180099164.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800987DC(_QWORD *a1)
{
  _QWORD *v2; // rcx
  _QWORD *i; // rdi
  __int64 v4; // rcx

  sub_180029674((__int64)a1);
  if ( a1[5] )
  {
    v2 = a1 + 1;
    do
      sub_180099164(v2);
    while ( a1[5] );
  }
  sub_1800293DC(a1 + 6);
  for ( i = a1 + 8; i != a1 + 18; i += 2 )
  {
    *i = 0LL;
    v4 = i[1];
    i[1] = 0LL;
    if ( v4 )
      sub_180010EC8(v4);
  }
  if ( a1 + 18 <= a1 + 23 )
    memset(a1 + 18, 0, 8LL * (a1 + 23 >= a1 + 18 ? 5 : 0));
  return sub_1800297F4((__int64)a1);
}
