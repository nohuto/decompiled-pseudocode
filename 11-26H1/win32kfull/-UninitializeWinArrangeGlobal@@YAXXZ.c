/*
 * XREFs of ?UninitializeWinArrangeGlobal@@YAXXZ @ 0x14022F984
 * Callers:
 *     EditionDriverUninitialize @ 0x14022F800 (EditionDriverUninitialize.c)
 * Callees:
 *     <none>
 */

void __fastcall UninitializeWinArrangeGlobal(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 63432) )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    Win32FreePool(*(void **)(UserSessionState + 63432));
    *(_QWORD *)(W32GetUserSessionState(v6, v5) + 63432) = 0LL;
  }
}
