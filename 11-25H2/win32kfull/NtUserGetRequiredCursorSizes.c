/*
 * XREFs of NtUserGetRequiredCursorSizes @ 0x1401D6C40
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 *     ?HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPECUtagCURSORSIZEINFO@@@Z @ 0x140273A2C (-HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPECUtagCURSORSIZEINFO@@@Z.c)
 */

__int64 __fastcall NtUserGetRequiredCursorSizes(__int64 a1, volatile void *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  int v9; // ebx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax

  EnterCrit(0LL, 0LL);
  LOBYTE(v4) = 3;
  v5 = HMValidateHandleWithDescriptor(a1, v4);
  v8 = v5;
  v9 = 0;
  if ( v5 && *(_QWORD *)(v5 + 48) == v5 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v7, v6);
    ProbeForWrite(a2, 0x28uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    UserSessionState = W32GetUserSessionState(v12, v11);
    CCursorSizes::HandleRequestCursorSizesRequest(
      *(CCursorSizes **)(UserSessionState + 36344),
      (volatile struct tagCURSORSIZEINFO *)a2);
    *(_DWORD *)(v8 + 80) |= 0x4000u;
    v9 = 1;
  }
  UserSessionSwitchLeaveCrit(v7);
  return v9;
}
