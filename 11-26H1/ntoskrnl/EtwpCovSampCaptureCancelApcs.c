/*
 * XREFs of EtwpCovSampCaptureCancelApcs @ 0x1406CC578
 * Callers:
 *     EtwpCovSampCaptureContextStop @ 0x1404F7B1C (EtwpCovSampCaptureContextStop.c)
 * Callees:
 *     EtwpCovSampCaptureApcRelease @ 0x140260DB8 (EtwpCovSampCaptureApcRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeRemoveQueueApc @ 0x140460EE0 (KeRemoveQueueApc.c)
 */

void __fastcall EtwpCovSampCaptureCancelApcs(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 *v2; // rbx
  KSPIN_LOCK *v3; // r14
  void *v4; // rsi
  KIRQL v5; // r15

  if ( *(_DWORD *)(a1 + 716) != *(_DWORD *)(a1 + 712) )
  {
    v1 = (__int64 *)(a1 + 672);
    v2 = *(__int64 **)(a1 + 672);
    if ( v2 != (__int64 *)(a1 + 672) )
    {
      v3 = (KSPIN_LOCK *)(a1 + 632);
      do
      {
        v4 = 0LL;
        v5 = KeAcquireSpinLockRaiseToDpc(v3);
        if ( *((_BYTE *)v2 + 114) )
        {
          v4 = (void *)v2[5];
          if ( v4 )
            ObfReferenceObjectWithTag((PVOID)v2[5], 0x746C6644u);
        }
        KeReleaseSpinLock(v3, v5);
        if ( v4 )
        {
          if ( KeRemoveQueueApc((__int64)(v2 + 4)) )
            EtwpCovSampCaptureApcRelease((PSLIST_ENTRY)(v2 - 3));
          ObfDereferenceObjectWithTag(v4, 0x746C6644u);
        }
        v2 = (__int64 *)*v2;
      }
      while ( v2 != v1 );
    }
  }
}
