/*
 * XREFs of EtwpCovSampCaptureFlush @ 0x14093FB64
 * Callers:
 *     EtwpCoverageSamplerQuery @ 0x14093FBF0 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140488DF0 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1405250F8 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

NTSTATUS __fastcall EtwpCovSampCaptureFlush(__int64 a1)
{
  struct _SLIST_ENTRY v3; // [rsp+30h] [rbp-58h] BYREF
  __int64 v4; // [rsp+40h] [rbp-48h]
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  *((_QWORD *)&v3.Next + 1) = 0LL;
  EtwpCovSampCaptureFlushSampleBuffers(a1);
  memset_0(&v3, 0, 0x50uLL);
  v3.Next = (_SLIST_ENTRY *)6941;
  v4 = 4054171642LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  EtwpCovSampCaptureQueueBuffer(a1, &v3);
  return KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
}
