/*
 * XREFs of MiFreePoolPagesLeft @ 0x140477C24
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140A69154 (ExpQuerySystemPerformanceInformation.c)
 *     MiInitializePagedPoolEvents @ 0x140D000F4 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreePoolPagesLeft(int a1)
{
  _KPROCESS *Process; // rcx
  volatile __int64 WaitStatus; // rax

  if ( a1 == 4 )
  {
    Process = (_KPROCESS *)qword_140E2C708;
    WaitStatus = *(_QWORD *)&MiState;
  }
  else
  {
    Process = stru_140E366D8.ApcState.Process;
    WaitStatus = stru_140E366D8.WaitStatus;
  }
  return WaitStatus - (_QWORD)Process;
}
