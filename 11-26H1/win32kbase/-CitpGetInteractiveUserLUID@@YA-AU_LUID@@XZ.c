/*
 * XREFs of ?CitpGetInteractiveUserLUID@@YA?AU_LUID@@XZ @ 0x14018A160
 * Callers:
 *     CitProcessCallout @ 0x1400D55F0 (CitProcessCallout.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CitpGetInteractiveUserLUID(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  _QWORD *i; // rbx
  int v6; // r8d

  for ( i = *(_QWORD **)(W32GetUserSessionState(a1, a2, a3) + 63512); i; i = (_QWORD *)i[1] )
  {
    if ( i[3] == W32GetUserSessionState(v4, v3, v6) + 68456 )
      return (struct _LUID)i[19];
  }
  return 0LL;
}
