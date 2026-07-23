/*
 * XREFs of EtwpCovSampCaptureSample @ 0x1406CC924
 * Callers:
 *     EtwTracePageFault @ 0x1402162F0 (EtwTracePageFault.c)
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 *     EtwpCoverageSamplerReadyThread @ 0x140533BB8 (EtwpCoverageSamplerReadyThread.c)
 *     EtwpCoverageSamplerContextSwap @ 0x140534A54 (EtwpCoverageSamplerContextSwap.c)
 *     EtwpCovSampProfileInterrupt @ 0x1406CCBD0 (EtwpCovSampProfileInterrupt.c)
 * Callees:
 *     EtwpCovSampSafeForUserAddressCapture @ 0x140260BD8 (EtwpCovSampSafeForUserAddressCapture.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x14030A994 (EtwpCovSampCaptureBufferQueue.c)
 *     ExSaDecodeHandle @ 0x14030C290 (ExSaDecodeHandle.c)
 *     EtwpCovSampCaptureBufferRelease @ 0x140470B28 (EtwpCovSampCaptureBufferRelease.c)
 *     EtwpCovSampCaptureBufferAddIP @ 0x1404A4CA4 (EtwpCovSampCaptureBufferAddIP.c)
 *     EtwpCovSampCaptureBufferGet @ 0x1404FAF70 (EtwpCovSampCaptureBufferGet.c)
 *     EtwpCovSampCaptureKernelStack @ 0x1406CC658 (EtwpCovSampCaptureKernelStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406CC720 (EtwpCovSampCaptureQueueApc.c)
 *     EtwpCovSampCaptureUserAddresses @ 0x140A36414 (EtwpCovSampCaptureUserAddresses.c)
 */

int __fastcall EtwpCovSampCaptureSample(unsigned __int64 a1, unsigned int a2)
{
  struct _LIST_ENTRY *Blink; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  BOOL v11; // [rsp+50h] [rbp+18h] BYREF

  Blink = ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v11 = 0;
  v7 = (ExSaDecodeHandle(*(_QWORD *)(ExpSysDbgLock.InGlobalUpdateVpThreadPriorityList + 8)) + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( *(_DWORD *)(v7 + 60) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 304));
  }
  else
  {
    LODWORD(v7) = a1 - 1;
    if ( a1 - 1 > 0xFFFF7FFFFFFFFFFEuLL )
    {
      v7 = (__int64)EtwpCovSampCaptureBufferGet((__int64)Blink);
      v5 = v7;
      if ( v7 )
      {
        EtwpCovSampCaptureBufferAddIP(v7, a1);
        if ( !HIDWORD(Blink[80].Blink) )
          EtwpCovSampCaptureKernelStack(v9, a2);
        LODWORD(v7) = EtwpCovSampCaptureBufferQueue((__int64)Blink, v5);
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
              LODWORD(v7) = EtwpCovSampSafeForUserAddressCapture(0, &v11, v8);
              if ( (int)v7 >= 0 )
              {
                if ( !_interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x17u) )
                {
                  LODWORD(v7) = EtwpCovSampCaptureUserAddresses(Blink, a1);
                  _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFF7FFFFF);
                }
              }
              else if ( !v11 )
              {
                LODWORD(v7) = EtwpCovSampCaptureQueueApc(a1);
              }
            }
          }
        }
      }
    }
    if ( v5 )
      LODWORD(v7) = EtwpCovSampCaptureBufferRelease((__int64)Blink, v5);
  }
  return v7;
}
