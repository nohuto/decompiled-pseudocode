/*
 * XREFs of PopPepRequestWork @ 0x1403BB1C8
 * Callers:
 *     PopPepProcessEvent @ 0x1403B9A00 (PopPepProcessEvent.c)
 *     PopPepUpdateConstraints @ 0x1403BD4FC (PopPepUpdateConstraints.c)
 *     PopPepSurprisePowerOn @ 0x1403C145C (PopPepSurprisePowerOn.c)
 *     PopPepIdleTimeoutRoutine @ 0x14047D3E0 (PopPepIdleTimeoutRoutine.c)
 *     PopPepComponentSetWakeHint @ 0x1404EE82C (PopPepComponentSetWakeHint.c)
 *     PopPepCompleteComponentIdleState @ 0x1405005E4 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetResidency @ 0x140614364 (PopPepComponentSetResidency.c)
 * Callees:
 *     ExTryQueueWorkItem @ 0x140383E20 (ExTryQueueWorkItem.c)
 *     KeReleaseSemaphore @ 0x1403BBA30 (KeReleaseSemaphore.c)
 */

void __fastcall PopPepRequestWork(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r8d
  __int64 v4; // rbp
  _ULARGE_INTEGER *p_ReadTransferCount; // rbx
  __int64 v6; // rsi

  if ( a3 > a2 )
  {
    v3 = a3 - a2;
    if ( v3 )
    {
      v4 = v3;
      p_ReadTransferCount = (_ULARGE_INTEGER *)&PopFxBlockingDeviceListLock.ReadTransferCount;
      if ( (*(_QWORD *)(a1 + 24) & 0x20LL) != 0 )
        p_ReadTransferCount = &PopFxBlockingDeviceListLock.Timer.DueTime;
      do
      {
        KeReleaseSemaphore((PRKSEMAPHORE)&p_ReadTransferCount[8], 0, 1, 0);
        v6 = 0LL;
        do
        {
          _m_prefetchw(&p_ReadTransferCount[12]);
          if ( ((1 << v6) & _InterlockedOr((volatile signed __int32 *)&p_ReadTransferCount[12], 1 << v6)) == 0 )
          {
            if ( ExTryQueueWorkItem(
                   (_ULARGE_INTEGER *)&p_ReadTransferCount[4 * v6 + 14 + (unsigned int)v6].QuadPart,
                   48LL) )
            {
              break;
            }
            _InterlockedAnd((volatile signed __int32 *)&p_ReadTransferCount[12], ~(1 << v6));
          }
          v6 = (unsigned int)(v6 + 1);
        }
        while ( (unsigned int)v6 < 4 );
        --v4;
      }
      while ( v4 );
    }
  }
}
