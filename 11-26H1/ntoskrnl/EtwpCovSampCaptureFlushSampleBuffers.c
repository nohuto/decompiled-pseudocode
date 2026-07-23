/*
 * XREFs of EtwpCovSampCaptureFlushSampleBuffers @ 0x140527768
 * Callers:
 *     EtwpCovSampCaptureContextStop @ 0x1404F7B1C (EtwpCovSampCaptureContextStop.c)
 *     EtwpCovSampCaptureFlush @ 0x140A32C74 (EtwpCovSampCaptureFlush.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140275D20 (KeQueryMaximumProcessorCountEx.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x14030AB58 (EtwpCovSampTryAcquireBufferLock.c)
 *     EtwpCovSampSampleBufferDecRef @ 0x1406CCD50 (EtwpCovSampSampleBufferDecRef.c)
 */

void __fastcall EtwpCovSampCaptureFlushSampleBuffers(__int64 a1)
{
  ULONG MaximumProcessorCount; // eax
  __int64 v3; // rdi
  __int64 v4; // rbp
  KSPIN_LOCK v5; // rsi
  __int64 v6; // r11
  unsigned int v7; // ecx
  KSPIN_LOCK *v8; // rbx
  KIRQL NewIrql; // [rsp+40h] [rbp+8h] BYREF

  NewIrql = 0;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  if ( MaximumProcessorCount )
  {
    v3 = 0LL;
    v4 = MaximumProcessorCount;
    do
    {
      v5 = 0LL;
      v6 = ((unsigned int)*(_QWORD *)(a1 + 8) >> 13) & 0x3FFFF;
      _BitScanReverse(&v7, v6);
      v8 = (KSPIN_LOCK *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)ExSaPageGroupDescriptorArrayLock.SListFaultAddress
                                                             + v3)
                                                 + 8LL * (v7 - 2))
                                     + 8 * (v6 ^ (unsigned int)(1 << v7))
                                     + 8)
                         + 8 * ((*(_QWORD *)(a1 + 8) >> 4) & 0x1FFLL)
                         + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      if ( (unsigned int)EtwpCovSampTryAcquireBufferLock((volatile signed __int32 *)v8, &NewIrql) )
      {
        if ( v8[1] )
        {
          v5 = v8[1];
          v8[1] = 0LL;
        }
        KeReleaseSpinLock(v8, NewIrql);
        if ( v5 )
          EtwpCovSampSampleBufferDecRef(a1, v5);
      }
      v3 += 8LL;
      --v4;
    }
    while ( v4 );
  }
}
