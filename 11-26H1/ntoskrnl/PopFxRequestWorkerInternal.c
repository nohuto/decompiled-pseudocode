/*
 * XREFs of PopFxRequestWorkerInternal @ 0x1403BBCF4
 * Callers:
 *     PopFxRequestWorker @ 0x140608530 (PopFxRequestWorker.c)
 * Callees:
 *     ExTryQueueWorkItem @ 0x140383E20 (ExTryQueueWorkItem.c)
 *     KeReleaseSemaphore @ 0x1403BBA30 (KeReleaseSemaphore.c)
 */

char __fastcall PopFxRequestWorkerInternal(__int64 a1, char a2)
{
  _ULARGE_INTEGER *p_ReadTransferCount; // rbx
  signed __int32 v4; // eax
  __int64 v5; // rsi

  if ( a1 )
  {
    p_ReadTransferCount = (_ULARGE_INTEGER *)(a1 + 120);
  }
  else
  {
    p_ReadTransferCount = (_ULARGE_INTEGER *)&PopFxBlockingDeviceListLock.ReadTransferCount;
    if ( (a2 & 1) != 0 )
      p_ReadTransferCount = &PopFxBlockingDeviceListLock.Timer.DueTime;
  }
  LOBYTE(v4) = KeReleaseSemaphore((PRKSEMAPHORE)&p_ReadTransferCount[8], 0, 1, 0);
  if ( !a1 || (*(_BYTE *)(a1 + 24) & 1) != 0 )
  {
    v5 = 0LL;
    do
    {
      _m_prefetchw(&p_ReadTransferCount[12]);
      v4 = _InterlockedOr((volatile signed __int32 *)&p_ReadTransferCount[12], 1 << v5);
      if ( ((1 << v5) & v4) == 0 )
      {
        LOBYTE(v4) = ExTryQueueWorkItem(
                       (_ULARGE_INTEGER *)&p_ReadTransferCount[4 * v5 + 14 + (unsigned int)v5].QuadPart,
                       48LL);
        if ( (_BYTE)v4 )
          return v4;
        _InterlockedAnd((volatile signed __int32 *)&p_ReadTransferCount[12], ~(1 << v5));
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < 4 );
  }
  return v4;
}
