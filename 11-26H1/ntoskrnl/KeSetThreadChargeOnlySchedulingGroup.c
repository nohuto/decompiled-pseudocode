/*
 * XREFs of KeSetThreadChargeOnlySchedulingGroup @ 0x140237F74
 * Callers:
 *     PspUpdateContainerImpersonation @ 0x14037E0F0 (PspUpdateContainerImpersonation.c)
 *     PspExitThread @ 0x14095771C (PspExitThread.c)
 *     NtSetInformationThread @ 0x140A833F0 (NtSetInformationThread.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x140226F90 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiActivateScb @ 0x140238544 (KiActivateScb.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseThreadStateLock @ 0x1402BA4C0 (KiReleaseThreadStateLock.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiReadyDeferredReadyList @ 0x14032F930 (KiReadyDeferredReadyList.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403322B0 (KiAcquireThreadStateLockForWrite.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeSetThreadChargeOnlySchedulingGroup(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r12
  __int64 v6; // rdx
  __int64 v7; // r9
  struct _KPRCB *v8; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned int v10; // esi
  char v11; // di
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int32 v15; // eax
  unsigned __int32 v16; // ett
  __int128 v17; // [rsp+20h] [rbp-30h] BYREF
  __int128 v18; // [rsp+30h] [rbp-20h]
  __int64 v19; // [rsp+40h] [rbp-10h]
  __int64 v20; // [rsp+80h] [rbp+30h] BYREF

  v2 = a2;
  v20 = 0LL;
  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  _disable();
  KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, v3, 0LL);
  v8 = KeGetCurrentPrcb();
  SchedulerAssist = (unsigned __int32 *)v8->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v15 = *SchedulerAssist;
    do
    {
      v6 = v15;
      LODWORD(v6) = v15 & 0xFFDFFFFF;
      v16 = v15;
      v15 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v15 & 0xFFDFFFFF, v15);
    }
    while ( v16 != v15 );
    if ( (v15 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v8, v6, SchedulerAssist, v7);
  }
  _enable();
  v10 = 0;
  v11 = 1;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 64), 0LL) )
  {
    do
    {
      if ( (++v10 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8, v6, SchedulerAssist) )
      {
        HvlNotifyLongSpinWait(v10);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(v3 + 64) );
  }
  if ( v2 )
  {
    if ( !*(_QWORD *)(v3 + 104) && (*(_DWORD *)(v3 + 512) & 8) == 0 )
    {
      v17 = 0LL;
      v19 = 0LL;
      v18 = 0LL;
      if ( (unsigned int)KiAcquireThreadStateLockForWrite(v3, &v17) == 2 )
        KiActivateScb(v17, v2 + *(unsigned int *)(v17 + 216));
      _interlockedbittestandset((volatile signed __int32 *)(v3 + 120), 9u);
      *(_QWORD *)(v3 + 104) = v2;
      _interlockedbittestandset((volatile signed __int32 *)v3, 0x12u);
      goto LABEL_18;
    }
LABEL_24:
    v11 = 0;
    goto LABEL_19;
  }
  if ( (*(_DWORD *)(v3 + 120) & 0x200) != 0 )
  {
    v17 = 0LL;
    v19 = 0LL;
    v18 = 0LL;
    KiAcquireThreadStateLockForWrite(v3, &v17);
    _interlockedbittestandreset((volatile signed __int32 *)v3, 0x12u);
    *(_QWORD *)(v3 + 104) = 0LL;
    _interlockedbittestandreset((volatile signed __int32 *)(v3 + 120), 9u);
LABEL_18:
    KiReleaseThreadStateLock(v12, &v17);
    goto LABEL_19;
  }
  if ( (*(_DWORD *)(v3 + 512) & 8) == 0 )
    goto LABEL_24;
  _interlockedbittestandreset((volatile signed __int32 *)(v3 + 512), 3u);
LABEL_19:
  *(_QWORD *)(v3 + 64) = 0LL;
  KiReadyDeferredReadyList(CurrentPrcb, &v20);
  if ( KiIrqlFlags )
  {
    LOBYTE(v13) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
  }
  __writecr8(CurrentIrql);
  return v11;
}
