/*
 * XREFs of EtwpNotifyGuid @ 0x140913FD4
 * Callers:
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 *     EtwpSendSessionNotification @ 0x140A14650 (EtwpSendSessionNotification.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PsGetCurrentThreadProcessId @ 0x14044EE20 (PsGetCurrentThreadProcessId.c)
 *     PsGetProcessId @ 0x140460330 (PsGetProcessId.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpValidateTraceControlFilterDescriptors @ 0x140838388 (EtwpValidateTraceControlFilterDescriptors.c)
 *     EtwpCheckGuidAccess @ 0x1408FC30C (EtwpCheckGuidAccess.c)
 *     EtwpAccessCheck @ 0x14090DB60 (EtwpAccessCheck.c)
 *     EtwpUnreferenceGuidEntry @ 0x1409126C0 (EtwpUnreferenceGuidEntry.c)
 *     EtwpSendDataBlock @ 0x140914478 (EtwpSendDataBlock.c)
 *     EtwpFreeFilterInfo @ 0x140914938 (EtwpFreeFilterInfo.c)
 *     EtwpUnreferenceDataBlock @ 0x140914C04 (EtwpUnreferenceDataBlock.c)
 *     EtwpAllocDataBlock @ 0x140914C28 (EtwpAllocDataBlock.c)
 *     EtwpFindGuidEntryByGuid @ 0x140914CD0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpApplyTransientFilters @ 0x140914E3C (EtwpApplyTransientFilters.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x140916DD4 (EtwpCheckCurrentUserProcessAccess.c)
 *     EtwpCreateUmReplyObject @ 0x140B14804 (EtwpCreateUmReplyObject.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x140B5857C (EtwpDemuxPrivateTraceHandle.c)
 */

__int64 __fastcall EtwpNotifyGuid(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // esi
  void *v7; // r12
  __int64 v8; // r8
  int v9; // ebx
  ACCESS_MASK v10; // ebx
  __int64 v11; // rdx
  __int64 GuidEntryByGuid; // rax
  struct _KLOCK_ENTRIES *v13; // r9
  _QWORD *v14; // rsi
  __int64 v15; // rdx
  int v16; // ebx
  __int64 v17; // r8
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v19; // rax
  void *v20; // rdx
  AutoBoost *v21; // rbx
  _QWORD *v22; // r15
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // r14d
  _QWORD *i; // rbx
  __int16 v27; // ax
  int v28; // eax
  bool v29; // zf
  signed __int64 v30; // rax
  signed __int64 v31; // rdx
  __int64 v32; // rtt
  unsigned int ProcessId; // eax
  unsigned __int64 v35; // rcx
  unsigned int v36; // eax
  unsigned int v37; // eax
  int UmReplyObject; // eax
  int v39; // [rsp+20h] [rbp-79h]
  unsigned int v40; // [rsp+24h] [rbp-75h]
  __int64 v41; // [rsp+38h] [rbp-61h]
  _BYTE v42[160]; // [rsp+50h] [rbp-49h] BYREF
  void *v43; // [rsp+108h] [rbp+6Fh] BYREF
  int v44; // [rsp+118h] [rbp+7Fh]

  v3 = 0;
  v43 = 0LL;
  v44 = 0;
  v7 = 0LL;
  LOBYTE(v40) = 0;
  v41 = 0LL;
  memset_0(v42, 0, 0x68uLL);
  v8 = *(unsigned int *)(a2 + 4);
  if ( (unsigned int)v8 > 0x10000 )
    return 3221225990LL;
  v9 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 11 )
  {
    if ( (unsigned int)v8 < 0x78 || (v35 = (*(_DWORD *)(a2 + 72) + 7) & 0xFFFFFFF8, v35 >= v8 - 76) )
    {
      v16 = -2147483643;
      goto LABEL_39;
    }
    v36 = *(_DWORD *)(v35 + a2 + 72);
    if ( v36 )
    {
      v41 = v35 + a2 + 76;
      v3 = 0;
      if ( (unsigned int)EtwpValidateTraceControlFilterDescriptors(v36, v41, (int)v8 - ((int)v35 + 76), (__int64)v42) )
      {
        v16 = -1073741811;
        goto LABEL_39;
      }
    }
    *(_DWORD *)a2 = 4;
    v9 = 4;
  }
  *(_DWORD *)(a2 + 36) = PsGetCurrentThreadProcessId();
  if ( v9 == 4 )
  {
    if ( *(_DWORD *)(a2 + 4) < 0xF8u )
    {
      v16 = -1073741789;
      goto LABEL_39;
    }
    v10 = 128;
    v37 = EtwpCheckGuidAccess((__int64)&PrivateLoggerSecurityGuid, 0x80u);
    v11 = a2 + 40;
    v40 = v37 >> 31;
    *(GUID *)(a2 + 40) = PrivateLoggerNotificationGuid;
  }
  else
  {
    v10 = 4;
    v11 = a2 + 40;
    v3 = 1;
  }
  v39 = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a2 + 20) = 0;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, v11, v3);
  v14 = (_QWORD *)GuidEntryByGuid;
  if ( !GuidEntryByGuid )
  {
    v16 = -1073741163;
    goto LABEL_39;
  }
  if ( a3 )
  {
    if ( *(_DWORD *)a2 != 4 )
    {
      v16 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(GuidEntryByGuid + 72), v10, 0LL);
      if ( v16 < 0 )
        goto LABEL_38;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v19 = (AutoBoost *)KeAbPreAcquire((__int64)(v14 + 83), 0LL, 0LL, v13);
  v21 = v19;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v14 + 166, 0LL) )
    ExfAcquirePushLockExclusiveEx(v14 + 83, v19, (__int64)(v14 + 83));
  if ( v21 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v21, v20);
    else
      *((_BYTE *)v21 + 10) = 1;
  }
  v22 = v14 + 7;
  v14[84] = KeGetCurrentThread();
  if ( (_QWORD *)*v22 == v22 )
  {
    v16 = -1073741162;
    goto LABEL_32;
  }
  if ( *(_BYTE *)(a2 + 12) )
  {
    UmReplyObject = EtwpCreateUmReplyObject((ULONG_PTR)v14);
    v7 = v43;
    v16 = UmReplyObject;
    if ( UmReplyObject < 0 )
      goto LABEL_32;
    *(_QWORD *)(a2 + 24) = v43;
  }
  v25 = EtwpAllocDataBlock(*(unsigned int *)(a2 + 4), (void *)a2);
  if ( v25 < 0 )
  {
    v16 = -1073741801;
    goto LABEL_32;
  }
  for ( i = (_QWORD *)*v22; i != v14 + 7; i = (_QWORD *)*i )
  {
    v27 = *((_WORD *)i + 49);
    if ( (v27 & 2) != 0
      && (v27 & 0x20) == 0
      && (!v41 || (unsigned __int8)EtwpApplyTransientFilters(i, v42))
      && (!v39 || (unsigned int)PsGetProcessId((PEPROCESS)i[10]) == v39) )
    {
      if ( !(_BYTE)v40 || (v25 = EtwpCheckCurrentUserProcessAccess(i[10]), v25 >= 0) )
      {
        if ( *(_DWORD *)a2 == 4 )
        {
          v29 = *(_DWORD *)(a2 + 76) == 1;
          LOWORD(v43) = 0;
          if ( !v29 )
          {
            ProcessId = (unsigned int)PsGetProcessId((PEPROCESS)i[10]);
            v25 = EtwpDemuxPrivateTraceHandle(ProcessId, *(_WORD *)(a2 + 80) & 0x7FFF, &v43);
            if ( v25 < 0 )
              continue;
            v25 = EtwpAllocDataBlock(*(unsigned int *)(a2 + 4), (void *)a2);
            if ( v25 < 0 )
            {
              v16 = -1073741801;
              goto LABEL_32;
            }
            MEMORY[0x50] = (_WORD)v43;
          }
        }
        v28 = EtwpSendDataBlock(i, 0LL, v23, v24);
        if ( v28 < 0 )
          v25 = v28;
        else
          ++v44;
      }
    }
  }
  v29 = v44 == 0;
  v16 = 0;
  *(_DWORD *)(a2 + 20) = v44;
  if ( v29 )
    v16 = v25;
  *(_QWORD *)(a2 + 24) = 0LL;
LABEL_32:
  v14[84] = 0LL;
  _m_prefetchw(v14 + 83);
  v30 = v14[83];
  v31 = v30 - 16;
  if ( (v30 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v31 = 0LL;
  if ( (v30 & 2) != 0 || (v32 = v14[83], v32 != _InterlockedCompareExchange64(v14 + 83, v31, v30)) )
    ExfReleasePushLock(v14 + 83);
  KeAbPostRelease((unsigned __int64)(v14 + 83));
  KeLeaveCriticalRegion();
  if ( v7 )
    ObfDereferenceObject(v7);
LABEL_38:
  EtwpUnreferenceGuidEntry(v14, v15, v17, v13);
LABEL_39:
  EtwpFreeFilterInfo(v42);
  return (unsigned int)v16;
}
