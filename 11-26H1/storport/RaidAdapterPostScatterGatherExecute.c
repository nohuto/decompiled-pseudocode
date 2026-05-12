/*
 * XREFs of RaidAdapterPostScatterGatherExecute @ 0x140015840
 * Callers:
 *     StorUnitExecuteNvmeSrb @ 0x1400034B4 (StorUnitExecuteNvmeSrb.c)
 *     RaAdapterStartPowerIo @ 0x1400118E8 (RaAdapterStartPowerIo.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140012104 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaUnitStartIo @ 0x140013D70 (RaUnitStartIo.c)
 *     RaidpAdapterContinueScatterGather @ 0x140015370 (RaidpAdapterContinueScatterGather.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x14001A620 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidPnPPassToMiniPort @ 0x14001A8BC (RaidPnPPassToMiniPort.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001BC80 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x140056C08 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x140067AD0 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140068000 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterProgramCryptoKeyRoutine @ 0x140071020 (RaidAdapterProgramCryptoKeyRoutine.c)
 *     TcglibEalExecuteCommandSync @ 0x14008CF08 (TcglibEalExecuteCommandSync.c)
 *     StorGetNVMePollingInformation @ 0x140097348 (StorGetNVMePollingInformation.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009F164 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitStartResetIo @ 0x1400A2224 (RaUnitStartResetIo.c)
 *     StorpTelemetrySendAdapterSurfaceUfsHealthInfo @ 0x1400C0CD0 (StorpTelemetrySendAdapterSurfaceUfsHealthInfo.c)
 *     RaidAdapterDiagnosticIoctl @ 0x14018470C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1401855B0 (RaidAdapterGetMiniportDumpInfo.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1401B407C (RaUnitStorageDataSetManagementIoctl.c)
 *     StorGetNVMeIdentifyInfo @ 0x1401B6194 (StorGetNVMeIdentifyInfo.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1401B816C (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaWmiPassToMiniPort @ 0x1401B8A40 (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x14000CD40 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterRequestComplete @ 0x14000E730 (RaidAdapterRequestComplete.c)
 *     RaidAdapterReleaseInterruptLock @ 0x14000EDE0 (RaidAdapterReleaseInterruptLock.c)
 *     RaidLogGetParm4 @ 0x1400160C0 (RaidLogGetParm4.c)
 *     RaidUpdateZoneIoMetadata @ 0x14002B1E0 (RaidUpdateZoneIoMetadata.c)
 *     RaAllocateConcurrentChannelToken @ 0x140032D70 (RaAllocateConcurrentChannelToken.c)
 *     IsZonedWriteRequest @ 0x140034D00 (IsZonedWriteRequest.c)
 *     RaidUpdateZoneIoSubmission @ 0x14007461C (RaidUpdateZoneIoSubmission.c)
 *     DlrmProcessReadWriteRequest @ 0x14012D264 (DlrmProcessReadWriteRequest.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidAdapterPostScatterGatherExecute(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // r15
  unsigned __int64 v7; // rbp
  __int64 v8; // r12
  char v9; // r8
  int v10; // r9d
  __int64 v11; // rax
  int v12; // r8d
  bool v13; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v15; // rdx
  int v16; // r9d
  _BYTE *v17; // r8
  unsigned int v18; // r14d
  unsigned int v19; // r11d
  __int64 v20; // rcx
  unsigned __int64 v21; // r10
  int v22; // r15d
  __int64 v23; // rbx
  char v24; // al
  __int64 v25; // r8
  __int64 Parm4; // rax
  __int64 v27; // r11
  __int64 v28; // rbx
  __int64 v29; // rcx
  unsigned __int64 v30; // r8
  __int64 v31; // rcx
  unsigned int v32; // r10d
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 (__fastcall *v37)(__int64, _QWORD); // rax
  char v38; // bl
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rbx
  char v45; // r14
  unsigned int v46; // ecx
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 result; // rax
  __int64 v50; // rax
  int v51; // r15d
  __int64 v52; // rbx
  LARGE_INTEGER v53; // rax
  LARGE_INTEGER v55; // rax
  __int64 v56; // rdx
  _BYTE *v57; // r9
  int v58; // r15d
  unsigned int v59; // r11d
  unsigned int v60; // r12d
  unsigned int v61; // r14d
  __int64 v62; // rcx
  unsigned __int64 v63; // r10
  __int64 v64; // rbx
  int v65; // ecx
  int v66; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v68; // [rsp+90h] [rbp+8h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+A0h] [rbp+18h]
  __int64 v70; // [rsp+A8h] [rbp+20h]

  *(_QWORD *)(a2 + 216) = a1;
  ListEntry = 0LL;
  v3 = *(_QWORD *)(a2 + 224);
  v5 = *(_QWORD *)(a2 + 168);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0LL;
  v70 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = *(_BYTE *)(v5 + 2);
  if ( v9 == 40 )
    v10 = *(_DWORD *)(v5 + 20);
  else
    v10 = *(unsigned __int8 *)(v5 + 2);
  v11 = 24LL;
  if ( v9 != 40 )
    v11 = 12LL;
  v12 = *(_DWORD *)(v11 + v5);
  if ( v3 )
  {
    if ( *(int *)(v3 + 744) > 0 )
    {
      if ( v10 != 32 && v10 != 19 )
        goto LABEL_90;
    }
    else if ( *(_BYTE *)(v3 + 756) && (v12 & 0x10) == 0 || *(_BYTE *)(v3 + 757) && (v12 & 0x80000) == 0 )
    {
      goto LABEL_90;
    }
  }
  else
  {
    v50 = *(_QWORD *)(a1 + 1024);
    if ( v50
      && *(_DWORD *)(*(_QWORD *)(v50 + 48) + 1052LL)
      && (unsigned int)(v10 - 36) > 1
      && (*(_BYTE *)(a2 + 17) & 8) == 0 )
    {
LABEL_90:
      *(_BYTE *)(*(_QWORD *)(a2 + 168) + 3LL) = 5;
      RaidUpdateZoneIoMetadata(*(_QWORD *)(a2 + 224), 0LL, a2);
      RaidAdapterRequestComplete(a1, a2, 1);
      return 0LL;
    }
  }
  if ( StorEtwLoggingEnabled )
  {
    v13 = UseQPCTime == 0;
    goto LABEL_11;
  }
  if ( g_StorpTraceLoggingPerformanceEnabled )
  {
    if ( !UseQPCTime )
    {
LABEL_15:
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
      goto LABEL_16;
    }
    v13 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
LABEL_11:
    if ( !v13 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  PerformanceCounter.QuadPart = 0LL;
LABEL_16:
  v13 = FUAEnabled == 0;
  *(LARGE_INTEGER *)(a2 + 696) = PerformanceCounter;
  if ( !v13 )
    goto LABEL_32;
  v15 = *(_QWORD *)(a2 + 168);
  if ( !v15 )
    goto LABEL_32;
  if ( *(_BYTE *)(v15 + 2) != 40 )
  {
    v16 = *(unsigned __int8 *)(v15 + 2);
    v17 = (_BYTE *)(v15 + 72);
    goto LABEL_27;
  }
  v16 = *(_DWORD *)(v15 + 20);
  v17 = 0LL;
  if ( v16 )
    goto LABEL_26;
  v18 = *(_DWORD *)(v15 + 56);
  v19 = 0;
  if ( !v18 )
    goto LABEL_26;
  while ( 1 )
  {
    v20 = *(unsigned int *)(v15 + 4LL * v19 + 120);
    if ( (unsigned int)v20 < 0x80 )
      goto LABEL_25;
    v21 = *(unsigned int *)(v15 + 16);
    if ( (unsigned int)v20 >= (unsigned int)v21 )
      goto LABEL_25;
    v22 = *(_DWORD *)(v15 + v20);
    v23 = v15 + v20;
    if ( v22 == 64 )
    {
      if ( v20 + 40 <= v21 )
      {
        if ( *(_BYTE *)(v23 + 10) )
          v17 = (_BYTE *)(v23 + 24);
        goto LABEL_26;
      }
      goto LABEL_25;
    }
    v51 = v22 - 65;
    if ( !v51 )
      break;
    if ( v51 == 1 && v20 + 40 <= v21 )
    {
      if ( *(_DWORD *)(v23 + 12) )
        v17 = (_BYTE *)(v23 + 32);
      goto LABEL_26;
    }
LABEL_25:
    if ( ++v19 >= v18 )
      goto LABEL_26;
  }
  if ( v20 + 56 > v21 )
    goto LABEL_25;
  if ( *(_BYTE *)(v23 + 10) )
    v17 = (_BYTE *)(v23 + 24);
LABEL_26:
  v6 = 0LL;
LABEL_27:
  if ( v17 && !v16 && (*v17 == 42 || ((*v17 + 118) & 0xDF) == 0) )
  {
    v24 = v17[1];
    if ( (v24 & 8) != 0 )
      v17[1] = v24 & 0xF7;
  }
LABEL_32:
  if ( *(_BYTE *)(a1 + 4434) )
  {
    v25 = *(_QWORD *)(a1 + 6288);
    if ( v25 && (*(_DWORD *)(v25 + 12) & 1) != 0 && (*(_DWORD *)(v25 + 12) & 2) == 0 )
    {
      v56 = *(_QWORD *)(a2 + 168);
      if ( *(_BYTE *)(v56 + 2) != 40 )
      {
        v59 = *(_DWORD *)(v56 + 16);
        v57 = (_BYTE *)(v56 + 72);
        v58 = *(unsigned __int8 *)(v56 + 2);
        goto LABEL_162;
      }
      v57 = 0LL;
      v58 = *(_DWORD *)(v56 + 20);
      v59 = *(_DWORD *)(v56 + 60);
      if ( !v58 )
      {
        v60 = *(_DWORD *)(v56 + 56);
        v61 = 0;
        if ( !v60 )
        {
LABEL_160:
          v8 = 0LL;
          goto LABEL_162;
        }
        while ( 1 )
        {
          v62 = *(unsigned int *)(v56 + 4LL * v61 + 120);
          if ( (unsigned int)v62 >= 0x80 )
          {
            v63 = *(unsigned int *)(v56 + 16);
            if ( (unsigned int)v62 < (unsigned int)v63 )
            {
              v64 = (unsigned int)v62;
              v65 = *(_DWORD *)(v56 + v62);
              if ( v65 == 64 )
              {
                if ( v64 + 40 <= v63 )
                {
LABEL_156:
                  v8 = 0LL;
                  if ( *(_BYTE *)(v56 + v64 + 10) )
                    v57 = (_BYTE *)(v64 + v56 + 24);
                  break;
                }
              }
              else
              {
                v66 = v65 - 65;
                if ( v66 )
                {
                  if ( v66 == 1 && v64 + 40 <= v63 )
                  {
                    v8 = 0LL;
                    if ( *(_DWORD *)(v56 + v64 + 12) )
                      v57 = (_BYTE *)(v64 + v56 + 32);
                    break;
                  }
                }
                else if ( v64 + 56 <= v63 )
                {
                  goto LABEL_156;
                }
              }
            }
          }
          if ( ++v61 >= v60 )
            goto LABEL_160;
        }
      }
LABEL_162:
      if ( v57 && !v58 && ((*v57 - 8) & 0x5D) == 0 && v59 )
        DlrmProcessReadWriteRequest(*(_QWORD *)(a1 + 6288), v59);
      v6 = 0LL;
    }
    if ( (qword_140172448 & 1) != 0 )
    {
      Parm4 = RaidLogGetParm4(a2);
      v27 = *(_QWORD *)(a2 + 160);
      v28 = *(_QWORD *)(a2 + 168);
      if ( !v27 && v28 )
      {
        if ( *(_BYTE *)(v28 + 2) == 40 )
          v27 = *(_QWORD *)(v28 + 80);
        else
          v27 = *(_QWORD *)(v28 + 48);
      }
      v29 = *(_QWORD *)(a2 + 224);
      if ( v29 )
        v30 = (unsigned __int8)BYTE2(*(_DWORD *)(v29 + 104)) | ((((unsigned __int64)(unsigned __int8)*(_DWORD *)(v29 + 104) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v29 + 104))) << 8);
      else
        v30 = 0LL;
      v31 = *(_QWORD *)(a2 + 216);
      if ( v31 )
      {
        if ( *(_DWORD *)v31 != 1314275652 )
        {
          v32 = *(_DWORD *)(v31 + 4996);
          if ( v32 )
          {
            v33 = *(_QWORD *)(v31 + 5000);
            if ( v33 )
            {
              v34 = v33 + 48LL * (_InterlockedIncrement((volatile signed __int32 *)(v31 + 4992)) % v32);
              *(_DWORD *)v34 = 36;
              *(_QWORD *)(v34 + 40) = MEMORY[0xFFFFF78000000014];
              *(_QWORD *)(v34 + 8) = v27;
              *(_QWORD *)(v34 + 16) = v30;
              *(_QWORD *)(v34 + 24) = v28;
              *(_QWORD *)(v34 + 32) = Parm4;
            }
          }
        }
      }
    }
    v35 = *(_QWORD *)(a2 + 160);
    if ( v35 )
      *(_BYTE *)(v35 + 141) = -82;
    v36 = *(_QWORD *)(a2 + 216);
    v37 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v36 + 608) + 128LL);
    if ( v37 )
      v38 = v37(*(_QWORD *)(v36 + 616) + 16LL, *(_QWORD *)(a2 + 168));
    else
      v38 = 1;
    if ( StorEtwLoggingEnabled )
    {
      LOBYTE(v68) = byte_140173441 & 1;
      if ( (byte_140173441 & 1) != 0 || (byte_140173443 & 2) != 0 )
      {
        if ( UseQPCTime )
          v53 = KeQueryPerformanceCounter(0LL);
        else
          v53.QuadPart = KeQueryUnbiasedInterruptTime();
        *(LARGE_INTEGER *)(a2 + 704) = v53;
      }
    }
    if ( v38 )
    {
      if ( *(int *)(a1 + 4728) > 1 )
      {
        if ( *(_DWORD *)(a1 + 4728) < KeQueryActiveProcessorCountEx(0xFFFFu) )
        {
          ListEntry = (PSLIST_ENTRY)RaAllocateConcurrentChannelToken(a1);
          *(_DWORD *)(a2 + 24) = HIDWORD(ListEntry[1].Next);
        }
        else
        {
          *(_DWORD *)(a2 + 24) = HIDWORD(KeGetPcr()[1].LockArray);
        }
      }
      else if ( *(_DWORD *)(a1 + 888) )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 880), &LockHandle);
      }
      else
      {
        LOBYTE(LockHandle.LockQueue.Next) = RaidAdapterAcquireInterruptLock(a1);
      }
      goto LABEL_54;
    }
    v52 = *(_QWORD *)(a2 + 224);
    if ( v52 )
    {
      if ( (*(_BYTE *)(v52 + 136) & 2) != 0 )
      {
        v68 = 0;
        if ( (unsigned __int8)IsZonedWriteRequest(v52, 0LL, a2, &v68) )
        {
          RtlInterlockedClearBitRun(v52 + 3448, v68, 1LL);
          RaidUpdateZoneIoSubmission(v52 + 720, 0LL, a2);
        }
      }
    }
    return 0LL;
  }
  else
  {
LABEL_54:
    if ( (qword_140172448 & 4) != 0 )
    {
      v39 = *(_QWORD *)(a2 + 224);
      if ( v39 )
        v7 = (unsigned __int8)BYTE2(*(_DWORD *)(v39 + 104)) | ((((unsigned __int64)(unsigned __int8)*(_DWORD *)(v39 + 104) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v39 + 104))) << 8);
      v40 = RaidLogGetParm4(a2);
      v41 = *(_QWORD *)(a2 + 160);
      v8 = *(_QWORD *)(a2 + 168);
      v70 = v40;
      if ( v41 )
      {
        v6 = v41;
      }
      else if ( v8 )
      {
        if ( *(_BYTE *)(v8 + 2) == 40 )
          v6 = *(_QWORD *)(v8 + 80);
        else
          v6 = *(_QWORD *)(v8 + 48);
      }
    }
    v42 = *(_QWORD *)(a2 + 224);
    if ( v42 )
    {
      if ( (*(_BYTE *)(v42 + 136) & 2) != 0 )
      {
        v68 = 0;
        if ( (unsigned __int8)IsZonedWriteRequest(v42, 0LL, a2, &v68) )
        {
          RtlInterlockedClearBitRun(v42 + 3448, v68, 1LL);
          RaidUpdateZoneIoSubmission(v42 + 720, 0LL, a2);
        }
      }
    }
    v43 = *(_QWORD *)(a2 + 160);
    if ( v43 )
      *(_BYTE *)(v43 + 141) = -86;
    *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16) & 0xE3 | 0xC;
    v44 = MEMORY[0xFFFFF78000000014];
    v45 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 608) + 16LL))(
            *(_QWORD *)(a1 + 616) + 16LL,
            *(_QWORD *)(a2 + 168));
    if ( StorEtwLoggingEnabled && ((byte_140173441 & 1) != 0 || (byte_140173443 & 2) != 0) )
    {
      if ( UseQPCTime )
        v55 = KeQueryPerformanceCounter(0LL);
      else
        v55.QuadPart = KeQueryUnbiasedInterruptTime();
      *(LARGE_INTEGER *)(a2 + 712) = v55;
    }
    if ( *(_BYTE *)(a1 + 4434) )
    {
      if ( *(int *)(a1 + 4728) > 1 )
      {
        if ( ListEntry )
          ExpInterlockedPushEntrySList(
            (PSLIST_HEADER)(*(_QWORD *)(a1 + 4736) + ((unsigned __int64)LODWORD(ListEntry[1].Next) << 6)),
            ListEntry);
      }
      else if ( *(_DWORD *)(a1 + 888) )
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      else
      {
        RaidAdapterReleaseInterruptLock(a1, (KIRQL)LockHandle.LockQueue.Next);
      }
    }
    if ( (qword_140172448 & 4) != 0 && *(_DWORD *)a1 != 1314275652 )
    {
      v46 = *(_DWORD *)(a1 + 4996);
      if ( v46 )
      {
        v47 = *(_QWORD *)(a1 + 5000);
        if ( v47 )
        {
          v48 = v47 + 48LL * (_InterlockedIncrement((volatile signed __int32 *)(a1 + 4992)) % v46);
          *(_DWORD *)v48 = 0;
          if ( v44 )
            *(_QWORD *)(v48 + 40) = v44;
          else
            *(_QWORD *)(v48 + 40) = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(v48 + 32) = v70;
          *(_QWORD *)(v48 + 8) = v6;
          *(_QWORD *)(v48 + 16) = v7;
          *(_QWORD *)(v48 + 24) = v8;
        }
      }
    }
    result = 3221225473LL;
    if ( v45 )
      return 0LL;
  }
  return result;
}
