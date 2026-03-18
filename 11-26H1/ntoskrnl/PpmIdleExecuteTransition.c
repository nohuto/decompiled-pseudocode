/*
 * XREFs of PpmIdleExecuteTransition @ 0x1403EB78C
 * Callers:
 *     PoIdle @ 0x1403E9FF0 (PoIdle.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeAccumulateTicks @ 0x14021F980 (KeAccumulateTicks.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     PpmUnlockProcessors @ 0x1403EC22C (PpmUnlockProcessors.c)
 *     PpmExitCoordinatedIdle @ 0x1403EC374 (PpmExitCoordinatedIdle.c)
 *     PpmUpdateProcessorIdleAccounting @ 0x1403EC400 (PpmUpdateProcessorIdleAccounting.c)
 *     PpmEndActiveTimeAccumulation @ 0x1403EC8C0 (PpmEndActiveTimeAccumulation.c)
 *     PpmEnterCoordinatedIdle @ 0x1403EC920 (PpmEnterCoordinatedIdle.c)
 *     PpmBeginActiveTimeAccumulation @ 0x1403ECAA4 (PpmBeginActiveTimeAccumulation.c)
 *     PpmEventEnterIdleState @ 0x1403ECB64 (PpmEventEnterIdleState.c)
 *     KiSetClockTimer @ 0x140418F10 (KiSetClockTimer.c)
 *     KiCancelClockTimer @ 0x140419334 (KiCancelClockTimer.c)
 *     PpmIdleUpdateConcurrency @ 0x1404A9700 (PpmIdleUpdateConcurrency.c)
 *     PpmIdleCoordinatedBitsFromList @ 0x1404CE988 (PpmIdleCoordinatedBitsFromList.c)
 *     PpmIdleSetSynchronizationState @ 0x14050B914 (PpmIdleSetSynchronizationState.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     HvlSetPlatformIdleState @ 0x1405BF6A0 (HvlSetPlatformIdleState.c)
 *     KeQueryWakeSource @ 0x1405E4BFC (KeQueryWakeSource.c)
 *     KePrepareClockTimerForIdle @ 0x1405ED338 (KePrepareClockTimerForIdle.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405ED634 (KePrepareClockTimerForPlatformIdle.c)
 *     KeResumeClockTimerFromIdle @ 0x1405EDA84 (KeResumeClockTimerFromIdle.c)
 *     KeDeepSleepProcessor @ 0x1405F0AF4 (KeDeepSleepProcessor.c)
 *     KeWakeProcessor @ 0x1405F0F90 (KeWakeProcessor.c)
 *     PpmCancelExitLatencyTrace @ 0x140601658 (PpmCancelExitLatencyTrace.c)
 *     PpmIdlePrepareExitLatencyTrace @ 0x1406022D8 (PpmIdlePrepareExitLatencyTrace.c)
 *     PpmIdleRecheckCoordinatedIdleMask @ 0x140602424 (PpmIdleRecheckCoordinatedIdleMask.c)
 *     PpmTraceExitLatency @ 0x14060360C (PpmTraceExitLatency.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall PpmIdleExecuteTransition(
        ULONG_PTR BugCheckParameter4,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        char a8,
        char a9,
        char a10,
        char *a11)
{
  unsigned int v12; // r11d
  ULONG_PTR v13; // rdi
  __int64 v14; // r14
  ULONG_PTR v15; // r8
  unsigned __int16 v16; // cx
  unsigned int v17; // esi
  int v18; // r12d
  __int64 v19; // r9
  _BYTE *v20; // r9
  unsigned __int64 v21; // r15
  char v22; // r13
  char v23; // r10
  __int64 v24; // rdx
  __int64 v25; // rdx
  char v26; // r11
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // rdx
  signed __int64 v31; // rdi
  KSPIN_LOCK *v32; // rsi
  __int64 active; // r13
  __int64 v34; // rcx
  char v35; // r8
  __int64 v36; // rdx
  bool v37; // cf
  __int64 v38; // rdx
  int v39; // r8d
  __int64 v40; // rcx
  unsigned __int8 CurrentIrql; // di
  int v42; // eax
  __int64 v43; // r9
  __int64 v44; // r8
  int v45; // edi
  __int16 v46; // dx
  __int16 v47; // dx
  char *v48; // rax
  __int64 v49; // rcx
  _DWORD *v50; // rdx
  __int64 v51; // r9
  __int64 v52; // r8
  __int64 result; // rax
  int v54; // ecx
  int v55; // r9d
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // rdx
  int v59; // r10d
  __int16 v60; // r8
  __int16 v61; // ax
  unsigned int v62; // r15d
  __int64 v63; // rdx
  __int64 v64; // r8
  int v65; // edx
  bool v66; // al
  __int64 v67; // rdx
  KSPIN_LOCK *v68; // rcx
  KSPIN_LOCK *v69; // rcx
  unsigned __int8 v70; // al
  unsigned __int8 v71; // al
  __int64 v72; // rsi
  __int64 v73; // r9
  __int64 v74; // r9
  __int64 v75; // rax
  __int64 v76; // r9
  __int64 v77; // r8
  struct _KPRCB *CurrentPrcb; // rdi
  int v79; // esi
  char v80; // al
  int v81; // ecx
  int v82; // r11d
  int v83; // r8d
  __int64 *v84; // rdx
  int v85; // ecx
  __int16 v86; // di
  unsigned __int16 v87; // ax
  __int64 v88; // rdx
  signed __int16 v89; // tt
  bool v90; // zf
  signed __int16 v91; // tt
  __int16 v92; // ax
  unsigned __int64 v93; // rcx
  int *v94; // r8
  __int64 v95; // rdx
  __int64 v96; // rcx
  ULONG_PTR BugCheckParameter4a; // [rsp+20h] [rbp-E0h]
  int v98; // [rsp+28h] [rbp-D8h]
  __int64 v99; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v100; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v101; // [rsp+51h] [rbp-AFh]
  char v102; // [rsp+52h] [rbp-AEh]
  char v103; // [rsp+53h] [rbp-ADh]
  unsigned __int8 v104; // [rsp+54h] [rbp-ACh]
  char v105; // [rsp+55h] [rbp-ABh] BYREF
  unsigned __int8 v106; // [rsp+56h] [rbp-AAh]
  char v107; // [rsp+57h] [rbp-A9h]
  char v108; // [rsp+58h] [rbp-A8h]
  unsigned int BugCheckParameter2; // [rsp+5Ch] [rbp-A4h]
  unsigned int BugCheckParameter2_4; // [rsp+60h] [rbp-A0h]
  unsigned int v111; // [rsp+64h] [rbp-9Ch] BYREF
  int v112; // [rsp+68h] [rbp-98h]
  unsigned __int64 v113; // [rsp+70h] [rbp-90h] BYREF
  char *v114; // [rsp+78h] [rbp-88h]
  int v115; // [rsp+80h] [rbp-80h] BYREF
  __int64 v116; // [rsp+88h] [rbp-78h] BYREF
  _BYTE *v117; // [rsp+90h] [rbp-70h]
  __int64 v118; // [rsp+98h] [rbp-68h]
  __int64 v119; // [rsp+A0h] [rbp-60h]
  ULONG_PTR v120; // [rsp+A8h] [rbp-58h]
  _QWORD v121[2]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v122[144]; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v123; // [rsp+150h] [rbp+50h] BYREF
  unsigned int *v124; // [rsp+170h] [rbp+70h]
  __int64 v125; // [rsp+178h] [rbp+78h]
  char *v126; // [rsp+180h] [rbp+80h]
  __int64 v127; // [rsp+188h] [rbp+88h]

  BugCheckParameter2_4 = a3;
  BugCheckParameter2 = a2;
  v114 = a11;
  v121[0] = a4;
  memset_0(v122, 0, 0x88uLL);
  v12 = BugCheckParameter2;
  v13 = BugCheckParameter4 + 34880;
  v14 = *(_QWORD *)(BugCheckParameter4 + 34880);
  v15 = BugCheckParameter4 + 34972;
  v16 = 0;
  v115 = -1;
  v116 = 0LL;
  v112 = 130;
  v17 = 0;
  v111 = 130;
  v18 = 0;
  v119 = *(_QWORD *)(v14 + 664);
  v19 = 352 * (BugCheckParameter2 + 3LL);
  *a11 = 0;
  v20 = (_BYTE *)(v14 + v19);
  v102 = 0;
  v21 = 0LL;
  v104 = 0;
  v22 = 0;
  v105 = 0;
  v106 = 0;
  v100 = 0;
  LODWORD(v116) = 11;
  v117 = v20;
  v108 = 0;
  v120 = BugCheckParameter4 + 34972;
  if ( !a8 || *(_BYTE *)(v14 + 715) || v20[341] )
  {
    v23 = 0;
    v107 = 3;
  }
  else
  {
    v23 = 1;
    v107 = 4;
  }
  v24 = *(_QWORD *)(BugCheckParameter4 + 35472);
  v103 = v23;
  v101 = 0;
  v118 = 0LL;
  if ( v24 )
  {
    v73 = 56LL * ((*(_DWORD *)(BugCheckParameter4 + 35480))++ & 0xF);
    v74 = v24 + v73;
    v118 = v74;
    *(_DWORD *)(v74 + 36) = BugCheckParameter2_4;
    *(_QWORD *)v74 = a6;
    *(_DWORD *)(v74 + 32) = v12;
    v75 = PpmIdleCoordinatedBitsFromList(*(_QWORD *)(v14 + 1048), *(unsigned int *)(v14 + 1036));
    *(_QWORD *)(v76 + 16) = v75;
    v15 = BugCheckParameter4 + 34972;
    *(_DWORD *)(v76 + 40) = -1;
    v16 = 0;
    *(_QWORD *)(v76 + 24) = 0LL;
    *(_QWORD *)(v76 + 8) = 0LL;
    *(_DWORD *)(v76 + 48) = 0;
    *(_DWORD *)(v76 + 44) = 0;
    v20 = v117;
  }
  v25 = *(unsigned __int16 *)(v14 + 336);
  while ( v16 < (unsigned __int16)v25 )
  {
    if ( *(_QWORD *)(v14 + 8LL * v16 + 344) )
    {
      *(_WORD *)(v14 + 56) |= 0x20u;
      break;
    }
    ++v16;
  }
  if ( a10 )
    *(_WORD *)(v14 + 56) |= 0x8000u;
  *(_DWORD *)(BugCheckParameter4 + 34960) = v12;
  v26 = 0;
  *(_BYTE *)(BugCheckParameter4 + 34956) = v23;
  if ( a8 )
  {
    v66 = !v20[338] || v20[344];
    LOBYTE(v25) = 2;
    *(_BYTE *)(BugCheckParameter4 + 34957) = v66;
    PpmIdleSetSynchronizationState(v15, v25);
  }
  v27 = *(_QWORD *)(v14 + 8);
  v28 = 1LL;
  if ( v27 != -1 )
  {
    *(_WORD *)(v14 + 56) |= 0x400u;
    v106 = 1;
    v77 = v27 + a7;
    if ( KiClockTimerPerCpuTickScheduling == v26 )
    {
      *(_QWORD *)(BugCheckParameter4 + 34944) = v77;
      _interlockedbittestandset64(
        (volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter4 + 192) + 72LL),
        *(unsigned __int8 *)(BugCheckParameter4 + 209));
    }
    else
    {
      KiSetClockTimer(BugCheckParameter4, a7, v77, 0, 5, v26, *(_BYTE *)(v14 + 716) == (unsigned __int8)v26);
      v23 = v103;
      v26 = 0;
      v28 = 1LL;
    }
  }
  v29 = (__int64)v117;
  if ( v117[337] != v26 || a9 != v26 && KiClockTimerPerCpuTickScheduling == v26 )
    goto LABEL_50;
  v30 = *(_QWORD *)(BugCheckParameter4 + 192);
  v104 = 1;
  _m_prefetchw((const void *)(v30 + 64));
  v31 = _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter4 + 200), *(_QWORD *)(BugCheckParameter4 + 200));
  if ( !v23 && v117[344] == v26 )
    v17 = 1;
  v18 = guard_dispatch_icall_no_overrides(v17, v30);
  LODWORD(v32) = 0;
  if ( *(_DWORD *)(BugCheckParameter4 + 14424) )
  {
    v18 = -2147483631;
    goto LABEL_19;
  }
  if ( v18 < 0 )
  {
LABEL_19:
    if ( a8 )
      PpmIdleSetSynchronizationState(v120, 0LL);
    v13 = BugCheckParameter4 + 34880;
    LOBYTE(v29) = 1;
    v101 = 1;
    active = 0LL;
    goto LABEL_22;
  }
  if ( (unsigned __int8)PpmIdleRecheckCoordinatedIdleMask(
                          v14,
                          *(unsigned __int8 *)(BugCheckParameter4 + 208),
                          *(_QWORD *)(BugCheckParameter4 + 200) | v31) )
  {
    v18 = -1073741802;
    goto LABEL_19;
  }
  if ( a10 && !a5 )
    v18 = 128;
  if ( v103 )
  {
    v108 = 1;
    _InterlockedAdd((_DWORD *)&stru_140E66FF0.SystemAffinityTokenListHead.Next + 1, 1u);
    CurrentPrcb = KeGetCurrentPrcb();
    v79 = KiClockTimerOwner;
    if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
    {
      guard_dispatch_icall_no_overrides(1LL, v67);
      CurrentPrcb->ClockTimerState.ClockActive = 0;
      CurrentPrcb->PendingTickFlags &= ~1u;
    }
    if ( CurrentPrcb->Number == v79 )
      ++dword_140F25C64;
    if ( CurrentPrcb->ClockOwner )
      CurrentPrcb->ClockOwner = 0;
  }
  v113 = -1LL;
  if ( *(_BYTE *)(v14 + 716) )
  {
    v80 = PpmIdlePrepareExitLatencyTrace(v14, BugCheckParameter2_4);
    v105 = v80;
    if ( v80 )
    {
      v81 = 512;
      *(_WORD *)(v14 + 56) |= 0x200u;
    }
    if ( !a5 )
      goto LABEL_157;
    if ( v82 == -1 )
    {
      v81 = 1;
    }
    else
    {
      v81 = 1;
      if ( PpmDripsStateIndex != -1 )
        v22 = 1;
    }
    if ( a5 == 2 )
    {
      v83 = 1;
    }
    else
    {
LABEL_157:
      v83 = 0;
      if ( a5 )
        v81 = 1;
      else
        LOBYTE(v81) = 0;
    }
    v84 = &v116;
    LOBYTE(v84) = v22;
    KePrepareClockTimerForPlatformIdle(
      v81,
      (_DWORD)v84,
      v83,
      *(_QWORD *)(v14 + 696),
      v80,
      (__int64)&v116,
      (__int64)&v113);
LABEL_165:
    v13 = BugCheckParameter4 + 34880;
    if ( KiClockTimerPerCpuTickScheduling )
      *(_QWORD *)(BugCheckParameter4 + 34944) = v113;
    goto LABEL_50;
  }
  if ( KiClockTimerPerCpuTickScheduling )
  {
    KePrepareClockTimerForIdle(&v113);
    v85 = 10;
    if ( (_DWORD)KiClockTimerOwner == *(_DWORD *)(BugCheckParameter4 + 36) )
      v85 = 2;
    LODWORD(v116) = v85;
    goto LABEL_165;
  }
  v13 = BugCheckParameter4 + 34880;
LABEL_50:
  v32 = *(KSPIN_LOCK **)(v13 + 456);
  if ( v32 )
  {
    PpmIdleUpdateConcurrency(*(PKSPIN_LOCK *)(v13 + 456));
    v68 = *(KSPIN_LOCK **)(v13 + 464);
    if ( v68 )
      PpmIdleUpdateConcurrency(v68);
  }
  v56 = v118;
  if ( v118 )
  {
    v29 = 65487LL;
    *(_WORD *)(v118 + 48) = (v106 << 6) | *(_WORD *)(v118 + 48) & 0xFF8F | (16 * (v22 & 1 | (2 * v104))) & 0xFFBF;
    *(_WORD *)(v56 + 50) = *(_WORD *)(v14 + 56);
  }
  *(_DWORD *)(v14 + 28) = BugCheckParameter2;
  PpmEndActiveTimeAccumulation(BugCheckParameter4, a6, v29, v28);
  if ( *(_QWORD *)(v14 + 600) )
  {
    BugCheckParameter4a = *(_QWORD *)(v14 + 1048);
    v18 = guard_dispatch_icall_no_overrides(v119, BugCheckParameter2);
  }
  if ( BugCheckParameter2_4 != -1
    && BugCheckParameter2_4 == PpmDripsStateIndex
    && *(int *)(BugCheckParameter4 + 35120) >= 2 )
  {
    HvlSetPlatformIdleState(1LL);
  }
  if ( v18 >= 0 )
  {
    v100 = 1;
    PpmEnterCoordinatedIdle(*(_DWORD *)(v14 + 1036), *(_QWORD *)(v14 + 1048), BugCheckParameter2_4, a6, a5);
    if ( BugCheckParameter2_4 != -1 )
      *(_WORD *)(v14 + 56) |= 0x10u;
    LOBYTE(v57) = *(_BYTE *)(v14 + 717);
    PpmEventEnterIdleState(BugCheckParameter2, *(unsigned __int16 *)(v14 + 56), v57, *(_QWORD *)(v14 + 688));
    v59 = 0;
    if ( a8 )
    {
      LOBYTE(v58) = v107;
      PpmIdleSetSynchronizationState(v120, v58);
    }
    if ( v104 != (_BYTE)v59 )
    {
      if ( v117[336] < 2u )
      {
        v102 = v59;
      }
      else
      {
        v102 = KeDeepSleepProcessor();
        v59 = 0;
      }
    }
    _InterlockedIncrement8((volatile signed __int8 *)(BugCheckParameter4 + 14567));
    v60 = v59;
    if ( (*(_BYTE *)(BugCheckParameter4 + 1820) & 1) != 0 )
    {
      v61 = *(_WORD *)(BugCheckParameter4 + 1830);
      if ( v61 )
      {
        *(_WORD *)(BugCheckParameter4 + 1816) |= 1u;
        v60 = v61;
      }
    }
    _m_prefetchw((const void *)(BugCheckParameter4 + 1824));
    v86 = *(_WORD *)(BugCheckParameter4 + 1824);
    if ( (v86 & 4) != 0 )
    {
      if ( (*(_BYTE *)(BugCheckParameter4 + 1816) & 1) != 0 )
      {
        v87 = *(_WORD *)(BugCheckParameter4 + 1830);
        if ( (v87 & 3) == 0 )
        {
          v60 |= 2u;
          *(_WORD *)(BugCheckParameter4 + 1830) = v87 | 2;
          __writemsr(0x48u, v87 | 2u);
        }
      }
      _InterlockedOr16((volatile signed __int16 *)(BugCheckParameter4 + 1824), 2u);
      v88 = *(_QWORD *)(BugCheckParameter4 + 11696);
      _m_prefetchw((const void *)(v88 + 1824));
      _m_prefetchw((const void *)(v88 + 1824));
      do
        v89 = *(_WORD *)(v88 + 1824);
      while ( v89 != _InterlockedCompareExchange16((volatile signed __int16 *)(v88 + 1824), v89 & 0xFFE4 | 0xA, v89) );
    }
    v90 = (*(_BYTE *)(BugCheckParameter4 + 1820) & 0x40) == 0;
    HIWORD(BugCheckParameter2_4) = HIWORD(v59);
    LOWORD(BugCheckParameter2_4) = v60;
    if ( !v90 )
      HIWORD(BugCheckParameter2_4) = *(_WORD *)(BugCheckParameter4 + 44714);
    v62 = BugCheckParameter2;
    v99 = *(_QWORD *)(v14 + 1048);
    v98 = *(_DWORD *)(v14 + 1036);
    LODWORD(BugCheckParameter4a) = BugCheckParameter2_4;
    v18 = guard_dispatch_icall_no_overrides(v119, v121[0]);
    if ( (v86 & 4) != 0 )
    {
      v63 = *(_QWORD *)(BugCheckParameter4 + 11696);
      _m_prefetchw((const void *)(v63 + 1824));
      _m_prefetchw((const void *)(v63 + 1824));
      v64 = 2LL;
      do
        v91 = *(_WORD *)(v63 + 1824);
      while ( v91 != _InterlockedCompareExchange16((volatile signed __int16 *)(v63 + 1824), v91 & 0xFFF5 | 2, v91) );
      if ( (*(_WORD *)(BugCheckParameter4 + 1824) & 0x10) == 0 )
      {
        v92 = *(_WORD *)(BugCheckParameter4 + 1830);
        if ( (v92 & 2) != 0 )
        {
          *(_WORD *)(BugCheckParameter4 + 1830) = v92 & 0xFFFD;
          v63 = 0LL;
          __writemsr(0x48u, v92 & 0xFFFD);
        }
      }
    }
    *(_WORD *)(BugCheckParameter4 + 1816) &= ~1u;
    _InterlockedDecrement8((volatile signed __int8 *)(BugCheckParameter4 + 14567));
    if ( v102 && *(_BYTE *)(BugCheckParameter4 + 34394) )
      KeWakeProcessor(0LL, v63, v64);
    if ( v18 == 257 )
    {
      ++*(_DWORD *)(BugCheckParameter4 + 34368);
      v18 = 0;
    }
    if ( *(int *)(v14 + 60) < 0 && v18 >= 0 )
      v18 = *(_DWORD *)(v14 + 60);
    v113 = 0LL;
    if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
    {
      v113 = __PAIR64__(v18, v62);
      v121[0] = &v113;
      v121[1] = 8LL;
      EtwTraceKernelEvent((int)v121, 1, 0x40008000u, 4666, 1538);
    }
    v13 = BugCheckParameter4 + 34880;
  }
  active = PpmBeginActiveTimeAccumulation(BugCheckParameter4);
  v21 = active - a6;
  if ( v32 )
  {
    PpmIdleUpdateConcurrency(v32);
    v69 = *(KSPIN_LOCK **)(v13 + 464);
    LODWORD(v32) = 0;
    if ( v69 )
      PpmIdleUpdateConcurrency(v69);
  }
  v65 = *(_DWORD *)(BugCheckParameter4 + 34372);
  if ( v65 == *(_DWORD *)(v13 + 36) )
    *(_QWORD *)(v13 + 24) += v21;
  else
    *(_QWORD *)(v13 + 24) = v21;
  *(_DWORD *)(v13 + 32) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter4 + 24) + 652LL);
  *(_DWORD *)(v13 + 36) = v65;
  if ( a8 != (_BYTE)v32 )
  {
    v70 = PpmIdleSetSynchronizationState(v13 + 92, 0LL);
    if ( v18 >= 0 && v70 != 8 && v103 != (_BYTE)v32 )
      KeBugCheckEx(0xA0u, 0x702uLL, BugCheckParameter2, v70, BugCheckParameter4);
    *(_BYTE *)(v13 + 77) = (_BYTE)v32;
  }
  LOBYTE(v29) = 0;
LABEL_22:
  PpmUpdateProcessorIdleAccounting(v13, v21, v29, (unsigned int)v18, BugCheckParameter4a, v98, v99);
  v36 = *(_QWORD *)(v13 + 48);
  v37 = v21 < qword_140F12D18;
  *(_QWORD *)(v13 + 40) = v36;
  if ( v37 && *(_DWORD *)(v14 + 1036) > (unsigned int)v32 && v100 )
  {
    v71 = *(_BYTE *)(v14 + 65);
    if ( v71 < 5u )
      *(_BYTE *)(v14 + 65) = v71 + 1;
    LOWORD(v32) = 2;
  }
  else
  {
    *(_BYTE *)(v14 + 65) = (_BYTE)v32;
  }
  if ( v104 )
  {
    if ( v100 )
    {
      if ( v18 >= 0 && !v35 )
      {
        v36 = PpmPlatformStates;
        if ( PpmPlatformStates )
        {
          if ( PpmDripsStateIndex != -1
            && *(_DWORD *)(448LL * (unsigned int)PpmDripsStateIndex + PpmPlatformStates + 416) )
          {
            if ( (int)KeQueryWakeSource(&v116, &v111, v122) < 0 )
            {
              v112 = 3;
            }
            else
            {
              v36 = v111;
              v112 = v111;
              if ( PopIdleWakeSkippingEnabled && !v111 )
                *v114 = 1;
            }
          }
        }
      }
    }
    v93 = *(unsigned __int8 *)(BugCheckParameter4 + 209);
    _interlockedbittestandreset64((volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter4 + 192) + 64LL), v93);
    if ( v105 && v18 >= 0 )
    {
      v94 = &v115;
      LOBYTE(v36) = a5 == 2;
    }
    else
    {
      LOBYTE(v36) = a5 == 2;
      v94 = 0LL;
    }
    LOBYTE(v93) = *v114;
    KeResumeClockTimerFromIdle(v93, v36, v94);
    guard_dispatch_icall_no_overrides(v96, v95);
  }
  else if ( !a10 )
  {
    goto LABEL_26;
  }
  KeAccumulateTicks(
    BugCheckParameter4,
    *(_DWORD *)(BugCheckParameter4 + 14528),
    MEMORY[0xFFFFF78000000320],
    0,
    0,
    (*v114 != 0) + 3);
LABEL_26:
  LOBYTE(v34) = 1;
  guard_dispatch_icall_no_overrides(v34, v36);
  v40 = 0LL;
  if ( v106 )
  {
    if ( KiClockTimerPerCpuTickScheduling )
    {
      if ( v117[337] )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 15 )
          __writecr8(0xFuLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v38) = 15;
          LOBYTE(v40) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(v40, v38);
        }
        *(_BYTE *)(BugCheckParameter4 + 38452) &= ~1u;
        if ( (unsigned int)dword_140E06F58 > 5 )
        {
          v105 = 0;
          v124 = &v111;
          v111 = 5;
          v126 = &v105;
          v125 = 4LL;
          v127 = 1LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06F58,
            (unsigned __int8 *)byte_140048E4D,
            0LL,
            0LL,
            4u,
            &v123);
        }
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        v13 = BugCheckParameter4 + 34880;
      }
      else
      {
        KiCancelClockTimer(BugCheckParameter4, 5LL);
      }
    }
    else
    {
      _interlockedbittestandreset64(
        (volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter4 + 192) + 72LL),
        *(unsigned __int8 *)(BugCheckParameter4 + 209));
    }
    *(_QWORD *)(v13 + 64) = -1LL;
  }
  LOBYTE(v39) = v100;
  v42 = PpmExitCoordinatedIdle(
          BugCheckParameter4,
          (int)v14 + 1032,
          v39,
          v18,
          v101,
          active,
          a5,
          *v114,
          (__int64)v122,
          v112);
  v43 = v118;
  LOBYTE(v44) = 0;
  v45 = v42;
  if ( v118 )
  {
    v46 = *(_WORD *)(v118 + 48) & 0xFFFE;
    *(_QWORD *)(v118 + 8) = active;
    *(_DWORD *)(v43 + 44) = v18;
    v47 = (4 * v100) | (unsigned __int16)v32 & 0xFFFB | (v101 | v46) & 0xFFF9;
    v48 = v114;
    *(_WORD *)(v43 + 48) = v47;
    *(_WORD *)(v43 + 48) = v47 & 0xFFF7 | (8 * (*v48 & 1));
    v49 = 0LL;
    v50 = *(_DWORD **)(v14 + 1048);
    if ( *(_DWORD *)(v14 + 1036) )
    {
      v44 = *(unsigned int *)(v14 + 1036);
      do
      {
        if ( *v50 < 0x40u )
          v49 |= 1LL << *v50;
        ++v50;
        --v44;
      }
      while ( v44 );
    }
    *(_QWORD *)(v43 + 24) = v49;
    *(_DWORD *)(v43 + 40) = v45;
    *(_WORD *)(v43 + 50) = *(_WORD *)(v14 + 56);
  }
  if ( v101 == (_BYTE)v44 )
  {
    guard_dispatch_icall_no_overrides(v119, BugCheckParameter2);
    if ( v45 != -1 && v45 == PpmDripsStateIndex && *(int *)(BugCheckParameter4 + 35120) >= 2 )
      HvlSetPlatformIdleState(0LL);
  }
  v51 = *(_QWORD *)(v14 + 1048);
  LODWORD(v52) = *(_DWORD *)(v14 + 1036);
  while ( (_DWORD)v52 )
  {
    v52 = (unsigned int)(v52 - 1);
    *(_DWORD *)(448LL * *(unsigned int *)(v51 + 4 * v52) + PpmPlatformStates + 416) = 0;
  }
  if ( v108 )
    _InterlockedDecrement((_DWORD *)&stru_140E66FF0.SystemAffinityTokenListHead.Next + 1);
  result = PpmUnlockProcessors(v14 + 336, v14 + 336);
  if ( *(_BYTE *)(v14 + 3) )
  {
    v72 = *(_QWORD *)(BugCheckParameter4 + 34880);
    if ( v18 < 0 )
      return PpmCancelExitLatencyTrace(BugCheckParameter4);
    result = PpmTraceExitLatency(v54, BugCheckParameter2, v45, v55, v115, active);
    if ( (int)result < 0 )
      return PpmCancelExitLatencyTrace(BugCheckParameter4);
    else
      *(_BYTE *)(v72 + 3) = 0;
  }
  return result;
}
