/*
 * XREFs of MiFreePoolPagesLeft @ 0x14047E2B4
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140A5C194 (ExpQuerySystemPerformanceInformation.c)
 *     MiInitializePagedPoolEvents @ 0x140CF9D74 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreePoolPagesLeft(int a1)
{
  _KPROCESS *Process; // rcx
  volatile __int64 WaitStatus; // rax

  if ( a1 == 4 )
  {
    Process = (_KPROCESS *)qword_140E2C588;
    WaitStatus = *(_QWORD *)&MiState;
  }
  else
  {
    Process = stru_140E36558.ApcState.Process;
    WaitStatus = stru_140E36558.WaitStatus;
  }
  return WaitStatus - (_QWORD)Process;
}
