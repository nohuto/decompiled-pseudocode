/*
 * XREFs of UcOnUnexpectedCodePath @ 0x14068920C
 * Callers:
 *     RtlLogUnexpectedCodepath @ 0x1405E39C0 (RtlLogUnexpectedCodepath.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeInsertQueueApc @ 0x1402EFFB0 (KeInsertQueueApc.c)
 *     RtlCaptureStackBackTrace @ 0x140347BC0 (RtlCaptureStackBackTrace.c)
 *     UcpFindOrCreateTelemetryRecord @ 0x1406894A0 (UcpFindOrCreateTelemetryRecord.c)
 *     UcpLogEventGenerateDump @ 0x14068964C (UcpLogEventGenerateDump.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall UcOnUnexpectedCodePath(int *a1)
{
  unsigned int v1; // ebx
  struct _KTHREAD *CurrentThread; // rdi
  KIRQL v5; // al
  KIRQL v6; // bp
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 Pool2; // rdi
  void *v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+2Ch] [rbp-1Ch]
  int v14; // [rsp+30h] [rbp-18h]
  int v15; // [rsp+34h] [rbp-14h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v1 = 0;
  v15 = 0;
  CurrentThread = KeGetCurrentThread();
  v11 = retaddr;
  v12 = *a1;
  v13 = a1[1];
  v14 = a1[2];
  if ( UcpLockOwningThread && CurrentThread == (struct _KTHREAD *)UcpLockOwningThread )
    return 3221225485LL;
  v5 = KeAcquireSpinLockRaiseToDpc(&UcSpinLock);
  UcpLockOwningThread = (__int64)CurrentThread;
  v6 = v5;
  v7 = UcpFindOrCreateTelemetryRecord(&v11);
  v8 = v7;
  if ( v7 )
  {
    ++*(_DWORD *)(v7 + 16);
    ++*(_DWORD *)(v7 + 20);
    v9 = MEMORY[0xFFFFF78000000320] * KeMaximumIncrement / 10000LL;
    if ( (unsigned __int64)(v9 - *(_QWORD *)(v7 + 8)) > 0xEA60 )
    {
      UcpLockOwningThread = 0LL;
      *(_QWORD *)(v7 + 8) = v9;
      KeReleaseSpinLock(&UcSpinLock, v6);
      if ( KeGetCurrentIrql() )
      {
        Pool2 = ExAllocatePool2(0x40uLL);
        if ( Pool2 )
        {
          *(_QWORD *)(Pool2 + 8) = KeGetCurrentThread();
          *(_WORD *)Pool2 = 18;
          *(_QWORD *)(Pool2 + 32) = AlpcMessageDeleteProcedure;
          *(_QWORD *)(Pool2 + 40) = PspUserApcKernelRoutine;
          *(_QWORD *)(Pool2 + 48) = UcpApcNormalRoutine;
          *(_BYTE *)(Pool2 + 2) = 88;
          *(_WORD *)(Pool2 + 80) = 0;
          *(_QWORD *)(Pool2 + 56) = Pool2;
          *(_BYTE *)(Pool2 + 82) = 0;
          RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(Pool2 + 112), 0LL);
          *(_QWORD *)(Pool2 + 88) = *(_QWORD *)a1;
          *(_DWORD *)(Pool2 + 96) = a1[2];
          *(_QWORD *)(Pool2 + 104) = v8;
          if ( !(unsigned __int8)KeInsertQueueApc(Pool2, 0LL, 0LL, 0) )
          {
            ExFreePoolWithTag((PVOID)Pool2, 0);
            return (unsigned int)-1073741823;
          }
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
      else
      {
        UcpLogEventGenerateDump(a1, v8);
      }
      return v1;
    }
  }
  else
  {
    v1 = -1073741801;
  }
  UcpLockOwningThread = 0LL;
  KeReleaseSpinLock(&UcSpinLock, v6);
  return v1;
}
