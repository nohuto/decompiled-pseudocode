/*
 * XREFs of IopTimerDispatch @ 0x1404CD7F0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     EtwTraceTimedEvent @ 0x14032D7A0 (EtwTraceTimedEvent.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032F2E0 (EtwGetKernelTraceTimestamp.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     _local_unwind @ 0x140538480 (_local_unwind.c)
 *     RtlpComputeEpilogueOffset @ 0x140555648 (RtlpComputeEpilogueOffset.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     KiCustomAccessRoutine1 @ 0x1407372C0 (KiCustomAccessRoutine1.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall IopTimerDispatch(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v8; // r14d
  __int64 v9; // r8
  KIRQL v10; // r12
  int v11; // esi
  struct _KTHREAD *i; // rbx
  _DWORD v13[86]; // [rsp+0h] [rbp-228h] BYREF
  __int64 v14; // [rsp+158h] [rbp-D0h]
  _BYTE v15[10]; // [rsp+160h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+16Ah] [rbp-BEh]
  __int64 v17; // [rsp+1A2h] [rbp-86h]
  __int64 v18; // [rsp+1B2h] [rbp-76h]
  _DWORD *v19; // [rsp+1C0h] [rbp-68h]
  _OWORD v20[2]; // [rsp+1D8h] [rbp-50h] BYREF

  v19 = v13;
  v14 = a2;
  v8 = DWORD2(PerfGlobalGroupMask) & 0x800000;
  v13[31] = DWORD2(PerfGlobalGroupMask) & 0x800000;
  memset_0(v15, 0, 0x5AuLL);
  if ( (unsigned __int64)((a2 >> 47) + 1) > 1 )
  {
    v13[12] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v18 = a3;
    v16 = __ROL8__(a2, a3);
    v17 = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine1(a2);
  }
  if ( *(_DWORD *)a2 )
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
    v11 = *(_DWORD *)a2;
    for ( i = *(struct _KTHREAD **)&IopPerfIoTrackingLock.WaitBlockFill11[64];
          i != (struct _KTHREAD *)&IopPerfIoTrackingLock.WaitBlockFill11[64] && v11;
          i = *(struct _KTHREAD **)&i->Header.Lock )
    {
      if ( WORD1(i[-1].Padding[4]) )
      {
        if ( v8 )
        {
          memset(v20, 0, sizeof(v20));
          EtwGetKernelTraceTimestamp((unsigned __int64)v20, 0x40800000uLL, v9);
          guard_dispatch_icall_no_overrides(i->QuantumTarget, i->SListFaultAddress);
          EtwTraceTimedEvent(3910, 0x40800000u, (__int64)&i->Header.WaitListHead.Blink, 8, 5245442, (__int64)v20);
        }
        else
        {
          guard_dispatch_icall_no_overrides(i->QuantumTarget, i->SListFaultAddress);
        }
        --v11;
      }
    }
    KeReleaseSpinLock(&IopTimerLock, v10);
  }
}
