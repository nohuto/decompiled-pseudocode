/*
 * XREFs of IopCancelIrpsInFileObjectList @ 0x140515BDC
 * Callers:
 *     IopCheckHandleForRevocation @ 0x1405CE320 (IopCheckHandleForRevocation.c)
 *     IopCancelIoFile @ 0x14094A544 (IopCancelIoFile.c)
 *     IopCleanupProcessResources @ 0x140A288F0 (IopCleanupProcessResources.c)
 *     NtCancelIoFile @ 0x140AD0240 (NtCancelIoFile.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     IoFreeIrp @ 0x140267DD0 (IoFreeIrp.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     IoCancelIrp @ 0x140495490 (IoCancelIrp.c)
 *     IopCheckListForCancelableIrp @ 0x140515DDC (IopCheckListForCancelableIrp.c)
 */

__int64 __fastcall IopCancelIrpsInFileObjectList(__int64 a1, int a2, int a3, int a4, char a5, char a6)
{
  _QWORD *v6; // r14
  int v7; // ebx
  __int64 Flink; // rsi
  int v10; // r13d
  KSPIN_LOCK *v12; // rdi
  KIRQL v13; // r15
  __int64 v14; // r12
  char v15; // al
  PIRP v16; // rbx
  unsigned __int64 UserApcRoutine; // rcx
  unsigned __int64 v18; // r8
  __int64 v19; // r9
  PIRP Irp; // [rsp+30h] [rbp-68h] BYREF
  LARGE_INTEGER Interval; // [rsp+38h] [rbp-60h] BYREF
  __int64 v22; // [rsp+40h] [rbp-58h]
  unsigned int v23; // [rsp+A0h] [rbp+8h]

  v6 = (_QWORD *)(a1 + 192);
  v7 = a4;
  Flink = 0LL;
  Irp = 0LL;
  v23 = 0;
  v10 = 1;
  v22 = 0LL;
  if ( !*(_QWORD *)(a1 + 192) )
    return 0LL;
  v12 = (KSPIN_LOCK *)(a1 + 184);
  Interval.QuadPart = -10000LL;
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  if ( a6 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 80), 0x400u);
  while ( 1 )
  {
    v14 = Flink;
    if ( (_QWORD *)*v6 == v6 )
      break;
    v15 = IopCheckListForCancelableIrp((_DWORD)v6, a2, a3, v7, Flink, (__int64)&Irp);
    v16 = Irp;
    Flink = 0LL;
    if ( Irp )
    {
      if ( !Irp->Cancel )
      {
        v23 = 1;
        Irp->Cancel = 1;
        KeReleaseSpinLock(v12, v13);
        IoCancelIrp(v16);
        v13 = KeAcquireSpinLockRaiseToDpc(v12);
      }
      if ( (v16->Flags & 0x2000) != 0 )
        Flink = (__int64)v16->ThreadListEntry.Flink;
      UserApcRoutine = (unsigned __int64)v16->Overlay.AsynchronousParameters.UserApcRoutine;
      do
      {
        v18 = UserApcRoutine;
        v19 = ((UserApcRoutine >> 1) & 3) - 1;
        UserApcRoutine = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&v16->Overlay,
                           UserApcRoutine & 0xFFFFFFFFFFFFFFF9uLL | (2 * v19),
                           UserApcRoutine);
      }
      while ( v18 != UserApcRoutine );
      if ( !(_DWORD)v19 )
        IoFreeIrp(v16);
      v7 = a4;
      if ( (_QWORD *)Flink == v6 )
      {
        if ( !a5 )
          break;
        Flink = 0LL;
        goto LABEL_25;
      }
    }
    else
    {
      if ( !a5 )
        break;
      if ( v15 )
      {
        if ( !v14 )
          break;
      }
      else
      {
        v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 88LL);
        KeReleaseSpinLock(v12, v13);
        KeDelayExecutionThread(0, 0, &Interval);
        if ( v10 < 100 )
        {
          v10 *= 2;
          Interval.QuadPart = -10000 * v10;
        }
        v13 = KeAcquireSpinLockRaiseToDpc(v12);
      }
LABEL_25:
      v7 = a4;
    }
  }
  KeReleaseSpinLock(v12, v13);
  return v23;
}
