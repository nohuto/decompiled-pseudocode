/*
 * XREFs of PsMultiResumeThread @ 0x1404F76A8
 * Callers:
 *     DbgkUserReportWorkRoutine @ 0x14078D760 (DbgkUserReportWorkRoutine.c)
 *     DbgkpWakeTarget @ 0x14091D3BC (DbgkpWakeTarget.c)
 *     NtChangeThreadState @ 0x140949110 (NtChangeThreadState.c)
 *     DbgkpPostFakeThreadMessages @ 0x140949760 (DbgkpPostFakeThreadMessages.c)
 *     PspWow64GetContextThread @ 0x140A2AB08 (PspWow64GetContextThread.c)
 *     PsResumeThread @ 0x140AAF270 (PsResumeThread.c)
 *     NtResumeThread @ 0x140ABA920 (NtResumeThread.c)
 *     PspDeleteThreadStateChange @ 0x140B23A90 (PspDeleteThreadStateChange.c)
 *     PspWow64SetContextThread @ 0x140B81920 (PspWow64SetContextThread.c)
 * Callees:
 *     KeResumeThread @ 0x140310BD0 (KeResumeThread.c)
 *     EtwTiLogSuspendResumeThread @ 0x140AAD018 (EtwTiLogSuspendResumeThread.c)
 */

__int64 __fastcall PsMultiResumeThread(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v4; // esi
  unsigned int v6; // eax
  struct _KTHREAD *CurrentThread; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rax

  v4 = a3;
  v6 = KeResumeThread(a1, a3, a3);
  CurrentThread = KeGetCurrentThread();
  v8 = v6;
  if ( v6 && v6 <= v4 )
  {
    v9 = *(_QWORD *)(a1 + 544);
    if ( (*(_DWORD *)(v9 + 1532) & 0x8000) == 0 )
      _InterlockedOr((volatile signed __int32 *)(v9 + 1532), 0x8000u);
    if ( (*(_DWORD *)(v9 + 1532) & 0x100000) != 0 )
      EtwTiLogSuspendResumeThread(0LL, CurrentThread, a1, 0LL);
  }
  if ( a2 )
    *a2 = v8;
  return 0LL;
}
