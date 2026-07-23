/*
 * XREFs of PpmIdleExecuteTransition @ 0x1402F87D0
 * Callers:
 *     PoIdle @ 0x1402F6ED0 (PoIdle.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeAccumulateTicks @ 0x140221310 (KeAccumulateTicks.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     PpmUnlockProcessors @ 0x1402F9270 (PpmUnlockProcessors.c)
 *     PpmExitCoordinatedIdle @ 0x1402F93B8 (PpmExitCoordinatedIdle.c)
 *     PpmUpdateProcessorIdleAccounting @ 0x1402F9444 (PpmUpdateProcessorIdleAccounting.c)
 *     PpmEndActiveTimeAccumulation @ 0x1402F9900 (PpmEndActiveTimeAccumulation.c)
 *     PpmEnterCoordinatedIdle @ 0x1402F9960 (PpmEnterCoordinatedIdle.c)
 *     PpmBeginActiveTimeAccumulation @ 0x1402F9AE4 (PpmBeginActiveTimeAccumulation.c)
 *     PpmEventEnterIdleState @ 0x1402F9BA4 (PpmEventEnterIdleState.c)
 *     KiSetClockTimer @ 0x14040D440 (KiSetClockTimer.c)
 *     KiCancelClockTimer @ 0x14040D864 (KiCancelClockTimer.c)
 *     PpmIdleUpdateConcurrency @ 0x1404A2D90 (PpmIdleUpdateConcurrency.c)
 *     PpmIdleCoordinatedBitsFromList @ 0x1404C83B8 (PpmIdleCoordinatedBitsFromList.c)
 *     PpmIdleSetSynchronizationState @ 0x140505384 (PpmIdleSetSynchronizationState.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HvlSetPlatformIdleState @ 0x1405C1F10 (HvlSetPlatformIdleState.c)
 *     KeQueryWakeSource @ 0x1405E756C (KeQueryWakeSource.c)
 *     KePrepareClockTimerForIdle @ 0x1405EFCA8 (KePrepareClockTimerForIdle.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405EFFA4 (KePrepareClockTimerForPlatformIdle.c)
 *     KeResumeClockTimerFromIdle @ 0x1405F03F4 (KeResumeClockTimerFromIdle.c)
 *     KeDeepSleepProcessor @ 0x1405F3464 (KeDeepSleepProcessor.c)
 *     KeWakeProcessor @ 0x1405F3900 (KeWakeProcessor.c)
 *     PpmCancelExitLatencyTrace @ 0x140604108 (PpmCancelExitLatencyTrace.c)
 *     PpmIdlePrepareExitLatencyTrace @ 0x140604D88 (PpmIdlePrepareExitLatencyTrace.c)
 *     PpmIdleRecheckCoordinatedIdleMask @ 0x140604ED4 (PpmIdleRecheckCoordinatedIdleMask.c)
 *     PpmTraceExitLatency @ 0x1406060BC (PpmTraceExitLatency.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
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
  __int64 v35; // r8
  __int64 v36; // rdx
  bool v37; // cf
  __int64 v38; // rdx
  int v39; // r8d
  __int64 v40; // rcx
  unsigned __int8 CurrentIrql; // di
  unsigned int v42; // eax
  __int64 v43; // r9
  __int64 v44; // r8
  unsigned int v45; // edi
  __int16 v46; // dx
  __int16 v47; // dx
  char *v48; // rax
  __int64 v49; // rcx
  _DWORD *v50; // rdx
  __int64 v51; // r9
  __int64 i; // r8
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
  __int64 v97; // r8
  ULONG_PTR BugCheckParameter4a; // [rsp+20h] [rbp-E0h]
  int v99; // [rsp+28h] [rbp-D8h]
  __int64 v100; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v101; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v102; // [rsp+51h] [rbp-AFh]
  char v103; // [rsp+52h] [rbp-AEh]
  char v104; // [rsp+53h] [rbp-ADh]
  unsigned __int8 v105; // [rsp+54h] [rbp-ACh]
  char v106; // [rsp+55h] [rbp-ABh] BYREF
  unsigned __int8 v107; // [rsp+56h] [rbp-AAh]
  char v108; // [rsp+57h] [rbp-A9h]
  char v109; // [rsp+58h] [rbp-A8h]
  unsigned int BugCheckParameter2; // [rsp+5Ch] [rbp-A4h]
  unsigned int BugCheckParameter2_4; // [rsp+60h] [rbp-A0h]
  unsigned int v112; // [rsp+64h] [rbp-9Ch] BYREF
  int v113; // [rsp+68h] [rbp-98h]
  unsigned __int64 v114; // [rsp+70h] [rbp-90h] BYREF
  char *v115; // [rsp+78h] [rbp-88h]
  int v116; // [rsp+80h] [rbp-80h] BYREF
  __int64 v117; // [rsp+88h] [rbp-78h] BYREF
  _BYTE *v118; // [rsp+90h] [rbp-70h]
  __int64 v119; // [rsp+98h] [rbp-68h]
  __int64 v120; // [rsp+A0h] [rbp-60h]
  ULONG_PTR v121; // [rsp+A8h] [rbp-58h]
  _QWORD v122[2]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v123[144]; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v124; // [rsp+150h] [rbp+50h] BYREF
  unsigned int *v125; // [rsp+170h] [rbp+70h]
  __int64 v126; // [rsp+178h] [rbp+78h]
  char *v127; // [rsp+180h] [rbp+80h]
  __int64 v128; // [rsp+188h] [rbp+88h]

  BugCheckParameter2_4 = a3;
  BugCheckParameter2 = a2;
  v115 = a11;
  v122[0] = a4;
  memset_0(v123, 0, 0x88uLL);
  v12 = BugCheckParameter2;
  v13 = BugCheckParameter4 + 34880;
  v14 = *(_QWORD *)(BugCheckParameter4 + 34880);
  v15 = BugCheckParameter4 + 34972;
  v16 = 0;
  v116 = -1;
  v117 = 0LL;
  v113 = 130;
  v17 = 0;
  v112 = 130;
  v18 = 0;
  v120 = *(_QWORD *)(v14 + 664);
  v19 = 352 * (BugCheckParameter2 + 3LL);
  *a11 = 0;
  v20 = (_BYTE *)(v14 + v19);
  v103 = 0;
  v21 = 0LL;
  v105 = 0;
  v22 = 0;
  v106 = 0;
  v107 = 0;
  v101 = 0;
  LODWORD(v117) = 11;
  v118 = v20;
  v109 = 0;
  v121 = BugCheckParameter4 + 34972;
  if ( !a8 || *(_BYTE *)(v14 + 715) || v20[341] )
  {
    v23 = 0;
    v108 = 3;
  }
  else
  {
    v23 = 1;
    v108 = 4;
  }
  v24 = *(_QWORD *)(BugCheckParameter4 + 35480);
  v104 = v23;
  v102 = 0;
  v119 = 0LL;
  if ( v24 )
  {
    v73 = 56LL * ((*(_DWORD *)(BugCheckParameter4 + 35488))++ & 0xF);
    v74 = v24 + v73;
    v119 = v74;
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
    v20 = v118;
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
    v107 = 1;
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
      v23 = v104;
      v26 = 0;
      v28 = 1LL;
    }
  }
  v29 = (__int64)v118;
  if ( v118[337] != v26 || a9 != v26 && KiClockTimerPerCpuTickScheduling == v26 )
    goto LABEL_50;
  v30 = *(_QWORD *)(BugCheckParameter4 + 192);
  v105 = 1;
  _m_prefetchw((const void *)(v30 + 64));
  v31 = _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter4 + 200), *(_QWORD *)(BugCheckParameter4 + 200));
  if ( !v23 && v118[344] == v26 )
    v17 = 1;
  v18 = guard_dispatch_icall_no_overrides(v17, v30, v118);
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
      PpmIdleSetSynchronizationState(v121, 0LL);
    v13 = BugCheckParameter4 + 34880;
    LOBYTE(v29) = 1;
    v102 = 1;
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
  if ( v104 )
  {
    v109 = 1;
    _InterlockedAdd((volatile signed __int32 *)&stru_140E67200.Padding[3], 1u);
    CurrentPrcb = KeGetCurrentPrcb();
    v79 = KiClockTimerOwner;
    if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
    {
      guard_dispatch_icall_no_overrides(1LL, v67, v29);
      CurrentPrcb->ClockTimerState.ClockActive = 0;
      CurrentPrcb->PendingTickFlags &= ~1u;
    }
    if ( CurrentPrcb->Number == v79 )
      ++dword_140F25F84;
    if ( CurrentPrcb->ClockOwner )
      CurrentPrcb->ClockOwner = 0;
  }
  v114 = -1LL;
  if ( *(_BYTE *)(v14 + 716) )
  {
    v80 = PpmIdlePrepareExitLatencyTrace(v14, BugCheckParameter2_4);
    v106 = v80;
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
    v84 = &v117;
    LOBYTE(v84) = v22;
    KePrepareClockTimerForPlatformIdle(
      v81,
      (_DWORD)v84,
      v83,
      *(_QWORD *)(v14 + 696),
      v80,
      (__int64)&v117,
      (__int64)&v114);
LABEL_165:
    v13 = BugCheckParameter4 + 34880;
    if ( KiClockTimerPerCpuTickScheduling )
      *(_QWORD *)(BugCheckParameter4 + 34944) = v114;
    goto LABEL_50;
  }
  if ( KiClockTimerPerCpuTickScheduling )
  {
    KePrepareClockTimerForIdle(&v114);
    v85 = 10;
    if ( (_DWORD)KiClockTimerOwner == *(_DWORD *)(BugCheckParameter4 + 36) )
      v85 = 2;
    LODWORD(v117) = v85;
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
  v56 = v119;
  if ( v119 )
  {
    v29 = 65487LL;
    *(_WORD *)(v119 + 48) = (v107 << 6) | *(_WORD *)(v119 + 48) & 0xFF8F | (16 * (v22 & 1 | (2 * v105))) & 0xFFBF;
    *(_WORD *)(v56 + 50) = *(_WORD *)(v14 + 56);
  }
  *(_DWORD *)(v14 + 28) = BugCheckParameter2;
  PpmEndActiveTimeAccumulation(BugCheckParameter4, a6, v29, v28);
  if ( *(_QWORD *)(v14 + 600) )
  {
    BugCheckParameter4a = *(_QWORD *)(v14 + 1048);
    v18 = guard_dispatch_icall_no_overrides(v120, BugCheckParameter2, BugCheckParameter2_4);
  }
  if ( BugCheckParameter2_4 != -1
    && BugCheckParameter2_4 == PpmDripsStateIndex
    && *(int *)(BugCheckParameter4 + 35120) >= 2 )
  {
    HvlSetPlatformIdleState(1LL);
  }
  if ( v18 >= 0 )
  {
    v101 = 1;
    PpmEnterCoordinatedIdle(*(_DWORD *)(v14 + 1036), *(_QWORD *)(v14 + 1048), BugCheckParameter2_4, a6, a5);
    if ( BugCheckParameter2_4 != -1 )
      *(_WORD *)(v14 + 56) |= 0x10u;
    LOBYTE(v57) = *(_BYTE *)(v14 + 717);
    PpmEventEnterIdleState(BugCheckParameter2, *(unsigned __int16 *)(v14 + 56), v57, *(_QWORD *)(v14 + 688));
    v59 = 0;
    if ( a8 )
    {
      LOBYTE(v58) = v108;
      PpmIdleSetSynchronizationState(v121, v58);
    }
    if ( v105 != (_BYTE)v59 )
    {
      if ( v118[336] < 2u )
      {
        v103 = v59;
      }
      else
      {
        v103 = KeDeepSleepProcessor();
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
    v100 = *(_QWORD *)(v14 + 1048);
    v99 = *(_DWORD *)(v14 + 1036);
    LODWORD(BugCheckParameter4a) = BugCheckParameter2_4;
    v18 = guard_dispatch_icall_no_overrides(v120, v122[0], BugCheckParameter2);
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
    if ( v103 && *(_BYTE *)(BugCheckParameter4 + 34394) )
      KeWakeProcessor(0LL, v63, v64);
    if ( v18 == 257 )
    {
      ++*(_DWORD *)(BugCheckParameter4 + 34368);
      v18 = 0;
    }
    if ( *(int *)(v14 + 60) < 0 && v18 >= 0 )
      v18 = *(_DWORD *)(v14 + 60);
    v114 = 0LL;
    if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
    {
      v114 = __PAIR64__(v18, v62);
      v122[0] = &v114;
      v122[1] = 8LL;
      EtwTraceKernelEvent((int)v122, 1, 0x40008000u, 4666, 1538);
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
    if ( v18 >= 0 && v70 != 8 && v104 != (_BYTE)v32 )
      KeBugCheckEx(0xA0u, 0x702uLL, BugCheckParameter2, v70, BugCheckParameter4);
    *(_BYTE *)(v13 + 77) = (_BYTE)v32;
  }
  LOBYTE(v29) = 0;
LABEL_22:
  PpmUpdateProcessorIdleAccounting(v13, v21, v29, (unsigned int)v18, BugCheckParameter4a, v99, v100);
  v36 = *(_QWORD *)(v13 + 48);
  v37 = v21 < *(_QWORD *)&stru_140F12EA0.WaitBlockFill11[112];
  *(_QWORD *)(v13 + 40) = v36;
  if ( v37 && *(_DWORD *)(v14 + 1036) > (unsigned int)v32 && v101 )
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
  if ( v105 )
  {
    if ( v101 )
    {
      if ( v18 >= 0 && !(_BYTE)v35 )
      {
        v36 = PpmPlatformStates;
        if ( PpmPlatformStates )
        {
          if ( PpmDripsStateIndex != -1
            && *(_DWORD *)(448LL * (unsigned int)PpmDripsStateIndex + PpmPlatformStates + 416) )
          {
            if ( (int)KeQueryWakeSource(&v117, &v112, v123) < 0 )
            {
              v113 = 3;
            }
            else
            {
              v36 = v112;
              v113 = v112;
              if ( PopIdleWakeSkippingEnabled && !v112 )
                *v115 = 1;
            }
          }
        }
      }
    }
    v93 = *(unsigned __int8 *)(BugCheckParameter4 + 209);
    _interlockedbittestandreset64((volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter4 + 192) + 64LL), v93);
    if ( v106 && v18 >= 0 )
    {
      v94 = &v116;
      LOBYTE(v36) = a5 == 2;
    }
    else
    {
      LOBYTE(v36) = a5 == 2;
      v94 = 0LL;
    }
    LOBYTE(v93) = *v115;
    KeResumeClockTimerFromIdle(v93, v36, v94);
    guard_dispatch_icall_no_overrides(v96, v95, v97);
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
    (*v115 != 0) + 3);
LABEL_26:
  LOBYTE(v34) = 1;
  guard_dispatch_icall_no_overrides(v34, v36, v35);
  v40 = 0LL;
  if ( v107 )
  {
    if ( KiClockTimerPerCpuTickScheduling )
    {
      if ( v118[337] )
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
        if ( (unsigned int)dword_140E06F90 > 5 )
        {
          v106 = 0;
          v125 = &v112;
          v112 = 5;
          v127 = &v106;
          v126 = 4LL;
          v128 = 1LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06F90,
            (unsigned __int8 *)&word_1400493F6,
            0LL,
            0LL,
            4u,
            &v124);
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
  LOBYTE(v39) = v101;
  v42 = PpmExitCoordinatedIdle(
          BugCheckParameter4,
          (int)v14 + 1032,
          v39,
          v18,
          v102,
          active,
          a5,
          *v115,
          (__int64)v123,
          v113);
  v43 = v119;
  LOBYTE(v44) = 0;
  v45 = v42;
  if ( v119 )
  {
    v46 = *(_WORD *)(v119 + 48) & 0xFFFE;
    *(_QWORD *)(v119 + 8) = active;
    *(_DWORD *)(v43 + 44) = v18;
    v47 = (4 * v101) | (unsigned __int16)v32 & 0xFFFB | (v102 | v46) & 0xFFF9;
    v48 = v115;
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
  if ( v102 == (_BYTE)v44 )
  {
    guard_dispatch_icall_no_overrides(v120, BugCheckParameter2, v45);
    if ( v45 != -1 && v45 == PpmDripsStateIndex && *(int *)(BugCheckParameter4 + 35120) >= 2 )
      HvlSetPlatformIdleState(0LL);
  }
  v51 = *(_QWORD *)(v14 + 1048);
  for ( i = *(unsigned int *)(v14 + 1036);
        (_DWORD)i;
        *(_DWORD *)(448LL * *(unsigned int *)(v51 + 4 * i) + PpmPlatformStates + 416) = 0 )
  {
    i = (unsigned int)(i - 1);
  }
  if ( v109 )
    _InterlockedDecrement((volatile signed __int32 *)&stru_140E67200.Padding[3]);
  result = PpmUnlockProcessors(v14 + 336, v14 + 336, i);
  if ( *(_BYTE *)(v14 + 3) )
  {
    v72 = *(_QWORD *)(BugCheckParameter4 + 34880);
    if ( v18 < 0 )
      return PpmCancelExitLatencyTrace(BugCheckParameter4);
    result = PpmTraceExitLatency(v54, BugCheckParameter2, v45, v55, v116, active);
    if ( (int)result < 0 )
      return PpmCancelExitLatencyTrace(BugCheckParameter4);
    else
      *(_BYTE *)(v72 + 3) = 0;
  }
  return result;
}
