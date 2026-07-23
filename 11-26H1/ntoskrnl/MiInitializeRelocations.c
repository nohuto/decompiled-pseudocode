/*
 * XREFs of MiInitializeRelocations @ 0x140D04084
 * Callers:
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 */

__int64 MiInitializeRelocations()
{
  void *PoolMm; // rax
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned int v4; // eax
  ULONG *v5; // rdx
  struct _LIST_ENTRY *v6; // rcx
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int8 v10; // al
  unsigned __int64 v11; // rcx
  struct _LIST_ENTRY *v12; // rax
  __int64 result; // rax

  PoolMm = (void *)ExAllocatePoolMm(
                     256LL,
                     0x10000uLL,
                     1767009613,
                     KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  if ( !PoolMm )
    return 0LL;
  *(_QWORD *)&stru_140E2D2D0.SystemCallNumber = 0x7FFFFLL;
  stru_140E2D2D0.FirstArgument = PoolMm;
  stru_140E2D2D0.TrapFrame = (_KTRAP_FRAME *)(ExGenRandom(1, v1) & 0x7FFFE);
  v2 = ExAllocatePoolMm(
         256LL,
         0x500uLL,
         1767009613,
         KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  if ( !v2 )
    return 0LL;
  stru_140E2D2D0.Timer.DueTime.QuadPart = v2;
  stru_140E2D2D0.Timer.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)10240;
  v4 = ExGenRandom(1, v3);
  stru_140E2D2D0.Timer.TimerListEntry.Flink = (struct _LIST_ENTRY *)(v4 % 0x2800uLL);
  v6 = (struct _LIST_ENTRY *)((unsigned __int64)(unsigned __int8)ExGenRandom(1, v4 / 0x2800uLL) << 16);
  stru_140E2D2D0.ApcState.ApcListHead[0].Flink = v6 + 125829120;
  stru_140E2D2D0.ApcState.ApcListHead[0].Blink = v6 + 125829120;
  stru_140E2D2D0.ApcState.ApcListHead[1].Flink = v6 + 234881024;
  v7 = 0;
  stru_140E2D2D0.ApcState.ApcListHead[1].Blink = v6 + 234881024;
  while ( !v7 )
  {
    v8 = ExAllocatePoolMm(
           256LL,
           0x500uLL,
           1767009613,
           KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    if ( !v8 )
      return 0LL;
    *((_QWORD *)&MiState + 401) = 10240LL;
    *((_QWORD *)&MiState + 402) = v8;
    v10 = ExGenRandom(1, v9);
    v5 = &MiState;
    v11 = (unsigned __int64)v10 << 16;
    *((_QWORD *)&MiState + 403) = v11 + 2013265920;
    *((_QWORD *)&MiState + 404) = v11 + 2013265920;
    *((_QWORD *)&MiState + 405) = v11 + 3758096384u;
    v7 = 1;
    *((_QWORD *)&MiState + 406) = v11 + 3758096384u;
  }
  stru_140E2D2D0.RelativeTimerBias = (unsigned __int8)ExGenRandom(1, (__int64)v5);
  v12 = (struct _LIST_ENTRY *)ExAllocatePoolMm(
                                256LL,
                                0x500uLL,
                                1767009613,
                                KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  if ( !v12 )
    return 0LL;
  stru_140E2D2D0.Timer.Header.WaitListHead.Flink = v12;
  result = 1LL;
  *(_QWORD *)&stru_140E2D2D0.Timer.Header.Lock = 10240LL;
  return result;
}
