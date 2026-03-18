/*
 * XREFs of EtwpCovSampCaptureSample @ 0x1406C8944
 * Callers:
 *     EtwTracePageFault @ 0x140215FC0 (EtwTracePageFault.c)
 *     KiSwapThread @ 0x14023C0A0 (KiSwapThread.c)
 *     EtwpCoverageSamplerReadyThread @ 0x140531710 (EtwpCoverageSamplerReadyThread.c)
 *     EtwpCoverageSamplerContextSwap @ 0x1405325B4 (EtwpCoverageSamplerContextSwap.c)
 *     EtwpCovSampProfileInterrupt @ 0x1406C8BF0 (EtwpCovSampProfileInterrupt.c)
 * Callees:
 *     EtwpCovSampSafeForUserAddressCapture @ 0x140261668 (EtwpCovSampSafeForUserAddressCapture.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x1402BFCD0 (EtwpCovSampCaptureBufferQueue.c)
 *     ExSaDecodeHandle @ 0x1402C15D0 (ExSaDecodeHandle.c)
 *     EtwpCovSampCaptureBufferRelease @ 0x1404773A8 (EtwpCovSampCaptureBufferRelease.c)
 *     EtwpCovSampCaptureBufferAddIP @ 0x1404AB614 (EtwpCovSampCaptureBufferAddIP.c)
 *     EtwpCovSampCaptureBufferGet @ 0x140501780 (EtwpCovSampCaptureBufferGet.c)
 *     EtwpCovSampCaptureKernelStack @ 0x1406C8678 (EtwpCovSampCaptureKernelStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406C8740 (EtwpCovSampCaptureQueueApc.c)
 *     EtwpCovSampCaptureUserAddresses @ 0x140A23904 (EtwpCovSampCaptureUserAddresses.c)
 */

int __fastcall EtwpCovSampCaptureSample(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  BOOL v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = ExpSysDbgLock.TracingPrivate[0];
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v10 = 0;
  v7 = (ExSaDecodeHandle(*(_QWORD *)(ExpSysDbgLock.TracingPrivate[0] + 8)) + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( *(_DWORD *)(v7 + 60) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 304));
  }
  else
  {
    LODWORD(v7) = a1 - 1;
    if ( a1 - 1 > 0xFFFF7FFFFFFFFFFEuLL )
    {
      v7 = (__int64)EtwpCovSampCaptureBufferGet(v2);
      v5 = v7;
      if ( v7 )
      {
        EtwpCovSampCaptureBufferAddIP(v7, a1);
        if ( !*(_DWORD *)(v2 + 1292) )
          EtwpCovSampCaptureKernelStack(v8, a2);
        LODWORD(v7) = EtwpCovSampCaptureBufferQueue(v2, v5);
        v5 = 0LL;
      }
      a1 = 0LL;
    }
    if ( (CurrentThread->MiscFlags & 0x400) == 0 )
    {
      LODWORD(v7) = *((_DWORD *)&CurrentThread[1].SwapListEntry + 2);
      if ( (v7 & 1) == 0 && (CurrentThread->MiscFlags & 0x4000) != 0 )
      {
        if ( CurrentThread->Teb )
        {
          LODWORD(v7) = CurrentThread->Process->FreezeCount + ((*(_DWORD *)&CurrentThread->Process->0 >> 3) & 1);
          if ( !(_DWORD)v7 )
          {
            LODWORD(v7) = (unsigned __int8)CurrentThread->SuspendCount;
            if ( !(_BYTE)v7 )
            {
              LODWORD(v7) = EtwpCovSampSafeForUserAddressCapture(0, &v10);
              if ( (int)v7 >= 0 )
              {
                if ( !_interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x17u) )
                {
                  LODWORD(v7) = EtwpCovSampCaptureUserAddresses(v2, a1);
                  _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFF7FFFFF);
                }
              }
              else if ( !v10 )
              {
                LODWORD(v7) = EtwpCovSampCaptureQueueApc(a1);
              }
            }
          }
        }
      }
    }
    if ( v5 )
      LODWORD(v7) = EtwpCovSampCaptureBufferRelease(v2, v5);
  }
  return v7;
}
