/*
 * XREFs of NtUserEnableWindowShellWindowManagementBehavior @ 0x1402961A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x14015C7E0 (IAMThreadAccessGranted.c)
 *     ?GetThread@ShellWindowManagement@@YAPEBUtagTHREADINFO@@XZ @ 0x140225D20 (-GetThread@ShellWindowManagement@@YAPEBUtagTHREADINFO@@XZ.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserEnableWindowShellWindowManagementBehavior(__int64 a1, char a2, unsigned __int8 a3)
{
  __int64 v6; // rsi
  const struct tagTHREADINFO *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdx
  ShellWindowManagement *v10; // rcx
  __int64 v11; // rdi
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rcx
  _BYTE v16[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v17; // [rsp+28h] [rbp-10h]

  v6 = 0LL;
  v7 = (const struct tagTHREADINFO *)EnterCrit(0LL, 1LL);
  v16[0] = 0;
  v17 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v16, v8);
  v11 = ValidateHwnd(a1);
  if ( v11 )
  {
    if ( ShellWindowManagement::GetThread(v10, v9) == v7 || (LOBYTE(v13) = IAMThreadAccessGranted(v7), v13) )
    {
      v6 = 1LL;
      *(_DWORD *)(v11 + 388) = a3 & a2 & 7 | *(_DWORD *)(v11 + 388) & ~(a2 & 7);
      goto LABEL_8;
    }
    v12 = 5;
  }
  else
  {
    v12 = 1400;
  }
  UserSetLastError(v12);
LABEL_8:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v16);
  UserSessionSwitchLeaveCrit(v14);
  return v6;
}
