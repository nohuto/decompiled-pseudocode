/*
 * XREFs of ?GetAdaptiveSessionContext@@YAXPEAU_PO_ADAPTIVE_SESSION_CONTEXT@@@Z @ 0x140099010
 * Callers:
 *     PowerConnectionEvent @ 0x140150D1C (PowerConnectionEvent.c)
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1401B0780 (-UpdateAdaptiveSessionState@@YAXXZ.c)
 * Callees:
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x140099090 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1400990F0 (-GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 */

void __fastcall GetAdaptiveSessionContext(struct _PO_ADAPTIVE_SESSION_CONTEXT *a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  v6 = W32GetUserSessionState(v5, v4);
  *(_QWORD *)a1 = CInputGlobals::GetLastInputTime(*(CInputGlobals **)(v6 + 3056));
  v9 = W32GetUserSessionState(v8, v7);
  *((_QWORD *)a1 + 1) = CInputGlobals::GetGlobalTickCount(*(_QWORD *)(v9 + 3056), 0LL);
  *((_QWORD *)a1 + 2) = *(_QWORD *)(UserSessionState + 2840);
  *((_DWORD *)a1 + 6) = *(_DWORD *)(UserSessionState + 2888);
}
