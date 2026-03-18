/*
 * XREFs of SeCreateClientSecurityEx @ 0x140929AE0
 * Callers:
 *     AlpcpImpersonateMessage @ 0x1409281A0 (AlpcpImpersonateMessage.c)
 *     AlpcpExposeAttributes @ 0x140972B20 (AlpcpExposeAttributes.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140215E70 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x1402AC7A0 (SepReconcileTrustSidWithProcessProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     PsIsHostSilo @ 0x14046E630 (PsIsHostSilo.c)
 *     SepCreateClientSecurityEx @ 0x14092A140 (SepCreateClientSecurityEx.c)
 *     SepUpdateSiloInClientSecurity @ 0x140B65550 (SepUpdateSiloInClientSecurity.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 result; // rax
  unsigned int v17; // edi
  unsigned __int64 CurrentServerSilo; // rbx
  unsigned int v19; // ebx
  char v20[8]; // [rsp+60h] [rbp-68h] BYREF
  PSID SourceSid; // [rsp+68h] [rbp-60h] BYREF
  __int64 v22; // [rsp+70h] [rbp-58h]
  struct _KTHREAD *v23; // [rsp+78h] [rbp-50h]
  unsigned __int8 v24; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v25; // [rsp+D8h] [rbp+10h]

  v25 = a2;
  v4 = 0;
  v24 = 0;
  v5 = 0;
  v20[0] = 0;
  SourceSid = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    Process = (__int64)CurrentThread->ApcState.Process;
  else
    Process = *(_QWORD *)(a1 + 544);
  if ( (*(_DWORD *)(a1 + 1440) & 8) == 0 )
    goto LABEL_14;
  v10 = (signed __int64 *)(a1 + 1424);
  v22 = *(_QWORD *)(a1 + 544);
  v23 = KeGetCurrentThread();
  --v23->KernelApcDisable;
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
    v24 = *(_BYTE *)(v22 + 1530);
  }
  else
  {
    v13 = 0LL;
  }
  if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v10);
  KeAbPostRelease((unsigned __int64)v10);
  KeLeaveCriticalRegionThread((__int64)v23, v14, v15);
  if ( !v13 )
  {
LABEL_14:
    v13 = (__int64 *)PsReferencePrimaryTokenWithTag(Process, 0x63436553u, a3, (struct _KLOCK_ENTRIES *)a4);
    v24 = *(_BYTE *)(Process + 1530);
    v5 = 0;
  }
  SepReconcileTrustSidWithProcessProtection(v13[138], &v24, v20, (unsigned __int64 *)&SourceSid);
  result = SepCreateClientSecurityEx((int)v13, v5, v4, 1, a1, v20[0], SourceSid, a4);
  v17 = result;
  if ( (int)result < 0 || !*(_BYTE *)(a4 + 8) )
  {
    ObfDereferenceObjectWithTag(v13, 0x63436553u);
    return v17;
  }
  if ( *(PEPROCESS *)(a1 + 544) != PsInitialSystemProcess )
    return result;
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
    return v17;
  result = SepUpdateSiloInClientSecurity(a4, CurrentServerSilo);
  v19 = result;
  if ( (int)result < 0 )
  {
    ObfDereferenceObjectWithTag(v13, 0x63436553u);
    return v19;
  }
  return result;
}
