/*
 * XREFs of FsRtlpOplockPerfPrepareToSendData @ 0x14078F2FC
 * Callers:
 *     FsRtlpOplockPerfSendData @ 0x140AE8CD4 (FsRtlpOplockPerfSendData.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140446880 (KiQueryUnbiasedInterruptTime.c)
 *     FsRtlpOplockPerfCleanupData @ 0x14078F18C (FsRtlpOplockPerfCleanupData.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

char FsRtlpOplockPerfPrepareToSendData()
{
  __int64 UnbiasedInterruptTime; // rax
  char v1; // cl
  __int64 v2; // rbx
  __int64 Pool2; // rax
  char result; // al

  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v2 = UnbiasedInterruptTime;
  if ( byte_140E65AB1 && UnbiasedInterruptTime - qword_140E65AD8 >= (unsigned __int64)qword_140E65AD0 )
  {
    byte_140E65AB0 = v1;
    g_OplockPerfSummaryContext = ExAllocatePool2(0x100uLL);
    if ( g_OplockPerfSummaryContext )
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      qword_140E65AB8 = Pool2;
      if ( Pool2 )
      {
        *(_QWORD *)&xmmword_140E65AC0 = Pool2;
        *((_QWORD *)&xmmword_140E65AC0 + 1) = Pool2 + 128;
        result = 1;
        qword_140E65AD8 = v2;
        return result;
      }
    }
    FsRtlpOplockPerfCleanupData();
  }
  else
  {
    byte_140E65AB0 = 0;
  }
  return 0;
}
