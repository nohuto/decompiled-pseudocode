/*
 * XREFs of ?MSGLUA_GPQFOREGROUNDPTI@@YAXPEAUtagTHREADINFO@@@Z @ 0x140060B5C
 * Callers:
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x14005F190 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x140060B3C (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     EditionIsGpqForegroundAccessibleExplicit @ 0x140165D20 (EditionIsGpqForegroundAccessibleExplicit.c)
 * Callees:
 *     <none>
 */

void __fastcall MSGLUA_GPQFOREGROUNDPTI(struct tagTHREADINFO *a1, __int64 a2)
{
  __int64 v3; // rdx
  int v4; // ebx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  int v8; // [rsp+38h] [rbp-10h]
  __int64 v9; // [rsp+58h] [rbp+10h]

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18888);
  v4 = *(_DWORD *)(v3 + 456);
  v9 = *(_QWORD *)(v3 + 448);
  UserSessionState = W32GetUserSessionState(v5, v3);
  v7 = v9;
  v8 = v4;
  EtwTraceUIPIInputError(a1, 0LL, *(_QWORD *)(UserSessionState + 18888), &v7, 1);
}
