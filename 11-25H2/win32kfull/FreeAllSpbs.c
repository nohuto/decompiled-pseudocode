/*
 * XREFs of FreeAllSpbs @ 0x1401563F0
 * Callers:
 *     xxxRealizePalette @ 0x1401E0060 (xxxRealizePalette.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140237040 (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     FreeSpb @ 0x140156450 (FreeSpb.c)
 */

__int64 __fastcall FreeAllSpbs(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 UserSessionState; // rax

  while ( 1 )
  {
    v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 56968);
    if ( !*(_QWORD *)(v3 + 40) )
      break;
    UserSessionState = W32GetUserSessionState(v3, v2);
    FreeSpb(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 40LL));
  }
  result = W32GetUserSessionState(v3, v2);
  *(_QWORD *)(*(_QWORD *)(result + 56968) + 40LL) = 0LL;
  return result;
}
