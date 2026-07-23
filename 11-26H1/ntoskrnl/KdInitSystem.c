/*
 * XREFs of KdInitSystem @ 0x140C18B60
 * Callers:
 *     KdEnableDebuggerWithLock @ 0x1405E64BC (KdEnableDebuggerWithLock.c)
 *     KeEnterKernelDebugger @ 0x1405E99E0 (KeEnterKernelDebugger.c)
 *     KiSystemStartup @ 0x140BEF640 (KiSystemStartup.c)
 *     KiSetFeatureBits @ 0x140BFD4E8 (KiSetFeatureBits.c)
 *     PopHiberCheckResume @ 0x140C008A0 (PopHiberCheckResume.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     RtlInitAnsiString @ 0x140466120 (RtlInitAnsiString.c)
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     KeIsKernelCetEnabled @ 0x14047D230 (KeIsKernelCetEnabled.c)
 *     KeInitializeTimer @ 0x14047D670 (KeInitializeTimer.c)
 *     KdPollBreakIn @ 0x1404819D0 (KdPollBreakIn.c)
 *     DbgLoadImageSymbols @ 0x1404D8DB0 (DbgLoadImageSymbols.c)
 *     __report_rangecheckfailure @ 0x1405246B0 (__report_rangecheckfailure.c)
 *     _strupr @ 0x1405377E0 (_strupr.c)
 *     strstr @ 0x140537FA0 (strstr.c)
 *     atol @ 0x140538200 (atol.c)
 *     KdDisableDebuggerWithLock @ 0x1405E6358 (KdDisableDebuggerWithLock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     strncmp @ 0x140741F60 (strncmp.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     KdInitializeDebuggerDataBlock @ 0x140C1928C (KdInitializeDebuggerDataBlock.c)
 *     KdRegisterDebuggerDataBlock @ 0x140C19318 (KdRegisterDebuggerDataBlock.c)
 */

char __fastcall KdInitSystem(__int64 a1, _QWORD *a2)
{
  char v3; // r12
  char v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v9; // rcx
  char *v10; // rsi
  char v11; // bp
  char *v12; // rax
  unsigned int v13; // eax
  const char *v14; // rbx
  unsigned __int64 v15; // rax
  char v16; // cl
  const char *v17; // rcx
  const char *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  _BYTE *v22; // rax
  unsigned int v23; // esi
  __int64 **v24; // rbx
  __int64 v25; // rdx
  CHAR *v26; // r9
  unsigned int v27; // r8d
  CHAR v28; // al
  __int64 v29; // rcx
  unsigned int i; // ebx
  ULONG_PTR Pool2; // rax
  signed __int32 v33[8]; // [rsp+0h] [rbp-178h] BYREF
  STRING DestinationString; // [rsp+20h] [rbp-158h] BYREF
  CHAR SourceString[256]; // [rsp+30h] [rbp-148h] BYREF

  v3 = 0;
  v4 = 0;
  if ( (_DWORD)a1 == -1 )
  {
    KdInitializeDebuggerDataBlock();
    KdpLoaderDebuggerBlock = v5 + 16;
    off_140E01348 = &KdpLoaderDebuggerBlock;
    v6 = *(_QWORD *)(v5 + 136);
    if ( !*(_QWORD *)(v6 + 36864) )
    {
      *(_DWORD *)(v6 + 36872) = 1048587;
      *(_QWORD *)(v6 + 36864) = v6 + 528;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v5 + 240) + 132LL) & 8) != 0 )
      __debugbreak();
    return 1;
  }
  if ( !(_DWORD)a1 )
  {
    if ( (_BYTE)KdDebuggerEnabled )
      goto LABEL_65;
    LOWORD(KdDebuggerEnabled) = 0;
    KdpDebugRoutineSelect = 0;
    if ( !KdPitchDebugger || (v7 = 1, !KdLocalDebugEnabled) )
      v7 = 0;
    if ( *(_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.Lock
      && *(_DWORD *)(*(_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.Lock + 236LL) == 3 )
    {
      KdTransportMaxPacketSize = 1152;
    }
    if ( !KdpDebuggerDataListHead )
    {
      *((_QWORD *)&KdpContext + 1) = *(_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.Lock;
      KdpPowerSpinLock = 0LL;
      qword_140F597D8 = (__int64)&KdpDebuggerDataListHead;
      KdpDebuggerDataListHead = (__int64)&KdpDebuggerDataListHead;
      qword_140F5D828 = (__int64)&KdpPowerListHead;
      KdpPowerListHead = (__int64)&KdpPowerListHead;
      KdRegisterDebuggerDataBlock(a1, &KdDebuggerDataBlock);
      KdInitializeDebuggerDataBlock();
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( !CurrentPrcb->Context )
    {
      CurrentPrcb->ContextFlagsInit = 1048587;
      CurrentPrcb->Context = &CurrentPrcb->ProcessorState.ContextFrame;
    }
    if ( a2 )
    {
      v9 = *(_QWORD *)(a2[2] + 48LL);
      off_140E01348 = &KdpLoaderDebuggerBlock;
      KdpLoaderDebuggerBlock = (__int64)(a2 + 2);
      v10 = (char *)a2[27];
      *(_QWORD *)&xmmword_140E0AAA0 = v9;
      if ( v10 )
      {
        strupr(v10);
        KdPrintBufferAllocateSize = 0;
        v11 = 0;
        v12 = strstr(v10, "DBGPRINT_LOG_SIZE=");
        if ( v12 )
        {
          v13 = (atol(v12 + 18) + 4095) & 0xFFFFF000;
          KdPrintBufferAllocateSize = v13;
          if ( v13 <= 0x1000000 )
          {
            if ( v13 <= 0x1000 )
              KdPrintBufferAllocateSize = 0;
          }
          else
          {
            KdPrintBufferAllocateSize = 0x1000000;
          }
        }
        if ( strstr(v10, "NODEBUG") )
        {
          KdPitchDebugger = 1;
          KdPageDebuggerSection = 1;
          KdpBootedNodebug = 1;
        }
        else
        {
          *(_QWORD *)&DestinationString.Length = strstr(v10, "DEBUGPORT=LOCAL");
          if ( *(_QWORD *)&DestinationString.Length )
          {
            KdPitchDebugger = 1;
            v7 = 1;
            KdPageDebuggerSection = 1;
            LOBYTE(KdDebuggerNotPresent) = 1;
            KdLocalDebugEnabled = 1;
            KdpBootedNodebug = 0;
          }
          else
          {
            v14 = v10;
            do
            {
              v15 = (unsigned __int64)strstr(v14, " DEBUG=");
              if ( !v15 )
              {
                v15 = (unsigned __int64)strstr(v14, " DEBUG");
                if ( !v15 )
                  break;
              }
              v16 = *(_BYTE *)(v15 + 6);
              if ( v16 == 61 || (v16 & 0xDF) == 0 )
              {
                KdpBootedNodebug = 0;
                v11 = 1;
                if ( *(_BYTE *)(v15 + 6) == 61 )
                {
                  v17 = (const char *)(v15 + 7);
                  *(_QWORD *)&DestinationString.Length = v15 + 7;
                  while ( 1 )
                  {
                    LOBYTE(v15) = *v17;
                    v18 = v17;
                    while ( (_BYTE)v15 )
                    {
                      if ( (unsigned __int8)v15 <= 0x2Cu )
                      {
                        v19 = 0x100100000200LL;
                        if ( _bittest64(&v19, v15) )
                          break;
                      }
                      LOBYTE(v15) = *++v18;
                    }
                    v15 = (unsigned int)((_DWORD)v18 - (_DWORD)v17);
                    if ( (_DWORD)v18 == (_DWORD)v17 )
                      break;
                    switch ( (_DWORD)v15 )
                    {
                      case 0xA:
                        LODWORD(v15) = strncmp(v17, "AUTOENABLE", 0xAuLL);
                        if ( !(_DWORD)v15 )
                        {
                          v3 = 1;
                          KdAutoEnableOnEvent = 1;
                          v4 = 0;
                        }
                        break;
                      case 7:
                        LODWORD(v15) = strncmp(v17, "DISABLE", 7uLL);
                        if ( !(_DWORD)v15 )
                        {
                          v3 = 1;
                          KdAutoEnableOnEvent = 0;
                          v4 = 1;
                        }
                        break;
                      case 6:
                        LODWORD(v15) = strncmp(v17, "NOUMEX", 6uLL);
                        if ( !(_DWORD)v15 )
                          KdIgnoreUmExceptions = 1;
                        break;
                    }
                    if ( *v18 != 44 )
                      break;
                    v17 = v18 + 1;
                  }
                }
                break;
              }
              v14 = (const char *)(v15 + 6);
            }
            while ( v15 != -6LL );
          }
        }
        if ( strstr(v10, "NOEVENT") )
        {
          KdEventLoggingEnabled = 0;
        }
        else if ( strstr(v10, "EVENT") )
        {
          KdEventLoggingEnabled = 1;
          v11 = 1;
          KdPageDebuggerSection = 0;
        }
        if ( strstr(v10, "DISABLE_NOUMEX_FIX") )
          KdDisableNoUmExBreakFix = 1;
      }
      else
      {
        KdPitchDebugger = 1;
        v11 = 0;
        KdPageDebuggerSection = 1;
      }
    }
    else
    {
      v11 = 1;
      *(_QWORD *)&xmmword_140E0AAA0 = PsNtosImageBase;
    }
    qword_140E01088 = xmmword_140E0AAA0;
    if ( !v7 )
    {
      if ( !v11 )
      {
        LOBYTE(KdDebuggerNotPresent) = 1;
        goto LABEL_65;
      }
      if ( (int)KdInitialize(0LL, a2, &KdpContext) < 0 )
      {
        KdPitchDebugger = 0;
        v11 = 0;
        LOBYTE(KdDebuggerNotPresent) = 1;
        KdLocalDebugEnabled = 1;
      }
      else
      {
        KdpDebugRoutineSelect = 1;
      }
    }
    if ( !KdpDebuggerStructuresInitialized )
    {
      BYTE4(KdpContext) = 0;
      LODWORD(KdpContext) = 20;
      KeInitializeDpc(&KdpTimeSlipDpc, KdpTimeSlipDpcRoutine, 0LL);
      KeInitializeTimer(&KdpTimeSlipTimer);
      KdpTimeSlipWorkItem.Parameter = 0LL;
      KdpTimeSlipWorkItem.WorkerRoutine = (void (__fastcall *)(void *))KdpTimeSlipWork;
      KdpTimeSlipWorkItem.List.Flink = 0LL;
      KdpDebuggerStructuresInitialized = 1;
    }
    KdTimerStart = 0LL;
    if ( KdEventLoggingEnabled && KdpBootedNodebug )
    {
      KdPitchDebugger = 1;
      KdEventLoggingPresent = v11;
      LOBYTE(KdDebuggerNotPresent) = 1;
      KdLocalDebugEnabled = 0;
    }
    else
    {
      LOBYTE(KdDebuggerEnabled) = 1;
      *(_BYTE *)(MmWriteableSharedUserData + 724) = 1;
      if ( KdLocalDebugEnabled )
        goto LABEL_65;
    }
    if ( !KdEventLoggingEnabled || (_BYTE)KdDebuggerEnabled )
    {
      KdPitchDebugger = 0;
      if ( !v3 )
      {
        if ( !a2 )
        {
          DbgLoadImageSymbols(0LL, qword_140E01088, 0xFFFFFFFFLL);
          return 1;
        }
        if ( KeIsKernelCetEnabled() && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
        {
          LOBYTE(KeKernelCetWrssEnabledScenarios) = KeKernelCetWrssEnabledScenarios | 2;
          __writemsr(0x6A2u, __readmsr(0x6A2u) | 2);
        }
        v23 = 0;
        v24 = (__int64 **)a2[2];
        while ( v24 != a2 + 2 && v23 < 3 )
        {
          DestinationString = 0LL;
          LODWORD(v25) = 0;
          v26 = (CHAR *)v24[10];
          v27 = *((unsigned __int16 *)v24 + 36) >> 1;
          if ( v27 >= 0x100 )
            v27 = 255;
          do
          {
            v28 = *v26;
            v26 += 2;
            v29 = (unsigned int)v25;
            v25 = (unsigned int)(v25 + 1);
            SourceString[v29] = v28;
          }
          while ( (unsigned int)v25 < v27 );
          if ( (unsigned int)v25 >= 0x100uLL )
            _report_rangecheckfailure();
          SourceString[v25] = 0;
          RtlInitAnsiString(&DestinationString, SourceString);
          DbgLoadImageSymbols((__int64)&DestinationString, (unsigned __int64)v24[6], 0xFFFFFFFFLL);
          v24 = (__int64 **)*v24;
          ++v23;
        }
        BYTE1(KdDebuggerEnabled) = KdPollBreakIn();
LABEL_66:
        v20 = a2[30];
        if ( v20 )
        {
          v21 = 32LL;
          v22 = (_BYTE *)(v20 + 2464);
          do
          {
            *v22++ = 0;
            --v21;
          }
          while ( v21 );
        }
        return 1;
      }
      KdDisableDebuggerWithLock();
      KdBlockEnable = v4;
    }
LABEL_65:
    if ( !a2 )
      return 1;
    goto LABEL_66;
  }
  KeQueryPerformanceCounter(&KdPerformanceCounterRate);
  if ( !KdPitchDebugger )
  {
    for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
    {
      Pool2 = ExAllocatePool2(64LL, 0x1000uLL, 0x6F49644Bu);
      if ( Pool2 )
      {
        _InterlockedOr(v33, 0);
        KdLogBuffer[i] = Pool2;
      }
    }
  }
  KdpLoaderDebuggerBlock = 0LL;
  return 1;
}
