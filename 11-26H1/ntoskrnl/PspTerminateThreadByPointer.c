/*
 * XREFs of PspTerminateThreadByPointer @ 0x1409575E0
 * Callers:
 *     PsDispatchIumService @ 0x14040C830 (PsDispatchIumService.c)
 *     PspSystemThreadStartup @ 0x1404FD910 (PspSystemThreadStartup.c)
 *     PspSecureThreadStartup @ 0x140955DE0 (PspSecureThreadStartup.c)
 *     PsTerminateSystemThread @ 0x140956130 (PsTerminateSystemThread.c)
 *     NtTerminateProcess @ 0x1409566C0 (NtTerminateProcess.c)
 *     PspTerminateAllThreads @ 0x14095705C (PspTerminateAllThreads.c)
 *     NtTerminateThread @ 0x1409574F0 (NtTerminateThread.c)
 *     PspUserThreadStartup @ 0x1409EB210 (PspUserThreadStartup.c)
 * Callees:
 *     KeRequestTerminationThread @ 0x1402C5B58 (KeRequestTerminationThread.c)
 *     PsGetProcessServerSilo @ 0x140476BF0 (PsGetProcessServerSilo.c)
 *     PspCatchCriticalBreak @ 0x1407FA818 (PspCatchCriticalBreak.c)
 *     PspExitThread @ 0x14095771C (PspExitThread.c)
 */

__int64 __fastcall PspTerminateThreadByPointer(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rdi
  __int64 ProcessServerSilo; // rax

  v4 = *(_QWORD *)(a1 + 544);
  if ( (*(_DWORD *)(a1 + 1440) & 0x20) != 0 && (*(_DWORD *)(v4 + 500) & 0x40000008) == 0 )
  {
    ProcessServerSilo = PsGetProcessServerSilo(v4);
    PspCatchCriticalBreak(0, (struct _KPROCESS *)a1, (const char *)(v4 + 824), ProcessServerSilo, a2);
  }
  if ( a3 && (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1440), 1u);
    PspExitThread(a2);
    __debugbreak();
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
    return 3221225506LL;
  if ( (*(_DWORD *)(v4 + 1532) & 1) != 0 )
    return 3221225659LL;
  if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 1440), 0) )
    *(_DWORD *)(a1 + 1496) = a2;
  KeRequestTerminationThread(a1);
  return 0LL;
}
