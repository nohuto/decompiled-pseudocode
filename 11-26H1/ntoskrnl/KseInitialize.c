/*
 * XREFs of KseInitialize @ 0x140CCCEE0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KsepLogInfo @ 0x1404CCB84 (KsepLogInfo.c)
 *     KsepLogError @ 0x1404CCBBC (KsepLogError.c)
 *     KsepDebugPrint @ 0x14050EC24 (KsepDebugPrint.c)
 *     KseRegisterShim @ 0x1407BCFC0 (KseRegisterShim.c)
 *     KsepCacheUninitialize @ 0x1407BECA0 (KsepCacheUninitialize.c)
 *     EtwRegister @ 0x14093BDE0 (EtwRegister.c)
 *     KseShimDatabaseOpen @ 0x1409E63D0 (KseShimDatabaseOpen.c)
 *     KseShimDatabaseClose @ 0x1409E6D54 (KseShimDatabaseClose.c)
 *     KsepEngineInitialize @ 0x140CCCDD4 (KsepEngineInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x140CCD8F8 (KsepMatchInitMachineInfo.c)
 *     KseShimDatabaseBootInitialize @ 0x140CCDA60 (KseShimDatabaseBootInitialize.c)
 *     KseVersionLieInitialize @ 0x140CCDC54 (KseVersionLieInitialize.c)
 */

__int64 __fastcall KseInitialize(__int64 a1, unsigned int a2)
{
  int matched; // edi
  signed __int32 v5; // eax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  int v17; // eax
  __int64 v18; // rcx
  char StackBase; // al
  int v20; // eax
  __int64 v21; // rcx
  char v22; // al
  int v23; // eax
  __int64 v24; // rcx
  char v25; // al
  int v26; // eax
  __int64 v27; // rcx
  char v28; // al
  int v29; // eax
  __int64 v30; // rcx
  char v31; // al
  int v32; // eax
  __int64 v33; // rcx
  char v34; // al
  int v35; // eax
  __int64 v36; // rdx
  char v37; // al
  _KTRAP_FRAME *v38; // [rsp+50h] [rbp+18h] BYREF

  matched = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v38 = 0LL;
      EtwRegister(&KernelShimEngineProvider, 0LL, 0LL, (PREGHANDLE)&stru_140E66B30.StackLimit);
      matched = KseShimDatabaseOpen(&v38, v11, v12, v13);
      if ( matched >= 0 && v38 )
      {
        KseShimDatabaseClose(v38, v14, v15, v16);
        KseVersionLieInitialize();
        v17 = KseRegisterShim((__int64)&KseSkipDriverUnloadShim, 0LL, 0LL);
        if ( v17 < 0 )
        {
          v18 = ((unsigned __int8)_InterlockedExchangeAdd(
                                    (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                                    1u)
               + 1) & 0x3F;
          *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v18 + 4] = v17;
          StackBase = (char)stru_140E66B30.StackBase;
          *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v18) = 852115;
          if ( (StackBase & 2) != 0 )
            KsepDebugPrint(12LL, (int)"Built-in SkipDriverUnload shims: failed to register.\n");
          KsepLogError(12LL, (__int64)"Built-in SkipDriverUnload shims: failed to register.\n");
        }
        v20 = KseRegisterShim((__int64)&KseZeroPoolShim, 0LL, 0LL);
        if ( v20 < 0 )
        {
          v21 = ((unsigned __int8)_InterlockedExchangeAdd(
                                    (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                                    1u)
               + 1) & 0x3F;
          *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v21 + 4] = v20;
          v22 = (char)stru_140E66B30.StackBase;
          *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v21) = 1048692;
          if ( (v22 & 2) != 0 )
            KsepDebugPrint(12LL, (int)"ZeroPool shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"ZeroPool shim: failed to register.\n");
        }
        v23 = KseRegisterShim((__int64)&KseClearPCIDBitsShim, 0LL, 0LL);
        if ( v23 < 0 )
        {
          v24 = ((unsigned __int8)_InterlockedExchangeAdd(
                                    (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                                    1u)
               + 1) & 0x3F;
          *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v24 + 4] = v23;
          v25 = (char)stru_140E66B30.StackBase;
          *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v24) = 917629;
          if ( (v25 & 2) != 0 )
            KsepDebugPrint(12LL, (int)"ClearPCIDBits shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"ClearPCIDBits shim: failed to register.\n");
        }
        v26 = KseRegisterShim((__int64)&KseKasperskyShim, 0LL, 0LL);
        if ( v26 < 0 )
        {
          v27 = ((unsigned __int8)_InterlockedExchangeAdd(
                                    (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                                    1u)
               + 1) & 0x3F;
          *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v27 + 4] = v26;
          v28 = (char)stru_140E66B30.StackBase;
          *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v27) = 983165;
          if ( (v28 & 2) != 0 )
            KsepDebugPrint(12LL, (int)"Kaspersky shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"Kaspersky shim: failed to register.\n");
        }
        v29 = KseRegisterShim((__int64)&KseMemcpyShim, 0LL, 0LL);
        if ( v29 < 0 )
        {
          v30 = ((unsigned __int8)_InterlockedExchangeAdd(
                                    (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                                    1u)
               + 1) & 0x3F;
          *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v30 + 4] = v29;
          v31 = (char)stru_140E66B30.StackBase;
          *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v30) = 1114208;
          if ( (v31 & 2) != 0 )
            KsepDebugPrint(12LL, (int)"Memcpy shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"Memcpy shim: failed to register.\n");
        }
        v32 = KseRegisterShim((__int64)&KseKernelPadSectionsOverrideShim, 0LL, 0LL);
        if ( v32 < 0 )
        {
          v33 = ((unsigned __int8)_InterlockedExchangeAdd(
                                    (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                                    1u)
               + 1) & 0x3F;
          *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v33 + 4] = v32;
          v34 = (char)stru_140E66B30.StackBase;
          *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v33) = 1179753;
          if ( (v34 & 2) != 0 )
            KsepDebugPrint(12LL, (int)"KernelPadSectionsOverride shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"KernelPadSectionsOverride shim: failed to register.\n");
        }
        v35 = KseRegisterShim((__int64)&KseUserCetBasicModeAllowRetTargetNotCetCompatShim, 0LL, 0LL);
        if ( v35 < 0 )
        {
          v36 = ((unsigned __int8)_InterlockedExchangeAdd(
                                    (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                                    1u)
               + 1) & 0x3F;
          *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v36 + 4] = v35;
          v37 = (char)stru_140E66B30.StackBase;
          *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v36) = 1245275;
          if ( (v37 & 2) != 0 )
            KsepDebugPrint(12LL, (int)"UserCetBasicModeAllowRetTargetNotCetCompat shim: failed to register.\n");
          KsepLogError(12LL, (__int64)"UserCetBasicModeAllowRetTargetNotCetCompat shim: failed to register.\n");
        }
      }
      else
      {
        dword_140E66B08 |= 0x80u;
        matched = -1073741637;
      }
    }
LABEL_60:
    *((_QWORD *)&AlpcpMessageLogLock.AbCompletedIoQoSBoostCount
    + (((unsigned __int8)_InterlockedExchangeAdd(
                           (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[12],
                           1u)
      + 1) & 0x3F)) = 327934LL;
    if ( ((__int64)stru_140E66B30.StackBase & 1) != 0 )
      KsepDebugPrint(1LL, (int)"KSE: Initialized phase 0x%x\n", a2);
    KsepLogInfo(1LL, (__int64)"KSE: Initialized phase 0x%x\n", a2);
    if ( InitIsWinPEMode )
      KseEngine |= 1u;
    if ( matched >= 0 )
      return (unsigned int)matched;
    goto LABEL_22;
  }
  v5 = _InterlockedCompareExchange(&dword_140E66B04, 1, 0);
  if ( v5 == 2 )
    return 0LL;
  if ( v5 == 1 )
    return 259LL;
  if ( (int)KseShimDatabaseBootInitialize(
              *(void **)(*(_QWORD *)(a1 + 240) + 64LL),
              *(unsigned int *)(*(_QWORD *)(a1 + 240) + 72LL),
              *(void **)(*(_QWORD *)(a1 + 240) + 80LL),
              *(unsigned int *)(*(_QWORD *)(a1 + 240) + 88LL)) < 0 )
    return 3221225473LL;
  v8 = *(_QWORD *)(a1 + 240);
  if ( *(_QWORD *)(v8 + 64) && *(_DWORD *)(v8 + 72) )
  {
    matched = KsepEngineInitialize(&KseEngine);
    if ( matched >= 0 )
    {
      matched = KsepMatchInitMachineInfo(a1);
      if ( matched >= 0 )
      {
        dword_140E66B04 = 2;
        if ( (int)KseRegisterShim((__int64)&KseDsShim, 0LL, 0LL) >= 0 )
        {
          *((_QWORD *)&AlpcpMessageLogLock.AbCompletedIoQoSBoostCount
          + (((unsigned __int8)_InterlockedExchangeAdd(
                                 (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[12],
                                 1u)
            + 1) & 0x3F)) = 721040LL;
          if ( ((__int64)stru_140E66B30.StackBase & 1) != 0 )
            KsepDebugPrint(11LL, (int)"KSE-DS: driver scope shim registered.\n");
          KsepLogInfo(11LL, (__int64)"KSE-DS: driver scope shim registered.\n");
        }
        goto LABEL_60;
      }
    }
  }
  else
  {
    if ( ViVerifierEnabled )
      dword_140E66B08 |= 0x40u;
    v9 = *(_QWORD *)(a1 + 240);
    if ( !*(_QWORD *)(v9 + 64) || !*(_DWORD *)(v9 + 72) )
      dword_140E66B08 |= 0x80u;
    matched = -1073741637;
  }
LABEL_22:
  dword_140E66B04 = 0;
  if ( stru_140E66B30.SListFaultAddress )
  {
    KsepCacheUninitialize((__int64)stru_140E66B30.SListFaultAddress, v7);
    stru_140E66B30.SListFaultAddress = 0LL;
  }
  KseEngine |= 3u;
  dword_140E66B08 |= 0x400u;
  v10 = ((unsigned __int8)_InterlockedExchangeAdd(
                            (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                            1u)
       + 1) & 0x3F;
  *(_WORD *)&AlpcpMessageLogLock.WaitBlockFill4[8 * v10 + 2] = 5;
  if ( matched == -1073741637 )
  {
    *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v10 + 4] = -1073741637;
    *((_WORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 4 * v10) = 282;
    if ( ((__int64)stru_140E66B30.StackBase & 2) != 0 )
      KsepDebugPrint(
        1LL,
        (int)"KSE: Engine not initialized (disabled explicitly, safe boot on, verifier on, WinPE mode or loader issue)\n");
    KsepLogError(
      1LL,
      (__int64)"KSE: Engine not initialized (disabled explicitly, safe boot on, verifier on, WinPE mode or loader issue)\n");
  }
  else
  {
    *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v10 + 4] = matched;
    *((_WORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 4 * v10) = 286;
    if ( ((__int64)stru_140E66B30.StackBase & 2) != 0 )
      KsepDebugPrint(1LL, (int)"KSE: Initialization failed: 0x%x\n", (unsigned int)matched);
    KsepLogError(1LL, (__int64)"KSE: Initialization failed: 0x%x\n", matched);
  }
  return (unsigned int)matched;
}
