/*
 * XREFs of EtwpCovSampCaptureContextStop @ 0x1404F7B1C
 * Callers:
 *     EtwpCoverageSamplerStop @ 0x1409BDF40 (EtwpCoverageSamplerStop.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x1404F7CB0 (EtwpCovSampCaptureCleanupLookasides.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x140527768 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     EtwpCovSampCaptureCancelApcs @ 0x1406CC578 (EtwpCovSampCaptureCancelApcs.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x140B600D8 (EtwpCovSampCaptureFreeLookasides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCovSampCaptureContextStop(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  KSPIN_LOCK *v2; // rdi
  KIRQL v4; // al
  bool v5; // zf
  KIRQL v6; // bp
  _QWORD *i; // rdx
  LARGE_INTEGER v8; // rdi
  void *v9; // rcx
  void *v10; // rcx
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = (KSPIN_LOCK *)(a1 + 632);
  --CurrentThread->KernelApcDisable;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 632));
  v5 = *(_DWORD *)(a1 + 1284) == 0;
  v6 = v4;
  *(_DWORD *)(a1 + 1280) = 0;
  if ( !v5 )
    *(_DWORD *)(a1 + 1284) = 0;
  for ( i = *(_QWORD **)(a1 + 944); i != (_QWORD *)(a1 + 944); i = (_QWORD *)*i )
    i[3] = 0LL;
  KeResetEvent((PRKEVENT)(a1 + 1256));
  *(_DWORD *)(a1 + 1288) = 0;
  KeReleaseSpinLock(v2, v6);
  EtwpCovSampCaptureFlushSampleBuffers(a1);
  EtwpCovSampCaptureCleanupLookasides(a1);
  v8.QuadPart = -2500000LL;
  Timeout.QuadPart = -2500000LL;
  while ( KeWaitForSingleObject((PVOID)(a1 + 1256), Executive, 0, 0, &Timeout) )
  {
    EtwpCovSampCaptureCancelApcs(a1);
    EtwpCovSampCaptureFlushSampleBuffers(a1);
    v8.QuadPart *= 2LL;
    Timeout = v8;
    if ( v8.QuadPart < -9600000000LL )
    {
      Timeout.QuadPart = -9600000000LL;
      v8.QuadPart = -9600000000LL;
    }
  }
  EtwpCovSampCaptureFreeLookasides(a1);
  v9 = *(void **)(a1 + 1320);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x56777445u);
    *(_QWORD *)(a1 + 1320) = 0LL;
  }
  v10 = *(void **)(a1 + 1328);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0x56777445u);
    *(_QWORD *)(a1 + 1328) = 0LL;
  }
  *(_QWORD *)(a1 + 1312) = 0LL;
  KeLeaveCriticalRegion();
}
