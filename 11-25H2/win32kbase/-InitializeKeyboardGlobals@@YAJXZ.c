/*
 * XREFs of ?InitializeKeyboardGlobals@@YAJXZ @ 0x140241D0C
 * Callers:
 *     ?InitializeInputGlobals@@YAJXZ @ 0x140241168 (-InitializeInputGlobals@@YAJXZ.c)
 * Callees:
 *     ApiSetEditionGetExecutionEvironment @ 0x140225810 (ApiSetEditionGetExecutionEvironment.c)
 */

__int64 __fastcall InitializeKeyboardGlobals(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rbx
  int ExecutionEvironment; // eax
  __int128 v6; // [rsp+20h] [rbp-20h]

  UserSessionState = W32GetUserSessionState(a1, a2);
  *(_QWORD *)&v6 = 0x3000C00010004LL;
  *((_QWORD *)&v6 + 1) = 104LL;
  v3 = UserSessionState + 12824;
  *(_OWORD *)(UserSessionState + 12824) = v6;
  *(_QWORD *)(UserSessionState + 12840) = 0xFA00020000LL;
  *(_DWORD *)(UserSessionState + 12848) = 65536030;
  *(_QWORD *)(UserSessionState + 13976) = &unk_14025CD10;
  *(_DWORD *)(UserSessionState + 14284) = -1;
  *(_DWORD *)(UserSessionState + 14288) = -1;
  *(_DWORD *)(UserSessionState + 12868) = 15;
  *(_DWORD *)(UserSessionState + 12916) = -1;
  *(_DWORD *)(UserSessionState + 13984) = 9502864;
  *(_DWORD *)(UserSessionState + 14036) = 1;
  *(_QWORD *)(UserSessionState + 14296) = -1LL;
  *(_WORD *)(UserSessionState + 14333) = 4359;
  ExecutionEvironment = ApiSetEditionGetExecutionEvironment(-1LL, 1LL);
  *(_BYTE *)(v3 + 1235) = 0;
  *(_BYTE *)(v3 + 1680) = ExecutionEvironment == 2;
  return 0LL;
}
