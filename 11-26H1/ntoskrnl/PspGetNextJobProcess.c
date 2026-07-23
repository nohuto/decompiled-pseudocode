/*
 * XREFs of PspGetNextJobProcess @ 0x1409FF594
 * Callers:
 *     PspExecuteJobFreezeThawCallback @ 0x1404B4BC0 (PspExecuteJobFreezeThawCallback.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1407F5658 (PspTerminateSiloSubsystemProcesses.c)
 *     PspWaitOnAllProcessesJobCallback @ 0x1407FFC00 (PspWaitOnAllProcessesJobCallback.c)
 *     PspTerminateProcessesJobCallback @ 0x1409FF320 (PspTerminateProcessesJobCallback.c)
 *     PspAssignProcessToJob @ 0x140AC79B8 (PspAssignProcessToJob.c)
 *     PspSetCpuRateControlJobPostCallback @ 0x140AED760 (PspSetCpuRateControlJobPostCallback.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140259C30 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockJobExclusive @ 0x1409FF694 (PspUnlockJobExclusive.c)
 *     PspLockJobExclusive @ 0x140A00154 (PspLockJobExclusive.c)
 */

_QWORD *__fastcall PspGetNextJobProcess(__int64 a1, __int64 a2, _QWORD *a3, void *a4)
{
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // r14
  _QWORD *v11; // rdi
  _QWORD *v12; // rbp
  __int64 v14; // rcx
  _QWORD *v15; // rax

  PspLockJobExclusive(a1, a2);
  if ( a4 )
  {
    v10 = (_QWORD *)(a1 + 40);
  }
  else
  {
    v8 = (_QWORD *)(a1 + 1320);
    v9 = *(_QWORD *)(a1 + 1320);
    if ( *(_QWORD *)(v9 + 8) != a1 + 1320 )
      goto LABEL_3;
    *a3 = v9;
    v10 = (_QWORD *)(a1 + 40);
    a3[1] = v8;
    *(_QWORD *)(v9 + 8) = a3;
    *v8 = a3;
    a3[2] = a1 + 40;
  }
  v11 = (_QWORD *)a3[2];
  while ( 1 )
  {
    v11 = (_QWORD *)*v11;
    if ( v11 == v10 )
      break;
    v12 = v11 - 107;
    if ( ObReferenceObjectSafeWithTag((__int64)(v11 - 107), 0x624A7350u) )
      goto LABEL_8;
  }
  v14 = *a3;
  if ( *(_QWORD **)(*a3 + 8LL) != a3 || (v15 = (_QWORD *)a3[1], (_QWORD *)*v15 != a3) )
LABEL_3:
    __fastfail(3u);
  *v15 = v14;
  v12 = 0LL;
  *(_QWORD *)(v14 + 8) = v15;
LABEL_8:
  a3[2] = v11;
  PspUnlockJobExclusive(a1, a2);
  if ( a4 )
    ObfDereferenceObjectWithTag(a4, 0x624A7350u);
  return v12;
}
