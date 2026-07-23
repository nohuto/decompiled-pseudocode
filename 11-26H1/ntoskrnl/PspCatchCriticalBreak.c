/*
 * XREFs of PspCatchCriticalBreak @ 0x140800248
 * Callers:
 *     PspTerminateAllThreads @ 0x14094AA84 (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x14094B010 (PspTerminateThreadByPointer.c)
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 *     PspExitLastThread @ 0x1409FD314 (PspExitLastThread.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     PsGetServerSiloState @ 0x140216EC0 (PsGetServerSiloState.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     PsIsHostSilo @ 0x140467DB0 (PsIsHostSilo.c)
 *     IoThreadToProcess @ 0x140469B20 (IoThreadToProcess.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     strncpy_s @ 0x14053EC50 (strncpy_s.c)
 *     DbgPrompt @ 0x14061B080 (DbgPrompt.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PsTerminateServerSilo @ 0x1407F4380 (PsTerminateServerSilo.c)
 *     PspCriticalProcessDeathBlamedThreadTryGet @ 0x140800498 (PspCriticalProcessDeathBlamedThreadTryGet.c)
 *     PspCriticalProcessDeathInfoCollect @ 0x1408006B0 (PspCriticalProcessDeathInfoCollect.c)
 */

void __fastcall PspCatchCriticalBreak(int a1, struct _KPROCESS *a2, const char *a3, __int64 a4, int a5)
{
  ULONG_PTR v8; // rbx
  int v10; // esi
  const char *v11; // rax
  const char *v12; // r9
  char v13; // r15
  void *ServerSiloGlobals; // rbx
  unsigned int v15; // r15d
  struct _KTHREAD *v16; // rdi
  struct _KTHREAD *v17; // rcx
  struct _KPROCESS *v18; // rax
  CHAR Response[8]; // [rsp+40h] [rbp-C0h] BYREF
  struct _KTHREAD *v20; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR BugCheckParameter4[18]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v22[8384]; // [rsp+E0h] [rbp-20h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+21A0h] [rbp+20A0h] BYREF

  v8 = 0LL;
  v20 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  memset_0(BugCheckParameter4, 0, 0x88uLL);
  memset_0(v22, 0, sizeof(v22));
  if ( (int)PsGetServerSiloState(a4) >= 2 )
    return;
  v10 = a2->Header.Type & 0x7F;
  if ( (_BYTE)KdDebuggerEnabled )
  {
    v11 = "exited";
    if ( a1 != 1 )
      v11 = "terminated";
    v12 = "thread";
    if ( v10 != 6 )
      v12 = "process";
    DbgPrintEx(0, 0, "Critical %s 0x%p (in %s) %s.\n", v12, a2, a3, v11);
    v13 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v13 || (_BYTE)KdDebuggerNotPresent )
          goto LABEL_19;
        DbgPrompt("Break, Ignore, or Continue into bugcheck (bic)? ", Response, 2u);
        if ( Response[0] != 66 )
        {
          if ( Response[0] == 67 )
            goto LABEL_18;
          if ( Response[0] == 73 )
            return;
          if ( Response[0] != 98 )
            break;
        }
        __debugbreak();
LABEL_18:
        v13 = 1;
      }
      if ( Response[0] == 99 )
        goto LABEL_18;
      if ( Response[0] == 105 )
        return;
    }
  }
LABEL_19:
  if ( PsIsHostSilo(a4) )
  {
    v15 = PspCriticalProcessDeathBlamedThreadTryGet(a4, &v20);
    if ( v15 )
    {
      v16 = 0LL;
      if ( v10 != 6 )
      {
        v18 = a2;
LABEL_29:
        KeStackAttachProcess(v18, &ApcState);
        PspCriticalProcessDeathInfoCollect(v16, v15, v22, BugCheckParameter4);
        LOBYTE(v8) = v10 == 6;
        KeBugCheckEx(
          0xEFu,
          (ULONG_PTR)a2,
          v8,
          (ULONG_PTR)KeGetCurrentThread()->ApcState.Process,
          (ULONG_PTR)BugCheckParameter4);
      }
      v17 = (struct _KTHREAD *)a2;
    }
    else
    {
      v16 = v20;
      v17 = v20;
    }
    v18 = IoThreadToProcess(v17);
    goto LABEL_29;
  }
  ServerSiloGlobals = PsGetServerSiloGlobals(a4);
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)ServerSiloGlobals + 335, 1, 0) )
  {
    strncpy_s((char *)ServerSiloGlobals + 1348, 0xFuLL, a3, 0xFFFFFFFFFFFFFFFFuLL);
    *((_DWORD *)ServerSiloGlobals + 336) = a5;
  }
  PsTerminateServerSilo(a4);
}
