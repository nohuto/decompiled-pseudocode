/*
 * XREFs of PspGetNextJobProcess @ 0x140959CD4
 * Callers:
 *     PspExecuteJobFreezeThawCallback @ 0x1404BB3E0 (PspExecuteJobFreezeThawCallback.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1407EFAF8 (PspTerminateSiloSubsystemProcesses.c)
 *     PspWaitOnAllProcessesJobCallback @ 0x1407FA1D0 (PspWaitOnAllProcessesJobCallback.c)
 *     PspSetCpuRateControlJobPostCallback @ 0x140958080 (PspSetCpuRateControlJobPostCallback.c)
 *     PspTerminateProcessesJobCallback @ 0x140959A60 (PspTerminateProcessesJobCallback.c)
 *     PspAssignProcessToJob @ 0x140AC5D48 (PspAssignProcessToJob.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140258450 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockJobExclusive @ 0x140959DD4 (PspUnlockJobExclusive.c)
 *     PspLockJobExclusive @ 0x14095A894 (PspLockJobExclusive.c)
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
