/*
 * XREFs of EtwTiLogSyscallUsage @ 0x140A5C578
 * Callers:
 *     NtSystemDebugControl @ 0x14084A9E0 (NtSystemDebugControl.c)
 *     PfQuerySuperfetchInformation @ 0x140A5C19C (PfQuerySuperfetchInformation.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 *     PfSetSuperfetchInformation @ 0x140B60C94 (PfSetSuperfetchInformation.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     EtwProviderEnabled @ 0x140257D70 (EtwProviderEnabled.c)
 *     EtwpTiFillProcessIdentity @ 0x140259590 (EtwpTiFillProcessIdentity.c)
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     PsGetSessionId @ 0x14043FD70 (PsGetSessionId.c)
 *     EtwpTiFillThreadIdentity @ 0x14049BCE8 (EtwpTiFillThreadIdentity.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlIsSandboxedToken @ 0x1408FBA10 (RtlIsSandboxedToken.c)
 *     SeTokenIsAdmin @ 0x1409238F0 (SeTokenIsAdmin.c)
 */

char __fastcall EtwTiLogSyscallUsage(int a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  struct _KTHREAD *v6; // r15
  __int64 Process; // rsi
  void *v8; // rdi
  BOOLEAN IsAdmin; // bl
  int v10; // ebx
  unsigned int v11; // ebx
  __int64 v12; // rax
  unsigned int v13; // edi
  __int64 v14; // rax
  bool IsSandboxedToken; // al
  REGHANDLE v16; // rcx
  __int64 v17; // rbx
  int v19; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v22; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[11]; // [rsp+58h] [rbp-B0h] BYREF

  v20 = a2;
  v22 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( a1 >= 0 )
    {
      LOBYTE(CurrentThread) = EtwEventEnabled(EtwThreatIntProvRegHandle, &THREATINT_PROCESS_SYSCALL_USAGE);
      if ( (_BYTE)CurrentThread )
      {
        LOBYTE(CurrentThread) = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x10000000000uLL);
        if ( (_BYTE)CurrentThread )
        {
          v6 = KeGetCurrentThread();
          Process = (__int64)v6->ApcState.Process;
          LODWORD(CurrentThread) = *(_DWORD *)(Process + 2016);
          if ( !_bittest((const int *)&CurrentThread, v20)
            && !_interlockedbittestandset((volatile signed __int32 *)(Process + 2016), v20) )
          {
            v8 = (void *)PsReferencePrimaryTokenWithTag(Process, 0x746C6644u, v4, v5);
            IsAdmin = SeTokenIsAdmin(v8);
            LOBYTE(CurrentThread) = ObFastDereferenceObject(
                                      (signed __int64 *)(Process + 584),
                                      (ULONG_PTR)v8,
                                      0x746C6644u);
            if ( !IsAdmin )
            {
              v10 = EtwpTiFillProcessIdentity(UserData, Process, &v22);
              v11 = EtwpTiFillThreadIdentity(&UserData[v10].Ptr, (__int64)v6) + v10;
              LODWORD(v21) = PsGetSessionId(Process);
              v12 = v11;
              UserData[v12].Ptr = (ULONGLONG)&v21;
              *(_QWORD *)&UserData[v12].Size = 4LL;
              v13 = v11 + 2;
              v14 = v11 + 1;
              UserData[v14].Ptr = (ULONGLONG)&v20;
              *(_QWORD *)&UserData[v14].Size = 4LL;
              IsSandboxedToken = RtlIsSandboxedToken(0LL, PreviousMode);
              v16 = EtwThreatIntProvRegHandle;
              v17 = v11 + 2;
              LOBYTE(v19) = IsSandboxedToken;
              UserData[v17].Ptr = (ULONGLONG)&v19;
              *(_QWORD *)&UserData[v17].Size = 1LL;
              LOBYTE(CurrentThread) = EtwWrite(v16, &THREATINT_PROCESS_SYSCALL_USAGE, 0LL, v13 + 1, UserData);
            }
          }
        }
      }
    }
  }
  return (char)CurrentThread;
}
