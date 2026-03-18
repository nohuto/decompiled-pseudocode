/*
 * XREFs of ?SetDwmApiPort@@YAXPEAX@Z @ 0x1400AF288
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1400AEF0C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x14017DD8C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDwmApiPort(void *a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  if ( !a1 && *(_QWORD *)(W32GetUserSessionState(0LL, a2) + 70568) )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    ObfDereferenceObject(*(PVOID *)(UserSessionState + 70568));
  }
  *(_QWORD *)(W32GetUserSessionState(a1, a2) + 70568) = a1;
}
