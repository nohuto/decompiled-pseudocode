/*
 * XREFs of HalpInitializeTimers @ 0x1405791C8
 * Callers:
 *     HalpTimerInitSystem @ 0x140579A20 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x140433FD0 (HalpTimerGetInternalData.c)
 *     HalpTimerSetProblemEx @ 0x1404F8144 (HalpTimerSetProblemEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpTimerSelectRoles @ 0x14057A3A8 (HalpTimerSelectRoles.c)
 *     HalpMmAllocateMemoryInternal @ 0x140580210 (HalpMmAllocateMemoryInternal.c)
 *     HalpFindTimer @ 0x140583D54 (HalpFindTimer.c)
 *     HalpTimerBuildKnownResourceIdString @ 0x140583E7C (HalpTimerBuildKnownResourceIdString.c)
 *     HalpTimerCalculateMaximumAllowableDrift @ 0x140583ECC (HalpTimerCalculateMaximumAllowableDrift.c)
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x140585324 (HalpTimerRegisterBuiltinPluginsCommon.c)
 *     RtlUdiv128 @ 0x140623180 (RtlUdiv128.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpInitializeTimers(__int64 a1)
{
  __int64 v2; // rbx
  __int64 InternalData; // rax
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rdx
  __int64 Timer; // rax
  __int64 v11; // r8
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // edx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  void *MemoryInternal; // rax
  _QWORD *v21; // rdi
  unsigned int v22; // r9d
  _BYTE v24[136]; // [rsp+30h] [rbp-98h] BYREF
  int v25; // [rsp+B8h] [rbp-10h]
  int v26; // [rsp+BCh] [rbp-Ch]

  memset_0(v24, 0, sizeof(v24));
  HalpTimerLoaderBlock = a1;
  v2 = HalpStallCounter;
  HalpOriginalStallTimer = HalpStallCounter;
  InternalData = HalpTimerGetInternalData(HalpStallCounter);
  v5 = guard_dispatch_icall_no_overrides(InternalData, v4);
  if ( v5 < 0 )
  {
    HalpTimerSetProblemEx(v2, 15, v5, (__int64)"minkernel\\hals\\lib\\timers\\common\\timer.c", 0x649u);
    goto LABEL_17;
  }
  v8 = HalpTimerRegisterBuiltinPluginsCommon(1LL, v6, (unsigned int)v5);
  LODWORD(v7) = v8;
  if ( v8 < 0
    || !HalpPrebootMode && (LODWORD(v7) = HalpTimerRegisterBuiltinPluginsCommon(2LL, v9, (unsigned int)v8), (int)v7 < 0) )
  {
    HalpTimerLastProblem = 14;
    goto LABEL_17;
  }
  Timer = HalpFindTimer(5, 0, 0, 0, 1);
  if ( Timer )
  {
    v11 = *(_QWORD *)(Timer + 288);
    v12 = *(_DWORD *)(Timer + 228);
    v13 = *(_DWORD *)(Timer + 284);
    v25 = v12;
    v14 = *(unsigned __int16 *)(v11 + 24);
    v15 = *(_QWORD *)(v11 + 32);
    v26 = v13;
    HalpTimerBuildKnownResourceIdString(v24, v14 >> 1, v15);
  }
  v16 = HalpTimerSelectRoles();
  v7 = (unsigned int)v16;
  if ( v16 < 0 )
LABEL_17:
    KeBugCheckEx(0x5Cu, 0x110uLL, 0x5250631uLL, HalpTimerLastProblem, (int)v7);
  v19 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
  {
    MemoryInternal = (void *)HalpMmAllocateMemoryInternal(4096LL);
    HalpTimerReferencePage = MemoryInternal;
    v21 = MemoryInternal;
    if ( !MemoryInternal )
    {
      LODWORD(v7) = -1073741670;
      goto LABEL_17;
    }
    memset_0(MemoryInternal, 0, 0x1000uLL);
    v19 = HalpPerformanceCounter;
    *(_DWORD *)v21 = 1416388936;
    v21[1] = RtlUdiv128(10000000LL, 0LL, *(_QWORD *)(v19 + 192), 0LL);
  }
  qword_140FBD738 = (__int64)HalpTimerDpcRoutine;
  v22 = 0;
  HalpTimerPeriodicTimer = 8LL;
  qword_140FBD6B0 = (__int64)&qword_140FBD6A8;
  qword_140FBD6A8 = (__int64)&qword_140FBD6A8;
  off_140E00908[0] = (__int64 (__fastcall *)())HalpTimerReportIdleStateUsage;
  off_140E00900[0] = (__int64 (__fastcall *)())HalpTimerQueryWakeTime;
  HalpOriginalPerformanceCounter = v19;
  HalpTimerDpc = 275;
  qword_140FBD740 = 0LL;
  qword_140FBD758 = 0LL;
  qword_140FBD730 = 0LL;
  qword_140FBD6B8 = 0LL;
  dword_140FBD6DC = 0;
  word_140FBD6D8 = 0;
  byte_140FBD6DB = 0;
  if ( HalpAlwaysOnCounter )
    HalpTimerMaximumAllowableDrift = HalpTimerCalculateMaximumAllowableDrift(v18, v17, v7, 0LL);
  return v22;
}
