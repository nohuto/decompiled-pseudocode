/*
 * XREFs of PopFxProcessWork @ 0x1403B8BD0
 * Callers:
 *     PopFxActivateComponentWorker @ 0x14037CC20 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x140397384 (PopFxIdleWorkerTail.c)
 *     PopFxDispatchPluginWorkOnce @ 0x1403B80D4 (PopFxDispatchPluginWorkOnce.c)
 *     PoFxCompleteIdleState @ 0x1404732B0 (PoFxCompleteIdleState.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x140219060 (PopFxScheduleDeviceIdleTimer.c)
 *     PopFxTryReferenceDevice @ 0x14021B7B8 (PopFxTryReferenceDevice.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x14021B810 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxAddLogEntry @ 0x14021BFD0 (PopFxAddLogEntry.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1403B7B74 (PopDiagTraceFxComponentIdleState.c)
 *     PopPlNotifyDeviceFState @ 0x1403B7D3C (PopPlNotifyDeviceFState.c)
 *     PopFxCompleteComponentActivation @ 0x1403B8A04 (PopFxCompleteComponentActivation.c)
 *     PopPepProcessEvent @ 0x1403B9A00 (PopPepProcessEvent.c)
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
 *     PopFxCompleteDevicePowerRequired @ 0x1403BCB54 (PopFxCompleteDevicePowerRequired.c)
 *     PopFxDeliverDevicePowerRequired @ 0x1403BDBD0 (PopFxDeliverDevicePowerRequired.c)
 *     PopFxDereferenceDevice @ 0x1403C00F4 (PopFxDereferenceDevice.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1404CFA94 (PopFxUpdateDeviceIdleTimer.c)
 *     PopFxCompleteComponentPerfState @ 0x1404F2BC8 (PopFxCompleteComponentPerfState.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x1404F2FFC (PopDiagTraceFxPerfRequestProgress.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1404F65F0 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopPepCompleteComponentIdleState @ 0x1405005E4 (PopPepCompleteComponentIdleState.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x1405087E8 (PopFxAcpiForwardPepWorkRequest.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall PopFxProcessWork(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  ULONG_PTR v2; // rax
  int *v3; // rdi
  unsigned __int64 v5; // r8
  char v6; // si
  int v7; // ecx
  ULONG_PTR v8; // rsi
  __int64 v9; // r15
  __int64 v10; // r12
  ULONG_PTR v11; // r15
  __int64 v12; // rcx
  unsigned __int8 v13; // r12
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  __int64 v16; // rbx
  KIRQL v17; // r14
  __int64 v18; // rcx
  unsigned __int8 v19; // al
  __int64 v20; // rcx
  unsigned __int8 v21; // al
  ULONG_PTR v22; // rbx
  _QWORD *v23; // rbx
  int v24; // esi
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdx
  unsigned __int8 CurrentIrql; // r15
  ULONG_PTR v31; // r14
  __int64 v32; // rbx
  volatile signed __int32 *v33; // rdi
  signed __int32 v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r15
  unsigned int *v37; // r13
  __int64 v38; // rcx
  __int64 v39; // r8
  char v40; // al
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned __int32 v43; // eax
  __int64 v44; // r8
  __int16 CurrentRunTime; // cx
  __int64 v46; // rsi
  int v47; // ecx
  signed __int32 v48; // eax
  signed __int32 v49; // ett
  signed __int32 v50; // eax
  signed __int32 v51; // ett
  BOOLEAN v52; // al
  char v53; // al
  __int64 v54; // rdx
  __int64 v55; // r8
  unsigned int v56; // edi
  __int64 v57; // r15
  __int64 v58; // r14
  signed __int32 v59; // ebx
  KIRQL v60; // [rsp+48h] [rbp-39h]
  int v61; // [rsp+50h] [rbp-31h] BYREF
  unsigned int *v62; // [rsp+58h] [rbp-29h] BYREF
  __int64 v63; // [rsp+60h] [rbp-21h] BYREF
  __int64 v64; // [rsp+68h] [rbp-19h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-11h] BYREF
  int *v66; // [rsp+80h] [rbp-1h]
  __int64 v67; // [rsp+88h] [rbp+7h]
  unsigned int **v68; // [rsp+90h] [rbp+Fh]
  __int64 v69; // [rsp+98h] [rbp+17h]
  __int64 retaddr; // [rsp+E0h] [rbp+5Fh]

  v2 = *(int *)a2;
  v64 = 0LL;
  v3 = (int *)a2;
  if ( (unsigned int)v2 > 8 )
    PopFxBugCheck(0x603uLL, BugCheckParameter2, v2, 0LL);
  while ( 1 )
  {
    v5 = 0x140000000uLL;
    v6 = 0;
    v7 = *v3;
    if ( !*v3 )
      break;
    if ( v7 == 1 )
    {
      v9 = *((_QWORD *)v3 + 1);
      if ( BugCheckParameter2 )
        goto LABEL_4;
      v10 = (unsigned int)v3[4];
      if ( (unsigned int)v10 >= *(_DWORD *)(v9 + 868) )
        PopFxBugCheck(0x611uLL, 0LL, *((_QWORD *)v3 + 1), (unsigned int)v10);
      _mm_lfence();
      v46 = *(_QWORD *)(*(_QWORD *)(v9 + 872) + 8 * v10);
      if ( (unsigned int)v3[5] >= *(_DWORD *)(v46 + 156) )
        PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v9 + 872) + 8 * v10), 0LL);
      v47 = v3[5];
      if ( v47 == *(_DWORD *)(v46 + 152) )
        PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v9 + 872) + 8 * v10), 1uLL);
      if ( v47 && *(_DWORD *)(v46 + 152) )
        PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v9 + 872) + 8 * v10), 2uLL);
      *(_DWORD *)(v46 + 152) = v3[5];
      *(_DWORD *)(v46 + 140) = 2;
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v9 + 192), (unsigned int)v10, (unsigned int)v3[5]);
      v34 = _InterlockedExchangeAdd((volatile signed __int32 *)(v46 + 140), 0xFFFFFFFF);
      v35 = *(_QWORD *)(v9 + 48);
      if ( v34 != 1 )
      {
        PopFxAddLogEntry(v35, v10, 14, 0LL);
        return;
      }
      PopDiagTraceFxComponentIdleState(v35, v10, v3[5]);
      memset_0(v3, 0, 0x40uLL);
      v36 = *(_QWORD *)(v9 + 56);
      v6 = 0;
      v37 = (unsigned int *)(v36 + 208 * v10);
      v62 = v37 + 92;
      if ( !*(_BYTE *)(v36 + 124) )
      {
        v62 = v37 + 92;
LABEL_91:
        v6 = PopPepProcessEvent(v36, v37 + 48, 1LL);
        PopPlNotifyDeviceFState(*(_QWORD *)(v36 + 32), v10, v37[93], *v62, 1);
        goto LABEL_92;
      }
      v38 = *(_QWORD *)(v36 + 32);
      v39 = v37[50];
      *(_DWORD *)((char *)&v66 + 2) = 0;
      HIWORD(v66) = 0;
      UserData.Ptr = *(_QWORD *)(v38 + 72);
      UserData.Reserved = v37[92];
      v63 = v38;
      UserData.Size = v39;
      LOWORD(v66) = 1;
      v61 = v39;
      if ( (unsigned __int8)guard_dispatch_icall_no_overrides(19LL, &UserData, v39) )
      {
        v40 = BYTE1(v66);
        if ( BYTE1(v66) )
          goto LABEL_91;
        v41 = *(_QWORD *)(v63 + 48);
        if ( v41 )
        {
          v42 = *(_QWORD *)(v41 + 80);
          if ( v42 )
          {
            v43 = _InterlockedExchangeAdd((volatile signed __int32 *)(v42 + 896), 1u);
            a2 = 3LL * (v43 % *(_DWORD *)(v42 + 880));
            v44 = *(_QWORD *)(v42 + 888) + 24LL * (v43 % *(_DWORD *)(v42 + 880));
            *(_QWORD *)v44 = MEMORY[0xFFFFF78000000008];
            *(_BYTE *)(v44 + 9) = v61;
            *(_BYTE *)(v44 + 8) = 18;
            *(_WORD *)(v44 + 10) = KeGetCurrentPrcb()->Number;
            *(_WORD *)(v44 + 12) = KeGetCurrentThread()[1].CycleTime;
            CurrentRunTime = KeGetCurrentThread()[1].CurrentRunTime;
            *(_QWORD *)(v44 + 16) = 0LL;
            *(_WORD *)(v44 + 14) = CurrentRunTime;
            v40 = BYTE1(v66);
          }
        }
      }
      else
      {
        v40 = 1;
        BYTE1(v66) = 1;
      }
      if ( v40 )
        goto LABEL_91;
    }
    else
    {
      switch ( v7 )
      {
        case 2:
          v11 = *((_QWORD *)v3 + 1);
          if ( BugCheckParameter2 )
            goto LABEL_4;
          v12 = *(_QWORD *)(v11 + 48);
          v13 = *((_BYTE *)v3 + 16);
          if ( v12 )
            PopDiagTraceFxDevicePowerRequirement(v12, 1, v13);
          v60 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 400));
          if ( v13 )
          {
            *(_DWORD *)(v11 + 36) = 2;
            _m_prefetchw((const void *)(v11 + 32));
            v48 = *(_DWORD *)(v11 + 32);
            do
            {
              v49 = v48;
              v48 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 32), v48 & 0xFFFFFF7F, v48);
            }
            while ( v49 != v48 );
            if ( (v48 & 0x80u) == 0 )
              PopFxBugCheck(0x609uLL, 0LL, v11, 0LL);
            _m_prefetchw((const void *)(v11 + 32));
            v50 = *(_DWORD *)(v11 + 32);
            do
            {
              v51 = v50;
              v50 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 32), v50, v50);
            }
            while ( v51 != v50 );
            if ( (v50 & 4) != 0 )
            {
              _InterlockedAnd((volatile signed __int32 *)(v11 + 32), 0xFFFFFFFB);
              *(_DWORD *)(v11 + 40) = 0;
              v52 = KeCancelTimer((PKTIMER)(v11 + 408));
              _InterlockedDecrement((volatile signed __int32 *)(v11 + 36));
              if ( !v52 )
                goto LABEL_110;
              v53 = PopFxCompleteDevicePowerRequired(v11);
              goto LABEL_109;
            }
            if ( !*(_DWORD *)(v11 + 40) )
            {
              v53 = PopFxDeliverDevicePowerRequired(v11);
LABEL_109:
              v6 = v53;
            }
          }
          else
          {
            _m_prefetchw((const void *)(v11 + 32));
            v14 = *(_DWORD *)(v11 + 32);
            do
            {
              v15 = v14;
              v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 32), v14, v14);
            }
            while ( v15 != v14 );
            if ( (v14 & 0x80u) != 0 )
              PopFxBugCheck(0x609uLL, 0LL, v11, 1uLL);
            if ( (unsigned __int8)PopPepProcessEvent(*(_QWORD *)(v11 + 56), 0LL, 4LL) )
              PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
            _InterlockedOr((volatile signed __int32 *)(v11 + 32), 0x80u);
            if ( *(_QWORD *)(v11 + 144) )
            {
              if ( *(_DWORD *)(v11 + 36) || *(_DWORD *)(v11 + 40) || (*(_DWORD *)(v11 + 32) & 4) != 0 )
                PopFxBugCheck(0x610uLL, 0LL, v11, 0LL);
              *(_DWORD *)(v11 + 40) = 2;
              if ( !PopFxScheduleDeviceIdleTimer(v11) )
              {
                PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(v11 + 48), 0, 0);
                _InterlockedOr((volatile signed __int32 *)(v11 + 32), 0x4000u);
                guard_dispatch_icall_no_overrides(*(_QWORD *)(v11 + 192), v54, v55);
                _InterlockedOr((volatile signed __int32 *)(v11 + 32), 0x40u);
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 40), 0xFFFFFFFF) != 1 )
                  PopFxAddLogEntry(*(_QWORD *)(v11 + 48), 0, 17, 0LL);
              }
            }
            else
            {
              PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(v11 + 48), 0, 0);
              _InterlockedOr((volatile signed __int32 *)(v11 + 32), 0x4040u);
            }
          }
LABEL_110:
          KxReleaseSpinLock((PKSPIN_LOCK)(v11 + 400));
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v60);
          __writecr8(v60);
          break;
        case 3:
          v23 = (_QWORD *)*((_QWORD *)v3 + 1);
          v24 = -1073741822;
          if ( v23[19] )
          {
            v24 = PopFxTryReferenceDevice(*((_QWORD *)v3 + 1), 1);
            if ( v24 >= 0 )
            {
              v24 = guard_dispatch_icall_no_overrides(v23[24], *((_QWORD *)v3 + 2), *((_QWORD *)v3 + 4));
              PopFxDereferenceDevice(v23, 1LL, v25, v26);
            }
          }
          v27 = v23[7];
          v68 = (unsigned int **)(unsigned int)v24;
          UserData.Ptr = *(_QWORD *)(*(_QWORD *)(v27 + 32) + 72LL);
          *(_QWORD *)&UserData.Size = *((_QWORD *)v3 + 2);
          v66 = (int *)*((_QWORD *)v3 + 3);
          v67 = v64;
          guard_dispatch_icall_no_overrides(15LL, &UserData, v5);
          return;
        case 4:
          v16 = *((_QWORD *)v3 + 1);
          v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v16 + 400));
          if ( *((_BYTE *)v3 + 16) )
            _InterlockedOr((volatile signed __int32 *)(v16 + 32), 8u);
          else
            _InterlockedAnd((volatile signed __int32 *)(v16 + 32), 0xFFFFFFF7);
          PopFxUpdateDeviceIdleTimer(v16);
          KeReleaseSpinLock((PKSPIN_LOCK)(v16 + 400), v17);
          return;
        case 5:
          v22 = *((_QWORD *)v3 + 1);
          if ( !BugCheckParameter2 )
            goto LABEL_54;
          v56 = v3[4];
          if ( v56 >= *(_DWORD *)(v22 + 868) )
            PopFxBugCheck(0x611uLL, BugCheckParameter2, v22, v56);
          PopFxAddLogEntry(*(_QWORD *)(v22 + 48), v56, 18, 1LL);
          PopPepCompleteComponentIdleState(*(_QWORD *)(v22 + 56), v56);
          return;
        case 6:
          v28 = *((_QWORD *)v3 + 1);
          if ( !BugCheckParameter2 )
LABEL_54:
            PopFxBugCheck(0x603uLL, 0LL, *v3, 0LL);
          v29 = (unsigned int)v3[4];
          if ( (unsigned int)v29 >= *(_DWORD *)(v28 + 868) )
            PopFxBugCheck(0x611uLL, BugCheckParameter2, *((_QWORD *)v3 + 1), (unsigned int)v29);
          _mm_lfence();
          v57 = *(_QWORD *)(*(_QWORD *)(v28 + 872) + 8 * v29);
          v58 = *(_QWORD *)(v57 + 424);
          v59 = _InterlockedDecrement((volatile signed __int32 *)(v58 + 40));
          _InterlockedOr((volatile signed __int32 *)(v58 + 40), 0x20000000u);
          if ( (v59 & 0x8000000) == 0 )
            PopFxAddLogEntry(*(_QWORD *)(v28 + 48), v29, 20, 1LL);
          PopDiagTraceFxPerfRequestProgress(v58, v59 & 7, v5);
          PopFxCompleteComponentPerfState(
            v28,
            *(unsigned int *)(v57 + 16),
            *(_QWORD *)(v57 + 424),
            *((unsigned __int8 *)v3 + 20));
          return;
        case 7:
          PopFxAcpiForwardPepAcpiNotifyRequest(*((_QWORD *)v3 + 1));
          return;
        case 8:
          PopFxAcpiForwardPepWorkRequest(*((_QWORD *)v3 + 1));
          return;
        default:
          return;
      }
    }
LABEL_92:
    if ( !v6 )
      return;
  }
  v8 = *((_QWORD *)v3 + 1);
  if ( BugCheckParameter2 )
LABEL_4:
    PopFxBugCheck(0x603uLL, BugCheckParameter2, *v3, 0LL);
  v31 = (unsigned int)v3[4];
  if ( (unsigned int)v31 >= *(_DWORD *)(v8 + 868) )
    PopFxBugCheck(0x611uLL, 0LL, *((_QWORD *)v3 + 1), (unsigned int)v31);
  _mm_lfence();
  v32 = *(_QWORD *)(*(_QWORD *)(v8 + 872) + 8 * v31);
  v33 = (volatile signed __int32 *)(v32 + 200);
  if ( *(_DWORD *)(v32 + 152) )
    PopFxBugCheck(0x615uLL, 0LL, v31, 0LL);
  if ( *(int *)(v32 + 88) < 0 )
    PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v8 + 872) + 8 * v31), 1uLL);
  if ( (*(_DWORD *)(v32 + 88) & 0x3FFFFFFF) == 0 )
    PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v8 + 872) + 8 * v31), 2uLL);
  if ( *(_DWORD *)(v32 + 140) )
    PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v8 + 872) + 8 * v31), 3uLL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64(v33, 0LL) )
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v32 + 200));
  }
  else
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)(v32 + 200));
  }
  if ( *(_DWORD *)(v32 + 216) == 1 )
  {
    *(_QWORD *)(v32 + 224) = MEMORY[0xFFFFF78000000008];
    *(_BYTE *)(v32 + 208) = 1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)v33, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)(v32 + 200), retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  v63 = *(_QWORD *)(v8 + 48);
  v61 = v31;
  if ( PopDiagHandleRegistered && PopDiagHandle )
  {
    if ( (v18 = *(_QWORD *)(PopDiagHandle + 32), *(_DWORD *)(v18 + 96))
      && ((v19 = *(_BYTE *)(v18 + 100), v19 >= 4u) || !v19)
      && (*(_DWORD *)(v18 + 112) & 0x100LL) != 0
      && (*(_QWORD *)(v18 + 120) & 0x100LL) == *(_QWORD *)(v18 + 120)
      || *(_WORD *)(PopDiagHandle + 102)
      && (v20 = *(_QWORD *)(PopDiagHandle + 40), *(_DWORD *)(v20 + 96))
      && ((v21 = *(_BYTE *)(v20 + 100), v21 >= 4u) || !v21)
      && (*(_DWORD *)(v20 + 112) & 0x100LL) != 0
      && (*(_QWORD *)(v20 + 120) & 0x100LL) == *(_QWORD *)(v20 + 120) )
    {
      UserData.Ptr = (ULONGLONG)&v63;
      LODWORD(v62) = 1;
      *(_QWORD *)&UserData.Size = 8LL;
      v66 = &v61;
      v67 = 4LL;
      v68 = &v62;
      v69 = 4LL;
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_CONDITION, 0LL, 1u, 0LL, 0LL, 3u, &UserData);
    }
  }
  if ( *(_QWORD *)(v8 + 112) )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v8 + 192), (unsigned int)v31, v5);
  PopPepProcessEvent(*(_QWORD *)(v8 + 56), 208 * v31 + *(_QWORD *)(v8 + 56) + 192LL, 2LL);
  PopFxCompleteComponentActivation(v8, v32, 1);
}
