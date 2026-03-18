/*
 * XREFs of NtUserImpersonateDdeClientWindow @ 0x140299EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _ImpersonateDdeClientWindow @ 0x1402B2A18 (_ImpersonateDdeClientWindow.c)
 */

__int64 __fastcall NtUserImpersonateDdeClientWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdi
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rdx
  _BYTE v13[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h]

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    v9 = ValidateHwnd(a2);
    if ( v9 )
    {
      v10 = PtiCurrent(v5, v8);
      v11 = *(_QWORD *)(v9 + 16);
      if ( (struct tagTHREADINFO *)v11 == v10 )
      {
        v5 = *(_QWORD *)(v7 + 16);
        if ( *(_QWORD *)(v5 + 464) == *(_QWORD *)(v11 + 464) )
        {
          v6 = 1;
        }
        else
        {
          v13[0] = 0;
          v14 = 0LL;
          AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v13, v11);
          v6 = ImpersonateDdeClientWindow(v7, v9);
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v13);
        }
      }
      else
      {
        UserSetLastError(87);
      }
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
