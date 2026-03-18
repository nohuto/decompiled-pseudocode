/*
 * XREFs of NtUserDestroyCursor @ 0x14007AAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x14007A464 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 */

_BOOL8 __fastcall NtUserDestroyCursor(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  _BOOL8 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rcx
  int v9; // ecx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v13);
  LOBYTE(v4) = 3;
  v5 = 0LL;
  v6 = HMValidateHandleWithDescriptor(a1, v4);
  if ( v6 )
  {
    if ( a2 )
    {
      if ( a2 != 1 )
      {
        v9 = 87;
        goto LABEL_8;
      }
    }
    else
    {
      v10 = *(_QWORD *)(W32GetUserGdiSessionState() + 40);
      if ( PsGetCurrentProcess() != v10 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
        if ( CurrentProcessWin32Process )
          CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        if ( *(_QWORD *)(v6 + 24) != CurrentProcessWin32Process )
        {
LABEL_7:
          v9 = 5;
LABEL_8:
          UserSetLastError(v9);
          goto LABEL_6;
        }
      }
    }
    if ( *(_QWORD *)(v6 + 48) == v6 )
    {
      v5 = _DestroyCursor((struct tagCURSOR *)v6, a2);
      goto LABEL_6;
    }
    goto LABEL_7;
  }
LABEL_6:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v13);
  UserSessionSwitchLeaveCrit(v7);
  return v5;
}
