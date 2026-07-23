/*
 * XREFs of SeCreateClientSecurityEx @ 0x1409055F0
 * Callers:
 *     AlpcpImpersonateMessage @ 0x140903CB0 (AlpcpImpersonateMessage.c)
 *     AlpcpExposeAttributes @ 0x1409B93B0 (AlpcpExposeAttributes.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x1403ABEF0 (SepReconcileTrustSidWithProcessProtection.c)
 *     PsIsHostSilo @ 0x140467DB0 (PsIsHostSilo.c)
 *     SepCreateClientSecurityEx @ 0x140905C50 (SepCreateClientSecurityEx.c)
 *     SepUpdateSiloInClientSecurity @ 0x140B685F0 (SepUpdateSiloInClientSecurity.c)
 */

__int64 __fastcall SeCreateClientSecurityEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r12d
  char v5; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // r14
  signed __int64 *v10; // r15
  void *v11; // rdx
  LegacyAutoBoost *v12; // rbp
  __int64 *v13; // rbp
  __int64 result; // rax
  unsigned int v15; // edi
  unsigned __int64 CurrentServerSilo; // rbx
  unsigned int v17; // ebx
  char v18[8]; // [rsp+60h] [rbp-68h] BYREF
  PSID SourceSid; // [rsp+68h] [rbp-60h] BYREF
  __int64 v20; // [rsp+70h] [rbp-58h]
  struct _KTHREAD *v21; // [rsp+78h] [rbp-50h]
  unsigned __int8 v22; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v23; // [rsp+D8h] [rbp+10h]

  v23 = a2;
  v4 = 0;
  v22 = 0;
  v5 = 0;
  v18[0] = 0;
  SourceSid = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    Process = (__int64)CurrentThread->ApcState.Process;
  else
    Process = *(_QWORD *)(a1 + 544);
  if ( (*(_DWORD *)(a1 + 1440) & 8) == 0 )
    goto LABEL_14;
  v10 = (signed __int64 *)(a1 + 1424);
  v20 = *(_QWORD *)(a1 + 544);
  v21 = KeGetCurrentThread();
  --v21->KernelApcDisable;
  v12 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 1424, 0LL, 0LL, (struct _KLOCK_ENTRIES *)a4);
  if ( _InterlockedCompareExchange64(v10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v10, 0, v12, (struct _KTHREAD *)v10);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v11);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  if ( (*(_DWORD *)(a1 + 1440) & 8) != 0 )
  {
    v13 = (__int64 *)(*(_QWORD *)(a1 + 1336) & 0xFFFFFFFFFFFFFFF8uLL);
    ObfReferenceObjectWithTag(v13, 0x63436553u);
    v4 = *(_DWORD *)(a1 + 1336) & 3;
    v5 = (*(_BYTE *)(a1 + 1336) & 4) != 0;
    v22 = *(_BYTE *)(v20 + 1530);
  }
  else
  {
    v13 = 0LL;
  }
  if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v10);
  KeAbPostRelease((unsigned __int64)v10);
  KeLeaveCriticalRegionThread((__int64)v21);
  if ( !v13 )
  {
LABEL_14:
    v13 = (__int64 *)PsReferencePrimaryTokenWithTag(Process, 0x63436553u, a3, (struct _KLOCK_ENTRIES *)a4);
    v22 = *(_BYTE *)(Process + 1530);
    v5 = 0;
  }
  SepReconcileTrustSidWithProcessProtection(v13[138], &v22, v18, &SourceSid);
  result = SepCreateClientSecurityEx((int)v13, v5, v4, 1, a1, v18[0], SourceSid, a4);
  v15 = result;
  if ( (int)result < 0 || !*(_BYTE *)(a4 + 8) )
  {
    ObfDereferenceObjectWithTag(v13, 0x63436553u);
    return v15;
  }
  if ( *(PEPROCESS *)(a1 + 544) != PsInitialSystemProcess )
    return result;
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
    return v15;
  result = SepUpdateSiloInClientSecurity(a4, CurrentServerSilo);
  v17 = result;
  if ( (int)result < 0 )
  {
    ObfDereferenceObjectWithTag(v13, 0x63436553u);
    return v17;
  }
  return result;
}
