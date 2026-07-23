/*
 * XREFs of FsRtlpOplockPerfPrepareToSendData @ 0x140791E2C
 * Callers:
 *     FsRtlpOplockPerfSendData @ 0x140AEAF28 (FsRtlpOplockPerfSendData.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14043F380 (KiQueryUnbiasedInterruptTime.c)
 *     FsRtlpOplockPerfCleanupData @ 0x140791CBC (FsRtlpOplockPerfCleanupData.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
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
  if ( byte_140E65DC1 && UnbiasedInterruptTime - qword_140E65DE8 >= (unsigned __int64)qword_140E65DE0 )
  {
    byte_140E65DC0 = v1;
    g_OplockPerfSummaryContext = ExAllocatePool2(0x100uLL);
    if ( g_OplockPerfSummaryContext )
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      qword_140E65DC8 = Pool2;
      if ( Pool2 )
      {
        *(_QWORD *)&xmmword_140E65DD0 = Pool2;
        *((_QWORD *)&xmmword_140E65DD0 + 1) = Pool2 + 128;
        result = 1;
        qword_140E65DE8 = v2;
        return result;
      }
    }
    FsRtlpOplockPerfCleanupData();
  }
  else
  {
    byte_140E65DC0 = 0;
  }
  return 0;
}
