/*
 * XREFs of EtwpCovSampCaptureCleanupLookasides @ 0x1404F7CB0
 * Callers:
 *     EtwpCovSampCaptureContextStop @ 0x1404F7B1C (EtwpCovSampCaptureContextStop.c)
 *     EtwpCovSampCaptureCleanupDpc @ 0x1406CC640 (EtwpCovSampCaptureCleanupDpc.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x1406CCA80 (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 */

void __fastcall EtwpCovSampCaptureCleanupLookasides(__int64 a1)
{
  KSPIN_LOCK *v1; // rbp
  int v3; // r14d
  KIRQL v4; // r15
  _QWORD *i; // rdi
  __int64 *v6; // rdx
  int v7; // ecx
  bool v8; // cf

  v1 = (KSPIN_LOCK *)(a1 + 632);
  v3 = 1;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 632));
  if ( !*(_DWORD *)(a1 + 1280) && !*(_DWORD *)(a1 + 1288) )
  {
    for ( i = *(_QWORD **)(a1 + 944); i != (_QWORD *)(a1 + 944); i = (_QWORD *)*i )
      EtwpCovSampLookasideFlushFreeListToCleanupList(i - 2);
    v6 = *(__int64 **)(a1 + 960);
    if ( v6 == (__int64 *)(a1 + 960) )
      goto LABEL_11;
    do
    {
      v7 = 0;
      v8 = *((_DWORD *)v6 + 15) < *((_DWORD *)v6 + 14);
      v6 = (__int64 *)*v6;
      if ( !v8 )
        v7 = v3;
      v3 = v7;
    }
    while ( v6 != (__int64 *)(a1 + 960) );
    if ( v7 )
    {
LABEL_11:
      *(_DWORD *)(a1 + 1288) = 1;
      KeSetEvent((PRKEVENT)(a1 + 1256), 0, 0);
    }
  }
  KeReleaseSpinLock(v1, v4);
}
