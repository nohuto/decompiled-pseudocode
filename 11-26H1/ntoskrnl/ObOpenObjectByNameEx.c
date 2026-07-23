/*
 * XREFs of ObOpenObjectByNameEx @ 0x14092CD80
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x14052DB88 (IoRevokeHandlesForProcess.c)
 *     ObOpenObjectByName @ 0x14092C800 (ObOpenObjectByName.c)
 *     CmCreateKey @ 0x140936900 (CmCreateKey.c)
 *     CmOpenKey @ 0x140937170 (CmOpenKey.c)
 *     CmpLinkHiveToMaster @ 0x14093E12C (CmpLinkHiveToMaster.c)
 *     IopReferenceDriverObjectByName @ 0x1409713C8 (IopReferenceDriverObjectByName.c)
 *     IopCreateFile @ 0x140984B18 (IopCreateFile.c)
 *     IoQueryInformationByName @ 0x1409857A0 (IoQueryInformationByName.c)
 *     NtQueryFullAttributesFile @ 0x1409868B0 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x140986B10 (NtQueryAttributesFile.c)
 *     IopLoadDriver @ 0x140A3A064 (IopLoadDriver.c)
 *     NtOpenSymbolicLinkObject @ 0x140A95620 (NtOpenSymbolicLinkObject.c)
 *     NtOpenDirectoryObject @ 0x140A9DF40 (NtOpenDirectoryObject.c)
 *     NtOpenEvent @ 0x140AA8FA0 (NtOpenEvent.c)
 *     NtOpenSection @ 0x140AA91B0 (NtOpenSection.c)
 *     NtOpenMutant @ 0x140AC7630 (NtOpenMutant.c)
 *     NtOpenSemaphore @ 0x140ACA880 (NtOpenSemaphore.c)
 *     ExCreateCallback @ 0x140AFD610 (ExCreateCallback.c)
 *     NtDeleteFile @ 0x140B2A470 (NtDeleteFile.c)
 *     IopFastQueryNetworkAttributes @ 0x140B4DF10 (IopFastQueryNetworkAttributes.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027BDE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     SepDeleteAccessState @ 0x14040CC90 (SepDeleteAccessState.c)
 *     SeClearLearningModeObjectInformation @ 0x14041C210 (SeClearLearningModeObjectInformation.c)
 *     SeSetLearningModeObjectInformation @ 0x14041D674 (SeSetLearningModeObjectInformation.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14043B0F0 (SepCreateAccessStateFromSubjectContext.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlValidSecurityDescriptor @ 0x1409029C0 (RtlValidSecurityDescriptor.c)
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     ObpDeleteNameCheck @ 0x14092C880 (ObpDeleteNameCheck.c)
 *     ObpCaptureObjectCreateInformation @ 0x14092DF60 (ObpCaptureObjectCreateInformation.c)
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 *     SeObjectCreateSaclAccessBits @ 0x140ABB99C (SeObjectCreateSaclAccessBits.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObOpenObjectByNameEx(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  __int64 v10; // r13
  char *v11; // r14
  struct _KPRCB *CurrentPrcb; // r15
  _GENERAL_LOOKASIDE *P; // rdi
  __int64 v14; // rbx
  char v15; // r15
  int Information; // edi
  __int64 v17; // r8
  struct _KLOCK_ENTRIES *v18; // r9
  struct _KTHREAD *CurrentThread; // rdi
  _DWORD *v20; // r12
  __int64 Process; // r15
  LegacyAutoBoost *v22; // r13
  __int64 v23; // rdx
  struct _LIST_ENTRY *v24; // r13
  signed __int64 *p_Lock; // rdi
  struct _LIST_ENTRY *v26; // rax
  int v27; // r12d
  __int64 v28; // rcx
  _BYTE *v29; // rdi
  PVOID *v30; // rdi
  char *v31; // r15
  __int64 *v32; // r15
  signed __int64 v33; // rax
  signed __int64 v34; // rdx
  __int64 v35; // rtt
  PVOID v36; // rcx
  char *v37; // rdi
  __int64 v38; // rax
  void *v39; // rcx
  struct _KPRCB *v40; // r8
  _SLIST_ENTRY *v41; // rdx
  _GENERAL_LOOKASIDE *v42; // rcx
  __int64 v43; // rdx
  int v44; // edi
  __int64 v45; // r8
  struct _KLOCK_ENTRIES *v46; // r9
  signed __int64 v47; // r8
  _KPROCESS *v48; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v50; // rtt
  void *v51; // rcx
  void *v52; // rcx
  _SLIST_ENTRY *v53; // r8
  struct _KPRCB *v54; // rdx
  _GENERAL_LOOKASIDE *v55; // rcx
  struct _KPRCB *v56; // rdx
  _GENERAL_LOOKASIDE *v57; // rcx
  struct _KPRCB *v59; // rdx
  _GENERAL_LOOKASIDE *v60; // r8
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rax
  PVOID Object; // [rsp+78h] [rbp-90h] BYREF
  __int64 v66; // [rsp+80h] [rbp-88h] BYREF
  PSLIST_ENTRY ListEntry[2]; // [rsp+88h] [rbp-80h] BYREF
  struct _KTHREAD *v68; // [rsp+98h] [rbp-70h]
  struct _KTHREAD *v69; // [rsp+A0h] [rbp-68h]
  __int128 v70; // [rsp+B0h] [rbp-58h] BYREF
  struct _LIST_ENTRY *v71; // [rsp+C0h] [rbp-48h]
  __int64 v72; // [rsp+C8h] [rbp-40h]
  __int128 v73; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v74; // [rsp+E0h] [rbp-28h]
  __int128 v75; // [rsp+F0h] [rbp-18h]
  __int64 v76; // [rsp+100h] [rbp-8h]
  __int64 v77; // [rsp+148h] [rbp+40h] BYREF
  __int64 v78; // [rsp+150h] [rbp+48h]
  unsigned __int8 v79; // [rsp+158h] [rbp+50h]

  v79 = a3;
  v78 = a2;
  v76 = 0LL;
  Object = 0LL;
  LODWORD(v77) = 0;
  v10 = a2;
  v66 = 0LL;
  v11 = 0LL;
  *a8 = 0LL;
  *(_OWORD *)ListEntry = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v14 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v14
    || (++P->AllocateMisses,
        L = CurrentPrcb->PPLookasideList[8].L,
        ++L->TotalAllocates,
        (v14 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead)) != 0)
    || (++L->AllocateMisses, (v14 = guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size)) != 0) )
  {
    *(_DWORD *)v14 = CurrentPrcb->Number;
  }
  if ( !v14 )
    return 3221225626LL;
  v15 = v79;
  Information = ObpCaptureObjectCreateInformation(v79, v79, a1, ListEntry, v14 + 160, 1);
  if ( Information < 0 )
  {
    v59 = KeGetCurrentPrcb();
    v60 = v59->PPLookasideList[8].P;
    ++v60->TotalFrees;
    if ( LOWORD(v60->ListHead.Alignment) < v60->Depth
      || (++v60->FreeMisses,
          v60 = v59->PPLookasideList[8].L,
          ++v60->TotalFrees,
          LOWORD(v60->ListHead.Alignment) < v60->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v60->ListHead, (PSLIST_ENTRY)v14);
      return (unsigned int)Information;
    }
    else
    {
      ++v60->FreeMisses;
      guard_dispatch_icall_no_overrides(v14, (__int64)v59);
      return (unsigned int)Information;
    }
  }
  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    v20 = (_DWORD *)(v10 + 76);
    *((_QWORD *)&v70 + 1) = 0LL;
    Process = (__int64)CurrentThread->ApcState.Process;
    v72 = *(_QWORD *)(Process + 464);
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v69 = KeGetCurrentThread();
      --v69->KernelApcDisable;
      v68 = (struct _KTHREAD *)((char *)CurrentThread + 1424);
      v22 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL, 0LL, v18);
      v23 = 17LL;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(
          (signed __int64 *)&CurrentThread[1].WaitBlockList,
          0,
          v22,
          (struct _KTHREAD *)((char *)CurrentThread + 1424));
      if ( v22 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v22, (void *)v23);
        else
          *((_BYTE *)v22 + 10) = 1;
      }
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v24 = (struct _LIST_ENTRY *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v24, 0x75536553u);
        DWORD2(v70) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
      }
      else
      {
        v24 = 0LL;
      }
      p_Lock = (signed __int64 *)&v68->Header.Lock;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v68->Header.Lock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(p_Lock);
      KeAbPostRelease((unsigned __int64)p_Lock);
      KeLeaveCriticalRegionThread((__int64)v69);
    }
    else
    {
      v24 = 0LL;
    }
    *(_QWORD *)&v70 = v24;
    v26 = (struct _LIST_ENTRY *)PsReferencePrimaryTokenWithTag(Process, 0x75536553u, v17, v18);
    v71 = v26;
    if ( SeTokenLeakTracking )
    {
      if ( v26 )
      {
        _InterlockedIncrement((volatile signed __int32 *)&v26[71].Blink[17].Blink + 1);
        if ( v26 == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
          __debugbreak();
      }
      if ( v24 )
      {
        _InterlockedIncrement((volatile signed __int32 *)&v24[71].Blink[17].Blink + 1);
        if ( v24 == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
          __debugbreak();
      }
    }
    v27 = SepCreateAccessStateFromSubjectContext(&v70, (_QWORD *)v14, (_QWORD *)(v14 + 224), a5, v20);
    if ( v27 < 0 )
      goto LABEL_56;
    v10 = v78;
    a4 = v14;
    v15 = v79;
  }
  v28 = *(_QWORD *)(v14 + 192);
  if ( v28 )
    *(_QWORD *)(a4 + 64) = v28;
  v29 = *(_BYTE **)(a4 + 64);
  if ( !v29 )
    goto LABEL_25;
  if ( RtlValidSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a4 + 64)) )
  {
    if ( (v29[2] & 0x10) != 0 && (*(_DWORD *)(a4 + 20) & 0x1000000) == 0 )
      *(_DWORD *)(a4 + 16) |= SeObjectCreateSaclAccessBits(v29);
LABEL_25:
    v30 = (PVOID *)(v14 + 448);
    v27 = ObpLookupObjectName(
            *(_QWORD *)(v14 + 168),
            v15,
            a6,
            *(_QWORD *)(v14 + 200),
            0LL,
            a7,
            a4,
            v14 + 448,
            (__int64)&v77,
            (__int64)&Object);
    if ( v27 >= 0 )
    {
      if ( *v30 )
      {
        v11 = (char *)Object - 48;
        PsReferenceSiloContext(Object);
        _InterlockedIncrement((volatile signed __int32 *)&v11[-ObpInfoMaskToOffset[v11[26] & 3] + 24]);
      }
      v31 = (char *)*v30;
      if ( *v30 )
      {
        v32 = (__int64 *)(v31 + 296);
        _m_prefetchw(v32);
        v33 = *v32;
        v34 = *v32 - 16;
        if ( (*v32 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v34 = 0LL;
        if ( (v33 & 2) != 0 || (v35 = *v32, v35 != _InterlockedCompareExchange64(v32, v34, v33)) )
          ExfReleasePushLock(v32);
        KeAbPostRelease((unsigned __int64)v32);
        if ( *(_BYTE *)(v14 + 470) )
        {
          ObDereferenceObjectDeferDeleteWithTag(*v30, 0x554C624Fu);
          *(_BYTE *)(v14 + 470) = 0;
        }
        LODWORD(v31) = 0;
        *v30 = 0LL;
        *(_BYTE *)(v14 + 469) = 0;
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      v36 = Object;
      v37 = (char *)Object - 48;
      if ( (*((char *)Object - 21) & 1) != 0 )
      {
        v38 = *((_QWORD *)v37 + 4);
        if ( v38 )
        {
          v39 = *(void **)(v38 + 32);
          if ( v39 )
          {
            if ( *(_BYTE *)(v38 + 16) <= 1u )
              ExFreePoolWithTag(v39, 0);
            *(_QWORD *)(*((_QWORD *)v37 + 4) + 32LL) = 0LL;
          }
          v40 = KeGetCurrentPrcb();
          v41 = (_SLIST_ENTRY *)*((_QWORD *)v37 + 4);
          v42 = v40->PPLookasideList[4].P;
          ++v42->TotalFrees;
          if ( LOWORD(v42->ListHead.Alignment) < v42->Depth
            || (++v42->FreeMisses,
                v42 = v40->PPLookasideList[4].L,
                ++v42->TotalFrees,
                LOWORD(v42->ListHead.Alignment) < v42->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v42->ListHead, v41);
          }
          else
          {
            ++v42->FreeMisses;
            guard_dispatch_icall_no_overrides((__int64)v41, (__int64)v41);
          }
          *((_QWORD *)v37 + 4) = 0LL;
          v36 = Object;
        }
      }
      else
      {
        LODWORD(v31) = 1;
      }
      if ( (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v37[24] ^ (unsigned __int64)BYTE1(v37)]
                      + 72) & *(_DWORD *)(v14 + 160)) != 0 )
      {
        ObfDereferenceObject(v36);
        v27 = -1073741811;
      }
      else
      {
        if ( SepLearningModeTokenCount )
        {
          *((_QWORD *)&v74 + 1) = ListEntry;
          *(_QWORD *)&v74 = v10 + 16;
          *(_QWORD *)&v75 = *(_QWORD *)(v14 + 168);
          SeSetLearningModeObjectInformation((__int64)&v73);
          v36 = Object;
        }
        if ( ObpTraceFlags )
        {
          v62 = (__int64)v36 - 48;
          ObpPushStackInfo((__int64)v36 - 48, 1, 0x6E48624Fu);
          ObpPushStackInfo(v62, -1, 0x746C6644u);
          v36 = Object;
        }
        v44 = ObpCreateHandle(
                (unsigned int)v31,
                (char *)v36,
                0,
                a4,
                0,
                *(_DWORD *)(v14 + 160),
                v79,
                0LL,
                v77,
                0LL,
                &v66);
        if ( v44 < 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
          v27 = v44;
        }
        else
        {
          *a8 = v66;
        }
      }
      if ( v11 )
      {
        if ( _InterlockedExchangeAdd(
               (volatile signed __int32 *)&v11[-ObpInfoMaskToOffset[v11[26] & 3] + 24],
               0xFFFFFFFF) == 1 )
          ObpDeleteNameCheck((__int64)v11, v43, v45, v46);
        ObfDereferenceObject(v11 + 48);
      }
    }
    goto LABEL_56;
  }
  v27 = -1073741703;
LABEL_56:
  if ( a4 == v14 )
  {
    SepDeleteAccessState(a4);
    if ( SeTokenLeakTracking )
    {
      v63 = *(_QWORD *)(a4 + 48);
      if ( v63 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v63 + 1144) + 284LL));
        if ( *(struct _LIST_ENTRY **)(a4 + 48) == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
          __debugbreak();
      }
      v64 = *(_QWORD *)(a4 + 32);
      if ( v64 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v64 + 1144) + 284LL));
        if ( *(struct _LIST_ENTRY **)(a4 + 32) == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
          __debugbreak();
      }
    }
    v47 = *(_QWORD *)(a4 + 48);
    v48 = KeGetCurrentThread()->ApcState.Process;
    _m_prefetchw(&v48[1].ActiveProcessors);
    ActiveProcessors = (signed __int64)v48[1].ActiveProcessors;
    do
    {
      if ( (v47 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
      {
        ObfDereferenceObjectWithTag((PVOID)v47, 0x75536553u);
        goto LABEL_63;
      }
      v50 = ActiveProcessors;
      ActiveProcessors = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&v48[1].ActiveProcessors,
                           ActiveProcessors + 1,
                           ActiveProcessors);
    }
    while ( v50 != ActiveProcessors );
    if ( ObpTraceFlags )
      ObpPushStackInfo(v47 - 48, -1, 0x75536553u);
LABEL_63:
    v51 = *(void **)(a4 + 32);
    *(_QWORD *)(a4 + 48) = 0LL;
    if ( v51 )
      ObfDereferenceObjectWithTag(v51, 0x75536553u);
    *(_QWORD *)(a4 + 32) = 0LL;
  }
  v52 = *(void **)(v14 + 192);
  if ( v52 )
  {
    if ( *(_BYTE *)(v14 + 176) <= 1u )
      ExFreePoolWithTag(v52, 0);
    *(_QWORD *)(v14 + 192) = 0LL;
  }
  v53 = ListEntry[1];
  if ( ListEntry[1] )
  {
    if ( WORD1(ListEntry[0]) == 248 )
    {
      v54 = KeGetCurrentPrcb();
      v55 = v54->PPLookasideList[5].P;
      ++v55->TotalFrees;
      if ( LOWORD(v55->ListHead.Alignment) < v55->Depth
        || (++v55->FreeMisses,
            v55 = v54->PPLookasideList[5].L,
            ++v55->TotalFrees,
            LOWORD(v55->ListHead.Alignment) < v55->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v55->ListHead, v53);
      }
      else
      {
        ++v55->FreeMisses;
        guard_dispatch_icall_no_overrides((__int64)v53, (__int64)v54);
      }
    }
    else
    {
      ExFreePoolWithTag(ListEntry[1], 0);
    }
  }
  SeClearLearningModeObjectInformation();
  v56 = KeGetCurrentPrcb();
  v57 = v56->PPLookasideList[8].P;
  ++v57->TotalFrees;
  if ( LOWORD(v57->ListHead.Alignment) < v57->Depth
    || (++v57->FreeMisses,
        v57 = v56->PPLookasideList[8].L,
        ++v57->TotalFrees,
        LOWORD(v57->ListHead.Alignment) < v57->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v57->ListHead, (PSLIST_ENTRY)v14);
  }
  else
  {
    ++v57->FreeMisses;
    guard_dispatch_icall_no_overrides(v14, (__int64)v56);
  }
  return (unsigned int)v27;
}
