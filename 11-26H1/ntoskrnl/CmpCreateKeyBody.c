/*
 * XREFs of CmpCreateKeyBody @ 0x14092BC40
 * Callers:
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x140A4C1F8 (CmpStartSiloRegistryNamespace.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     SepPrivilegeCheck @ 0x14041BFB0 (SepPrivilegeCheck.c)
 *     PsGetCurrentThreadProcessId @ 0x14044EE20 (PsGetCurrentThreadProcessId.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ObpRegisterObject @ 0x14077BE38 (ObpRegisterObject.c)
 *     CmpRecordParseFailure @ 0x1408CCA90 (CmpRecordParseFailure.c)
 *     CmpLockKcbExclusive @ 0x1408D5100 (CmpLockKcbExclusive.c)
 *     CmpIsKeyStackDeleted @ 0x1408D52A0 (CmpIsKeyStackDeleted.c)
 *     CmpTransReferenceTransaction @ 0x1408F48C4 (CmpTransReferenceTransaction.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14090E660 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ObpAllocateObject @ 0x140910050 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x14092DF60 (ObpCaptureObjectCreateInformation.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpCreateKeyBody(
        volatile signed __int64 *BugCheckParameter2,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _QWORD *a7,
        __int64 a8)
{
  __int64 v8; // r12
  unsigned __int8 v9; // r13
  volatile signed __int64 *v10; // r14
  char *v11; // rbx
  signed __int64 v12; // rax
  struct _KPRCB *CurrentPrcb; // r14
  POBJECT_TYPE *v14; // r15
  _GENERAL_LOOKASIDE *P; // rdi
  __int64 v16; // rsi
  int Information; // edi
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9
  __int64 v20; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // r14
  struct _KTHREAD *v23; // r13
  void *v24; // rdx
  LegacyAutoBoost *v25; // r15
  void *v26; // r15
  _QWORD *v27; // rax
  __int64 v28; // rdi
  _QWORD *v29; // r14
  unsigned int v30; // r15d
  char v31; // r12
  _QWORD *v32; // rcx
  void *v33; // rbx
  _KPROCESS *v34; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v36; // rtt
  _SLIST_ENTRY *v37; // r8
  struct _KPRCB *v38; // rdx
  _GENERAL_LOOKASIDE *v39; // rcx
  void *v40; // rcx
  struct _KPRCB *v41; // rdx
  _GENERAL_LOOKASIDE *v42; // rcx
  int v43; // ecx
  __int64 v44; // r13
  __int64 v45; // r15
  __int64 v46; // r12
  int i; // r9d
  int v48; // ecx
  __int64 v49; // r8
  struct _KLOCK_ENTRIES *v50; // r9
  char *v51; // rbx
  struct _KPRCB *v52; // rdx
  _GENERAL_LOOKASIDE *v53; // rcx
  unsigned int v54; // r8d
  _BYTE *v55; // rcx
  char v56; // si
  __int64 *v57; // rdx
  __int64 v58; // rax
  __int64 **v59; // rcx
  PSE_EXPORTS v60; // r13
  int v61; // ebx
  __int64 *v62; // r9
  __int64 v63; // r10
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *Flink; // rax
  __int64 *v66; // rdx
  __int64 v67; // r9
  _UNKNOWN **v68; // r8
  _DWORD *v69; // rax
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 v71; // rax
  __int64 v72; // rax
  int v73; // eax
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // r8
  struct _KLOCK_ENTRIES *v79; // r9
  __int16 v81; // [rsp+44h] [rbp-A5h] BYREF
  PVOID Object; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v83; // [rsp+50h] [rbp-99h]
  PVOID v84; // [rsp+58h] [rbp-91h]
  __int64 v85; // [rsp+60h] [rbp-89h]
  volatile signed __int64 *v86; // [rsp+68h] [rbp-81h]
  __int64 v87; // [rsp+70h] [rbp-79h]
  char *v88; // [rsp+80h] [rbp-69h] BYREF
  __int64 v89; // [rsp+88h] [rbp-61h]
  __int64 v90; // [rsp+90h] [rbp-59h]
  __int64 v91; // [rsp+98h] [rbp-51h]
  PSLIST_ENTRY ListEntry[2]; // [rsp+A0h] [rbp-49h] BYREF
  POBJECT_TYPE *v93; // [rsp+B0h] [rbp-39h]
  __int64 v94; // [rsp+B8h] [rbp-31h]
  _QWORD *v95; // [rsp+C0h] [rbp-29h]
  __int64 v96; // [rsp+C8h] [rbp-21h]
  unsigned int v97[2]; // [rsp+D0h] [rbp-19h] BYREF
  __int64 v98; // [rsp+D8h] [rbp-11h] BYREF
  int v99; // [rsp+E0h] [rbp-9h]

  v91 = a6;
  v8 = a3;
  v9 = a2;
  v95 = a7;
  v10 = BugCheckParameter2;
  v11 = 0LL;
  v96 = a8;
  v94 = a4;
  v89 = a3;
  v86 = BugCheckParameter2;
  v87 = 0LL;
  v90 = 0LL;
  v12 = _InterlockedIncrement64(BugCheckParameter2);
  if ( !v12 )
    KeBugCheckEx(0x51u, 0x24uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  if ( v12 == 1 )
    KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
  if ( a4 )
  {
    if ( *(_QWORD *)(a4 + 56) )
    {
      v87 = *(_QWORD *)(a4 + 56);
      v73 = CmpTransReferenceTransaction(v87);
      Information = v73;
      if ( v73 < 0 )
      {
        CmpRecordParseFailure(v8, 131840, v73);
LABEL_83:
        if ( _InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
        goto LABEL_142;
      }
    }
    else
    {
      v90 = a4 + 88;
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v81 = 0;
  v14 = CmKeyObjectType;
  v88 = 0LL;
  P = CurrentPrcb->PPLookasideList[4].P;
  LOBYTE(v81) = 1;
  v93 = CmKeyObjectType;
  *(_OWORD *)ListEntry = 0LL;
  ++P->TotalAllocates;
  v16 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v16
    || (++P->AllocateMisses,
        L = CurrentPrcb->PPLookasideList[4].L,
        ++L->TotalAllocates,
        (v16 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead)) != 0)
    || (++L->AllocateMisses, (v16 = guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size)) != 0) )
  {
    *(_DWORD *)v16 = CurrentPrcb->Number;
  }
  if ( !v16 )
  {
    Information = -1073741670;
    v43 = -1073741670;
    goto LABEL_116;
  }
  Information = ObpCaptureObjectCreateInformation(v9, v9, 0LL, ListEntry, v16, 0);
  if ( Information < 0 )
  {
    v52 = KeGetCurrentPrcb();
    v53 = v52->PPLookasideList[4].P;
    ++v53->TotalFrees;
    if ( LOWORD(v53->ListHead.Alignment) < v53->Depth
      || (++v53->FreeMisses,
          v53 = v52->PPLookasideList[4].L,
          ++v53->TotalFrees,
          LOWORD(v53->ListHead.Alignment) < v53->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v53->ListHead, (PSLIST_ENTRY)v16);
      v43 = Information;
    }
    else
    {
      ++v53->FreeMisses;
      guard_dispatch_icall_no_overrides(v16, (__int64)v52);
      v43 = Information;
    }
LABEL_116:
    v10 = v86;
    v56 = 1;
    if ( v8 )
    {
      v71 = *(unsigned __int8 *)(v8 + 426);
      if ( (unsigned __int8)v71 < 4u )
      {
        *(_DWORD *)(v8 + 8 * v71 + 428) = v43;
        *(_DWORD *)(v8 + 8LL * (unsigned __int8)(*(_BYTE *)(v8 + 426))++ + 432) = 132096;
      }
    }
    goto LABEL_80;
  }
  if ( (*(_DWORD *)v16 & (_DWORD)v14[9]) != 0 )
  {
    Information = -1073741811;
    goto LABEL_42;
  }
  if ( (*(_DWORD *)v16 & 0x10) == 0 )
    goto LABEL_64;
  v20 = *(_QWORD *)&PspSiloMonitorLock.SystemCallNumber;
  v83 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v85 = *(_QWORD *)(Process + 464);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v23 = KeGetCurrentThread();
    --v23->KernelApcDisable;
    v25 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL, 0LL, v19);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&CurrentThread[1].WaitBlockList,
        0,
        v25,
        (struct _KTHREAD *)((char *)CurrentThread + 1424));
    if ( v25 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v25, v24);
      else
        *((_BYTE *)v25 + 10) = 1;
    }
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v26 = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      ObfReferenceObjectWithTag(v26, 0x75536553u);
      LODWORD(v83) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
    }
    else
    {
      v26 = 0LL;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
    KeAbPostRelease((unsigned __int64)&CurrentThread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)v23);
    v9 = a2;
  }
  else
  {
    v26 = 0LL;
  }
  Object = v26;
  v27 = (_QWORD *)PsReferencePrimaryTokenWithTag(Process, 0x75536553u, v18, v19);
  v28 = (__int64)v27;
  v84 = v27;
  if ( SeTokenLeakTracking )
  {
    if ( v27 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v27[143] + 284LL));
      v28 = (__int64)v84;
      if ( v84 == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
        __debugbreak();
    }
    v29 = Object;
    if ( Object )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)Object + 143) + 284LL));
      v29 = Object;
      if ( Object == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
        __debugbreak();
      v28 = (__int64)v84;
    }
  }
  else
  {
    v29 = Object;
  }
  v98 = v20;
  v97[0] = 1;
  v30 = 1;
  v97[1] = 1;
  v99 = 0;
  if ( v9 )
  {
    if ( v29 )
    {
      if ( (int)v83 < 2 )
      {
        v31 = 0;
LABEL_29:
        v32 = (_QWORD *)v28;
        if ( v29 )
          v32 = v29;
        v33 = *(void **)v32[19];
        if ( !RtlEqualSid(*(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4), v33) )
        {
          v60 = SeExports;
          if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, v33) && !RtlEqualSid(v60->SeLocalServiceSid, v33) )
            goto LABEL_90;
          v61 = 0;
          if ( v30 )
          {
            v62 = &v98;
            v63 = v30;
            do
            {
              Blink = ExpPlatformBinaryLock.WaitBlock[1].WaitListEntry.Blink;
              Flink = ExpPlatformBinaryLock.WaitBlock[1].WaitListEntry.Blink->Flink;
              while ( *(_DWORD *)v62 != LODWORD(Flink->Flink) || *((_DWORD *)v62 + 1) != HIDWORD(Blink->Flink->Flink) )
              {
                Flink = Blink->Blink;
                Blink = (struct _LIST_ENTRY *)((char *)Blink + 8);
                if ( !Flink )
                  goto LABEL_103;
              }
              ++v61;
LABEL_103:
              v62 = (__int64 *)((char *)v62 + 12);
              --v63;
            }
            while ( v63 );
            v66 = &v98;
            v67 = v30;
            do
            {
              v68 = &SepServicesFilterPrivileges;
              v69 = SepServicesFilterPrivileges;
              while ( *(_DWORD *)v66 != *v69 || *((_DWORD *)v66 + 1) != *((_DWORD *)*v68 + 1) )
              {
                v69 = v68[1];
                ++v68;
                if ( !v69 )
                  goto LABEL_108;
              }
              ++v61;
LABEL_108:
              v66 = (__int64 *)((char *)v66 + 12);
              --v67;
            }
            while ( v67 );
            if ( v61 != v30 )
            {
LABEL_90:
              SepAdtPrivilegedServiceAuditAlarm((__int64)&Object, &SeSubsystemName, 0LL, (__int64)v29, v28, v97, v31);
              v28 = (__int64)v84;
              v29 = Object;
            }
          }
          v9 = a2;
        }
        goto LABEL_32;
      }
    }
    else
    {
      v29 = (_QWORD *)v28;
    }
    v28 = (__int64)v84;
    v31 = SepPrivilegeCheck((__int64)v29, (__int64)&v98, 1u, 1, v9);
    v29 = Object;
    v30 = v97[0];
    goto LABEL_29;
  }
  v31 = 1;
LABEL_32:
  if ( SeTokenLeakTracking )
  {
    if ( v28 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v28 + 1144) + 284LL));
      v28 = (__int64)v84;
      if ( v84 == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
        __debugbreak();
      v29 = Object;
    }
    if ( v29 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v29[143] + 284LL));
      if ( Object == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
        __debugbreak();
      v28 = (__int64)v84;
    }
  }
  v34 = KeGetCurrentThread()->ApcState.Process;
  _m_prefetchw(&v34[1].ActiveProcessors);
  ActiveProcessors = (signed __int64)v34[1].ActiveProcessors;
  do
  {
    if ( (v28 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
    {
      ObfDereferenceObjectWithTag((PVOID)v28, 0x75536553u);
      goto LABEL_38;
    }
    v36 = ActiveProcessors;
    ActiveProcessors = _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&v34[1].ActiveProcessors,
                         ActiveProcessors + 1,
                         ActiveProcessors);
  }
  while ( v36 != ActiveProcessors );
  if ( ObpTraceFlags )
    ObpPushStackInfo(v28 - 48, -1, 0x75536553u);
LABEL_38:
  v84 = 0LL;
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x75536553u);
  Object = 0LL;
  if ( !v31 )
  {
    Information = -1073741727;
LABEL_42:
    v37 = ListEntry[1];
    if ( ListEntry[1] )
    {
      if ( WORD1(ListEntry[0]) == 248 )
      {
        v38 = KeGetCurrentPrcb();
        v39 = v38->PPLookasideList[5].P;
        ++v39->TotalFrees;
        if ( LOWORD(v39->ListHead.Alignment) < v39->Depth
          || (++v39->FreeMisses,
              v39 = v38->PPLookasideList[5].L,
              ++v39->TotalFrees,
              LOWORD(v39->ListHead.Alignment) < v39->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v39->ListHead, v37);
        }
        else
        {
          ++v39->FreeMisses;
          guard_dispatch_icall_no_overrides((__int64)v37, (__int64)v38);
        }
      }
      else
      {
        ExFreePoolWithTag(ListEntry[1], 0);
      }
    }
    v40 = *(void **)(v16 + 32);
    if ( v40 )
    {
      if ( *(_BYTE *)(v16 + 16) <= 1u )
        ExFreePoolWithTag(v40, 0);
      *(_QWORD *)(v16 + 32) = 0LL;
    }
    v41 = KeGetCurrentPrcb();
    v42 = v41->PPLookasideList[4].P;
    ++v42->TotalFrees;
    if ( LOWORD(v42->ListHead.Alignment) < v42->Depth
      || (++v42->FreeMisses,
          v42 = v41->PPLookasideList[4].L,
          ++v42->TotalFrees,
          LOWORD(v42->ListHead.Alignment) < v42->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v42->ListHead, (PSLIST_ENTRY)v16);
    }
    else
    {
      ++v42->FreeMisses;
      guard_dispatch_icall_no_overrides(v16, (__int64)v41);
    }
    v11 = 0LL;
    v43 = Information;
    v8 = v89;
    goto LABEL_116;
  }
  v14 = v93;
LABEL_64:
  v48 = *((_DWORD *)v14 + 27);
  *(_DWORD *)(v16 + 20) = *((_DWORD *)v14 + 26);
  *(_DWORD *)(v16 + 24) = v48;
  Information = ObpAllocateObject((_DWORD *)v16, v9, (__int64)v14, (__int128 *)ListEntry, 112, &v88, &v81);
  if ( Information < 0 )
    goto LABEL_42;
  v51 = v88;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject((__int64)v88, 1, v49, v50);
    ObpPushStackInfo((__int64)v51, 1, 0x746C6644u);
  }
  v11 = v51 + 48;
  v44 = v89;
  v10 = v86;
  *(_OWORD *)v11 = 0LL;
  *((_OWORD *)v11 + 1) = 0LL;
  *((_OWORD *)v11 + 2) = 0LL;
  *((_OWORD *)v11 + 3) = 0LL;
  *((_OWORD *)v11 + 4) = 0LL;
  *((_OWORD *)v11 + 5) = 0LL;
  *((_OWORD *)v11 + 6) = 0LL;
  *((_WORD *)v11 + 25) = *(_WORD *)(v44 + 20);
  *((_QWORD *)v11 + 1) = v10;
  *((_QWORD *)v11 + 3) = PsGetCurrentThreadProcessId();
  *((_WORD *)v11 + 2) = 0;
  *((_DWORD *)v11 + 24) = -1;
  if ( (v10[23] & 0x400000) != 0 )
  {
    v75 = *((int *)v10 + 24);
    *(_DWORD *)v11 = v75;
    *(_QWORD *)(v44 + 56) = v75;
  }
  else
  {
    *(_DWORD *)v11 = 1803104306;
  }
  v45 = v94;
  if ( v94 )
  {
    *((_QWORD *)v11 + 7) = v87;
    *((_QWORD *)v11 + 8) = v90;
    v87 = 0LL;
  }
  *((_QWORD *)v11 + 10) = v11 + 72;
  *((_QWORD *)v11 + 9) = v11 + 72;
  if ( (*(_DWORD *)(v44 + 24) & 0x10) != 0 )
    *((_WORD *)v11 + 24) |= 0x10u;
  if ( (a5 & 2) == 0 || (v10[23] & 0x400000) != 0 )
  {
LABEL_79:
    v55 = (_BYTE *)v96;
    v56 = 0;
    Information = 0;
    *v95 = v11;
    v11 = 0LL;
    *v55 = (v10[23] & 0x400000) != 0;
  }
  else
  {
    v46 = v91;
    if ( (a5 & 1) != 0 )
      goto LABEL_72;
    for ( i = 0; ; i = 2 )
    {
      *((_QWORD *)v11 + 5) = v11 + 32;
      v54 = 0;
      *((_QWORD *)v11 + 4) = v11 + 32;
      while ( v54 < 4 )
      {
        if ( !_InterlockedCompareExchange64(
                (volatile signed __int64 *)(*((_QWORD *)v11 + 1) + 8LL * v54 + 136),
                (signed __int64)v11,
                0LL) )
          goto LABEL_78;
        ++v54;
      }
      if ( i )
      {
        v57 = (__int64 *)(v11 + 32);
        v58 = *((_QWORD *)v11 + 1) + 120LL;
        v59 = *(__int64 ***)(*((_QWORD *)v11 + 1) + 128LL);
        if ( *v59 != (__int64 *)v58 )
          __fastfail(3u);
        *v57 = v58;
        *((_QWORD *)v11 + 5) = v59;
        *v59 = v57;
        *(_QWORD *)(v58 + 8) = v57;
LABEL_78:
        *((_WORD *)v11 + 24) |= 0x40u;
        goto LABEL_79;
      }
      v76 = *((_QWORD *)v11 + 1);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v76 + 48), 1LL, 17LL) == 17 )
      {
        *(_QWORD *)(v76 + 56) = KeGetCurrentThread();
        continue;
      }
      CmpUnlockKcb(*((_QWORD *)v11 + 1));
      CmpLockKcbExclusive(*((_QWORD *)v11 + 1), v77, v78, v79);
      if ( (*(_DWORD *)(*((_QWORD *)v11 + 1) + 8LL) & 0x20000) != 0 || CmpIsKeyStackDeleted(v46, v45) )
        break;
LABEL_72:
      ;
    }
    v72 = *(unsigned __int8 *)(v44 + 426);
    Information = -1073741444;
    v56 = 1;
    if ( (unsigned __int8)v72 < 4u )
    {
      *(_DWORD *)(v44 + 8 * v72 + 428) = -1073741444;
      *(_DWORD *)(v44 + 8LL * (unsigned __int8)(*(_BYTE *)(v44 + 426))++ + 432) = 132352;
    }
  }
LABEL_80:
  if ( v87 )
    ObfDereferenceObject((PVOID)(v87 & 0xFFFFFFFFFFFFFFFEuLL));
  if ( v56 )
    goto LABEL_83;
LABEL_142:
  if ( v11 )
  {
    *((_QWORD *)v11 + 1) = 0LL;
    ObfDereferenceObject(v11);
  }
  return (unsigned int)Information;
}
