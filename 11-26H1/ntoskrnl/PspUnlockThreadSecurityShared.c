/*
 * XREFs of PspUnlockThreadSecurityShared @ 0x140271330
 * Callers:
 *     EtwpTraceThreadRundown @ 0x14051ED18 (EtwpTraceThreadRundown.c)
 *     PsUnlockThreadNameShared @ 0x140618100 (PsUnlockThreadNameShared.c)
 *     AlpcpCreateClientPort @ 0x1408F0020 (AlpcpCreateClientPort.c)
 *     PsOpenProcess @ 0x1408F6200 (PsOpenProcess.c)
 *     ObReferenceObjectByName @ 0x1408F8820 (ObReferenceObjectByName.c)
 *     SeCaptureSubjectContextEx @ 0x1408FBAB0 (SeCaptureSubjectContextEx.c)
 *     AlpcpImpersonateMessage @ 0x140903CB0 (AlpcpImpersonateMessage.c)
 *     SeCreateClientSecurity @ 0x140905390 (SeCreateClientSecurity.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x140923720 (MiIsUserQueryVmCallerTrusted.c)
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 *     AlpcpCreateSecurityContext @ 0x14098D530 (AlpcpCreateSecurityContext.c)
 *     PsReferenceEffectiveToken @ 0x1409CAEC0 (PsReferenceEffectiveToken.c)
 *     ObpReferenceCurrentDeviceMap @ 0x140A21A50 (ObpReferenceCurrentDeviceMap.c)
 *     NtQueryInformationThread @ 0x140A28950 (NtQueryInformationThread.c)
 *     NtOpenThreadTokenEx @ 0x140A50F30 (NtOpenThreadTokenEx.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140B81560 (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?KiAbPostRelease@LegacyAutoBoost@@YAXPEAX@Z @ 0x140271600 (-KiAbPostRelease@LegacyAutoBoost@@YAXPEAX@Z.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall PspUnlockThreadSecurityShared(__int64 a1, void *a2)
{
  ULONG_PTR v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // r14
  unsigned __int8 CurrentIrql; // r15
  struct _KTHREAD *CurrentThread; // r10
  int v8; // r13d
  unsigned __int64 v9; // rdx
  __int64 *AutoBoostThreadState; // rax
  __int64 v11; // r9
  unsigned int v12; // r11d
  __int64 *v13; // rsi
  char v14; // al
  __int64 v15; // rcx
  char v16; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  signed __int8 v19; // al
  signed __int8 v20; // tt
  signed __int8 v21; // al
  signed __int8 v22; // tt
  char v23; // dl
  __int64 v24; // rbx
  struct _KPRCB *v25; // rcx
  unsigned __int32 *v26; // r8
  unsigned __int32 v28; // eax
  unsigned __int32 v29; // ett
  unsigned __int32 v30; // eax
  __int64 v31; // rdx
  unsigned __int32 v32; // ett

  v3 = a1 + 1424;
  v4 = 0LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1424), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a1 + 1424);
  if ( (KiAbpGlobalState & 1) != 0 )
  {
    v5 = 0LL;
    CurrentIrql = -1;
    _disable();
    CurrentThread = KeGetCurrentThread();
    v8 = 1;
    v9 = 0LL;
    AutoBoostThreadState = (__int64 *)CurrentThread->AutoBoostThreadState;
    v11 = *AutoBoostThreadState;
    v12 = *(unsigned __int8 *)(*AutoBoostThreadState + 14);
    while ( 1 )
    {
      if ( (unsigned int)v9 >= v12 )
      {
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, 0LL, 0LL);
        goto LABEL_27;
      }
      v13 = (__int64 *)(v11 + 48LL * (unsigned int)v9 + 16);
      v14 = *((_BYTE *)v13 + 33);
      if ( (v14 & 0x10) == 0 )
      {
        v15 = *v13;
        v16 = v13[4] & 2;
        if ( v16 )
          v15 = *(_QWORD *)(v15 + 24);
        if ( v15 == v3 && (v14 & 2) != 0 )
          break;
      }
      v9 = (unsigned int)(v9 + 1);
    }
    v5 = v11 + 48LL * (unsigned int)v9 + 16;
    *((_BYTE *)v13 + 33) = v14 & 0xFC | 1;
    if ( v16 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v9) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v9);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v28 = *SchedulerAssist;
        do
        {
          v9 = v28;
          LODWORD(v9) = v28 & 0xFFDFFFFF;
          v29 = v28;
          v28 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v28 & 0xFFDFFFFF, v28);
        }
        while ( v29 != v28 );
        if ( (v28 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, v9, SchedulerAssist, v11);
      }
      _enable();
      v8 = 0;
      _m_prefetchw((char *)v13 + 35);
      v19 = *((_BYTE *)v13 + 35);
      do
      {
        v20 = v19;
        v19 = _InterlockedCompareExchange8((volatile signed __int8 *)v13 + 35, v19 | 1, v19);
      }
      while ( v20 != v19 );
      if ( (v19 & 1) != 0 )
      {
        do
        {
          while ( (*((_BYTE *)v13 + 35) & 1) != 0 )
            _mm_pause();
          _m_prefetchw((char *)v13 + 35);
          v21 = *((_BYTE *)v13 + 35);
          do
          {
            v22 = v21;
            v21 = _InterlockedCompareExchange8((volatile signed __int8 *)v13 + 35, v21 | 1, v21);
          }
          while ( v22 != v21 );
        }
        while ( (v21 & 1) != 0 );
      }
      AutoBoost::KiAbpEntryUnlink((AutoBoost *)v13, (struct AutoBoost::_AB_THREAD_ENTRY *)v9);
      _InterlockedAnd8((volatile signed __int8 *)v13 + 35, 0xFEu);
    }
    v23 = *((_BYTE *)v13 + 36);
    v24 = v13[5];
    *((_DWORD *)v13 + 10) = 0;
    *v13 = 0LL;
    *((_WORD *)v13 + 16) = 0;
    LOWORD(v13[-6 * (v23 & 0x7F) - 1]) |= 1 << (v23 & 0xF);
    v4 = v24;
    if ( v8 )
    {
LABEL_27:
      v25 = KeGetCurrentPrcb();
      v26 = (unsigned __int32 *)v25->SchedulerAssist;
      if ( v26 )
      {
        _m_prefetchw(v26);
        v30 = *v26;
        do
        {
          v31 = v30;
          LODWORD(v31) = v30 & 0xFFDFFFFF;
          v32 = v30;
          v30 = _InterlockedCompareExchange((volatile signed __int32 *)v26, v30 & 0xFFDFFFFF, v30);
        }
        while ( v32 != v30 );
        if ( (v30 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v25, v31, v26, v11);
      }
      _enable();
      goto LABEL_34;
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
LABEL_34:
    if ( (_DWORD)v4 )
      AutoBoost::KiAbpUnboostThread(*(_QWORD *)(v5 - 48LL * (*(_BYTE *)(v5 + 36) & 0x7F) - 16), v3, v4, 0LL);
  }
  else
  {
    LegacyAutoBoost::KiAbPostRelease(v3, a2);
  }
  return KeLeaveCriticalRegionThread(a2);
}
