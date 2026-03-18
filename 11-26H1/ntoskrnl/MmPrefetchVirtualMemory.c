/*
 * XREFs of MmPrefetchVirtualMemory @ 0x140A4EAA4
 * Callers:
 *     MiProcessWsInSwapRanges @ 0x1404ACA44 (MiProcessWsInSwapRanges.c)
 *     MmPrefetchVirtualAddresses @ 0x140A4E9F0 (MmPrefetchVirtualAddresses.c)
 *     PfpPrefetchPrivatePages @ 0x140A4EC04 (PfpPrefetchPrivatePages.c)
 *     ExpDebuggerWorker @ 0x140C16D60 (ExpDebuggerWorker.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeStackAttachProcess @ 0x1402C5270 (KeStackAttachProcess.c)
 *     MiPrefetchVirtualMemory @ 0x1403A0710 (MiPrefetchVirtualMemory.c)
 *     ObIsKernelHandle @ 0x1404D8C40 (ObIsKernelHandle.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall MmPrefetchVirtualMemory(ULONG_PTR BugCheckParameter1, unsigned __int64 a2, __int64 a3, int a4)
{
  PRKPROCESS v4; // rsi
  int v5; // ebx
  struct _KTHREAD *CurrentThread; // r14
  __int64 result; // rax
  unsigned __int64 p_Blink; // r8
  unsigned int v13; // edi
  PRKPROCESS PROCESS; // [rsp+40h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-70h] BYREF

  v4 = 0LL;
  v5 = 0;
  PROCESS = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CurrentThread = KeGetCurrentThread();
  switch ( BugCheckParameter1 )
  {
    case 0uLL:
      p_Blink = 1LL;
      goto LABEL_8;
    case 0xFFFFFFFFFFFFFFFFuLL:
      v4 = CurrentThread->ApcState.Process;
LABEL_7:
      p_Blink = (unsigned __int64)&v4[2].ReadyListHead.Blink;
LABEL_8:
      v13 = MiPrefetchVirtualMemory(a2, a3, p_Blink, a4);
      if ( v5 )
        KiUnstackDetachProcess((__int64)&ApcState, 0);
      if ( BugCheckParameter1 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        if ( v4 )
          ObfDereferenceObjectWithTag(v4, 0x66506D4Du);
      }
      return v13;
    case 0xFFFFFFFFFFFFFFFDuLL:
      return 3221225659LL;
  }
  if ( !ObIsKernelHandle((HANDLE)BugCheckParameter1) )
    return 3221225711LL;
  result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 8LL, PsProcessType, 0, 0x66506D4Du, &PROCESS, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v4 = PROCESS;
    if ( CurrentThread->ApcState.Process != PROCESS )
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      v5 = 1;
    }
    goto LABEL_7;
  }
  return result;
}
