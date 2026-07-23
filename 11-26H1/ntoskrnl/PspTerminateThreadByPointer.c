/*
 * XREFs of PspTerminateThreadByPointer @ 0x14094B010
 * Callers:
 *     PspSystemThreadStartup @ 0x1404F6E50 (PspSystemThreadStartup.c)
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 *     PspSecureThreadStartup @ 0x140949BA0 (PspSecureThreadStartup.c)
 *     PsTerminateSystemThread @ 0x140949E90 (PsTerminateSystemThread.c)
 *     PspTerminateAllThreads @ 0x14094AA84 (PspTerminateAllThreads.c)
 *     NtTerminateThread @ 0x14094AF20 (NtTerminateThread.c)
 *     PspUserThreadStartup @ 0x1409E79E0 (PspUserThreadStartup.c)
 *     NtTerminateProcess @ 0x140B812E0 (NtTerminateProcess.c)
 * Callees:
 *     KeRequestTerminationThread @ 0x1403107F4 (KeRequestTerminationThread.c)
 *     PsGetProcessServerSilo @ 0x140470370 (PsGetProcessServerSilo.c)
 *     PspCatchCriticalBreak @ 0x140800248 (PspCatchCriticalBreak.c)
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
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
