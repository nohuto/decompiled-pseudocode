/*
 * XREFs of ?ApplyAdaptiveSessionState@@YAXPEAU_PO_ADAPTIVE_SESSION_STATE@@@Z @ 0x1401C1710
 * Callers:
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1400EA8F0 (-UpdateAdaptiveSessionState@@YAXXZ.c)
 *     PowerConnectionEvent @ 0x14018642C (PowerConnectionEvent.c)
 * Callees:
 *     <none>
 */

void __fastcall ApplyAdaptiveSessionState(struct _PO_ADAPTIVE_SESSION_STATE *a1, int a2, int a3)
{
  _DWORD *UserSessionState; // rax

  UserSessionState = (_DWORD *)W32GetUserSessionState((_DWORD)a1, a2, a3);
  UserSessionState[670] = 1000 * *(_DWORD *)a1;
  UserSessionState[672] = 1000 * *((_DWORD *)a1 + 1);
  UserSessionState[671] = 1000 * *((_DWORD *)a1 + 2);
  UserSessionState[684] = *((unsigned __int8 *)a1 + 12);
}
