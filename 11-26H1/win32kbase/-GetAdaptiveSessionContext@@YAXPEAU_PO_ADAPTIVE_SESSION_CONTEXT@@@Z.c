/*
 * XREFs of ?GetAdaptiveSessionContext@@YAXPEAU_PO_ADAPTIVE_SESSION_CONTEXT@@@Z @ 0x1400EA9A8
 * Callers:
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1400EA8F0 (-UpdateAdaptiveSessionState@@YAXXZ.c)
 *     PowerConnectionEvent @ 0x14018642C (PowerConnectionEvent.c)
 * Callees:
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1400EAA30 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1400EAA90 (-GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 */

void __fastcall GetAdaptiveSessionContext(struct _PO_ADAPTIVE_SESSION_CONTEXT *a1, int a2, int a3)
{
  __int64 UserSessionState; // rbx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // rax

  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
  v8 = W32GetUserSessionState(v6, v5, v7);
  *(_QWORD *)a1 = CInputGlobals::GetLastInputTime(*(CInputGlobals **)(v8 + 3056));
  v12 = W32GetUserSessionState(v10, v9, v11);
  *((_QWORD *)a1 + 1) = CInputGlobals::GetGlobalTickCount(*(_QWORD *)(v12 + 3056), 0LL);
  *((_QWORD *)a1 + 2) = *(_QWORD *)(UserSessionState + 2840);
  *((_DWORD *)a1 + 6) = *(_DWORD *)(UserSessionState + 2888);
}
