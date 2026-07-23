/*
 * XREFs of MiWakeZeroingThreads @ 0x140713A28
 * Callers:
 *     MiActivateBetterZeroEngine @ 0x1404E1264 (MiActivateBetterZeroEngine.c)
 *     MiZeroNodeExiting @ 0x14050CC64 (MiZeroNodeExiting.c)
 *     MiResumeBackgroundZeroing @ 0x140521D40 (MiResumeBackgroundZeroing.c)
 * Callees:
 *     MiLogZeroPageDecision @ 0x14048B1AC (MiLogZeroPageDecision.c)
 *     MiWakeAllZeroingThreads @ 0x1405075FC (MiWakeAllZeroingThreads.c)
 *     MiAddZeroingThread @ 0x140521E94 (MiAddZeroingThread.c)
 */

__int64 __fastcall MiWakeZeroingThreads(__int64 a1, int a2, int a3)
{
  __int64 v3; // rax
  unsigned int v7; // edi
  int v8; // ebx
  int v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  v10 = 0;
  if ( *(_DWORD *)(v3 + 92) || HIDWORD(stru_140E2ED08.Timer.Header.WaitListHead.Flink) )
  {
    MiWakeAllZeroingThreads(a1);
    return 0LL;
  }
  else
  {
    v7 = 0;
    do
    {
      v8 = MiAddZeroingThread(a1, 3, a3, &v10);
      MiLogZeroPageDecision(a1 + 504LL * v10 + 232, v10, 0LL, 0LL, 0, v8);
      if ( v8 )
        break;
      v7 = 1;
    }
    while ( !a2 );
    return v7;
  }
}
