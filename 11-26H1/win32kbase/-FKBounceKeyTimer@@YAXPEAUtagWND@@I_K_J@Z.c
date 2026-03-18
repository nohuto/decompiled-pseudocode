/*
 * XREFs of ?FKBounceKeyTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x140212700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FKBounceKeyTimer(struct tagWND *a1, int a2, int a3)
{
  *(_BYTE *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 21876) = 0;
}
