/*
 * XREFs of ?CitpGetInteractiveUserLUID@@YA?AU_LUID@@XZ @ 0x14014FEF0
 * Callers:
 *     CitProcessCallout @ 0x14007F1B4 (CitProcessCallout.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CitpGetInteractiveUserLUID(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *i; // rbx

  for ( i = *(_QWORD **)(W32GetUserSessionState(a1, a2) + 63520); ; i = (_QWORD *)i[1] )
  {
    if ( !i )
      return 0LL;
    if ( i[7] == W32GetUserSessionState(v3, v2) + 68464 )
      break;
  }
  return (struct _LUID)i[23];
}
