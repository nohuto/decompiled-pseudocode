/*
 * XREFs of KeFreezeExecution @ 0x140502A50
 * Callers:
 *     ExpWaitForBootDevices @ 0x1406D17F0 (ExpWaitForBootDevices.c)
 *     KdEnterDebugger @ 0x140C1D858 (KdEnterDebugger.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x140332C98 (KxTryToAcquireSpinLock.c)
 *     KeStallExecutionProcessor @ 0x14037DCA0 (KeStallExecutionProcessor.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     KeRemoveProcessorAffinityEx @ 0x140453E40 (KeRemoveProcessorAffinityEx.c)
 *     RtlWriteTryAcquireTickLock @ 0x14049199C (RtlWriteTryAcquireTickLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSetDebuggerOwner @ 0x140532C74 (KiSetDebuggerOwner.c)
 *     VslRequestSecureKernelDebuggerBreakIn @ 0x1405C665C (VslRequestSecureKernelDebuggerBreakIn.c)
 *     KiSendFreeze @ 0x1405F8AD8 (KiSendFreeze.c)
 *     KiStartDebugAccumulation @ 0x1405F8BC4 (KiStartDebugAccumulation.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

bool KeFreezeExecution()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  bool v2; // r12
  unsigned __int8 CurrentIrql; // r15
  int v4; // edi
  char v5; // r14
  unsigned int v6; // esi
  char v7; // di
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v9; // rcx
  int v10; // esi
  __int64 v11; // rdx
  signed __int64 v12; // rbx
  __int64 v13; // rbx
  LARGE_INTEGER v14; // rax
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r8
  int v18; // [rsp+20h] [rbp-E0h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v20; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h]
  struct _KAFFINITY_EX v22; // [rsp+50h] [rbp-B0h] BYREF

  memset_0(&v22, 0, sizeof(v22));
  v21 = 0LL;
  v20 = 0LL;
  v18 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v2 = KeDisableInterrupts();
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v0) = 15;
    LOBYTE(v1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v1, v0);
  }
  KiFreezeFlag = 4;
  if ( (KeGetCurrentPrcb()->IpiFrozen & 0xF) != 4 )
  {
LABEL_6:
    v4 = 750000;
    do
    {
      v5 = KxTryToAcquireSpinLock((volatile signed __int32 *)&KdDebuggerLock);
      if ( v5 )
        break;
      if ( KiFreezeExecutionLock )
        goto LABEL_6;
      KeStallExecutionProcessor(4u);
      --v4;
    }
    while ( v4 );
    v6 = v5 != 0 ? 4 * (750000 - v4) : 0;
    KxAcquireSpinLock(&KiFreezeExecutionLock);
    v7 = 1;
    if ( v5 || (KiFreezeFlag & 1) == 0 )
      KdPortLocked = v5;
    else
      KiFreezeFlag |= 8u;
    if ( v6 > KdDebuggerLockMaxWaitTime )
      KdDebuggerLockMaxWaitTime = v6;
    CurrentPrcb = KeGetCurrentPrcb();
    KiStartDebugAccumulation(CurrentPrcb);
    LOBYTE(v9) = 1;
    guard_dispatch_icall_no_overrides(v9, 0LL);
    KiClockLatencyMeasurementEnabled = 0;
    if ( ((unsigned int)KeNumberProcessors_0 > 1 || CurrentPrcb->Number) && !PoAllProcIntrDisabled )
    {
      KiFreezeOwner = (__int64)CurrentPrcb;
      CurrentPrcb->IpiFrozen = 4;
      KiSetDebuggerOwner(CurrentPrcb);
      if ( !KiFreezeTimeout || LODWORD(stru_140E67200.Padding[3]) )
        v10 = 20000;
      else
        v10 = 20000 * KiFreezeTimeout;
      CurrentPrcb->ClockKeepAlive = 1;
      *(_QWORD *)&v22.Count = 2097153LL;
      memset_0(&v22.8, 0, sizeof(v22.8));
      RtlpCopyAffinityEx(&v22, v22.Size, (struct _KAFFINITY_EX *)&stru_140FC11F0.WaitRegister);
      KeRemoveProcessorAffinityEx(&v22.Count, CurrentPrcb->Number);
      if ( !KsepShimDbLock.WaitBlockFill6[100] && ((__int64)KiDpcWatchdogConfigurationLock.InitialStack & 3) == 3 )
        v7 = 0;
      LOBYTE(v11) = v7;
      KiSendFreeze(&v22, v11);
      *((_QWORD *)&v20 + 1) = v22.Bitmap[0];
      *(_QWORD *)&v20 = &v22;
LABEL_35:
      while ( !(unsigned int)KeEnumerateNextProcessor(&v18, (unsigned __int16 **)&v20) )
      {
        v12 = KiProcessorBlock[v18];
        while ( *(_DWORD *)(v12 + 11656) != 2 )
        {
          if ( !v10 )
          {
            KiFreezeFlag |= 2u;
            _InterlockedCompareExchange64(&KiFreezeSkippedProcessor, v12, 0LL);
            if ( VslVsmEnabled
              && (_BYTE)KdDebuggerEnabled
              && ((__int64)KiDpcWatchdogConfigurationLock.InitialStack & 3) == 0 )
            {
              VslRequestSecureKernelDebuggerBreakIn();
            }
            goto LABEL_35;
          }
          KeStallExecutionProcessor(0x32u);
          --v10;
        }
      }
    }
    KiOldIrql = CurrentIrql;
    if ( !PoAllProcIntrDisabled )
    {
      v13 = MmWriteableSharedUserData;
      if ( RtlWriteTryAcquireTickLock((signed __int64 *)(MmWriteableSharedUserData + 832)) )
      {
        v14 = KeQueryPerformanceCounter(&PerformanceFrequency);
        v15 = KeMaximumIncrement;
        v16 = MEMORY[0xFFFFF78000000008]
            + 10000000 * (v14.QuadPart - MEMORY[0xFFFFF78000000350]) / (unsigned __int64)PerformanceFrequency.LowPart;
        *(_DWORD *)(MmWriteableSharedUserData + 16) = HIDWORD(v16);
        *(_QWORD *)(MmWriteableSharedUserData + 8) = v16;
        if ( (_DWORD)v15 )
        {
          KiTickOffset = v15 * (v16 / v15 + 1) - v16;
          *(_DWORD *)(MmWriteableSharedUserData + 808) = (v16 / v15) >> 32;
          *(_QWORD *)(MmWriteableSharedUserData + 800) = v16 / v15;
        }
        ++*(_QWORD *)(v13 + 832);
      }
    }
  }
  return v2;
}
