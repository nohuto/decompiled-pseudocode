/*
 * XREFs of PnprQuiesceProcessorDpc @ 0x140BF8260
 * Callers:
 *     <none>
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x140202CC0 (KeGetProcessorNumberFromIndex.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x1403D60D8 (KeRestoreExtendedAndSupervisorState.c)
 *     HalGetProcessorIdByNtNumber @ 0x140432C50 (HalGetProcessorIdByNtNumber.c)
 *     KeRestoreIptStateAfterProcessorComesOnline @ 0x1404ECDAC (KeRestoreIptStateAfterProcessorComesOnline.c)
 *     KeSaveExtendedAndSupervisorState @ 0x140508024 (KeSaveExtendedAndSupervisorState.c)
 *     PnprGetStackLimits @ 0x1405250F0 (PnprGetStackLimits.c)
 *     KeSaveIptStateBeforeProcessorGoesOffline @ 0x14052D5F0 (KeSaveIptStateBeforeProcessorGoesOffline.c)
 *     KeSaveProcessorSpecificFeatures @ 0x1405302EC (KeSaveProcessorSpecificFeatures.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeRestoreProcessorSpecificFeatures @ 0x1405322F4 (KeRestoreProcessorSpecificFeatures.c)
 *     KeResumeClockTimerSafe @ 0x1405F0A60 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x1405F0AC4 (KeSuspendClockTimerSafe.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PnprMirrorMarkedPages @ 0x140BF7F18 (PnprMirrorMarkedPages.c)
 */

void __fastcall PnprQuiesceProcessorDpc(
        struct _KDPC *Dpc,
        _BYTE *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ULONG v4; // r14d
  int v5; // ebx
  bool v6; // si
  __int64 v7; // rax
  __int64 Group; // r12
  __int64 v9; // r15
  bool v10; // di
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  struct _KPRCB *v22; // rcx
  signed __int32 *v23; // r8
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  _PROCESSOR_NUMBER ProcNumber; // [rsp+20h] [rbp-60h] BYREF
  unsigned int v27; // [rsp+24h] [rbp-5Ch] BYREF
  __int64 v28; // [rsp+28h] [rbp-58h] BYREF
  __int64 v29; // [rsp+30h] [rbp-50h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v31; // [rsp+48h] [rbp-38h]
  __int128 v32; // [rsp+58h] [rbp-28h]
  __int64 v33; // [rsp+68h] [rbp-18h]

  v33 = 0LL;
  v4 = (unsigned int)SystemArgument2;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  ProcNumber = 0;
  v5 = (int)SystemArgument1;
  v27 = 0;
  v31 = 0LL;
  v29 = 0LL;
  v6 = 1;
  v32 = 0LL;
  v28 = 0LL;
  v7 = PnprContext;
  *DeferredContext = 1;
  _InterlockedAdd((volatile signed __int32 *)(v7 + 184), 1u);
  while ( *(_DWORD *)(PnprContext + 184) < (int)SystemArgument1 )
    _mm_pause();
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    v6 = KeDisableInterrupts();
    _InterlockedAdd((volatile signed __int32 *)(PnprContext + 192), 1u);
    while ( *(_DWORD *)(PnprContext + 192) < v5 )
      _mm_pause();
  }
  if ( KeGetProcessorNumberFromIndex(v4, &ProcNumber) < 0 )
    goto LABEL_63;
  Group = ProcNumber.Group;
  v9 = 1LL << ProcNumber.Number;
  if ( ((1LL << ProcNumber.Number) & *(_QWORD *)(**(_QWORD **)(PnprContext + 16) + 8LL * ProcNumber.Group)) == 0 )
    goto LABEL_31;
  while ( *(int *)(PnprContext + 200) < 1 )
    _mm_pause();
  KeSuspendClockTimerSafe();
  KeSaveIptStateBeforeProcessorGoesOffline();
  v10 = 0;
  if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    v10 = (int)KeSaveExtendedAndSupervisorState(
                 (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL,
                 (__int64)BugCheckParameter3) >= 0;
  KeSaveProcessorSpecificFeatures();
  if ( (int)HalGetProcessorIdByNtNumber(v4, (__int64)&v27, v11, v12) < 0 )
LABEL_63:
    __fastfail(5u);
  if ( (*(_DWORD *)(PnprContext + 33200) & 2) != 0 )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33184), v27);
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33176), (__int64)&v29);
  guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33176), v13);
  if ( (*(_DWORD *)(PnprContext + 33200) & 2) != 0 )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33184), v27);
  KeResumeClockTimerSafe();
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 && v6 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v16 = *SchedulerAssist;
      do
      {
        v17 = v16;
        v16 = _InterlockedCompareExchange(SchedulerAssist, v16 & 0xFFDFFFFF, v16);
      }
      while ( v17 != v16 );
      if ( (v16 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  KeRestoreProcessorSpecificFeatures((__int64)&v28);
  if ( v10 )
    KeRestoreExtendedAndSupervisorState((ULONG_PTR)BugCheckParameter3);
  KeRestoreIptStateAfterProcessorComesOnline();
  _InterlockedAdd((volatile signed __int32 *)(PnprContext + 204), 1u);
LABEL_31:
  if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) && (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
  {
    while ( *(int *)(PnprContext + 200) < 2 )
      _mm_pause();
    if ( (int)PnprMirrorMarkedPages() < 0 )
    {
      v18 = PnprContext;
      v19 = *(_DWORD *)(PnprContext + 33288);
      if ( !v19 )
        v19 = 2086;
      *(_DWORD *)(PnprContext + 33288) = v19;
      v20 = *(_DWORD *)(v18 + 33292);
      if ( !v20 )
        v20 = 1;
      *(_DWORD *)(v18 + 33292) = v20;
    }
    _InterlockedAdd((volatile signed __int32 *)(PnprContext + 204), 1u);
  }
  while ( *(int *)(PnprContext + 200) < 4 )
    _mm_pause();
  PnprGetStackLimits((_QWORD *)(PnprContext + 216 + 8LL * v4), (unsigned __int64 *)(PnprContext + 16600 + 8LL * v4));
  _InterlockedAdd((volatile signed __int32 *)(PnprContext + 204), 1u);
  while ( *(int *)(PnprContext + 200) < 5 )
    _mm_pause();
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    while ( *(int *)(PnprContext + 200) < 6 )
      _mm_pause();
    if ( (v9 & *(_QWORD *)(**(_QWORD **)(PnprContext + 16) + 8 * Group)) != 0 )
    {
      guard_dispatch_icall_no_overrides(v29, v21);
    }
    else if ( v6 )
    {
      v22 = KeGetCurrentPrcb();
      v23 = (signed __int32 *)v22->SchedulerAssist;
      if ( v23 )
      {
        _m_prefetchw(v23);
        v24 = *v23;
        do
        {
          v25 = v24;
          v24 = _InterlockedCompareExchange(v23, v24 & 0xFFDFFFFF, v24);
        }
        while ( v25 != v24 );
        if ( (v24 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v22);
      }
      _enable();
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(PnprContext + 188), 1u);
  while ( *(_DWORD *)(PnprContext + 188) < v5 )
    _mm_pause();
}
