/*
 * XREFs of ?UninitializeBaseWppLog@@YAXXZ @ 0x1401AF930
 * Callers:
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x140101280 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140169710 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UninitializeBaseWppLog(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 69144) )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control, *(_QWORD *)(UserSessionState + 69144));
    *(_QWORD *)(W32GetUserSessionState(v6, v5) + 69144) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v3, v2) + 19336) )
  {
    v9 = W32GetUserSessionState(v8, v7);
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control, *(_QWORD *)(v9 + 19336));
    *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19336) = 0LL;
  }
}
