/*
 * XREFs of CmKeyBodyRemapToVirtualForEnum @ 0x1408F9CF0
 * Callers:
 *     NtQueryValueKey @ 0x1408F8FD0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x140924BC0 (NtQueryKey.c)
 *     NtQueryMultipleValueKey @ 0x14093F350 (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x1409412A0 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140A68780 (NtEnumerateKey.c)
 * Callees:
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
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     SepDeleteAccessState @ 0x14040CC90 (SepDeleteAccessState.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14043B0F0 (SepCreateAccessStateFromSubjectContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpVirtualPathPresent @ 0x1407764E0 (CmpVirtualPathPresent.c)
 *     CmRealKCBToVirtualPath @ 0x1408B7A24 (CmRealKCBToVirtualPath.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 *     CmpIsKcbInsideVirtualizedHive @ 0x1408FA6B0 (CmpIsKcbInsideVirtualizedHive.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     CmVirtualKCBToRealPath @ 0x140AF7040 (CmVirtualKCBToRealPath.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmObReferenceObjectByName @ 0x140C5EF38 (CmObReferenceObjectByName.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtualForEnum(PVOID *a1, char a2, int a3, _QWORD *a4)
{
  char v6; // r12
  _QWORD *v7; // r13
  void *v8; // rsi
  signed __int64 v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  ULONG_PTR v12; // r15
  struct _KTHREAD *CurrentThread; // rbx
  __int64 Process; // r14
  struct _KTHREAD *v15; // r13
  void *v16; // rdx
  LegacyAutoBoost *v17; // rdi
  struct _LIST_ENTRY *v18; // rdi
  struct _LIST_ENTRY *v19; // rax
  struct _LIST_ENTRY *v20; // rbx
  int v21; // eax
  int v22; // r14d
  char v23; // r15
  _KPROCESS *v24; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v26; // rtt
  _KPROCESS *v27; // rcx
  signed __int64 v28; // rax
  signed __int64 v29; // rtt
  wchar_t *Buffer; // rcx
  _QWORD *v31; // rbx
  __int64 v32; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  bool v39; // r14
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  int v46; // edx
  _DWORD *v47; // r14
  int v48; // r9d
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  int v54; // eax
  char v55; // [rsp+48h] [rbp-C0h]
  char v56; // [rsp+49h] [rbp-BFh]
  char v57; // [rsp+4Ah] [rbp-BEh]
  PVOID TokenInformation; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD *v61; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v62; // [rsp+60h] [rbp-A8h] BYREF
  struct _LIST_ENTRY *v63; // [rsp+70h] [rbp-98h]
  __int64 v64; // [rsp+78h] [rbp-90h]
  PVOID *v65; // [rsp+80h] [rbp-88h]
  _QWORD *v66; // [rsp+88h] [rbp-80h]
  UNICODE_STRING v67; // [rsp+98h] [rbp-70h] BYREF
  __int128 v68; // [rsp+A8h] [rbp-60h]
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v70; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v71; // [rsp+D8h] [rbp-30h]
  __int128 v72; // [rsp+E8h] [rbp-20h]
  _DWORD v73[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v74; // [rsp+108h] [rbp+0h]
  __int64 v75; // [rsp+140h] [rbp+38h]
  ULONG_PTR BugCheckParameter4; // [rsp+150h] [rbp+48h]
  int v77; // [rsp+158h] [rbp+50h]
  _QWORD v78[30]; // [rsp+188h] [rbp+80h] BYREF
  __int128 v79; // [rsp+278h] [rbp+170h]
  __int128 v80; // [rsp+288h] [rbp+180h]
  __int128 v81; // [rsp+298h] [rbp+190h]
  __int128 v82; // [rsp+2A8h] [rbp+1A0h]
  __int128 v83; // [rsp+2B8h] [rbp+1B0h]
  struct _KAPC_STATE ApcState; // [rsp+2C8h] [rbp+1C0h] BYREF
  _QWORD v85[4]; // [rsp+2F8h] [rbp+1F0h] BYREF
  PVOID Object; // [rsp+318h] [rbp+210h]
  PVOID v87; // [rsp+328h] [rbp+220h]
  _QWORD v88[28]; // [rsp+398h] [rbp+290h] BYREF

  v6 = a2;
  v65 = a1;
  v66 = a4;
  DestinationString = 0LL;
  memset_0(v85, 0, 0xA0uLL);
  memset_0(v88, 0, sizeof(v88));
  *(_QWORD *)&v72 = 0LL;
  DWORD2(v72) = 0;
  v70 = 0LL;
  v55 = 0;
  v71 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  TokenInformation = *a1;
  v7 = TokenInformation;
  v61 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v8 = 0LL;
  memset_0(v73, 0, 0x1D0uLL);
  v77 = -1;
  *a4 = 0LL;
  v78[1] = v78;
  v78[0] = v78;
  v79 = 0LL;
  v57 = 0;
  v80 = 0LL;
  v56 = 0;
  v81 = 0LL;
  *((_QWORD *)&v62 + 1) = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v12 = v7[1];
  if ( *(_WORD *)(v12 + 66) || (v7[6] & 0x10) != 0 || !CmpVEEnabled )
    goto LABEL_60;
  v9 = *(unsigned int *)(v12 + 184);
  if ( (v9 & 0x2000000) == 0 && (unsigned __int8)CmpIsKcbInsideVirtualizedHive(v7[1]) )
  {
    v57 = 1;
    goto LABEL_7;
  }
  if ( (v9 & 0x1000000) == 0 )
  {
LABEL_60:
    v22 = 0;
    goto LABEL_51;
  }
  v56 = 1;
LABEL_7:
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v64 = *(_QWORD *)(Process + 464);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    v17 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL, 0LL, v11);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&CurrentThread[1].WaitBlockList,
        0,
        v17,
        (struct _KTHREAD *)((char *)CurrentThread + 1424));
    if ( v17 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v17, v16);
      else
        *((_BYTE *)v17 + 10) = 1;
    }
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v18 = (struct _LIST_ENTRY *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      ObfReferenceObjectWithTag(v18, 0x75536553u);
      DWORD2(v62) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
    }
    else
    {
      v18 = 0LL;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
    KeAbPostRelease((unsigned __int64)&CurrentThread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)v15);
    v7 = TokenInformation;
    v6 = a2;
  }
  else
  {
    v18 = 0LL;
  }
  *(_QWORD *)&v62 = v18;
  v19 = (struct _LIST_ENTRY *)PsReferencePrimaryTokenWithTag(Process, 0x75536553u, v10, v11);
  v20 = v19;
  v63 = v19;
  if ( SeTokenLeakTracking )
  {
    if ( v19 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&v19[71].Blink[17].Blink + 1);
      if ( v19 == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
        __debugbreak();
    }
    if ( v18 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&v18[71].Blink[17].Blink + 1);
      if ( v18 == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
        __debugbreak();
    }
  }
  v67 = 0LL;
  v68 = 0LL;
  if ( !CmpVEEnabled )
    goto LABEL_26;
  v21 = v74;
  if ( (v74 & 1) != 0 )
  {
    if ( (v74 & 2) != 0 )
      goto LABEL_26;
    v22 = 0;
  }
  else
  {
    if ( !v6 )
    {
LABEL_26:
      v22 = 0;
LABEL_27:
      v23 = 0;
      goto LABEL_28;
    }
    v22 = 0;
    LODWORD(TokenInformation) = 0;
    if ( v18 )
    {
LABEL_25:
      v74 = v21 | 3;
      goto LABEL_26;
    }
    SeQueryInformationToken(v20, TokenVirtualizationEnabled, &TokenInformation);
    if ( !(_DWORD)TokenInformation )
    {
      v21 = v74;
      goto LABEL_25;
    }
    v74 |= 5u;
  }
  if ( !v57 )
  {
    CmpAttachToRegistryProcess(&ApcState);
    v55 = 1;
    CmpLockRegistry(v42, v41, v43, v44);
    CmpLockKcbShared(v12);
    if ( (int)CmVirtualKCBToRealPath(v12, &DestinationString) < 0 )
      goto LABEL_84;
    goto LABEL_94;
  }
  if ( (*(_DWORD *)(v12 + 184) & 0x800000) == 0 )
    goto LABEL_27;
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistry(v36, v35, v37, v38);
  CmpLockKcbShared(v12);
  v55 = 1;
  v22 = CmpPerformKeyBodyDeletionCheck(v7, 0LL);
  if ( v22 < 0 )
    goto LABEL_84;
  v67 = 0LL;
  RtlInitUnicodeString(&v67, 0LL);
  if ( (*(_DWORD *)(v12 + 184) & 0x800000) == 0 )
    goto LABEL_79;
  if ( (int)CmRealKCBToVirtualPath(v12, 0LL, (int *)&v62, &v67) < 0 )
  {
    v20 = v63;
    v18 = (struct _LIST_ENTRY *)v62;
LABEL_79:
    v39 = 0;
    goto LABEL_80;
  }
  v39 = CmpVirtualPathPresent((__int64)&v67);
  if ( v39 )
  {
    DestinationString = v67;
    RtlInitUnicodeString(&v67, 0LL);
    v39 = 1;
  }
  v20 = v63;
  v18 = (struct _LIST_ENTRY *)v62;
LABEL_80:
  if ( v67.Buffer )
    ExFreePool(v67.Buffer);
  if ( !v39 )
  {
    v22 = 0;
LABEL_84:
    CmpUnlockKcb(v12);
    v23 = 0;
    CmpUnlockRegistry(v40);
    goto LABEL_28;
  }
LABEL_94:
  CmpUnlockKcb(v12);
  CmpUnlockRegistry(v45);
  v46 = 8;
  v73[0] = 8;
  if ( !a3 )
    v46 = 4104;
  v75 = *((_QWORD *)*v65 + 7);
  v47 = (_DWORD *)CmKeyObjectType + 19;
  v73[0] = v46;
  if ( v18 )
    PsReferenceSiloContext(v18);
  PsReferenceSiloContext(v20);
  v22 = SepCreateAccessStateFromSubjectContext(&v62, v85, v88, a3, v47);
  if ( v22 < 0 )
  {
    if ( v18 )
      ObfDereferenceObject(v18);
    ObfDereferenceObject(v20);
    goto LABEL_27;
  }
  v49 = 1600;
  LODWORD(v70) = 48;
  *((_QWORD *)&v70 + 1) = 0LL;
  v23 = 1;
  v72 = 0LL;
  if ( a2 != 1 )
    v49 = 576;
  DWORD2(v71) = v49;
  *(_QWORD *)&v71 = &DestinationString;
  v22 = CmObReferenceObjectByName((unsigned int)&v70, (unsigned int)v85, a3, v48, 0, (__int64)v73, (__int64)&v61);
  if ( v22 < 0 )
  {
    v54 = 0;
    v8 = v61;
    if ( !v56 )
      v54 = v22;
    v22 = v54;
  }
  else
  {
    CmpLockRegistry(v51, v50, v10, v11);
    v8 = v61;
    if ( !*(_WORD *)(v61[1] + 66LL) )
    {
      CmpUnlockRegistry(v52);
      if ( v57 )
      {
        *v66 = v8;
        v22 = 0;
      }
      else
      {
        *v65 = v8;
        v22 = 0;
        *v66 = v7;
      }
      goto LABEL_31;
    }
    if ( v56 )
    {
      v52 = 0LL;
      v22 = 0;
    }
    CmpUnlockRegistry(v52);
  }
LABEL_28:
  if ( v8 )
    ObfDereferenceObject(v8);
  if ( v23 )
  {
LABEL_31:
    SepDeleteAccessState((__int64)v85);
    if ( SeTokenLeakTracking )
    {
      v10 = (__int64)v87;
      if ( v87 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)v87 + 143) + 284LL));
        v10 = (__int64)v87;
        if ( v87 == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
          __debugbreak();
      }
      if ( !Object )
      {
LABEL_33:
        v24 = KeGetCurrentThread()->ApcState.Process;
        _m_prefetchw(&v24[1].ActiveProcessors);
        ActiveProcessors = (signed __int64)v24[1].ActiveProcessors;
        do
        {
          if ( (v10 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
          {
            ObfDereferenceObjectWithTag((PVOID)v10, 0x75536553u);
            goto LABEL_38;
          }
          v26 = ActiveProcessors;
          ActiveProcessors = _InterlockedCompareExchange64(
                               (volatile signed __int64 *)&v24[1].ActiveProcessors,
                               ActiveProcessors + 1,
                               ActiveProcessors);
        }
        while ( v26 != ActiveProcessors );
        if ( ObpTraceFlags )
          ObpPushStackInfo(v10 - 48, -1, 0x75536553u);
LABEL_38:
        v87 = 0LL;
        if ( Object )
          ObfDereferenceObjectWithTag(Object, 0x75536553u);
        Object = 0LL;
        goto LABEL_41;
      }
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)Object + 143) + 284LL));
      if ( Object == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
        __debugbreak();
    }
    v10 = (__int64)v87;
    goto LABEL_33;
  }
LABEL_41:
  if ( v55 )
    CmpDetachFromRegistryProcess(&ApcState);
  if ( SeTokenLeakTracking )
  {
    if ( v20 )
    {
      _InterlockedDecrement((volatile signed __int32 *)&v20[71].Blink[17].Blink + 1);
      if ( v20 == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
        __debugbreak();
    }
    if ( v18 )
    {
      _InterlockedDecrement((volatile signed __int32 *)&v18[71].Blink[17].Blink + 1);
      if ( v18 == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
        __debugbreak();
    }
  }
  v27 = KeGetCurrentThread()->ApcState.Process;
  _m_prefetchw(&v27[1].ActiveProcessors);
  v28 = (signed __int64)v27[1].ActiveProcessors;
  do
  {
    if ( (v28 ^ (unsigned __int64)v20) >= 0xF )
    {
      ObfDereferenceObjectWithTag(v20, 0x75536553u);
      goto LABEL_49;
    }
    v9 = v28 + 1;
    v29 = v28;
    v28 = _InterlockedCompareExchange64((volatile signed __int64 *)&v27[1].ActiveProcessors, v28 + 1, v28);
  }
  while ( v29 != v28 );
  if ( ObpTraceFlags )
    ObpPushStackInfo((__int64)&v20[-3], -1, 0x75536553u);
LABEL_49:
  if ( v18 )
    ObfDereferenceObjectWithTag(v18, 0x75536553u);
LABEL_51:
  Buffer = DestinationString.Buffer;
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( BugCheckParameter4 )
  {
    CmpLockRegistry(Buffer, v9, v10, v11);
    CmpDereferenceKeyControlBlock(BugCheckParameter4);
    CmpUnlockRegistry(v53);
  }
  v31 = (_QWORD *)v78[0];
  if ( *(_QWORD **)(v78[0] + 8LL) != v78 )
    goto LABEL_67;
  v32 = *(_QWORD *)v78[0];
  if ( *(_QWORD *)(*(_QWORD *)v78[0] + 8LL) != v78[0] )
    goto LABEL_67;
  v78[0] = *(_QWORD *)v78[0];
  *(_QWORD *)(v32 + 8) = v78;
  if ( v31 != v78 )
  {
    while ( 1 )
    {
      if ( v31[4] )
        guard_dispatch_icall_no_overrides((__int64)(v31 + 2), (__int64)(v31 + 6));
      CmpFreeTransientPoolWithTag(v31, 0x50454D43u);
      v31 = (_QWORD *)v78[0];
      if ( *(_QWORD **)(v78[0] + 8LL) != v78 )
        break;
      v34 = *(_QWORD *)v78[0];
      if ( *(_QWORD *)(*(_QWORD *)v78[0] + 8LL) != v78[0] )
        break;
      v78[0] = *(_QWORD *)v78[0];
      *(_QWORD *)(v34 + 8) = v78;
      if ( v31 == v78 )
        return (unsigned int)v22;
    }
LABEL_67:
    __fastfail(3u);
  }
  return (unsigned int)v22;
}
