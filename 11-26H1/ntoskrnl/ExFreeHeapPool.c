/*
 * XREFs of ExFreeHeapPool @ 0x1403A9910
 * Callers:
 *     ExAllocateContiguousHeapPool @ 0x14034CAE0 (ExAllocateContiguousHeapPool.c)
 *     ExAllocateHeapPool @ 0x14039A530 (ExAllocateHeapPool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 * Callees:
 *     MmDeterminePoolType @ 0x14021A220 (MmDeterminePoolType.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x14025019C (RtlCSparseBitmapBitmaskRead.c)
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpFreePoolChecks @ 0x140346B10 (ExpFreePoolChecks.c)
 *     ExpCheckForResource @ 0x140346BC8 (ExpCheckForResource.c)
 *     ExpCheckForWorker @ 0x140346C58 (ExpCheckForWorker.c)
 *     KeCheckForTimer @ 0x140346E20 (KeCheckForTimer.c)
 *     ExpCheckForLookaside @ 0x140346FF8 (ExpCheckForLookaside.c)
 *     ExpPoolTrackerReturnLimit @ 0x140347070 (ExpPoolTrackerReturnLimit.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140347130 (ExpRemovePoolTrackerExpansion.c)
 *     RtlpHpFreeHeap @ 0x140349090 (RtlpHpFreeHeap.c)
 *     RtlpHpEnvCompactionSchedule @ 0x14034F6D0 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1403526A0 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpSegFreeInternal @ 0x140354B48 (RtlpHpSegFreeInternal.c)
 *     RtlpHpLargeFree @ 0x14035645C (RtlpHpLargeFree.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     PspReturnResourceQuota @ 0x1403C7360 (PspReturnResourceQuota.c)
 *     PspUnlockQuotaExpansion @ 0x1403C7A7C (PspUnlockQuotaExpansion.c)
 *     PspLockQuotaExpansion @ 0x1403C7AF4 (PspLockQuotaExpansion.c)
 *     EtwTracePool @ 0x1403CAA34 (EtwTracePool.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     ExIsSpecialPoolAddress @ 0x14047E9E4 (ExIsSpecialPoolAddress.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 *     KasanMarkAddressValidNoInline @ 0x1405257D0 (KasanMarkAddressValidNoInline.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x140529D0C (RtlpHpLfhThreadDataInitializeSet.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExpPoolFlagsToPoolType @ 0x140C16F50 (ExpPoolFlagsToPoolType.c)
 *     VfPtFreePoolNotification @ 0x140C4AF8C (VfPtFreePoolNotification.c)
 *     ViFreeTrackedPool @ 0x140C4C9BC (ViFreeTrackedPool.c)
 */

__int64 __fastcall ExFreeHeapPool(ULONG_PTR BugCheckParameter3)
{
  __int64 v2; // rax
  int v3; // eax
  __int64 v4; // r13
  __int64 v5; // r13
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // ebx
  unsigned __int8 v10; // r15
  unsigned int v11; // r12d
  _WORD *v12; // rbx
  __int64 v13; // rdi
  ULONG_PTR v14; // r15
  unsigned __int8 CurrentIrql; // cl
  ULONG_PTR v16; // rdx
  _BYTE *v17; // r8
  ULONG_PTR v18; // rax
  _BYTE *v19; // r8
  __int64 v20; // rsi
  int v21; // edx
  unsigned __int64 v22; // rdi
  int StackBase; // r10d
  __int64 v24; // r11
  __int64 v25; // rdx
  int v26; // r14d
  __int64 v27; // r8
  int i; // eax
  int v29; // r9d
  __int64 v30; // r9
  __int64 result; // rax
  signed __int32 v32; // eax
  int v33; // ett
  signed __int32 v34; // edx
  int v35; // r8d
  unsigned int v36; // edx
  char *v37; // rcx
  unsigned int v38; // eax
  __int64 v39; // rsi
  ULONG_PTR v40; // rdi
  __int64 *v41; // r12
  ULONG_PTR v42; // r10
  unsigned __int64 *v43; // rbx
  unsigned __int64 v44; // r15
  unsigned __int64 v45; // rax
  __int64 v46; // r8
  ULONG_PTR v47; // rdx
  unsigned __int64 v48; // rtt
  __int64 v49; // r8
  ULONG_PTR BugCheckParameter4; // r9
  unsigned __int64 k; // r11
  unsigned __int64 v52; // r10
  bool v53; // zf
  signed __int64 v54; // rax
  signed __int64 v55; // r13
  bool v56; // cc
  signed __int64 v57; // r13
  __int64 v58; // r13
  ULONG_PTR v59; // rdi
  unsigned int v60; // r15d
  int v61; // ebx
  char v62; // cl
  ULONG_PTR v63; // rax
  __int64 v64; // rax
  __int16 v65; // bx
  ULONG_PTR v66; // rdx
  __int16 v67; // ax
  unsigned int v68; // esi
  ULONG_PTR v69; // r8
  ULONG_PTR v70; // r15
  __int64 v71; // rbx
  _KSPIN_LOCK_QUEUE *Next; // r11
  _BOOL8 v73; // r9
  unsigned __int64 *v74; // rsi
  unsigned __int64 v75; // r12
  unsigned __int64 v76; // rax
  __int64 v77; // r9
  unsigned __int64 v78; // rdx
  unsigned __int64 v79; // rtt
  char *v80; // rbx
  __int64 v81; // r8
  ULONG_PTR v82; // r9
  unsigned __int64 j; // rbx
  unsigned __int64 v84; // r10
  signed __int64 v85; // rdx
  signed __int64 v86; // rax
  signed __int64 v87; // r13
  signed __int64 v88; // r13
  __int64 v89; // rbx
  char v90; // r8
  __int64 v91; // rcx
  __int64 v92; // rsi
  __int64 v93; // rcx
  int v94; // edx
  int v95; // r10d
  __int64 v96; // rbx
  __int64 v97; // r8
  int v98; // r11d
  int *v99; // rcx
  int v100; // eax
  int v101; // r9d
  __int64 v102; // r9
  unsigned int v103; // eax
  unsigned int v104; // edx
  volatile signed __int64 *v105; // r11
  __int64 v106; // r12
  volatile signed __int64 *v107; // rax
  __int64 v108; // r15
  unsigned __int8 v109; // bl
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rax
  int v113; // edx
  unsigned __int64 v114; // rcx
  __int64 v115; // rax
  __int64 v116; // rdx
  ULONG_PTR v117; // r10
  int v118; // r15d
  volatile signed __int64 *v119; // r11
  volatile signed __int64 *v120; // rax
  signed __int64 v121; // rbx
  ULONG_PTR v122; // r8
  signed __int64 v123; // rcx
  unsigned __int64 v124; // r9
  signed __int64 v125; // rdx
  signed __int64 v126; // rax
  __int64 v127; // rcx
  __int64 v128; // rdx
  __int64 v129; // r8
  signed __int64 v130; // rbx
  int *v131; // r9
  signed __int64 v132; // rdx
  unsigned __int64 v133; // r10
  signed __int64 v134; // r8
  signed __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // r8
  __int64 v138; // rdx
  __int64 v139; // rdx
  __int64 v140; // r8
  unsigned __int16 v141; // ax
  __int64 v142; // rax
  int v143; // eax
  __int64 v144; // r10
  ULONG_PTR v145; // r9
  ULONG_PTR v146; // r11
  signed __int64 v147; // r11
  ULONG_PTR v148; // rbx
  __int64 v149; // rsi
  unsigned int v150; // ecx
  unsigned __int64 v151; // r14
  __int64 v152; // r9
  _QWORD *ExSaPageArray; // rax
  __int64 v154; // r10
  unsigned int v155; // ecx
  __int64 v156; // rax
  __int64 v157; // rdx
  __int64 v158; // r8
  __int64 v159; // r9
  __int64 v160; // r8
  signed __int64 v161; // rax
  char v162; // dl
  __int64 v163; // r8
  char v164; // cl
  int v165; // edx
  unsigned __int64 v166; // rdx
  signed __int64 v167; // rtt
  __int64 v168; // r9
  signed __int64 v169; // rax
  __int64 v170; // r10
  signed __int64 v171; // rtt
  __int64 v172; // rdx
  unsigned int v173; // eax
  BOOL v174; // [rsp+30h] [rbp-39h]
  __int64 v175; // [rsp+38h] [rbp-31h]
  __int64 v176; // [rsp+40h] [rbp-29h]
  __int64 v177; // [rsp+48h] [rbp-21h]
  __int64 v178; // [rsp+50h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-11h] BYREF
  __int64 retaddr; // [rsp+C8h] [rbp+5Fh]
  signed __int64 v181; // [rsp+D0h] [rbp+67h] BYREF
  signed __int64 v182; // [rsp+D8h] [rbp+6Fh] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+E0h] [rbp+77h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+E8h] [rbp+7Fh]

  v177 = 0LL;
  LockHandle.LockQueue = 0LL;
  *(_WORD *)((char *)&LockHandle.LockQueue.Next + 1) = 1;
  LOBYTE(LockHandle.LockQueue.Next) = 3;
  if ( (_WORD)BugCheckParameter3 )
  {
    v3 = 0;
LABEL_6:
    v181 = 0x100000000100000LL;
    v5 = *((unsigned int *)&v181 + v3);
    v4 = (*(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)((BugCheckParameter3 & ~(v5 - 1)) + 0x10) ^ BugCheckParameter3 & ~(v5 - 1))
       - 192LL * v3
       - 320;
    goto LABEL_7;
  }
  v2 = RtlCSparseBitmapBitmaskRead(
         (__int64)&ExpUuidLock.CycleTime,
         2 * ((BugCheckParameter3 - ExpUuidLock.ThreadLock) >> 20));
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 != 2 )
      goto LABEL_6;
  }
  memset(&LockHandle, 0, 32);
  RtlpHpVaMgrCtxQuery((__int64)&ExpUuidLock.TrapFrame, BugCheckParameter3, (__int64)&LockHandle);
  v4 = **(_QWORD **)&LockHandle.OldIrql;
LABEL_7:
  v176 = v4;
  if ( !v4 )
    KeBugCheckEx(0xC2u, 0LL, 0LL, BugCheckParameter3, 0LL);
  if ( LODWORD(stru_140EFF2C0.InitialStack) )
  {
    v6 = &qword_140EEF000;
    do
    {
      if ( v4 == *v6 )
      {
        _InterlockedDecrement((volatile signed __int32 *)&stru_140EFF2C0.InitialStack);
        v11 = 16;
        v12 = (_WORD *)(BugCheckParameter3 & 0xFFFFFFFFFFFFF000uLL);
        v13 = MmDeterminePoolType(BugCheckParameter3);
        if ( (*(_DWORD *)(BugCheckParameter3 & 0xFFFFFFFFFFFFF000uLL) & 0x2000) != 0 )
          v11 = ExpCacheLineSize;
        v14 = 4096 - (unsigned int)(BugCheckParameter3 & 0xFFF);
        if ( byte_140FC8BD8 )
          KasanMarkAddressValidNoInline(BugCheckParameter3 & 0xFFFFFFFFFFFFF000uLL, 0x1000uLL);
        ExpFreePoolChecks(
          BugCheckParameter3,
          *(_DWORD *)((BugCheckParameter3 & 0xFFFFFFFFFFFFF000uLL) + 4),
          v14,
          128,
          BugCheckParameter3);
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql > (unsigned __int8)(((v13 & 0x100) == 0) + 1) )
          KeBugCheckEx(0xC1u, CurrentIrql, 0x100uLL, BugCheckParameter3, 0x31uLL);
        v16 = *v12 & 0x1FFF;
        if ( (~(v11 - 1LL) & (v11 + v16 - 1)) != v14 )
          KeBugCheckEx(0xC1u, BugCheckParameter3, *v12 & 0x1FFF, v14, 0x21uLL);
        v17 = v12 + 8;
        if ( (*(_DWORD *)v12 & 0x4000) != 0 )
          v17 = v12 + 12;
        for ( ; (unsigned __int64)v17 < BugCheckParameter3; ++v17 )
        {
          if ( *v17 != (unsigned __int8)BYTE2(*(_DWORD *)v12) )
            KeBugCheckEx(0xC1u, BugCheckParameter3, (ULONG_PTR)v17, *(unsigned int *)v12, 0x23uLL);
        }
        v18 = (BugCheckParameter3 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        v19 = (_BYTE *)(v16 + BugCheckParameter3);
        if ( v16 + BugCheckParameter3 < v18 )
        {
          do
          {
            if ( *v19 != *(_BYTE *)((BugCheckParameter3 & 0xFFFFFFFFFFFFF000uLL) + 2) )
              KeBugCheckEx(0xC1u, BugCheckParameter3, (ULONG_PTR)v19, *(unsigned int *)v12, 0x24uLL);
            ++v19;
          }
          while ( (unsigned __int64)v19 < v18 );
        }
        if ( (*(_DWORD *)v12 & 0x4000) != 0 )
          ViFreeTrackedPool(BugCheckParameter3, v16);
        v20 = *(unsigned int *)((BugCheckParameter3 & 0xFFFFFFFFFFFFF000uLL) + 4);
        LODWORD(BugCheckParameter3a) = 0;
        LOBYTE(v181) = 0;
        LOBYTE(v182) = 0;
        if ( (_DWORD)v20 == PoolHitTag )
          __debugbreak();
        if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0
          && (int)ExpPoolFlagsToPoolType(
                    v13,
                    v13 & 0x10,
                    (unsigned int)&BugCheckParameter3a,
                    (unsigned int)&v181,
                    (__int64)&v182) >= 0 )
        {
          v21 = BugCheckParameter3a;
          if ( (_BYTE)v181 )
            v21 = BugCheckParameter3a | 8;
          EtwTracePool(3618, v21, v20, BugCheckParameter3, v14);
        }
        v22 = v13 & 0xFFFFFFFFFFFFFFFBuLL;
        StackBase = (int)stru_140EFF2C0.StackBase;
        v24 = *(&stru_140EFF2C0.ThreadLock + KeGetPcr()->Prcb.Number);
        v25 = (unsigned __int64)stru_140EFF2C0.StackBase & ((40543 * (int)v20) ^ ((unsigned __int64)(40543 * v20) >> 32));
        v26 = LODWORD(stru_140EFF2C0.StackBase) & ((40543 * v20) ^ ((unsigned __int64)(40543 * v20) >> 32));
        v27 = v24 + 80 * v25;
        for ( i = *(_DWORD *)v27; *(_DWORD *)v27 != (_DWORD)v20; i = *(_DWORD *)v27 )
        {
          if ( i || (v29 = *(_DWORD *)(stru_140EFF2C0.QuantumTarget + 80LL * (unsigned int)v25)) == 0 )
          {
            LODWORD(v25) = StackBase & (v25 + 1);
            if ( (_DWORD)v25 == v26 )
            {
              ExpRemovePoolTrackerExpansion(v20, v14, v22);
              return RtlpHpFreeHeap(v4, (__int64)v12);
            }
          }
          else
          {
            *(_DWORD *)v27 = v29;
            v30 = *(_QWORD *)(stru_140EFF2C0.QuantumTarget + 80LL * (unsigned int)v25 + 72);
            if ( v30 )
              *(_QWORD *)(v27 + 72) = v30;
          }
          v27 = v24 + 80LL * (unsigned int)v25;
        }
        ExpPoolTrackerReturnLimit((v22 & 0x100) == 0, v14, v27);
        return RtlpHpFreeHeap(v4, (__int64)v12);
      }
      ++v6;
    }
    while ( (__int64)v6 < (__int64)qword_140EEF020 );
  }
  v7 = 128LL;
  if ( (BugCheckParameter3 & 0xFFF) != 0 )
  {
    v62 = *(_BYTE *)(BugCheckParameter3 - 13);
    v59 = BugCheckParameter3 - 16;
    v175 = 24LL;
    if ( (v62 & 8) != 0 )
    {
      v63 = BugCheckParameter3 - 16;
      if ( (v62 & 4) != 0 )
        v63 = v59 - 16LL * (unsigned __int8)*(_WORD *)v59;
      v64 = (ULONG_PTR)stru_140FC11F0.WaitBlock[1].WaitListEntry.Blink ^ *(_QWORD *)(v63 + 8) ^ v63;
      if ( v64 && v64 != -1 )
      {
        if ( !LODWORD(stru_140EFF2C0.InitialStack) || !(unsigned int)ExIsSpecialPoolAddress(BugCheckParameter3) )
        {
          v65 = 64;
          if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter3) == 5 )
            v65 = 256;
          v66 = BugCheckParameter3 - 16;
          if ( (*(_BYTE *)(BugCheckParameter3 - 13) & 4) != 0 )
            v66 += -16LL * (unsigned __int8)*(_WORD *)v66;
          v67 = *(_WORD *)(v66 + 2);
          v68 = *(_DWORD *)(v66 + 4);
          v69 = 16LL * (unsigned __int8)v67;
          BugCheckParameter2 = v69;
          LODWORD(BugCheckParameter3a) = v68;
          if ( (v67 & 0x800) != 0 )
          {
            v70 = *(_QWORD *)(v66 + 8) ^ (ULONG_PTR)stru_140FC11F0.WaitBlock[1].WaitListEntry.Blink ^ v66;
            *(_QWORD *)(v66 + 8) = (ULONG_PTR)stru_140FC11F0.WaitBlock[1].WaitListEntry.Blink ^ v66;
          }
          else
          {
            v70 = -1LL;
          }
          if ( v70 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && (v70 < 0xFFFF800000000000uLL || (*(_BYTE *)v70 & 0x7F) != 3) )
          {
            if ( v66 )
              v173 = *(_DWORD *)(v66 + 4);
            else
              v173 = 0;
            KeBugCheckEx(0xC2u, 0xDuLL, BugCheckParameter3, v173, v70);
          }
          if ( v70 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            v71 = v65 & 0x100;
            if ( (PEPROCESS)v70 != PsInitialSystemProcess )
            {
              Next = *(_KSPIN_LOCK_QUEUE **)(v70 + 760);
              LockHandle.LockQueue.Next = Next;
              v73 = v71 != 0;
              v174 = v71 != 0;
              v74 = (unsigned __int64 *)&Next[8 * v73];
              LOBYTE(v182) = stru_140FC11F0.SchedulerApcFill3[8 * v73 + 40];
              _m_prefetchw(v74);
              v75 = *v74;
              v76 = v74[8];
              if ( v74[10] )
              {
                v77 = 56 * v73;
                if ( v76 > v75 )
                {
                  v78 = *(_QWORD *)((char *)&PsAltSystemCallRegistrationLock.Timer.Processor + v77);
                  if ( v76 - v75 > v78 )
                  {
                    if ( v78 > v69 )
                      v78 = v69;
                    v79 = v74[8];
                    if ( v79 == _InterlockedCompareExchange64((volatile signed __int64 *)v74 + 8, v76 - v78, v76)
                      && v78 + _InterlockedExchangeAdd64((volatile signed __int64 *)v74 + 9, v78) > *(_QWORD *)((char *)&PsAltSystemCallRegistrationLock.Timer.Processor + v77) )
                    {
                      v178 = _InterlockedExchange64((volatile __int64 *)v74 + 9, 0LL);
                      if ( v178 )
                      {
                        LOBYTE(v181) = 0;
                        v80 = (char *)&PsAltSystemCallRegistrationLock.Timer.Dpc + v77;
                        PspLockQuotaExpansion((char *)&PsAltSystemCallRegistrationLock.Timer.Dpc + v77, &v181);
                        guard_dispatch_icall_no_overrides(v174, v178, v81);
                        PspUnlockQuotaExpansion(v80, (unsigned __int8)v181);
                        Next = LockHandle.LockQueue.Next;
                      }
                    }
                  }
                }
              }
              v82 = BugCheckParameter2;
              for ( j = (unsigned __int64)v174 << 7; ; v75 = *(__int64 *)((char *)&PspSystemQuotaBlock + j) )
              {
                do
                {
                  v84 = v75;
                  if ( v82 < v75 )
                    v84 = v82;
                  v85 = 0LL;
                  if ( v82 < v75 )
                    v85 = v75 - v82;
                  v86 = _InterlockedCompareExchange64((volatile signed __int64 *)v74, v85, v75);
                  v53 = v75 == v86;
                  v75 = v86;
                }
                while ( !v53 );
                v82 -= v84;
                if ( !v82 )
                  break;
                if ( Next == (_KSPIN_LOCK_QUEUE *)&PspSystemQuotaBlock )
                  KeBugCheckEx(0x21u, v70, v174, BugCheckParameter2, v82);
                Next = (_KSPIN_LOCK_QUEUE *)&PspSystemQuotaBlock;
                v74 = (unsigned __int64 *)((char *)&PspSystemQuotaBlock + j);
                _m_prefetchw((char *)&PspSystemQuotaBlock + j);
              }
              v68 = BugCheckParameter3a;
              if ( (v182 & 4) != 0 )
                _InterlockedAdd64((volatile signed __int64 *)(v70 + 8LL * v174 + 512), -(__int64)BugCheckParameter2);
            }
            if ( ObpTraceFlags )
              ObpPushStackInfo(v70 - 48, -1, v68);
            v87 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v70 - 48), 0xFFFFFFFFFFFFFFFFuLL);
            v56 = v87 <= 1;
            v88 = v87 - 1;
            if ( v56 )
            {
              if ( *(_QWORD *)(v70 - 40) )
                KeBugCheckEx(
                  0x18u,
                  ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v70 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v70 - 48) >> 8)],
                  v70,
                  3uLL,
                  *(_QWORD *)(v70 - 40));
              if ( v88 < 0 )
                KeBugCheckEx(0x18u, 0LL, v70, 4uLL, v88);
              ObpDeferObjectDeletion(v70 - 48);
            }
          }
        }
        v7 = 128LL;
      }
    }
    if ( (*(_BYTE *)(v59 + 3) & 4) != 0 )
    {
      v89 = 16LL * (unsigned __int8)*(_WORD *)v59;
      v59 += -16LL * (unsigned __int8)*(_WORD *)v59;
      v177 = v89;
      *(_BYTE *)(v59 + 3) |= 4u;
    }
    v90 = *(_BYTE *)(v59 + 3);
    v91 = 256LL;
    v60 = *(_DWORD *)(v59 + 4);
    if ( (v90 & 1) == 0 )
      v91 = 128LL;
    v92 = v91 | 4;
    if ( (v90 & 0x20) == 0 )
      v92 = v91;
    v39 = v92 | 2;
    if ( (*(_BYTE *)(v59 + 3) & 8) != 0 )
      v39 |= 1uLL;
    if ( (v90 & 0xDE) != 0 )
    {
      v93 = v39 | 8;
      if ( (v90 & 4) == 0 )
        v93 = v39;
      v7 = v93 | 0x200;
      if ( v90 >= 0 )
        v7 = v93;
      LODWORD(v39) = v7 | 0x400;
      if ( (v90 & 0x40) == 0 )
        LODWORD(v39) = v7;
      if ( (*(_BYTE *)(v59 + 3) & 8) == 0 && (v90 & 0x10) != 0 )
        LODWORD(v39) = v39 | 0x20;
    }
    v61 = v59 + 16;
    v58 = 16LL * (unsigned __int8)*(_WORD *)(v59 + 2);
  }
  else
  {
    v9 = 64;
    if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter3) == 5 )
      v9 = 256;
    v10 = KeGetCurrentIrql();
    if ( v10 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v10, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(&ExpLargePoolTableLock);
      v33 = ExpLargePoolTableLock & 0x7FFFFFFF;
      v32 = _InterlockedCompareExchange(
              &ExpLargePoolTableLock,
              (ExpLargePoolTableLock & 0x7FFFFFFF) + 1,
              ExpLargePoolTableLock & 0x7FFFFFFF);
      if ( v33 != v32 )
      {
        while ( v32 >= 0 )
        {
          v34 = v32;
          v32 = _InterlockedCompareExchange(&ExpLargePoolTableLock, v32 + 1, v32);
          if ( v32 == v34 )
            goto LABEL_59;
        }
        ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, v10, v8);
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock, v10);
    }
LABEL_59:
    v35 = 1;
    v36 = (PoolBigPageTableSize - 1) & ((40543 * (BugCheckParameter3 >> 12)) ^ ((40543 * (BugCheckParameter3 >> 12)) >> 32));
    while ( 1 )
    {
      v37 = (char *)PoolBigPageTable + 32 * v36;
      if ( *(_QWORD *)v37 == BugCheckParameter3 )
        break;
      if ( ++v36 >= (unsigned __int64)PoolBigPageTableSize )
      {
        if ( !v35 )
          goto LABEL_298;
        v36 = 0;
        v35 = 0;
      }
    }
    if ( !v37 )
LABEL_298:
      KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter3, v9, 0LL);
    v7 = *((_QWORD *)v37 + 2);
    LODWORD(v182) = *((_DWORD *)v37 + 2);
    v38 = *((_DWORD *)v37 + 3);
    LODWORD(v39) = (v38 >> 8) & 0xFFF;
    BugCheckParameter3a = v7;
    if ( (v38 & 0x100) != 0 )
      v40 = BugCheckParameter3 ^ (__int64)stru_140FC11F0.WaitBlock[1].WaitListEntry.Blink ^ *((_QWORD *)v37 + 3);
    else
      v40 = -1LL;
    _InterlockedDecrement(&ExpPoolBigEntriesInUse);
    *((_QWORD *)v37 + 3) = 0LL;
    _InterlockedIncrement64((volatile signed __int64 *)v37);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
      _InterlockedDecrement(&ExpLargePoolTableLock);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
    __writecr8(v10);
    v175 = 24LL;
    if ( v40 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      if ( (PEPROCESS)v40 != PsInitialSystemProcess )
      {
        v41 = *(__int64 **)(v40 + 760);
        v42 = (v39 & 0x100) != 0;
        BugCheckParameter2 = v42;
        v43 = (unsigned __int64 *)&v41[16 * v42];
        LOBYTE(v181) = stru_140FC11F0.SchedulerApcFill3[8 * v42 + 40];
        _m_prefetchw(v43);
        v44 = *v43;
        v45 = v43[8];
        if ( v43[10] )
        {
          v46 = 56 * v42;
          if ( v45 > v44 )
          {
            v47 = *(_QWORD *)((char *)&PsAltSystemCallRegistrationLock.Timer.Processor + v46);
            if ( v45 - v44 > v47 )
            {
              if ( v47 > BugCheckParameter3a )
                v47 = BugCheckParameter3a;
              v48 = v43[8];
              if ( v48 == _InterlockedCompareExchange64((volatile signed __int64 *)v43 + 8, v45 - v47, v45)
                && v47 + _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 9, v47) > *(_QWORD *)((char *)&PsAltSystemCallRegistrationLock.Timer.Processor + v46) )
              {
                v49 = _InterlockedExchange64((volatile __int64 *)v43 + 9, 0LL);
                if ( v49 )
                {
                  PspReturnResourceQuota((unsigned int)v42, v43, v49, 0LL);
                  LODWORD(v42) = BugCheckParameter2;
                }
              }
            }
          }
        }
        BugCheckParameter4 = BugCheckParameter3a;
        for ( k = (unsigned __int64)(unsigned int)v42 << 7; ; v44 = *(__int64 *)((char *)&PspSystemQuotaBlock + k) )
        {
          do
          {
            v52 = v44;
            if ( BugCheckParameter4 < v44 )
              v52 = BugCheckParameter4;
            v7 = 0LL;
            if ( BugCheckParameter4 < v44 )
              v7 = v44 - BugCheckParameter4;
            v54 = _InterlockedCompareExchange64((volatile signed __int64 *)v43, v7, v44);
            v53 = v44 == v54;
            v44 = v54;
          }
          while ( !v53 );
          BugCheckParameter4 -= v52;
          if ( !BugCheckParameter4 )
            break;
          if ( v41 == &PspSystemQuotaBlock )
            KeBugCheckEx(0x21u, v40, (unsigned int)BugCheckParameter2, BugCheckParameter3a, BugCheckParameter4);
          v41 = &PspSystemQuotaBlock;
          v43 = (unsigned __int64 *)((char *)&PspSystemQuotaBlock + k);
          _m_prefetchw((char *)&PspSystemQuotaBlock + k);
        }
        if ( (v181 & 4) != 0 )
          _InterlockedAdd64(
            (volatile signed __int64 *)(v40 + 8LL * (unsigned int)BugCheckParameter2 + 512),
            -(__int64)BugCheckParameter3a);
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo(v40 - 48, -1, v182);
      v55 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v40 - 48), 0xFFFFFFFFFFFFFFFFuLL);
      v56 = v55 <= 1;
      v57 = v55 - 1;
      if ( v56 )
      {
        if ( *(_QWORD *)(v40 - 40) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v40 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v40 - 48) >> 8)],
            v40,
            3uLL,
            *(_QWORD *)(v40 - 40));
        if ( v57 < 0 )
          KeBugCheckEx(0x18u, 0LL, v40, 4uLL, v57);
        ObpDeferObjectDeletion(v40 - 48);
      }
    }
    v58 = BugCheckParameter3a;
    v59 = BugCheckParameter3;
    v60 = v182;
    v61 = BugCheckParameter3;
  }
  if ( (ExpPoolFlags & 0x207) != 0 )
  {
    if ( (ExpPoolFlags & 0x200) != 0 && (v39 & 0xC0) != 0 )
      ExpCheckForLookaside(v59, v58);
    if ( (ExpPoolFlags & 1) != 0 )
      KeCheckForTimer(v59, v58);
    if ( (ExpPoolFlags & 4) != 0 )
      ExpCheckForResource((struct _KTHREAD *)v59, v58);
    if ( (ExpPoolFlags & 2) != 0 )
      ExpCheckForWorker(v59, v58);
  }
  if ( (ExpPoolFlags & 0x10) != 0 )
    VfPtFreePoolNotification(v59, v60, v58, BugCheckParameter3);
  LODWORD(BugCheckParameter3a) = 0;
  LOBYTE(v181) = 0;
  LOBYTE(v182) = 0;
  if ( v60 == PoolHitTag )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0
    && (int)ExpPoolFlagsToPoolType(
              v39,
              v39 & 0x10,
              (unsigned int)&BugCheckParameter3a,
              (unsigned int)&v181,
              (__int64)&v182) >= 0 )
  {
    v94 = BugCheckParameter3a;
    if ( (_BYTE)v181 )
      v94 = BugCheckParameter3a | 8;
    EtwTracePool(3618, v94, v60, v61, v58);
  }
  v95 = (int)stru_140EFF2C0.StackBase;
  v96 = *(&stru_140EFF2C0.ThreadLock + KeGetPcr()->Prcb.Number);
  v97 = (unsigned __int64)stru_140EFF2C0.StackBase & ((40543 * v60) ^ ((40543 * (unsigned __int64)v60) >> 32));
  v98 = (unsigned __int64)stru_140EFF2C0.StackBase & ((40543 * v60) ^ ((40543 * (unsigned __int64)v60) >> 32));
  v99 = (int *)(v96 + 80 * v97);
  v100 = *v99;
  if ( *v99 == v60 )
  {
LABEL_194:
    if ( (v39 & 0x100) != 0 )
    {
      v104 = 0;
      v105 = (volatile signed __int64 *)(v99 + 8);
      v107 = (volatile signed __int64 *)(v99 + 12);
      v106 = 16LL;
      v108 = 32LL;
    }
    else
    {
      v104 = 1;
      v175 = 48LL;
      v105 = (volatile signed __int64 *)(v99 + 2);
      v106 = 40LL;
      v107 = (volatile signed __int64 *)(v99 + 6);
      v108 = 56LL;
    }
    _InterlockedIncrement64(v107);
    v130 = _InterlockedExchangeAdd64(v105, -v58);
    if ( *((_QWORD *)v99 + 9) )
    {
      v131 = &v99[2 * v104];
      if ( (v131[14] & 1) == 0 )
      {
        v132 = *((_QWORD *)v131 + 7);
        v133 = (4 * v58 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
        if ( v133 == 64 )
          v133 = 128LL;
        v134 = v133 + v130;
        if ( v130 < v132 )
        {
          while ( v134 < v132 )
          {
            v135 = _InterlockedCompareExchange64((volatile signed __int64 *)v131 + 7, v134, v132);
            v53 = v132 == v135;
            v132 = v135;
            if ( v53 )
            {
              v136 = v135 - v134;
              v137 = v134 - v135;
              if ( v136 >= 0 )
                v137 = v136;
              v138 = *((_QWORD *)v99 + 9);
              if ( *(_QWORD *)(v106 + v138) || *(_QWORD *)(v175 + v138) )
                _InterlockedAdd64((volatile signed __int64 *)(v108 + v138), -v137);
              goto LABEL_246;
            }
            v134 = v133 + *v105;
            if ( *v105 >= v135 )
              goto LABEL_246;
          }
        }
      }
    }
    goto LABEL_246;
  }
  while ( 1 )
  {
    if ( !v100 )
    {
      v7 = 10LL * (unsigned int)v97;
      v101 = *(_DWORD *)(stru_140EFF2C0.QuantumTarget + 80LL * (unsigned int)v97);
      if ( v101 )
      {
        *v99 = v101;
        v102 = *(_QWORD *)(stru_140EFF2C0.QuantumTarget + 80LL * (unsigned int)v97 + 72);
        if ( v102 )
          *((_QWORD *)v99 + 9) = v102;
        goto LABEL_193;
      }
    }
    v103 = v95 & (v97 + 1);
    v97 = v103;
    if ( v103 == v98 )
      break;
LABEL_193:
    v99 = (int *)(v96 + 80LL * (unsigned int)v97);
    v100 = *v99;
    if ( *v99 == v60 )
      goto LABEL_194;
  }
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  LockHandle.LockQueue.Lock = &ExpTaggedPoolLock;
  LockHandle.LockQueue.Next = 0LL;
  v109 = KeGetCurrentIrql();
  if ( v109 != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = 2;
    KiRaiseIrqlProcessIrqlFlags(v109, v7);
  }
  LockHandle.OldIrql = v109;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v110 = _InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&LockHandle);
    if ( v110 )
      KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v110, v97);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)&ExpTaggedPoolLock);
  }
  v111 = 0LL;
  if ( PoolTrackTableExpansionSize )
  {
    v112 = 0LL;
    while ( 1 )
    {
      v113 = *(_DWORD *)(PoolTrackTableExpansion + 80 * v112);
      if ( v113 == v60 )
        break;
      if ( v113 )
      {
        v111 = (unsigned int)(v111 + 1);
        v112 = (unsigned int)v111;
        if ( (unsigned int)v111 < (unsigned __int64)PoolTrackTableExpansionSize )
          continue;
      }
      goto LABEL_210;
    }
    v117 = PoolTrackTableExpansion + 80 * v111;
    if ( (v39 & 0x100) != 0 )
    {
      v118 = 0;
      v119 = (volatile signed __int64 *)(v117 + 32);
      v120 = (volatile signed __int64 *)(v117 + 48);
    }
    else
    {
      v118 = 1;
      v119 = (volatile signed __int64 *)(v117 + 8);
      v120 = (volatile signed __int64 *)(v117 + 24);
    }
    _InterlockedIncrement64(v120);
    v121 = _InterlockedExchangeAdd64(v119, -v58);
    if ( *(_QWORD *)(v117 + 72) )
    {
      v122 = v117 + 8LL * v118;
      if ( (*(_BYTE *)(v122 + 56) & 1) == 0 )
      {
        v123 = *(_QWORD *)(v122 + 56);
        v124 = (4 * v58 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
        if ( v124 == 64 )
          v124 = 128LL;
        v125 = v124 + v121;
        if ( v121 < v123 )
        {
          while ( v125 < v123 )
          {
            v126 = _InterlockedCompareExchange64((volatile signed __int64 *)(v122 + 56), v125, v123);
            v53 = v123 == v126;
            v123 = v126;
            if ( v53 )
            {
              v127 = v126 - v125;
              v128 = v125 - v126;
              if ( v127 >= 0 )
                v128 = v127;
              v129 = *(_QWORD *)(v117 + 72) + 24LL * v118;
              if ( *(_QWORD *)(v129 + 16) || *(_QWORD *)(v129 + 24) )
                _InterlockedAdd64((volatile signed __int64 *)(v129 + 32), -v128);
              break;
            }
            v125 = v124 + *v119;
            if ( *v119 >= v126 )
              break;
          }
        }
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
LABEL_210:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v114 = -v58;
    v115 = *(&stru_140EFF2C0.ThreadLock + KeGetPcr()->Prcb.Number);
    v116 = 80LL * (unsigned int)(LODWORD(stru_140EFF2C0.StackLimit) - 1);
    if ( (v39 & 0x100) != 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v115 + v116 + 48));
      _InterlockedAdd64((volatile signed __int64 *)(v115 + v116 + 32), v114);
    }
    else
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v115 + v116 + 24));
      _InterlockedAdd64((volatile signed __int64 *)(v115 + v116 + 8), v114);
    }
  }
LABEL_246:
  if ( (v39 & 0x400) != 0 )
    ViFreeTrackedPool(BugCheckParameter3, v58 - v177);
  if ( byte_140FC8BD8 )
    KasanMarkAddressValidNoInline(v59, v58);
  v139 = *(_QWORD *)(v176 + 56);
  if ( (unsigned __int64)(v58 - 513) > 0xD7F
    || !v139
    || ((v140 = v139
              + (((unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap
                                + ((unsigned __int64)(unsigned int)(v58 + 15) >> 4))
                - 33
                + 1LL) << 6),
         v141 = *(_WORD *)(v140 + 16),
         ++*(_DWORD *)(v140 + 28),
         *(_WORD *)v140 >= v141)
      ? (++*(_DWORD *)(v140 + 32), result = 0LL)
      : (RtlpInterlockedPushEntrySList((PSLIST_HEADER)v140, (PSLIST_ENTRY)v59), result = 1LL),
        !(_DWORD)result) )
  {
    if ( (_WORD)v59 )
    {
      v144 = v176 + 320;
      goto LABEL_263;
    }
    v142 = RtlCSparseBitmapBitmaskRead((__int64)&ExpUuidLock.CycleTime, 2 * ((v59 - ExpUuidLock.ThreadLock) >> 20));
    if ( !v142 )
      return RtlpHpLargeFree((__int128 *)v176, v59);
    v143 = v142 - 1;
    if ( v143 == 2 )
      return RtlpHpLargeFree((__int128 *)v176, v59);
    v144 = v176 + 320;
    if ( v143 == 1 )
      v144 = v176 + 512;
LABEL_263:
    v145 = *(_QWORD *)v144 & v59;
    if ( (*(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)(v145 + 0x10) ^ v145) != v144 )
      return RtlpLogHeapFailure(9, *(_QWORD *)(v144 + 56), v59, 0, 0LL, 0LL);
    v146 = v145 + 32 * ((unsigned __int64)(unsigned int)(v59 - v145) >> *(_BYTE *)(v144 + 8));
    v147 = v146 - 32LL * *(unsigned __int8 *)(v146 + 26);
    v148 = v145 + ((unsigned int)((__int64)(v147 - v145) >> 5) << *(_BYTE *)(v144 + 8));
    if ( *(_BYTE *)(v147 + 24) + (v148 == v59) == 11 )
    {
      v149 = *(_QWORD *)(v144 + 24);
      v150 = v59
           - ((LODWORD(PspTlsContext.WaitBlock[0].WaitListEntry.Flink) ^ *(_DWORD *)(v148 + 40) ^ (unsigned int)(v148 >> 12)) >> 16)
           - v148;
      v151 = (v150
            * (unsigned __int64)*(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(v148 + 44) << 6) + v149 + 72)) >> 32;
      result = (unsigned int)v151
             * (unsigned __int16)(LOWORD(PspTlsContext.WaitBlock[0].WaitListEntry.Flink) ^ *(_WORD *)(v148 + 40) ^ (v148 >> 12));
      if ( v150 == (_DWORD)result )
      {
        v152 = (*(_DWORD *)(v149 + 84) >> 13) & 0x3FFFF;
        ExSaPageArray = KeGetCurrentPrcb()->ExSaPageArray;
        v154 = (*(_DWORD *)(v149 + 84) >> 4) & 0x1FF;
        _BitScanReverse(&v155, v152);
        LODWORD(v181) = 0;
        v156 = *(_QWORD *)(*(_QWORD *)(ExSaPageArray[v155 - 2] + 8 * (v152 ^ (unsigned int)(1 << v155)) + 8) + 8 * v154);
        if ( !v156 )
          LOWORD(v156) = RtlpHpLfhThreadDataInitializeSet(v149);
        if ( (_WORD)v156 != *(_WORD *)(v148 + 46) || *(_BYTE *)(v148 + 22) == 1 )
        {
          v159 = v151;
          v160 = *(_QWORD *)(v148 + 8 * (v151 >> 6) + 64);
          if ( !_bittest64(&v160, v151 & 0x3F) )
            return RtlpLogHeapFailure(17, *(_QWORD *)v149, v59, v148, v159, 0LL);
          v161 = *(_QWORD *)(v148 + 16);
          do
          {
            v181 = v161;
            v162 = BYTE6(v161);
            v182 = v161;
            if ( BYTE6(v161) == 1 )
              v162 = 2;
            BYTE6(v181) = v162;
            if ( v59 )
            {
              v163 = *(_QWORD *)(v149 + 88);
              v164 = v181;
              *(_WORD *)v59 = v181;
              v165 = __ROL4__(*(_DWORD *)v59 ^ v163, v164);
              LOWORD(v181) = v151 + 1;
              *(_DWORD *)(v59 + 8) = v59 ^ HIDWORD(v163) ^ v165;
            }
            ++WORD1(v181);
            v166 = (unsigned __int64)*(unsigned __int16 *)(v148 + 44) << 6;
            v167 = v161;
            v161 = _InterlockedCompareExchange64((volatile signed __int64 *)(v148 + 16), v181, v161);
          }
          while ( v167 != v161 );
          result = *(unsigned __int8 *)(v166 + v149 + 92);
          if ( !(_BYTE)result )
          {
            *(_BYTE *)(v166 + v149 + 92) = 1;
            result = BYTE1(**(_QWORD **)(*(_QWORD *)v149 + 56LL)) == 1
                   ? HIDWORD(ExSaPageGroupDescriptorArrayLock.StackBase)
                   : LODWORD(ExSaPageGroupDescriptorArrayLock.ThreadLock);
            if ( !(_DWORD)result )
              result = RtlpHpEnvCompactionSchedule(*(_QWORD **)(*(_QWORD *)v149 + 56LL));
          }
          if ( BYTE6(v182) == 1 )
          {
            v168 = v149 + ((unsigned __int64)WORD2(v182) << 6);
            _m_prefetchw((const void *)(v168 + 8));
            v169 = *(_QWORD *)(v168 + 8);
            v170 = *(_QWORD *)(v148 + 24);
            *(_QWORD *)(v148 + 24) = v170 & 0xFFF | (v169 - (v169 & 0xFFF));
            v171 = v169;
            result = _InterlockedCompareExchange64((volatile signed __int64 *)(v168 + 8), v169 & 0xFFF | v148, v169);
            if ( v171 != result )
            {
              do
              {
                v172 = result;
                *(_QWORD *)(v148 + 24) = v170 ^ (result ^ v170) & 0xFFFFFFFFFFFFF000uLL;
                result = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)(v168 + 8),
                           v148 | result & 0xFFF,
                           result);
              }
              while ( result != v172 );
            }
          }
        }
        else
        {
          v157 = *(_QWORD *)(v148 + 8 * (v151 >> 6) + 64);
          v158 = __ROL8__(-2LL, v151 & 0x3F);
          v159 = v151;
          result = v157 & v158;
          *(_QWORD *)(v148 + 8 * (v151 >> 6) + 64) = v157 & v158;
          if ( (~v158 & v157) != 0 )
          {
            ++*(_WORD *)(v148 + 32);
            return result;
          }
          return RtlpLogHeapFailure(17, *(_QWORD *)v149, v59, v148, v159, 0LL);
        }
      }
    }
    else
    {
      return RtlpHpSegFreeInternal(v144, v59, v147, 0LL);
    }
  }
  return result;
}
