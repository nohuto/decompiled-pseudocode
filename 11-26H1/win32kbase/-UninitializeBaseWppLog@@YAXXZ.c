/*
 * XREFs of ?UninitializeBaseWppLog@@YAXXZ @ 0x140142280
 * Callers:
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x140142028 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1401D6EE0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UninitializeBaseWppLog(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 UserSessionState; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 69136) )
  {
    UserSessionState = W32GetUserSessionState(v4, v3, v5);
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control, *(_QWORD *)(UserSessionState + 69136));
    *(_QWORD *)(W32GetUserSessionState(v8, v7, v9) + 69136) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v4, v3, v5) + 19368) )
  {
    v13 = W32GetUserSessionState(v11, v10, v12);
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control, *(_QWORD *)(v13 + 19368));
    *(_QWORD *)(W32GetUserSessionState(v15, v14, v16) + 19368) = 0LL;
  }
}
