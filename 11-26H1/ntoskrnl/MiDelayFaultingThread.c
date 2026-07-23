/*
 * XREFs of MiDelayFaultingThread @ 0x1404FED04
 * Callers:
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiConvertFaultStatus @ 0x1403A4CB0 (MiConvertFaultStatus.c)
 *     MiUserFault @ 0x1403A4EA0 (MiUserFault.c)
 *     MmVirtualAccessFault @ 0x140AD3530 (MmVirtualAccessFault.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207CD0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     MiWaitForAvailablePages @ 0x1404D0118 (MiWaitForAvailablePages.c)
 *     MiLogDelayFaultingThread @ 0x1407043BC (MiLogDelayFaultingThread.c)
 */

char __fastcall MiDelayFaultingThread(unsigned int a1)
{
  ULONG64 v1; // rdi
  _KPROCESS *Process; // rsi
  NTSTATUS v4; // eax
  unsigned int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // r8
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 QpcTimeStamp; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( stru_140E366D8.FirstArgument
    && *(_DWORD *)stru_140E366D8.FirstArgument
    && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 1LL) )
  {
    v1 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
  }
  Interval.QuadPart = -10000LL * (unsigned __int16)a1;
  if ( (a1 & 0x10000) != 0 )
  {
    v4 = MiWaitForAvailablePages(
           *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * HIWORD(Process[2].ProcessListEntry.Blink)),
           &Interval,
           BYTE2(a1) & 2);
    v5 = v4;
  }
  else
  {
    LOBYTE(v4) = KeDelayExecutionThread(0, 0, &Interval);
    v5 = 0;
  }
  if ( v1 )
  {
    LOBYTE(v4) = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
    if ( stru_140E366D8.FirstArgument )
    {
      if ( *(_DWORD *)stru_140E366D8.FirstArgument )
      {
        LOBYTE(v4) = tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 1LL);
        if ( (_BYTE)v4 )
          LOBYTE(v4) = MiLogDelayFaultingThread(v6, a1, v7, v5);
      }
    }
  }
  return v4;
}
