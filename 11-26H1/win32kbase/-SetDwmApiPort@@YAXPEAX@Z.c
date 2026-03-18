/*
 * XREFs of ?SetDwmApiPort@@YAXPEAX@Z @ 0x140193FE4
 * Callers:
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1401ADDE8 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1401FBD50 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDwmApiPort(void *a1, int a2, int a3)
{
  __int64 UserSessionState; // rax

  if ( !a1 && *(_QWORD *)(W32GetUserSessionState(0, a2, a3) + 70560) )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
    ObfDereferenceObject(*(PVOID *)(UserSessionState + 70560));
  }
  *(_QWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 70560) = a1;
}
