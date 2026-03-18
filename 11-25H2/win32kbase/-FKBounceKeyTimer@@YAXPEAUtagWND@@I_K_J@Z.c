/*
 * XREFs of ?FKBounceKeyTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F8F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FKBounceKeyTimer(struct tagWND *a1, __int64 a2)
{
  *(_BYTE *)(W32GetUserSessionState(a1, a2) + 21844) = 0;
}
