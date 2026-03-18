/*
 * XREFs of LpkShapeQueryRoutine @ 0x1402EAF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LpkShapeQueryRoutine(__int64 a1, int a2, _DWORD *a3)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1);
  if ( a2 == 4 )
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(SessionState + 88) + 1768LL) + 1573012LL) |= 1 << *a3;
  return 0LL;
}
