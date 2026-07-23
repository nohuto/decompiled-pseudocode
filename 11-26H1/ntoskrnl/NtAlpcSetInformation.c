/*
 * XREFs of NtAlpcSetInformation @ 0x140A91EC0
 * Callers:
 *     DifNtAlpcSetInformationWrapper @ 0x140671420 (DifNtAlpcSetInformationWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     AlpcpInitializeCompletionList @ 0x140A918A8 (AlpcpInitializeCompletionList.c)
 *     AlpcpAssociateIoCompletionPort @ 0x140A9232C (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpAdjustCompletionListConcurrencyCount @ 0x140A92708 (AlpcpAdjustCompletionListConcurrencyCount.c)
 *     AlpcpFreeCompletionList @ 0x140B25D2C (AlpcpFreeCompletionList.c)
 */

NTSTATUS __cdecl NtAlpcSetInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length)
{
  size_t v4; // r15
  struct _KTHREAD *CurrentThread; // rax
  int v9; // r14d
  KPROCESSOR_MODE PreviousMode; // di
  unsigned int *v11; // r12
  signed int v12; // edi
  struct _KLOCK_ENTRIES *v13; // r9
  __int32 v14; // esi
  __int32 v15; // esi
  signed __int64 *v16; // rsi
  signed int v18; // eax
  __int32 v19; // esi
  __int32 v20; // esi
  int v21; // esi
  int v22; // esi
  volatile signed __int64 *v23; // rbx
  void *v24; // rdx
  LegacyAutoBoost *v25; // rdi
  int v26; // esi
  volatile signed __int32 *v27; // r15
  AutoBoost *v28; // rax
  void *v29; // rdx
  AutoBoost *v30; // rdi
  unsigned __int64 v31; // rcx
  char *v32; // rdx
  unsigned __int64 *v33; // rdi
  struct _KLOCK_ENTRIES *v34; // r9
  AutoBoost *v35; // rax
  void *v36; // rdx
  AutoBoost *v37; // r15
  AutoBoost *v38; // rax
  void *v39; // rdx
  AutoBoost *v40; // r15
  __m128i v41; // xmm0
  PVOID Object; // [rsp+30h] [rbp-B8h] BYREF
  KPROCESSOR_MODE v43; // [rsp+38h] [rbp-B0h]
  HANDLE Handle; // [rsp+40h] [rbp-A8h]
  __int64 *v45; // [rsp+48h] [rbp-A0h]
  __int64 v46; // [rsp+50h] [rbp-98h] BYREF
  __int32 v47; // [rsp+58h] [rbp-90h]
  unsigned __int64 v48; // [rsp+5Ch] [rbp-8Ch]

  v4 = Length;
  Handle = PortHandle;
  memset_0(&v46, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = 0;
  if ( !PortHandle
    || !PortInformation
    && PortInformationClass != AlpcCompletionListRundownInformation
    && PortInformationClass != AlpcUnregisterCompletionListInformation )
  {
    v12 = -1073741811;
    goto LABEL_10;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v43 = PreviousMode;
  v11 = (unsigned int *)PortInformation;
  if ( (_DWORD)v4 && PreviousMode )
  {
    if ( (unsigned int)v4 > 0x48 )
    {
      v12 = -1073741820;
      goto LABEL_10;
    }
    RtlCopyFromUser(&v46, PortInformation, v4);
    v11 = (unsigned int *)&v46;
    v45 = &v46;
  }
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v12 >= 0 )
  {
    v14 = PortInformationClass - 1;
    if ( !v14 )
    {
      if ( (_DWORD)v4 == 72 )
      {
        v16 = (signed __int64 *)Object;
        if ( (*v11 & 0xFC00FFFF) == 0 )
        {
          *((_DWORD *)Object + 64) ^= (*v11 ^ *((_DWORD *)Object + 64)) & 0x20000;
          goto LABEL_9;
        }
        goto LABEL_66;
      }
      v12 = -1073741820;
LABEL_85:
      v16 = (signed __int64 *)Object;
      goto LABEL_9;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      v16 = (signed __int64 *)Object;
      if ( (_DWORD)v4 != 16 )
      {
        v12 = -1073741820;
LABEL_9:
        ObfDereferenceObject(v16);
        goto LABEL_10;
      }
      v18 = AlpcpAssociateIoCompletionPort(Object, *((_QWORD *)v11 + 1), *(_QWORD *)v11);
LABEL_12:
      v12 = v18;
      goto LABEL_9;
    }
    v19 = v15 - 3;
    if ( !v19 )
    {
      v12 = (_DWORD)v4 != 16 ? 0xC000000D : 0;
      goto LABEL_85;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
      v16 = (signed __int64 *)Object;
      if ( (*((_DWORD *)Object + 104) & 6) == 2 )
      {
        if ( (_DWORD)v4 == 24 )
        {
          v32 = *(char **)v11;
        }
        else
        {
          if ( (_DWORD)v4 != 16 )
            goto LABEL_66;
          v41 = *(__m128i *)v11;
          v11 = (unsigned int *)&v46;
          v32 = (char *)v41.m128i_u32[0];
          v46 = v41.m128i_u32[0];
          v47 = v41.m128i_i32[1];
          v48 = _mm_srli_si128(v41, 8).m128i_u64[0];
          v9 = 1;
        }
        v18 = AlpcpInitializeCompletionList((__int64)Object, v32, v11[2], v11[3], v11[4], v9);
        goto LABEL_12;
      }
LABEL_66:
      v12 = -1073741811;
      goto LABEL_9;
    }
    v21 = v20 - 1;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( !v22 )
      {
        if ( (_DWORD)v4 == 4 )
        {
          v16 = (signed __int64 *)Object;
          if ( *v11 )
          {
            v23 = (volatile signed __int64 *)((char *)Object + 352);
            v25 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)Object + 352, 0LL, 0LL, v13);
            if ( _InterlockedCompareExchange64(v23, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(v16 + 44, 0, v25, (struct _KTHREAD *)(v16 + 44));
            if ( v25 )
            {
              if ( (KiAbpGlobalState & 1) != 0 )
                AutoBoost::KiAbpPostAcquire(v25, v24);
              else
                *((_BYTE *)v25 + 10) = 1;
            }
            if ( v16[45] )
            {
              AlpcpAdjustCompletionListConcurrencyCount(v16, *v11);
              v12 = 0;
            }
            else
            {
              v12 = -1073741811;
            }
            if ( _InterlockedCompareExchange64(v23, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v16 + 44);
            v31 = (unsigned __int64)(v16 + 44);
LABEL_47:
            KeAbPostRelease(v31);
            goto LABEL_9;
          }
          goto LABEL_66;
        }
        goto LABEL_60;
      }
      v26 = v22 - 1;
      if ( v26 )
      {
        if ( v26 == 1 )
        {
          v16 = (signed __int64 *)Object;
          if ( !(_DWORD)v4 )
          {
            v27 = (volatile signed __int32 *)((char *)Object + 352);
            v28 = (AutoBoost *)KeAbPreAcquire((__int64)Object + 352, 0LL, 0LL, v13);
            v30 = v28;
            if ( _interlockedbittestandset64(v27, 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v16 + 44, v28, (__int64)(v16 + 44));
            if ( v30 )
            {
              if ( (KiAbpGlobalState & 1) != 0 )
                AutoBoost::KiAbpPostAcquire(v30, v29);
              else
                *((_BYTE *)v30 + 10) = 1;
            }
            if ( v16[45] )
            {
              *((_DWORD *)v16 + 104) &= ~0x10000u;
              v12 = 0;
            }
            else
            {
              v12 = -1073741811;
            }
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v27, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v16 + 44);
            v31 = (unsigned __int64)(v16 + 44);
            goto LABEL_47;
          }
          goto LABEL_66;
        }
LABEL_60:
        v12 = -1073741811;
        goto LABEL_85;
      }
      if ( v43 )
        goto LABEL_60;
      PsReferenceSiloContext(*(void **)PortInformation);
      v16 = (signed __int64 *)Object;
      v33 = (unsigned __int64 *)((char *)Object + 352);
      v35 = (AutoBoost *)KeAbPreAcquire((__int64)Object + 352, 0LL, 0LL, v34);
      v37 = v35;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v33, 0LL) )
        ExfAcquirePushLockExclusiveEx(v33, v35, (__int64)v33);
      if ( v37 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v37, v36);
        else
          *((_BYTE *)v37 + 10) = 1;
      }
      v16[46] = *(_QWORD *)PortInformation;
      v16[47] = *((_QWORD *)PortInformation + 1);
    }
    else
    {
      v16 = (signed __int64 *)Object;
      if ( (_DWORD)v4 )
        goto LABEL_66;
      v33 = (unsigned __int64 *)((char *)Object + 352);
      v38 = (AutoBoost *)KeAbPreAcquire((__int64)Object + 352, 0LL, 0LL, v13);
      v40 = v38;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v33, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v16 + 44, v38, (__int64)(v16 + 44));
      if ( v40 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v40, v39);
        else
          *((_BYTE *)v40 + 10) = 1;
      }
      if ( v16[45] )
        AlpcpFreeCompletionList(v16);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v33, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v33);
    KeAbPostRelease((unsigned __int64)v33);
    v12 = 0;
    goto LABEL_9;
  }
LABEL_10:
  KeLeaveCriticalRegion();
  return v12;
}
