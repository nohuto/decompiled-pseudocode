/*
 * XREFs of ?CleanupMitIocpSupport@@YAX_N@Z @ 0x1402954D4
 * Callers:
 *     EditionDeactivateMitInput @ 0x1402A9FC0 (EditionDeactivateMitInput.c)
 * Callees:
 *     <none>
 */

void __fastcall CleanupMitIocpSupport(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19248) )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    IOCPDispatcher::Close(*(IOCPDispatcher **)(UserSessionState + 19248), 1);
    IOCPDispatcher_Destroy();
  }
}
