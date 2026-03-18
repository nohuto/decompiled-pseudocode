/*
 * XREFs of KiIdleSchedule @ 0x1402C7E00
 * Callers:
 *     KiIdleLoop @ 0x140728DB0 (KiIdleLoop.c)
 * Callees:
 *     KiSendHeteroRescheduleIntRequest @ 0x14021E410 (KiSendHeteroRescheduleIntRequest.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x140225340 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiSearchForNewThread @ 0x14023E3D0 (KiSearchForNewThread.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402BBDD0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x1402C7F20 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiResumeThreadCycleAccumulation @ 0x140334E5C (KiResumeThreadCycleAccumulation.c)
 */

_KTHREAD *__fastcall KiIdleSchedule(__int64 a1)
{
  _KTHREAD *v2; // rdi
  __int64 v3; // r8
  unsigned __int64 v4; // r9
  _KTHREAD *v5; // rdx
  char v7; // cl
  unsigned __int64 v8; // r9
  unsigned __int8 *v9; // rax
  int v10; // edx
  __int64 *v11; // r8
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0LL;
  KiAcquirePrcbLocksForIsolationUnit(a1, 1, (unsigned __int64 *)&v12);
  *(_BYTE *)(a1 + 14523) = 0;
  if ( *(_QWORD *)(a1 + 16) == *(_QWORD *)(a1 + 24) )
    *(_QWORD *)(a1 + 16) = 0LL;
  v2 = KiSearchForNewThread((struct _KPRCB *)a1, 1, &v12);
  if ( !v2 )
    goto LABEL_4;
  KiCaptureTotalCyclesCurrentThread(a1, *(_QWORD *)(a1 + 24), v3, v4);
  *(_QWORD *)(a1 + 16) = 0LL;
  KiUpdatePriorityMatrixForRunningTransition(a1, v2);
  v7 = v12;
  v8 = v12 & 0xFFFFFFFFFFFFFFFEuLL;
  v12 &= ~1uLL;
  if ( (v7 & 1) == 0 )
  {
    v11 = &v12;
    v10 = 1;
    goto LABEL_12;
  }
  v9 = *(unsigned __int8 **)(v8 + 36504);
  v10 = *v9;
  v11 = (__int64 *)(v9 + 8);
  while ( v10 )
LABEL_12:
    _InterlockedAnd64((volatile signed __int64 *)(v11[--v10] + 48), 0LL);
  v5 = *(_KTHREAD **)(a1 + 24);
  if ( v2 == v5 )
  {
    v2 = 0LL;
    LOBYTE(v11) = 1;
    KiResumeThreadCycleAccumulation(a1, v5, v11);
LABEL_4:
    if ( KeHeteroSystem && !KeHeteroSystemVirtual )
      KiSendHeteroRescheduleIntRequest((_QWORD *)a1);
  }
  return v2;
}
