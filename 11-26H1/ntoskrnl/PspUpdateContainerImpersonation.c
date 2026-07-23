/*
 * XREFs of PspUpdateContainerImpersonation @ 0x14037FEA0
 * Callers:
 *     IopProcessWorkItem @ 0x14037F300 (IopProcessWorkItem.c)
 *     PsImpersonateContainerOfThread @ 0x1404AB3F8 (PsImpersonateContainerOfThread.c)
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1402398D4 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140248E20 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14024B4A0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeCheckAndApplyBamQos @ 0x140332380 (KeCheckAndApplyBamQos.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x14037D0A0 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x140380C70 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x140521C58 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall PspUpdateContainerImpersonation(ULONG_PTR BugCheckParameter1, _QWORD *Object)
{
  ULONG_PTR v2; // rsi
  _QWORD *v3; // r15
  __int64 CurrentIrql; // rdi
  unsigned int v6; // ebx
  int i; // edx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  ULONG_PTR v10; // r14
  unsigned __int8 v11; // di
  ULONG_PTR v12; // rcx
  char v13; // al
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  struct _KPRCB *v19; // r8
  signed __int32 *SchedulerAssist; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  signed __int64 v23; // rbx
  signed __int64 BugCheckParameter4; // rbx
  unsigned __int64 v25; // rcx
  unsigned __int8 v26; // al
  unsigned __int64 v27; // rcx
  unsigned __int8 v28; // al
  int v29; // eax
  int v30; // eax
  signed __int32 v31; // eax
  signed __int32 v32; // ett
  char v33; // al
  char v34; // al
  int IsEnabledNoReportingNoInline; // eax
  int v36; // ecx
  __int64 v37; // r8
  unsigned int v38; // r9d
  int v39; // edx
  char v40; // al
  signed int v41; // eax
  __int64 v42; // r9
  bool v43; // zf
  __int64 CurrentPrcb; // r14
  unsigned int v45; // ebx
  int v46; // r9d
  bool v47; // cc
  unsigned __int64 *v48; // r8
  unsigned __int64 v49; // rax
  unsigned __int8 v50; // dl
  unsigned __int8 v51; // cl
  _BYTE *v52; // rax
  char v53; // r12
  __int64 *v54; // rsi
  __int64 v55; // r14
  __int64 v56; // rbx
  unsigned int v57; // edi
  int v58; // ecx
  _BYTE *v59; // rax
  unsigned int v60; // ecx
  unsigned __int64 *v61; // rbx
  __int64 v62; // rdi
  unsigned __int64 v63; // r8
  unsigned __int8 v64; // dl
  unsigned __int8 v65; // r8
  unsigned int v66; // edx
  int v67; // ecx
  unsigned __int64 v68; // [rsp+40h] [rbp-59h] BYREF
  struct _SINGLE_LIST_ENTRY v69[6]; // [rsp+48h] [rbp-51h] BYREF
  _QWORD *v70; // [rsp+78h] [rbp-21h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-19h]
  __int64 v72; // [rsp+88h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-9h] BYREF
  unsigned __int64 *v74; // [rsp+A0h] [rbp+7h]
  __int64 v75; // [rsp+A8h] [rbp+Fh]
  __int64 retaddr; // [rsp+F8h] [rbp+5Fh]

  v2 = *(_QWORD *)(BugCheckParameter1 + 1616);
  v3 = Object;
  v70 = Object;
  BugCheckParameter2 = v2;
  if ( !v2 )
  {
    if ( !Object )
      return 3221225473LL;
LABEL_3:
    ObfReferenceObjectWithTag(Object, 0x746E6F43u);
    if ( !v2 )
      goto LABEL_4;
    goto LABEL_19;
  }
  if ( Object )
    goto LABEL_3;
LABEL_19:
  _m_prefetchw((const void *)(BugCheckParameter1 + 1440));
  v8 = *(_DWORD *)(BugCheckParameter1 + 1440);
  do
  {
    v9 = v8;
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter1 + 1440), v8 & 0xFEFFFFFF, v8);
  }
  while ( v9 != v8 );
  if ( (v8 & 0x1000000) != 0 )
    KeSetThreadChargeOnlySchedulingGroup(BugCheckParameter1, 0LL);
LABEL_4:
  CurrentIrql = KeGetCurrentIrql();
  v72 = CurrentIrql;
  if ( (_BYTE)CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, 2LL);
  v6 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset((volatile signed __int32 *)&PsAltSystemCallRegistrationLock.FirstArgument, 0x1Fu) )
      v6 = ExpWaitForSpinLockExclusiveAndAcquire((int *)&PsAltSystemCallRegistrationLock.FirstArgument, CurrentIrql);
    for ( i = (int)PsAltSystemCallRegistrationLock.FirstArgument;
          ((__int64)PsAltSystemCallRegistrationLock.FirstArgument & 0xBFFFFFFF) != 0x80000000;
          i = (int)PsAltSystemCallRegistrationLock.FirstArgument )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr((volatile signed __int32 *)&PsAltSystemCallRegistrationLock.FirstArgument, 0x40000000u);
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
    }
    v6 = 0;
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(
      (int *)&PsAltSystemCallRegistrationLock.FirstArgument,
      CurrentIrql);
  }
  *(_QWORD *)(BugCheckParameter1 + 1616) = v3;
  if ( v3 )
  {
    v10 = *((char *)v3 + 195);
    v69[0].Next = 0LL;
    v11 = KeGetCurrentIrql();
    if ( v11 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v11, 2LL);
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v6);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    v12 = *(char *)(BugCheckParameter1 + 795);
    if ( (_DWORD)v12 != 32 )
    {
      v13 = *(_BYTE *)(v12 + BugCheckParameter1 + 824);
      if ( !v13 )
        KeBugCheckEx(0x157u, BugCheckParameter1, *(char *)(BugCheckParameter1 + 795), 2uLL, 0LL);
      v33 = v13 - 1;
      *(_BYTE *)(v12 + BugCheckParameter1 + 824) = v33;
      if ( !v33 )
        *(_DWORD *)(BugCheckParameter1 + 856) ^= 1 << v12;
      *(_BYTE *)(BugCheckParameter1 + 795) = 32;
    }
    if ( (_DWORD)v10 != 32 )
    {
      v12 = v10 + BugCheckParameter1;
      *(_BYTE *)(BugCheckParameter1 + 795) = v10;
      v34 = *(_BYTE *)(v10 + BugCheckParameter1 + 824);
      if ( v34 == -1 )
        KeBugCheckEx(0x157u, BugCheckParameter1, v10, 1uLL, 0LL);
      *(_BYTE *)(v12 + 824) = v34 + 1;
      *(_DWORD *)(BugCheckParameter1 + 856) |= 1 << v10;
    }
    IsEnabledNoReportingNoInline = Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(v12);
    v36 = *(char *)(BugCheckParameter1 + 563);
    v37 = (unsigned int)v36;
    if ( IsEnabledNoReportingNoInline )
    {
      if ( v36 < 16 )
      {
        v39 = v36 + (*(_WORD *)(BugCheckParameter1 + 518) & 0xF);
        if ( v39 <= v36 )
          v39 = v36;
        v40 = 0;
        if ( *(char *)(BugCheckParameter1 + 870) > 0 )
          v40 = *(_BYTE *)(BugCheckParameter1 + 870);
        v37 = (unsigned int)(v39 + v40);
        if ( (int)v37 >= 16 )
          v37 = 15LL;
        v38 = *(unsigned __int16 *)(BugCheckParameter1 + 518);
        if ( (unsigned __int8)(v38 >> 4) > (int)v37 )
          v37 = (unsigned __int8)(v38 >> 4);
      }
      v41 = *(_DWORD *)(BugCheckParameter1 + 856);
      if ( !v41 )
        goto LABEL_116;
      _BitScanReverse((unsigned int *)&v41, v41);
      v47 = (int)v37 < v41;
    }
    else
    {
      v46 = v36;
      if ( v36 < 16 )
      {
        v67 = v36 + (*(_WORD *)(BugCheckParameter1 + 518) & 0xF);
        if ( v67 <= (int)v37 )
          v67 = v37;
        v46 = *(char *)(BugCheckParameter1 + 563) + *(char *)(BugCheckParameter1 + 870);
        if ( v46 <= v67 )
          v46 = v67;
        v66 = *(unsigned __int16 *)(BugCheckParameter1 + 518);
        if ( (unsigned __int8)(v66 >> 4) > v46 )
          v46 = (unsigned __int8)(v66 >> 4);
        if ( v46 >= 16 && (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) == 0 )
          v46 = 15;
      }
      v41 = *(_DWORD *)(BugCheckParameter1 + 856);
      v37 = (unsigned int)v46;
      if ( !v41 )
      {
LABEL_116:
        KiSetPriorityThread(BugCheckParameter1, v69, v37);
        v43 = v69[0].Next == 0LL;
        *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
        if ( v43 )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
          __writecr8(v11);
        }
        else
        {
          KiProcessDeferredReadyList(KeGetCurrentPrcb(), v69, v11, v42);
        }
        CurrentPrcb = (__int64)KeGetCurrentPrcb();
        v45 = 0;
        v69[0].Next = (struct _SINGLE_LIST_ENTRY *)CurrentPrcb;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        {
          do
          {
            if ( (++v45 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v45);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)(BugCheckParameter1 + 64) );
        }
        v15 = *((unsigned __int8 *)v3 + 516);
        v16 = *(unsigned __int8 *)(BugCheckParameter1 + 516);
        LODWORD(v68) = -16645372;
        WORD2(v68) = 5;
        BYTE6(v68) = 1;
        if ( (_DWORD)v15 == (_DWORD)v16 )
          goto LABEL_43;
        v50 = *((_BYTE *)&v69[-1].Next + v15);
        v51 = *((_BYTE *)&v69[-1].Next + v16);
        if ( v50 <= v51 && v50 != 0xFF && v51 != 0xFF )
          goto LABEL_43;
        v52 = *(_BYTE **)(CurrentPrcb + 36504);
        v53 = CurrentPrcb | 1;
        v68 = CurrentPrcb | 1;
        v54 = (__int64 *)(v52 + 8);
        if ( *v52 )
        {
          v55 = (unsigned __int8)*v52;
          do
          {
            v56 = *v54;
            v57 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v56 + 48), 0LL) )
            {
              do
              {
                if ( (++v57 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && KiCheckVpBackingLongSpinWaitHypercall() )
                {
                  HvlNotifyLongSpinWait(v57);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(_QWORD *)(v56 + 48) );
            }
            ++v54;
            --v55;
          }
          while ( v55 );
          v53 = v68;
          CurrentPrcb = (__int64)v69[0].Next;
        }
        *(_BYTE *)(BugCheckParameter1 + 516) = v15;
        if ( !*(_QWORD *)(CurrentPrcb + 16) )
        {
          v58 = *(_DWORD *)(BugCheckParameter1 + 120) >> 1;
          v68 = CurrentPrcb;
          if ( (v58 & 1) != 0 )
          {
            v59 = *(_BYTE **)(CurrentPrcb + 36504);
            v60 = (unsigned __int8)*v59;
            v61 = (unsigned __int64 *)(v59 + 8);
            if ( !*v59 )
              goto LABEL_137;
          }
          else
          {
            v61 = &v68;
            v60 = 1;
          }
          v62 = v60;
          do
          {
            v63 = *v61;
            *(_BYTE *)(*(_QWORD *)(*v61 + 56) + 64LL) ^= (*(_BYTE *)(BugCheckParameter1 + 516) ^ *(_BYTE *)(*(_QWORD *)(*v61 + 56) + 64LL)) & 7;
            KiUpdateThreadQosGroupingSummaries(v63);
            ++v61;
            --v62;
          }
          while ( v62 );
        }
LABEL_137:
        v68 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
        if ( (v53 & 1) != 0 )
        {
          v49 = *(_QWORD *)((CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
          v48 = (unsigned __int64 *)(v49 + 8);
          LODWORD(v49) = *(unsigned __int8 *)v49;
          if ( !(_DWORD)v49 )
          {
LABEL_43:
            *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
            _disable();
            v17 = *(unsigned __int8 *)(BugCheckParameter1 + 516);
            v18 = (unsigned __int8)*(_DWORD *)(CurrentPrcb + 236);
            LODWORD(v68) = -16645372;
            WORD2(v68) = 5;
            BYTE6(v68) = 1;
            if ( (_DWORD)v17 != (_DWORD)v18 )
            {
              v64 = *((_BYTE *)&v69[-1].Next + v17);
              v65 = *((_BYTE *)&v69[-1].Next + v18);
              if ( v64 > v65 || v64 == 0xFF || v65 == 0xFF )
                KeCheckAndApplyBamQos(CurrentPrcb);
            }
            v19 = KeGetCurrentPrcb();
            SchedulerAssist = (signed __int32 *)v19->SchedulerAssist;
            if ( SchedulerAssist )
            {
              _m_prefetchw(SchedulerAssist);
              v31 = *SchedulerAssist;
              do
              {
                v32 = v31;
                v31 = _InterlockedCompareExchange(SchedulerAssist, v31 & 0xFFDFFFFF, v31);
              }
              while ( v32 != v31 );
              if ( (v31 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick(v19, SchedulerAssist, v19, v42);
            }
            _enable();
            v3 = v70;
            v2 = BugCheckParameter2;
            LOBYTE(CurrentIrql) = v72;
            goto LABEL_46;
          }
        }
        else
        {
          v48 = &v68;
          LODWORD(v49) = 1;
        }
        do
        {
          v49 = (unsigned int)(v49 - 1);
          _InterlockedAnd64((volatile signed __int64 *)(v48[v49] + 48), 0LL);
        }
        while ( (_DWORD)v49 );
        goto LABEL_43;
      }
      _BitScanReverse((unsigned int *)&v41, v41);
      v47 = v46 < v41;
    }
    if ( v47 )
      v37 = (unsigned int)v41;
    LODWORD(v68) = 0;
    goto LABEL_116;
  }
  if ( (KeGetCurrentThread()->MiscFlags & 4) != 0 )
    *(_DWORD *)(BugCheckParameter1 + 116) |= 0x10000u;
  else
    KiClearSystemPriority(BugCheckParameter1, 0LL);
LABEL_46:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    LODWORD(PsAltSystemCallRegistrationLock.FirstArgument) = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&PsAltSystemCallRegistrationLock.FirstArgument, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8((unsigned __int8)CurrentIrql);
  if ( v3 )
  {
    v21 = *(_QWORD *)(v3[68] + 672LL);
    if ( v21 )
    {
      v22 = *(_QWORD *)(v21 + 1248);
      if ( v22 )
      {
        if ( KeSetThreadChargeOnlySchedulingGroup(BugCheckParameter1, v22) )
          _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 1440), 0x1000000u);
      }
    }
  }
  if ( stru_140F03830.Affinity )
  {
    if ( (v25 = stru_140F03830.Affinity->StaticBitmap[3], *(_DWORD *)(v25 + 96))
      && ((v26 = *(_BYTE *)(v25 + 100), v26 >= 4u) || !v26)
      && (*(_QWORD *)(v25 + 112) & 0x8000000000002000uLL) != 0
      && (*(_QWORD *)(v25 + 120) & 0x8000000000002000uLL) == *(_QWORD *)(v25 + 120)
      || HIWORD(stru_140F03830.Affinity->StaticBitmap[11])
      && (v27 = stru_140F03830.Affinity->StaticBitmap[4], *(_DWORD *)(v27 + 96))
      && ((v28 = *(_BYTE *)(v27 + 100), v28 >= 4u) || !v28)
      && (*(_QWORD *)(v27 + 112) & 0x8000000000002000uLL) != 0
      && (*(_QWORD *)(v27 + 120) & 0x8000000000002000uLL) == *(_QWORD *)(v27 + 120) )
    {
      if ( v2 )
        v29 = *(_DWORD *)(v2 + 1296);
      else
        v29 = 0;
      LODWORD(v69[0].Next) = v29;
      UserData.Ptr = (ULONGLONG)v69;
      *(_QWORD *)&UserData.Size = 4LL;
      if ( v3 )
        v30 = *((_DWORD *)v3 + 324);
      else
        v30 = 0;
      LODWORD(v68) = v30;
      v75 = 4LL;
      v74 = &v68;
      EtwWriteEx((REGHANDLE)stru_140F03830.Affinity, &ThreadWorkOnBehalfUpdate, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
    }
  }
  if ( v2 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo(v2 - 48, -1, 0x746E6F43u);
    v23 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 - 48), 0xFFFFFFFFFFFFFFFFuLL);
    v47 = v23 <= 1;
    BugCheckParameter4 = v23 - 1;
    if ( v47 )
    {
      if ( *(_QWORD *)(v2 - 40) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v2 - 48) >> 8)],
          v2,
          3uLL,
          *(_QWORD *)(v2 - 40));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, v2, 4uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(v2 - 48);
    }
  }
  return 0LL;
}
