/*
 * XREFs of CmKeyBodyRemapToVirtualForEnum @ 0x1408F3730
 * Callers:
 *     NtQueryValueKey @ 0x1408F2A10 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x1408F4C30 (NtQueryKey.c)
 *     NtQueryMultipleValueKey @ 0x14097D340 (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x14097F290 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140A5B7C0 (NtEnumerateKey.c)
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
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     SepDeleteAccessState @ 0x140418680 (SepDeleteAccessState.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1404425E0 (SepCreateAccessStateFromSubjectContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x140477290 (CmpFreeTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     CmpVirtualPathPresent @ 0x1407734E0 (CmpVirtualPathPresent.c)
 *     CmRealKCBToVirtualPath @ 0x1408B1418 (CmRealKCBToVirtualPath.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408C8770 (CmpDereferenceKeyControlBlock.c)
 *     CmpIsKcbInsideVirtualizedHive @ 0x1408F40F0 (CmpIsKcbInsideVirtualizedHive.c)
 *     SeQueryInformationToken @ 0x1408F4300 (SeQueryInformationToken.c)
 *     CmVirtualKCBToRealPath @ 0x140AF49A0 (CmVirtualKCBToRealPath.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C583F0 (CmpLockKcbShared.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C587C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 *     CmObReferenceObjectByName @ 0x140C58F38 (CmObReferenceObjectByName.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtualForEnum(PVOID *a1, char a2, int a3, _QWORD *a4)
{
  char v6; // r12
  _QWORD *v7; // r13
  void *v8; // rsi
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  ULONG_PTR v11; // r15
  int v12; // edx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 Process; // r14
  struct _KTHREAD *v15; // r13
  void *v16; // rdx
  LegacyAutoBoost *v17; // rdi
  _KTRAP_FRAME *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r8
  _KTRAP_FRAME *v21; // rax
  _KTRAP_FRAME *v22; // rbx
  int v23; // eax
  int v24; // r14d
  char v25; // r15
  signed __int64 v26; // r8
  _KPROCESS *v27; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v29; // rtt
  _KPROCESS *v30; // rcx
  signed __int64 v31; // rax
  signed __int64 v32; // rtt
  wchar_t *Buffer; // rcx
  _QWORD *v34; // rbx
  __int64 v35; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  bool v39; // r14
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v43; // edx
  _DWORD *v44; // r14
  int v45; // r9d
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v50; // eax
  char v51; // [rsp+48h] [rbp-C0h]
  char v52; // [rsp+49h] [rbp-BFh]
  char v53; // [rsp+4Ah] [rbp-BEh]
  PVOID TokenInformation; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD *v57; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v58; // [rsp+60h] [rbp-A8h] BYREF
  _KTRAP_FRAME *v59; // [rsp+70h] [rbp-98h]
  __int64 v60; // [rsp+78h] [rbp-90h]
  PVOID *v61; // [rsp+80h] [rbp-88h]
  _QWORD *v62; // [rsp+88h] [rbp-80h]
  UNICODE_STRING v63; // [rsp+98h] [rbp-70h] BYREF
  __int128 v64; // [rsp+A8h] [rbp-60h]
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v66; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v67; // [rsp+D8h] [rbp-30h]
  __int128 v68; // [rsp+E8h] [rbp-20h]
  _DWORD v69[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v70; // [rsp+108h] [rbp+0h]
  __int64 v71; // [rsp+140h] [rbp+38h]
  ULONG_PTR BugCheckParameter4; // [rsp+150h] [rbp+48h]
  int v73; // [rsp+158h] [rbp+50h]
  _QWORD v74[30]; // [rsp+188h] [rbp+80h] BYREF
  __int128 v75; // [rsp+278h] [rbp+170h]
  __int128 v76; // [rsp+288h] [rbp+180h]
  __int128 v77; // [rsp+298h] [rbp+190h]
  __int128 v78; // [rsp+2A8h] [rbp+1A0h]
  __int128 v79; // [rsp+2B8h] [rbp+1B0h]
  struct _KAPC_STATE ApcState; // [rsp+2C8h] [rbp+1C0h] BYREF
  _QWORD v81[4]; // [rsp+2F8h] [rbp+1F0h] BYREF
  PVOID Object; // [rsp+318h] [rbp+210h]
  PVOID v83; // [rsp+328h] [rbp+220h]
  _QWORD v84[28]; // [rsp+398h] [rbp+290h] BYREF

  v6 = a2;
  v61 = a1;
  v62 = a4;
  DestinationString = 0LL;
  memset_0(v81, 0, 0xA0uLL);
  memset_0(v84, 0, sizeof(v84));
  *(_QWORD *)&v68 = 0LL;
  DWORD2(v68) = 0;
  v66 = 0LL;
  v51 = 0;
  v67 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  TokenInformation = *a1;
  v7 = TokenInformation;
  v57 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v8 = 0LL;
  memset_0(v69, 0, 0x1D0uLL);
  v73 = -1;
  *a4 = 0LL;
  v74[1] = v74;
  v74[0] = v74;
  v75 = 0LL;
  v53 = 0;
  v76 = 0LL;
  v52 = 0;
  v77 = 0LL;
  *((_QWORD *)&v58 + 1) = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v11 = v7[1];
  if ( *(_WORD *)(v11 + 66) || (v7[6] & 0x10) != 0 || !CmpVEEnabled )
    goto LABEL_60;
  v12 = *(_DWORD *)(v11 + 184);
  if ( (v12 & 0x2000000) == 0 && (unsigned __int8)CmpIsKcbInsideVirtualizedHive(v7[1]) )
  {
    v53 = 1;
    goto LABEL_7;
  }
  if ( (v12 & 0x1000000) == 0 )
  {
LABEL_60:
    v24 = 0;
    goto LABEL_51;
  }
  v52 = 1;
LABEL_7:
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v60 = *(_QWORD *)(Process + 464);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    v17 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL, 0LL, v10);
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
      v18 = (_KTRAP_FRAME *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      ObfReferenceObjectWithTag(v18, 0x75536553u);
      DWORD2(v58) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
    }
    else
    {
      v18 = 0LL;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
    KeAbPostRelease((unsigned __int64)&CurrentThread[1].WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)v15, v19, v20);
    v7 = TokenInformation;
    v6 = a2;
  }
  else
  {
    v18 = 0LL;
  }
  *(_QWORD *)&v58 = v18;
  v21 = (_KTRAP_FRAME *)PsReferencePrimaryTokenWithTag(Process, 0x75536553u, v9, v10);
  v22 = v21;
  v59 = v21;
  if ( SeTokenLeakTracking )
  {
    if ( v21 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v21[2].Rbp + 284));
      if ( v21 == RtlpBootStatHandleLock.TrapFrame )
        __debugbreak();
    }
    if ( v18 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v18[2].Rbp + 284));
      if ( v18 == RtlpBootStatHandleLock.TrapFrame )
        __debugbreak();
    }
  }
  v63 = 0LL;
  v64 = 0LL;
  if ( !CmpVEEnabled )
    goto LABEL_26;
  v23 = v70;
  if ( (v70 & 1) != 0 )
  {
    if ( (v70 & 2) != 0 )
      goto LABEL_26;
    v24 = 0;
  }
  else
  {
    if ( !v6 )
    {
LABEL_26:
      v24 = 0;
LABEL_27:
      v25 = 0;
      goto LABEL_28;
    }
    v24 = 0;
    LODWORD(TokenInformation) = 0;
    if ( v18 )
    {
LABEL_25:
      v70 = v23 | 3;
      goto LABEL_26;
    }
    SeQueryInformationToken(v22, TokenVirtualizationEnabled, &TokenInformation);
    if ( !(_DWORD)TokenInformation )
    {
      v23 = v70;
      goto LABEL_25;
    }
    v70 |= 5u;
  }
  if ( !v53 )
  {
    CmpAttachToRegistryProcess(&ApcState);
    v51 = 1;
    CmpLockRegistry(v41);
    CmpLockKcbShared(v11);
    if ( (int)CmVirtualKCBToRealPath(v11, &DestinationString) < 0 )
      goto LABEL_84;
    goto LABEL_94;
  }
  if ( (*(_DWORD *)(v11 + 184) & 0x800000) == 0 )
    goto LABEL_27;
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistry(v38);
  CmpLockKcbShared(v11);
  v51 = 1;
  v24 = CmpPerformKeyBodyDeletionCheck(v7, 0LL);
  if ( v24 < 0 )
    goto LABEL_84;
  v63 = 0LL;
  RtlInitUnicodeString(&v63, 0LL);
  if ( (*(_DWORD *)(v11 + 184) & 0x800000) == 0 )
    goto LABEL_79;
  if ( (int)CmRealKCBToVirtualPath(v11, 0LL, (int *)&v58, &v63) < 0 )
  {
    v22 = v59;
    v18 = (_KTRAP_FRAME *)v58;
LABEL_79:
    v39 = 0;
    goto LABEL_80;
  }
  v39 = CmpVirtualPathPresent((__int64)&v63);
  if ( v39 )
  {
    DestinationString = v63;
    RtlInitUnicodeString(&v63, 0LL);
    v39 = 1;
  }
  v22 = v59;
  v18 = (_KTRAP_FRAME *)v58;
LABEL_80:
  if ( v63.Buffer )
    ExFreePool(v63.Buffer);
  if ( !v39 )
  {
    v24 = 0;
LABEL_84:
    CmpUnlockKcb(v11);
    v25 = 0;
    CmpUnlockRegistry(v40);
    goto LABEL_28;
  }
LABEL_94:
  CmpUnlockKcb(v11);
  CmpUnlockRegistry(v42);
  v43 = 8;
  v69[0] = 8;
  if ( !a3 )
    v43 = 4104;
  v71 = *((_QWORD *)*v61 + 7);
  v44 = (_DWORD *)CmKeyObjectType + 19;
  v69[0] = v43;
  if ( v18 )
    PsReferenceSiloContext(v18);
  PsReferenceSiloContext(v22);
  v24 = SepCreateAccessStateFromSubjectContext(&v58, v81, v84, a3, v44);
  if ( v24 < 0 )
  {
    if ( v18 )
      ObfDereferenceObject(v18);
    ObfDereferenceObject(v22);
    goto LABEL_27;
  }
  v46 = 1600;
  LODWORD(v66) = 48;
  *((_QWORD *)&v66 + 1) = 0LL;
  v25 = 1;
  v68 = 0LL;
  if ( a2 != 1 )
    v46 = 576;
  DWORD2(v67) = v46;
  *(_QWORD *)&v67 = &DestinationString;
  v24 = CmObReferenceObjectByName((unsigned int)&v66, (unsigned int)v81, a3, v45, 0, (__int64)v69, (__int64)&v57);
  if ( v24 < 0 )
  {
    v50 = 0;
    v8 = v57;
    if ( !v52 )
      v50 = v24;
    v24 = v50;
  }
  else
  {
    CmpLockRegistry(v47);
    v8 = v57;
    if ( !*(_WORD *)(v57[1] + 66LL) )
    {
      CmpUnlockRegistry(v48);
      if ( v53 )
      {
        *v62 = v8;
        v24 = 0;
      }
      else
      {
        *v61 = v8;
        v24 = 0;
        *v62 = v7;
      }
      goto LABEL_31;
    }
    if ( v52 )
    {
      v48 = 0LL;
      v24 = 0;
    }
    CmpUnlockRegistry(v48);
  }
LABEL_28:
  if ( v8 )
    ObfDereferenceObject(v8);
  if ( v25 )
  {
LABEL_31:
    SepDeleteAccessState((__int64)v81);
    if ( SeTokenLeakTracking )
    {
      v26 = (signed __int64)v83;
      if ( v83 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)v83 + 143) + 284LL));
        v26 = (signed __int64)v83;
        if ( v83 == RtlpBootStatHandleLock.TrapFrame )
          __debugbreak();
      }
      if ( !Object )
      {
LABEL_33:
        v27 = KeGetCurrentThread()->ApcState.Process;
        _m_prefetchw(&v27[1].ActiveProcessors);
        ActiveProcessors = (signed __int64)v27[1].ActiveProcessors;
        do
        {
          if ( (v26 ^ (unsigned __int64)ActiveProcessors) >= 0xF )
          {
            ObfDereferenceObjectWithTag((PVOID)v26, 0x75536553u);
            goto LABEL_38;
          }
          v29 = ActiveProcessors;
          ActiveProcessors = _InterlockedCompareExchange64(
                               (volatile signed __int64 *)&v27[1].ActiveProcessors,
                               ActiveProcessors + 1,
                               ActiveProcessors);
        }
        while ( v29 != ActiveProcessors );
        if ( ObpTraceFlags )
          ObpPushStackInfo(v26 - 48, -1, 0x75536553u);
LABEL_38:
        v83 = 0LL;
        if ( Object )
          ObfDereferenceObjectWithTag(Object, 0x75536553u);
        Object = 0LL;
        goto LABEL_41;
      }
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)Object + 143) + 284LL));
      if ( Object == RtlpBootStatHandleLock.TrapFrame )
        __debugbreak();
    }
    v26 = (signed __int64)v83;
    goto LABEL_33;
  }
LABEL_41:
  if ( v51 )
    CmpDetachFromRegistryProcess(&ApcState);
  if ( SeTokenLeakTracking )
  {
    if ( v22 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v22[2].Rbp + 284));
      if ( v22 == RtlpBootStatHandleLock.TrapFrame )
        __debugbreak();
    }
    if ( v18 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v18[2].Rbp + 284));
      if ( v18 == RtlpBootStatHandleLock.TrapFrame )
        __debugbreak();
    }
  }
  v30 = KeGetCurrentThread()->ApcState.Process;
  _m_prefetchw(&v30[1].ActiveProcessors);
  v31 = (signed __int64)v30[1].ActiveProcessors;
  do
  {
    if ( (v31 ^ (unsigned __int64)v22) >= 0xF )
    {
      ObfDereferenceObjectWithTag(v22, 0x75536553u);
      goto LABEL_49;
    }
    v32 = v31;
    v31 = _InterlockedCompareExchange64((volatile signed __int64 *)&v30[1].ActiveProcessors, v31 + 1, v31);
  }
  while ( v32 != v31 );
  if ( ObpTraceFlags )
    ObpPushStackInfo((__int64)&v22[-1].352, -1, 0x75536553u);
LABEL_49:
  if ( v18 )
    ObfDereferenceObjectWithTag(v18, 0x75536553u);
LABEL_51:
  Buffer = DestinationString.Buffer;
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( BugCheckParameter4 )
  {
    CmpLockRegistry(Buffer);
    CmpDereferenceKeyControlBlock(BugCheckParameter4);
    CmpUnlockRegistry(v49);
  }
  v34 = (_QWORD *)v74[0];
  if ( *(_QWORD **)(v74[0] + 8LL) != v74 )
    goto LABEL_67;
  v35 = *(_QWORD *)v74[0];
  if ( *(_QWORD *)(*(_QWORD *)v74[0] + 8LL) != v74[0] )
    goto LABEL_67;
  v74[0] = *(_QWORD *)v74[0];
  *(_QWORD *)(v35 + 8) = v74;
  if ( v34 != v74 )
  {
    while ( 1 )
    {
      if ( v34[4] )
        guard_dispatch_icall_no_overrides((__int64)(v34 + 2), (__int64)(v34 + 6));
      CmpFreeTransientPoolWithTag(v34, 0x50454D43u);
      v34 = (_QWORD *)v74[0];
      if ( *(_QWORD **)(v74[0] + 8LL) != v74 )
        break;
      v37 = *(_QWORD *)v74[0];
      if ( *(_QWORD *)(*(_QWORD *)v74[0] + 8LL) != v74[0] )
        break;
      v74[0] = *(_QWORD *)v74[0];
      *(_QWORD *)(v37 + 8) = v74;
      if ( v34 == v74 )
        return (unsigned int)v24;
    }
LABEL_67:
    __fastfail(3u);
  }
  return (unsigned int)v24;
}
