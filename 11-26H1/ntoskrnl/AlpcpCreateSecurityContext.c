/*
 * XREFs of AlpcpCreateSecurityContext @ 0x14098D530
 * Callers:
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14098DF10 (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcCreateSecurityContext @ 0x140A9E020 (NtAlpcCreateSecurityContext.c)
 *     AlpcCreateSecurityContext @ 0x140AFC620 (AlpcCreateSecurityContext.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockThreadSecurityShared @ 0x140271330 (PspUnlockThreadSecurityShared.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x1403ABEF0 (SepReconcileTrustSidWithProcessProtection.c)
 *     IoThreadToProcess @ 0x140469B20 (IoThreadToProcess.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1408EE5D0 (AlpcpReleasePagedPoolQuota.c)
 *     SepCreateClientSecurityEx @ 0x140905C50 (SepCreateClientSecurityEx.c)
 *     AlpcAddHandleTableEntry @ 0x14098D2D0 (AlpcAddHandleTableEntry.c)
 *     AlpcpStartInitialization @ 0x14098D4B8 (AlpcpStartInitialization.c)
 *     AlpcpChargePagedPoolQuota @ 0x14098D9AC (AlpcpChargePagedPoolQuota.c)
 *     AlpcpReferenceBlob @ 0x14098FE98 (AlpcpReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 *     AlpcpInsertResourcePort @ 0x140A733D4 (AlpcpInsertResourcePort.c)
 *     AlpcpEndInitialization @ 0x140A95838 (AlpcpEndInitialization.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall AlpcpCreateSecurityContext(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 **a5)
{
  PEPROCESS v8; // rsi
  __int64 Pool2; // rax
  __int64 *v10; // rbx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  int v13; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // r13
  void *v16; // rdx
  LegacyAutoBoost *v17; // r14
  __int64 *v18; // r14
  char v19; // r12
  char v20; // r12
  unsigned int v21; // edi
  unsigned int v22; // r13d
  int ClientSecurity; // edi
  struct _KLOCK_ENTRIES *v24; // r9
  volatile signed __int64 *v25; // rdi
  void *v26; // rdx
  LegacyAutoBoost *v27; // rsi
  __int64 v28; // r8
  struct _KLOCK_ENTRIES *v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  struct _KLOCK_ENTRIES *v33; // r9
  __int64 v34; // rax
  unsigned __int8 v36; // [rsp+60h] [rbp-58h] BYREF
  char v37[3]; // [rsp+61h] [rbp-57h] BYREF
  int v38; // [rsp+64h] [rbp-54h]
  struct _KTHREAD *v39; // [rsp+68h] [rbp-50h]
  PSID SourceSid; // [rsp+70h] [rbp-48h] BYREF
  __int64 *v41; // [rsp+78h] [rbp-40h] BYREF

  v8 = IoThreadToProcess((PETHREAD)a2);
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return 3221225626LL;
  *(_WORD *)(Pool2 + 16) = 768;
  v10 = (__int64 *)(Pool2 + 48);
  *(_DWORD *)(Pool2 + 18) = 0;
  *(_WORD *)(Pool2 + 22) = 0;
  *(_QWORD *)(Pool2 + 40) = 0LL;
  *(_QWORD *)(Pool2 + 32) = 0LL;
  *(_QWORD *)(Pool2 + 8) = Pool2;
  *(_QWORD *)Pool2 = Pool2;
  *(_BYTE *)(Pool2 + 16) &= ~2u;
  *(_QWORD *)(Pool2 + 24) = 1LL;
  if ( Pool2 == -48 )
    return 3221225626LL;
  memset_0((void *)(Pool2 + 48), 0, 0x70uLL);
  v10[1] = -1LL;
  v13 = AlpcpChargePagedPoolQuota(v8, 160LL);
  if ( v13 < 0 )
  {
    AlpcpDereferenceBlobEx((ULONG_PTR)v10);
    return (unsigned int)v13;
  }
  CurrentThread = KeGetCurrentThread();
  v38 = 0;
  v37[0] = 0;
  SourceSid = 0LL;
  if ( (struct _KTHREAD *)a2 == CurrentThread )
    Process = (__int64)CurrentThread->ApcState.Process;
  else
    Process = *(_QWORD *)(a2 + 544);
  if ( (*(_DWORD *)(a2 + 1440) & 8) == 0 )
    goto LABEL_14;
  v41 = *(__int64 **)(a2 + 544);
  v39 = KeGetCurrentThread();
  --v39->KernelApcDisable;
  v17 = (LegacyAutoBoost *)KeAbPreAcquire(a2 + 1424, 0LL, 0LL, v12);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 1424), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(a2 + 1424), 0, v17, (struct _KTHREAD *)(a2 + 1424));
  if ( v17 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v17, v16);
    else
      *((_BYTE *)v17 + 10) = 1;
  }
  if ( (*(_DWORD *)(a2 + 1440) & 8) == 0 )
  {
    PspUnlockThreadSecurityShared(a2, v39);
    goto LABEL_14;
  }
  v18 = (__int64 *)(*(_QWORD *)(a2 + 1336) & 0xFFFFFFFFFFFFFFF8uLL);
  ObfReferenceObjectWithTag(v18, 0x63436553u);
  v19 = *(_BYTE *)(a2 + 1336);
  v38 = *(_DWORD *)(a2 + 1336) & 3;
  v20 = (v19 & 4) != 0;
  v36 = *((_BYTE *)v41 + 1530);
  PspUnlockThreadSecurityShared(a2, v39);
  if ( !v18 )
  {
LABEL_14:
    v18 = (__int64 *)PsReferencePrimaryTokenWithTag(Process, 0x63436553u, v11, v12);
    v36 = *(_BYTE *)(Process + 1530);
    v21 = 1;
    v20 = 0;
    goto LABEL_15;
  }
  v21 = 2;
LABEL_15:
  v22 = v38;
  SepReconcileTrustSidWithProcessProtection(v18[138], &v36, v37, &SourceSid);
  ClientSecurity = SepCreateClientSecurityEx(
                     (__int64)v18,
                     a4,
                     0LL,
                     (struct _KLOCK_ENTRIES *)v21,
                     v20,
                     v22,
                     0,
                     0LL,
                     v37[0],
                     (unsigned __int8 *)SourceSid,
                     (__int64)(v10 + 4));
  if ( ClientSecurity < 0 || !*(_BYTE *)(a4 + 8) )
  {
    ObfDereferenceObjectWithTag(v18, 0x63436553u);
    if ( ClientSecurity < 0 )
    {
      AlpcpReleasePagedPoolQuota((ULONG_PTR)v8, 0xA0uLL);
      AlpcpDereferenceBlobEx((ULONG_PTR)v10);
      return (unsigned int)ClientSecurity;
    }
  }
  ObfReferenceObjectWithTag(v8, 0x63706C41u);
  v10[2] = (__int64)v8;
  if ( a3 )
  {
    v25 = (volatile signed __int64 *)(a1 + 352);
    v27 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 352, 0LL, 0LL, v24);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 352), 0, v27, (struct _KTHREAD *)(a1 + 352));
    if ( v27 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v27, v26);
      else
        *((_BYTE *)v27 + 10) = 1;
    }
    v30 = *(unsigned int *)(a1 + 416);
    if ( (v30 & 0x20) != 0 )
    {
      if ( _InterlockedCompareExchange64(v25, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
      KeAbPostRelease(a1 + 352);
    }
    else
    {
      AlpcpStartInitialization((__int64)v10, v30, v28, v29);
      AlpcpReferenceBlob((ULONG_PTR)v10);
      v31 = *(_QWORD *)(a1 + 16) + 40LL;
      v41 = v10;
      *v10 = v31;
      v34 = AlpcAddHandleTableEntry(v31, &v41, v32, v33);
      v10[1] = v34;
      if ( v34 != -1 )
      {
        PsReferenceSiloContext((void *)a1);
        v10[3] = a1;
        AlpcpInsertResourcePort(a1, v10);
        if ( _InterlockedCompareExchange64(v25, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
        KeAbPostRelease(a1 + 352);
        AlpcpEndInitialization(v10);
        goto LABEL_29;
      }
      if ( _InterlockedCompareExchange64(v25, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
      KeAbPostRelease(a1 + 352);
      *v10 = 0LL;
      AlpcpEndInitialization(v10);
    }
    AlpcpDereferenceBlobEx((ULONG_PTR)v10);
    return 3221225626LL;
  }
LABEL_29:
  *a5 = v10;
  return 0LL;
}
