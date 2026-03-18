/*
 * XREFs of PsMultiResumeThread @ 0x1404FE168
 * Callers:
 *     DbgkUserReportWorkRoutine @ 0x14078AC30 (DbgkUserReportWorkRoutine.c)
 *     DbgkpPostFakeThreadMessages @ 0x1409556F0 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpWakeTarget @ 0x140985E88 (DbgkpWakeTarget.c)
 *     PspWow64GetContextThread @ 0x140A214E8 (PspWow64GetContextThread.c)
 *     PsResumeThread @ 0x140AB1280 (PsResumeThread.c)
 *     NtResumeThread @ 0x140AB9500 (NtResumeThread.c)
 *     NtChangeThreadState @ 0x140AD4B20 (NtChangeThreadState.c)
 *     PspDeleteThreadStateChange @ 0x140B21690 (PspDeleteThreadStateChange.c)
 *     PspWow64SetContextThread @ 0x140B796B0 (PspWow64SetContextThread.c)
 * Callees:
 *     KeResumeThread @ 0x1402C5F30 (KeResumeThread.c)
 *     EtwTiLogSuspendResumeThread @ 0x140AAF3C8 (EtwTiLogSuspendResumeThread.c)
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
