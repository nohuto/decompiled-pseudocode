/*
 * XREFs of AlpcpCreateClientPort @ 0x1408E9A60
 * Callers:
 *     NtSecureConnectPort @ 0x1408E5CC0 (NtSecureConnectPort.c)
 *     AlpcpConnectPort @ 0x1408E92E0 (AlpcpConnectPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockThreadSecurityShared @ 0x140271DC0 (PspUnlockThreadSecurityShared.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     ObpReleaseLookupContext @ 0x14027BE10 (ObpReleaseLookupContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     PsGetCurrentSilo @ 0x14041BBC0 (PsGetCurrentSilo.c)
 *     SeClearLearningModeObjectInformation @ 0x14042F300 (SeClearLearningModeObjectInformation.c)
 *     SeSetLearningModeObjectInformation @ 0x140430644 (SeSetLearningModeObjectInformation.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1404425E0 (SepCreateAccessStateFromSubjectContext.c)
 *     PspLockThreadSecurityShared @ 0x14044ADE0 (PspLockThreadSecurityShared.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     AlpcpCheckConnectionSecurity @ 0x1408E8E84 (AlpcpCheckConnectionSecurity.c)
 *     AlpcpInitializePort @ 0x1408EA310 (AlpcpInitializePort.c)
 *     AlpcInitializeHandleTable @ 0x1408EA4F4 (AlpcInitializeHandleTable.c)
 *     AlpcpLockBlobExclusive @ 0x1408EAB1C (AlpcpLockBlobExclusive.c)
 *     AlpcpUnlockBlobUncachedExclusive @ 0x1408EAB80 (AlpcpUnlockBlobUncachedExclusive.c)
 *     AlpcpAllocateBlob @ 0x1408EB5C0 (AlpcpAllocateBlob.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x1408EB68C (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcpSetOwnerProcessPort @ 0x1408EBD74 (AlpcpSetOwnerProcessPort.c)
 *     ObReferenceObjectByNameEx @ 0x1408EBDCC (ObReferenceObjectByNameEx.c)
 *     ObpCheckObjectReference @ 0x1408EE834 (ObpCheckObjectReference.c)
 *     SeDeleteAccessState @ 0x1408F16E0 (SeDeleteAccessState.c)
 *     ObpFreeObjectNameBuffer @ 0x1408F17F0 (ObpFreeObjectNameBuffer.c)
 *     ObpCaptureObjectName @ 0x1408F26B0 (ObpCaptureObjectName.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     ObpLookupObjectName @ 0x1408FE2F0 (ObpLookupObjectName.c)
 *     SeCreateClientSecurity @ 0x140929880 (SeCreateClientSecurity.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 *     AlpcpAllocateMessage @ 0x1409BCB60 (AlpcpAllocateMessage.c)
 *     AlpcpUnlockMessage @ 0x1409C07A0 (AlpcpUnlockMessage.c)
 */

__int64 __fastcall AlpcpCreateClientPort(
        _QWORD *a1,
        _QWORD *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        struct _KLOCK_ENTRIES *a8,
        void *a9,
        __int64 a10,
        char a11)
{
  _DWORD *v11; // r12
  struct _KLOCK_ENTRIES *v13; // rsi
  char *v14; // r14
  void *v15; // r13
  unsigned __int8 PreviousMode; // di
  POBJECT_TYPE v17; // r12
  struct _KLOCK_ENTRIES *v18; // r9
  __int64 result; // rax
  __int64 v20; // r8
  struct _KTHREAD *CurrentThread; // rbx
  __int64 Process; // r13
  struct _KTHREAD *v23; // r15
  _KTRAP_FRAME *v24; // rsi
  _KTRAP_FRAME *v25; // rax
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v27; // r8
  int v28; // ecx
  void *v29; // rdx
  LegacyAutoBoost *v30; // rsi
  void *v31; // rsi
  int v32; // r15d
  int v33; // edi
  char *v34; // rdi
  bool v35; // al
  int v36; // esi
  _QWORD *Blob; // rax
  _QWORD *v38; // rsi
  ULONG_PTR *v39; // r15
  struct _KLOCK_ENTRIES *v40; // r9
  AutoBoost *v41; // rax
  void *v42; // rdx
  AutoBoost *v43; // r13
  __int64 *v44; // rdx
  __int64 v45; // rax
  __int64 **v46; // rcx
  AutoBoost *v47; // rax
  void *v48; // rdx
  AutoBoost *v49; // r15
  NTSTATUS Message; // ebx
  void *v51; // rcx
  __int64 v52; // r12
  _QWORD *v53; // rcx
  unsigned __int64 v54; // rdx
  char v55; // [rsp+70h] [rbp-90h]
  int v56; // [rsp+74h] [rbp-8Ch] BYREF
  PVOID v57; // [rsp+78h] [rbp-88h] BYREF
  int v58; // [rsp+80h] [rbp-80h]
  struct _KLOCK_ENTRIES *v59; // [rsp+88h] [rbp-78h]
  __int64 v60; // [rsp+90h] [rbp-70h] BYREF
  __int64 v61; // [rsp+98h] [rbp-68h]
  PVOID Object; // [rsp+A0h] [rbp-60h]
  __int64 v63; // [rsp+A8h] [rbp-58h]
  __int128 v64; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v65; // [rsp+C0h] [rbp-40h]
  _QWORD *v66; // [rsp+C8h] [rbp-38h]
  _QWORD *v67; // [rsp+D0h] [rbp-30h]
  __int128 v68; // [rsp+D8h] [rbp-28h] BYREF
  _KTRAP_FRAME *v69; // [rsp+E8h] [rbp-18h]
  __int64 v70; // [rsp+F0h] [rbp-10h]
  __int64 v71[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v72; // [rsp+108h] [rbp+8h]
  __int128 v73; // [rsp+110h] [rbp+10h] BYREF
  __int128 v74; // [rsp+120h] [rbp+20h]
  __int128 v75; // [rsp+130h] [rbp+30h]
  __int64 v76; // [rsp+140h] [rbp+40h]
  __int64 v77[20]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v78[28]; // [rsp+1F0h] [rbp+F0h] BYREF

  v11 = a7;
  v13 = a8;
  v14 = 0LL;
  v15 = a9;
  v60 = 0LL;
  v65 = a6;
  v66 = a1;
  v58 = a3;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v67 = a2;
  v63 = (__int64)a7;
  v59 = a8;
  v61 = (__int64)a9;
  Object = 0LL;
  v57 = 0LL;
  if ( a5 )
  {
    result = ObReferenceObjectByNameEx(a5, 0, 1, (_DWORD)AlpcPortObjectType, PreviousMode, 0LL, (__int64)&v57);
    v14 = (char *)v57;
  }
  else
  {
    v17 = AlpcPortObjectType;
    memset_0(v78, 0, sizeof(v78));
    v57 = 0LL;
    v64 = 0LL;
    memset_0(v77, 0, sizeof(v77));
    v72 = 0LL;
    v76 = 0LL;
    *(_OWORD *)v71 = 0LL;
    v73 = 0LL;
    v74 = 0LL;
    v75 = 0LL;
    if ( a4 )
    {
      result = ObpCaptureObjectName(PreviousMode, a4, &v64, 1LL);
      v56 = result;
      if ( (int)result >= 0 )
      {
        if ( (_WORD)v64 )
        {
          CurrentThread = KeGetCurrentThread();
          *((_QWORD *)&v68 + 1) = 0LL;
          Process = (__int64)CurrentThread->ApcState.Process;
          v70 = *(_QWORD *)(Process + 464);
          if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
          {
            v23 = KeGetCurrentThread();
            PspLockThreadSecurityShared((__int64)CurrentThread, (__int64)v23, v20, v18);
            if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
            {
              v24 = (_KTRAP_FRAME *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
              ObfReferenceObjectWithTag(v24, 0x75536553u);
              DWORD2(v68) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
            }
            else
            {
              v24 = 0LL;
            }
            PspUnlockThreadSecurityShared((__int64)CurrentThread, v23);
          }
          else
          {
            v24 = 0LL;
          }
          *(_QWORD *)&v68 = v24;
          v25 = (_KTRAP_FRAME *)PsReferencePrimaryTokenWithTag(Process, 0x75536553u, v20, v18);
          v69 = v25;
          if ( SeTokenLeakTracking )
          {
            if ( v25 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v25[2].Rbp + 284));
              if ( v25 == RtlpBootStatHandleLock.TrapFrame )
                __debugbreak();
            }
            if ( v24 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v24[2].Rbp + 284));
              if ( v24 == RtlpBootStatHandleLock.TrapFrame )
                __debugbreak();
            }
          }
          v56 = SepCreateAccessStateFromSubjectContext(&v68, v77, v78, 1, &v17->TypeInfo.GenericMapping.GenericRead);
          if ( v56 >= 0 )
          {
            CurrentSilo = PsGetCurrentSilo();
            v56 = ObpLookupObjectName(
                    0LL,
                    PreviousMode,
                    0LL,
                    0LL,
                    0LL,
                    (__int64)CurrentSilo,
                    (__int64)v77,
                    (__int64)v71,
                    0LL,
                    (__int64)&v57);
            ObpReleaseLookupContext((__int64)v71);
            if ( v56 >= 0 )
            {
              if ( SepLearningModeTokenCount )
              {
                v54 = (unsigned __int8)*((char *)v57 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v57 - 48) >> 8);
                *(_QWORD *)&v75 = 0LL;
                *(_QWORD *)&v74 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v54] + 16;
                *((_QWORD *)&v74 + 1) = &v64;
                SeSetLearningModeObjectInformation((__int64)&v73);
              }
              if ( (unsigned __int8)ObpCheckObjectReference(v57, v77, v27, PreviousMode, &v56) )
                v14 = (char *)v57;
              else
                ObfDereferenceObject(v57);
              SeClearLearningModeObjectInformation();
            }
            SeDeleteAccessState(v77);
          }
          ObpFreeObjectNameBuffer(&v64);
          result = (unsigned int)v56;
          v15 = (void *)v61;
          v13 = v59;
        }
        else
        {
          result = 3221225523LL;
        }
      }
    }
    else
    {
      result = 3221225523LL;
    }
    v11 = (_DWORD *)v63;
  }
  if ( (int)result >= 0 )
  {
    v28 = *((_DWORD *)v14 + 104);
    if ( (v28 & 6) != 2 )
    {
      ObfDereferenceObject(v14);
      return 3221225538LL;
    }
    if ( !a11 && (v28 & 0x1000) != 0 )
    {
      v47 = (AutoBoost *)KeAbPreAcquire((__int64)(v14 + 352), 0LL, 0LL, v18);
      v49 = v47;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v14 + 88, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v14 + 44, v47, (__int64)(v14 + 352));
      if ( v49 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v49, v48);
        else
          *((_BYTE *)v49 + 10) = 1;
      }
      *((_DWORD *)v14 + 104) &= ~0x2000u;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v14 + 44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v14 + 44);
      KeAbPostRelease((unsigned __int64)(v14 + 352));
      v13 = v59;
    }
    if ( v15 || v13 )
    {
      v30 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v14 + 352), 0LL, 0LL, v18);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v14 + 44, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)v14 + 44, 0, v30, (struct _KTHREAD *)(v14 + 352));
      if ( v30 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v30, v29);
        else
          *((_BYTE *)v30 + 10) = 1;
      }
      v31 = 0LL;
      if ( (*((_QWORD *)v14 + 3) & 1) == 0 )
        v31 = (void *)*((_QWORD *)v14 + 3);
      if ( v31 )
        ObfReferenceObjectWithTag(v31, 0x63706C41u);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v14 + 44, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v14 + 44);
      KeAbPostRelease((unsigned __int64)(v14 + 352));
      if ( v31 )
      {
        v32 = AlpcpCheckConnectionSecurity((__int64)v31, PreviousMode, v15, v59);
        ObfDereferenceObjectWithTag(v31, 0x63706C41u);
        if ( v32 >= 0 )
          goto LABEL_39;
      }
      else
      {
        v32 = -1073741769;
      }
      ObfDereferenceObject(v14);
      return (unsigned int)v32;
    }
LABEL_39:
    v33 = ObCreateObjectEx(PreviousMode, (_DWORD)AlpcPortObjectType, v65, PreviousMode);
    if ( v33 < 0 )
    {
      ObfDereferenceObject(v14);
      return (unsigned int)v33;
    }
    v34 = (char *)Object;
    memset_0(Object, 0, 0x1D8uLL);
    v35 = v11 && (*v11 & 0x40000) != 0;
    v55 = v35;
    v36 = AlpcpInitializePort(v34, 2LL);
    if ( v36 < 0 )
    {
      ObfDereferenceObject(v14);
      ObfDereferenceObject(v34);
      return (unsigned int)v36;
    }
    *((_DWORD *)v34 + 104) |= 8u;
    Blob = (_QWORD *)AlpcpAllocateBlob(AlpcConnectionType, 80LL, 1LL);
    v38 = Blob;
    if ( !Blob )
    {
      ObfDereferenceObject(v14);
      ObfDereferenceObject(v34);
      return 3221225495LL;
    }
    *((_QWORD *)v34 + 2) = Blob;
    Blob[1] = 0LL;
    v39 = Blob + 9;
    *Blob = v14;
    Blob[2] = v34;
    Blob[9] = 0LL;
    AlpcpLockBlobExclusive(*((_QWORD *)v14 + 2));
    v41 = (AutoBoost *)KeAbPreAcquire((__int64)(v14 + 352), 0LL, 0LL, v40);
    v43 = v41;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v14 + 88, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v14 + 44, v41, (__int64)(v14 + 352));
    if ( v43 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v43, v42);
      else
        *((_BYTE *)v43 + 10) = 1;
    }
    v44 = v38 + 3;
    v45 = *((_QWORD *)v14 + 2) + 24LL;
    v46 = *(__int64 ***)(*((_QWORD *)v14 + 2) + 32LL);
    if ( *v46 != (__int64 *)v45 )
      __fastfail(3u);
    *v44 = v45;
    v38[4] = v46;
    *v46 = v44;
    *(_QWORD *)(v45 + 8) = v44;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v14 + 44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v14 + 44);
    KeAbPostRelease((unsigned __int64)(v14 + 352));
    AlpcpUnlockBlobUncachedExclusive(*((_QWORD *)v14 + 2));
    Message = AlpcInitializeHandleTable(v38 + 5);
    v51 = v34;
    if ( Message < 0 )
    {
LABEL_91:
      ObfDereferenceObject(v51);
      return (unsigned int)Message;
    }
    v52 = v63;
    Message = AlpcpValidateAndSetPortAttributes((_DWORD)v34, v63, (_DWORD)v14, a10, 0, v55, a11);
    if ( Message >= 0 )
    {
      Message = AlpcpAllocateMessage(v39, 48LL, 1LL);
      if ( Message >= 0 )
      {
        ++*(_WORD *)(*v39 - 30);
        *(_DWORD *)(*v39 + 264) |= 0x80000000;
        AlpcpUnlockMessage(*v39);
        if ( a11 )
          *((_DWORD *)v34 + 104) |= 0x1000u;
        if ( (v58 & 0x80000) != 0 )
          *((_DWORD *)v34 + 104) |= 0x100u;
        if ( v34[268] == 1 )
        {
          *((_DWORD *)v34 + 104) |= 0x400u;
          goto LABEL_85;
        }
        Message = SeCreateClientSecurity(
                    KeGetCurrentThread(),
                    (PSECURITY_QUALITY_OF_SERVICE)(v34 + 260),
                    0,
                    (PSECURITY_CLIENT_CONTEXT)(v34 + 64));
        if ( Message >= 0 )
        {
LABEL_85:
          AlpcpSetOwnerProcessPort(v34, v52);
          if ( (*((_DWORD *)v14 + 64) & 0x1000000) != 0 )
          {
            *((_DWORD *)v34 + 64) |= 0x1000000u;
            *((_QWORD *)v34 + 34) = *((_QWORD *)v14 + 34);
          }
          PsReferenceSiloContext(v34);
          Message = ObInsertObjectEx(v34, 0LL, 2031617LL, 0LL, 0, 0LL, &v60);
          if ( Message >= 0 )
          {
            v53 = v66;
            *((_QWORD *)v34 + 7) = v60;
            *v53 = v60;
            *v67 = v34;
            return (unsigned int)Message;
          }
        }
      }
    }
    v51 = v34;
    goto LABEL_91;
  }
  return result;
}
