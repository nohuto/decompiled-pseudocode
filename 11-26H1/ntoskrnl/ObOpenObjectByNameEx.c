/*
 * XREFs of ObOpenObjectByNameEx @ 0x1408FCDF0
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x14052B668 (IoRevokeHandlesForProcess.c)
 *     ObOpenObjectByName @ 0x1408FC870 (ObOpenObjectByName.c)
 *     IopReferenceDriverObjectByName @ 0x14091695C (IopReferenceDriverObjectByName.c)
 *     CmCreateKey @ 0x1409748F0 (CmCreateKey.c)
 *     CmOpenKey @ 0x140975160 (CmOpenKey.c)
 *     CmpLinkHiveToMaster @ 0x14097C11C (CmpLinkHiveToMaster.c)
 *     IopCreateFile @ 0x1409B3A58 (IopCreateFile.c)
 *     IoQueryInformationByName @ 0x1409B46E0 (IoQueryInformationByName.c)
 *     NtQueryFullAttributesFile @ 0x1409B57F0 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x1409B5A50 (NtQueryAttributesFile.c)
 *     IopLoadDriver @ 0x140A26FC4 (IopLoadDriver.c)
 *     NtOpenSymbolicLinkObject @ 0x140A90AD0 (NtOpenSymbolicLinkObject.c)
 *     NtOpenDirectoryObject @ 0x140A99DC0 (NtOpenDirectoryObject.c)
 *     NtOpenEvent @ 0x140AAB9F0 (NtOpenEvent.c)
 *     NtOpenSection @ 0x140AABC00 (NtOpenSection.c)
 *     NtOpenMutant @ 0x140AC59C0 (NtOpenMutant.c)
 *     NtOpenSemaphore @ 0x140AC8C90 (NtOpenSemaphore.c)
 *     ExCreateCallback @ 0x140AFB990 (ExCreateCallback.c)
 *     NtDeleteFile @ 0x140B28140 (NtDeleteFile.c)
 *     IopFastQueryNetworkAttributes @ 0x140B4C180 (IopFastQueryNetworkAttributes.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027C870 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     SepDeleteAccessState @ 0x140418680 (SepDeleteAccessState.c)
 *     SeClearLearningModeObjectInformation @ 0x14042F300 (SeClearLearningModeObjectInformation.c)
 *     SeSetLearningModeObjectInformation @ 0x140430644 (SeSetLearningModeObjectInformation.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1404425E0 (SepCreateAccessStateFromSubjectContext.c)
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ObpDeleteNameCheck @ 0x1408FC8F0 (ObpDeleteNameCheck.c)
 *     ObpCaptureObjectCreateInformation @ 0x1408FDFD0 (ObpCaptureObjectCreateInformation.c)
 *     ObpLookupObjectName @ 0x1408FE2F0 (ObpLookupObjectName.c)
 *     RtlValidSecurityDescriptor @ 0x140926EB0 (RtlValidSecurityDescriptor.c)
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 *     SeObjectCreateSaclAccessBits @ 0x140ABA4D8 (SeObjectCreateSaclAccessBits.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  _KTRAP_FRAME *v24; // r13
  signed __int64 *p_Lock; // rdi
  __int64 v26; // rdx
  __int64 v27; // r8
  _KTRAP_FRAME *v28; // rax
  int v29; // r12d
  __int64 v30; // rcx
  _BYTE *v31; // rdi
  PVOID *v32; // rdi
  char *v33; // r15
  __int64 *v34; // r15
  signed __int64 v35; // rax
  signed __int64 v36; // rdx
  __int64 v37; // rtt
  __int64 v38; // rdx
  __int64 v39; // r8
  PVOID v40; // rcx
  char *v41; // rdi
  __int64 v42; // rax
  void *v43; // rcx
  struct _KPRCB *v44; // r8
  struct _SLIST_ENTRY *v45; // rdx
  _GENERAL_LOOKASIDE *v46; // rcx
  __int64 v47; // rdx
  int v48; // edi
  __int64 v49; // r8
  struct _KLOCK_ENTRIES *v50; // r9
  signed __int64 v51; // r8
  _KPROCESS *v52; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v54; // rtt
  void *v55; // rcx
  void *v56; // rcx
  struct _SLIST_ENTRY *v57; // r8
  struct _KPRCB *v58; // rdx
  _GENERAL_LOOKASIDE *v59; // rcx
  struct _KPRCB *v60; // rdx
  _GENERAL_LOOKASIDE *v61; // rcx
  struct _KPRCB *v63; // rdx
  _GENERAL_LOOKASIDE *v64; // r8
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rax
  int v69; // [rsp+38h] [rbp-D0h]
  PVOID Object; // [rsp+78h] [rbp-90h] BYREF
  __int64 v71; // [rsp+80h] [rbp-88h] BYREF
  PSLIST_ENTRY ListEntry[2]; // [rsp+88h] [rbp-80h] BYREF
  struct _KTHREAD *v73; // [rsp+98h] [rbp-70h]
  struct _KTHREAD *v74; // [rsp+A0h] [rbp-68h]
  __int128 v75; // [rsp+B0h] [rbp-58h] BYREF
  _KTRAP_FRAME *v76; // [rsp+C0h] [rbp-48h]
  __int64 v77; // [rsp+C8h] [rbp-40h]
  __int128 v78; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v79; // [rsp+E0h] [rbp-28h]
  __int128 v80; // [rsp+F0h] [rbp-18h]
  __int64 v81; // [rsp+100h] [rbp-8h]
  __int64 v82; // [rsp+148h] [rbp+40h] BYREF
  __int64 v83; // [rsp+150h] [rbp+48h]
  unsigned __int8 v84; // [rsp+158h] [rbp+50h]

  v84 = a3;
  v83 = a2;
  v81 = 0LL;
  Object = 0LL;
  LODWORD(v82) = 0;
  v10 = a2;
  v71 = 0LL;
  v11 = 0LL;
  *a8 = 0LL;
  *(_OWORD *)ListEntry = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
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
  v15 = v84;
  Information = ObpCaptureObjectCreateInformation(v84, v84, a1, ListEntry, v14 + 160, 1);
  if ( Information < 0 )
  {
    v63 = KeGetCurrentPrcb();
    v64 = v63->PPLookasideList[8].P;
    ++v64->TotalFrees;
    if ( LOWORD(v64->ListHead.Alignment) < v64->Depth
      || (++v64->FreeMisses,
          v64 = v63->PPLookasideList[8].L,
          ++v64->TotalFrees,
          LOWORD(v64->ListHead.Alignment) < v64->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v64->ListHead, (PSLIST_ENTRY)v14);
      return (unsigned int)Information;
    }
    else
    {
      ++v64->FreeMisses;
      guard_dispatch_icall_no_overrides(v14, (__int64)v63);
      return (unsigned int)Information;
    }
  }
  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    v20 = (_DWORD *)(v10 + 76);
    *((_QWORD *)&v75 + 1) = 0LL;
    Process = (__int64)CurrentThread->ApcState.Process;
    v77 = *(_QWORD *)(Process + 464);
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v74 = KeGetCurrentThread();
      --v74->KernelApcDisable;
      v73 = (struct _KTHREAD *)((char *)CurrentThread + 1424);
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
        v24 = (_KTRAP_FRAME *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v24, 0x75536553u);
        DWORD2(v75) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
      }
      else
      {
        v24 = 0LL;
      }
      p_Lock = (signed __int64 *)&v73->Header.Lock;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v73->Header.Lock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(p_Lock);
      KeAbPostRelease((unsigned __int64)p_Lock);
      KeLeaveCriticalRegionThread((__int64)v74, v26, v27);
    }
    else
    {
      v24 = 0LL;
    }
    *(_QWORD *)&v75 = v24;
    v28 = (_KTRAP_FRAME *)PsReferencePrimaryTokenWithTag(Process, 0x75536553u, v17, v18);
    v76 = v28;
    if ( SeTokenLeakTracking )
    {
      if ( v28 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v28[2].Rbp + 284));
        if ( v28 == RtlpBootStatHandleLock.TrapFrame )
          __debugbreak();
      }
      if ( v24 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v24[2].Rbp + 284));
        if ( v24 == RtlpBootStatHandleLock.TrapFrame )
          __debugbreak();
      }
    }
    v29 = SepCreateAccessStateFromSubjectContext(&v75, (_QWORD *)v14, (_QWORD *)(v14 + 224), a5, v20);
    if ( v29 < 0 )
      goto LABEL_56;
    v10 = v83;
    a4 = v14;
    v15 = v84;
  }
  v30 = *(_QWORD *)(v14 + 192);
  if ( v30 )
    *(_QWORD *)(a4 + 64) = v30;
  v31 = *(_BYTE **)(a4 + 64);
  if ( !v31 )
    goto LABEL_25;
  if ( RtlValidSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a4 + 64)) )
  {
    if ( (v31[2] & 0x10) != 0 && (*(_DWORD *)(a4 + 20) & 0x1000000) == 0 )
      *(_DWORD *)(a4 + 16) |= SeObjectCreateSaclAccessBits(v31);
LABEL_25:
    v32 = (PVOID *)(v14 + 448);
    v29 = ObpLookupObjectName(
            *(_QWORD *)(v14 + 168),
            v15,
            a6,
            *(_QWORD *)(v14 + 200),
            0LL,
            a7,
            a4,
            v14 + 448,
            (__int64)&v82,
            (__int64)&Object);
    if ( v29 >= 0 )
    {
      if ( *v32 )
      {
        v11 = (char *)Object - 48;
        PsReferenceSiloContext(Object);
        _InterlockedIncrement((volatile signed __int32 *)&v11[-ObpInfoMaskToOffset[v11[26] & 3] + 24]);
      }
      v33 = (char *)*v32;
      if ( *v32 )
      {
        v34 = (__int64 *)(v33 + 296);
        _m_prefetchw(v34);
        v35 = *v34;
        v36 = *v34 - 16;
        if ( (*v34 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v36 = 0LL;
        if ( (v35 & 2) != 0 || (v37 = *v34, v37 != _InterlockedCompareExchange64(v34, v36, v35)) )
          ExfReleasePushLock(v34);
        KeAbPostRelease((unsigned __int64)v34);
        if ( *(_BYTE *)(v14 + 470) )
        {
          ObDereferenceObjectDeferDeleteWithTag(*v32, 0x554C624Fu);
          *(_BYTE *)(v14 + 470) = 0;
        }
        LODWORD(v33) = 0;
        *v32 = 0LL;
        *(_BYTE *)(v14 + 469) = 0;
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v38, v39);
      }
      v40 = Object;
      v41 = (char *)Object - 48;
      if ( (*((char *)Object - 21) & 1) != 0 )
      {
        v42 = *((_QWORD *)v41 + 4);
        if ( v42 )
        {
          v43 = *(void **)(v42 + 32);
          if ( v43 )
          {
            if ( *(_BYTE *)(v42 + 16) <= 1u )
              ExFreePoolWithTag(v43, 0);
            *(_QWORD *)(*((_QWORD *)v41 + 4) + 32LL) = 0LL;
          }
          v44 = KeGetCurrentPrcb();
          v45 = (struct _SLIST_ENTRY *)*((_QWORD *)v41 + 4);
          v46 = v44->PPLookasideList[4].P;
          ++v46->TotalFrees;
          if ( LOWORD(v46->ListHead.Alignment) < v46->Depth
            || (++v46->FreeMisses,
                v46 = v44->PPLookasideList[4].L,
                ++v46->TotalFrees,
                LOWORD(v46->ListHead.Alignment) < v46->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v46->ListHead, v45);
          }
          else
          {
            ++v46->FreeMisses;
            guard_dispatch_icall_no_overrides((__int64)v45, (__int64)v45);
          }
          *((_QWORD *)v41 + 4) = 0LL;
          v40 = Object;
        }
      }
      else
      {
        LODWORD(v33) = 1;
      }
      if ( (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v41[24] ^ (unsigned __int64)BYTE1(v41)]
                      + 72) & *(_DWORD *)(v14 + 160)) != 0 )
      {
        ObfDereferenceObject(v40);
        v29 = -1073741811;
      }
      else
      {
        if ( SepLearningModeTokenCount )
        {
          *((_QWORD *)&v79 + 1) = ListEntry;
          *(_QWORD *)&v79 = v10 + 16;
          *(_QWORD *)&v80 = *(_QWORD *)(v14 + 168);
          SeSetLearningModeObjectInformation((__int64)&v78);
          v40 = Object;
        }
        if ( ObpTraceFlags )
        {
          v66 = (__int64)v40 - 48;
          ObpPushStackInfo((__int64)v40 - 48, 1, 0x6E48624Fu);
          ObpPushStackInfo(v66, -1, 0x746C6644u);
          v40 = Object;
        }
        LOBYTE(v69) = v84;
        v48 = ObpCreateHandle((unsigned int)v33, v40, 0LL, a4, 0, *(_DWORD *)(v14 + 160), v69, 0LL, v82, 0LL, &v71);
        if ( v48 < 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
          v29 = v48;
        }
        else
        {
          *a8 = v71;
        }
      }
      if ( v11 )
      {
        if ( _InterlockedExchangeAdd(
               (volatile signed __int32 *)&v11[-ObpInfoMaskToOffset[v11[26] & 3] + 24],
               0xFFFFFFFF) == 1 )
          ObpDeleteNameCheck((__int64)v11, v47, v49, v50);
        ObfDereferenceObject(v11 + 48);
      }
    }
    goto LABEL_56;
  }
  v29 = -1073741703;
LABEL_56:
  if ( a4 == v14 )
  {
    SepDeleteAccessState(a4);
    if ( SeTokenLeakTracking )
    {
      v67 = *(_QWORD *)(a4 + 48);
      if ( v67 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v67 + 1144) + 284LL));
        if ( *(_KTRAP_FRAME **)(a4 + 48) == RtlpBootStatHandleLock.TrapFrame )
          __debugbreak();
      }
      v68 = *(_QWORD *)(a4 + 32);
      if ( v68 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v68 + 1144) + 284LL));
        if ( *(_KTRAP_FRAME **)(a4 + 32) == RtlpBootStatHandleLock.TrapFrame )
          __debugbreak();
      }
    }
    v51 = *(_QWORD *)(a4 + 48);
    v52 = KeGetCurrentThread()->ApcState.Process;
    _m_prefetchw(&v52[1].ActiveProcessors);
    ActiveProcessors = (signed __int64)v52[1].ActiveProcessors;
    do
    {
      if ( (v51 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
      {
        ObfDereferenceObjectWithTag((PVOID)v51, 0x75536553u);
        goto LABEL_63;
      }
      v54 = ActiveProcessors;
      ActiveProcessors = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&v52[1].ActiveProcessors,
                           ActiveProcessors + 1,
                           ActiveProcessors);
    }
    while ( v54 != ActiveProcessors );
    if ( ObpTraceFlags )
      ObpPushStackInfo(v51 - 48, -1, 0x75536553u);
LABEL_63:
    v55 = *(void **)(a4 + 32);
    *(_QWORD *)(a4 + 48) = 0LL;
    if ( v55 )
      ObfDereferenceObjectWithTag(v55, 0x75536553u);
    *(_QWORD *)(a4 + 32) = 0LL;
  }
  v56 = *(void **)(v14 + 192);
  if ( v56 )
  {
    if ( *(_BYTE *)(v14 + 176) <= 1u )
      ExFreePoolWithTag(v56, 0);
    *(_QWORD *)(v14 + 192) = 0LL;
  }
  v57 = ListEntry[1];
  if ( ListEntry[1] )
  {
    if ( WORD1(ListEntry[0]) == 248 )
    {
      v58 = KeGetCurrentPrcb();
      v59 = v58->PPLookasideList[5].P;
      ++v59->TotalFrees;
      if ( LOWORD(v59->ListHead.Alignment) < v59->Depth
        || (++v59->FreeMisses,
            v59 = v58->PPLookasideList[5].L,
            ++v59->TotalFrees,
            LOWORD(v59->ListHead.Alignment) < v59->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v59->ListHead, v57);
      }
      else
      {
        ++v59->FreeMisses;
        guard_dispatch_icall_no_overrides((__int64)v57, (__int64)v58);
      }
    }
    else
    {
      ExFreePoolWithTag(ListEntry[1], 0);
    }
  }
  SeClearLearningModeObjectInformation();
  v60 = KeGetCurrentPrcb();
  v61 = v60->PPLookasideList[8].P;
  ++v61->TotalFrees;
  if ( LOWORD(v61->ListHead.Alignment) < v61->Depth
    || (++v61->FreeMisses,
        v61 = v60->PPLookasideList[8].L,
        ++v61->TotalFrees,
        LOWORD(v61->ListHead.Alignment) < v61->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v61->ListHead, (PSLIST_ENTRY)v14);
  }
  else
  {
    ++v61->FreeMisses;
    guard_dispatch_icall_no_overrides(v14, (__int64)v60);
  }
  return (unsigned int)v29;
}
