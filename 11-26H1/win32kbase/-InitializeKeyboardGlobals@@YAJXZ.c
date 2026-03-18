/*
 * XREFs of ?InitializeKeyboardGlobals@@YAJXZ @ 0x14024B0E4
 * Callers:
 *     ?InitializeInputGlobals@@YAJXZ @ 0x1401BCD80 (-InitializeInputGlobals@@YAJXZ.c)
 * Callees:
 *     ApiSetEditionGetExecutionEvironment @ 0x140227614 (ApiSetEditionGetExecutionEvironment.c)
 */

__int64 __fastcall InitializeKeyboardGlobals(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rbx
  int ExecutionEvironment; // eax
  __int128 v6; // [rsp+20h] [rbp-20h]

  *(_QWORD *)&v6 = 0x3000C00010004LL;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  *((_QWORD *)&v6 + 1) = 104LL;
  *(_OWORD *)(UserSessionState + 12824) = v6;
  *(_QWORD *)(UserSessionState + 12840) = 0xFA00020000LL;
  *(_DWORD *)(UserSessionState + 12848) = 65536030;
  *(_QWORD *)(UserSessionState + 13968) = &unk_140264C20;
  *(_DWORD *)(UserSessionState + 14276) = -1;
  *(_DWORD *)(UserSessionState + 14280) = -1;
  *(_DWORD *)(UserSessionState + 12868) = 15;
  *(_DWORD *)(UserSessionState + 12908) = -1;
  *(_DWORD *)(UserSessionState + 13976) = 9502864;
  *(_DWORD *)(UserSessionState + 14028) = 1;
  *(_QWORD *)(UserSessionState + 14288) = -1LL;
  *(_WORD *)(UserSessionState + 14325) = 4359;
  ExecutionEvironment = ApiSetEditionGetExecutionEvironment(-1LL);
  *(_BYTE *)(UserSessionState + 14051) = 0;
  *(_BYTE *)(UserSessionState + 14496) = ExecutionEvironment == 2;
  return 0LL;
}
