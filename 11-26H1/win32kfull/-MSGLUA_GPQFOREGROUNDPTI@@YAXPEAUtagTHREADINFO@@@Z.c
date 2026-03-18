/*
 * XREFs of ?MSGLUA_GPQFOREGROUNDPTI@@YAXPEAUtagTHREADINFO@@@Z @ 0x140173868
 * Callers:
 *     EditionIsGpqForegroundAccessibleExplicit @ 0x140173660 (EditionIsGpqForegroundAccessibleExplicit.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1401736A8 (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     EditionIsGpqForegroundAccessibleCurrent @ 0x1401736D0 (EditionIsGpqForegroundAccessibleCurrent.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1401DDAB0 (-zzzSetCursorPos@@YA_NHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MSGLUA_GPQFOREGROUNDPTI(struct tagTHREADINFO *a1, __int64 a2)
{
  __int64 v3; // rdx
  int v4; // eax
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  int v8; // [rsp+38h] [rbp-10h]

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18928);
  v4 = *(_DWORD *)(v3 + 480);
  v7 = *(_QWORD *)(v3 + 472);
  v8 = v4;
  UserSessionState = W32GetUserSessionState(v5, v3);
  EtwTraceUIPIInputError(a1, 0LL, *(_QWORD *)(UserSessionState + 18928), &v7, 1);
}
