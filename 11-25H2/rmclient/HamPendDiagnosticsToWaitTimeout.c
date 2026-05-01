/*
 * XREFs of HamPendDiagnosticsToWaitTimeout @ 0x18001AB50
 * Callers:
 *     ?WaitForStarted@HamActivityWrapper@@QEAAJK@Z @ 0x18001A1BC (-WaitForStarted@HamActivityWrapper@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HamPendDiagnosticsToWaitTimeout(_DWORD *a1)
{
  if ( !*a1 )
    return 3236691980LL;
  if ( *a1 != 1 )
  {
    if ( *a1 == 2 )
      return 3236691979LL;
    if ( *a1 == 4 )
      return 3236691978LL;
  }
  return 3236691977LL;
}
