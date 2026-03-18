/*
 * XREFs of AlpcpGetEffectiveTokenMessage @ 0x140929D90
 * Callers:
 *     AlpcpQueryTokenModifiedIdMessage @ 0x1407C0294 (AlpcpQueryTokenModifiedIdMessage.c)
 *     AlpcpExposeAttributes @ 0x140972B20 (AlpcpExposeAttributes.c)
 *     AlpcpQuerySidMessage @ 0x140AA1F10 (AlpcpQuerySidMessage.c)
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

__int64 __fastcall AlpcpGetEffectiveTokenMessage(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, _BYTE *a5)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // ecx
  __int64 v10; // rbx
  char v11; // r12
  int v12; // r13d
  struct _KTHREAD *CurrentThread; // rax
  PEPROCESS *v14; // r14
  LegacyAutoBoost *v15; // rbp
  __int64 v16; // rdx
  __int64 *v17; // rbp
  signed __int64 *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  int ClientSecurity; // ebx
  __int64 v23; // rax
  unsigned __int64 CurrentServerSilo; // rbx
  char v25[8]; // [rsp+60h] [rbp-58h] BYREF
  PEPROCESS v26; // [rsp+68h] [rbp-50h]
  PEPROCESS Process; // [rsp+70h] [rbp-48h]
  PSID SourceSid; // [rsp+78h] [rbp-40h] BYREF
  struct _KTHREAD *v29; // [rsp+80h] [rbp-38h]
  unsigned __int8 v30; // [rsp+C8h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(a2 + 40) & 0x80u) == 0 )
  {
    v7 = *(_QWORD *)(a2 + 136);
    if ( v7 )
    {
      if ( *(int *)(v7 + 36) < 1 )
        return 3221225506LL;
      v23 = *(_QWORD *)(v7 + 48);
    }
    else
    {
      v8 = *(_QWORD *)(a2 + 24);
      if ( (*(_DWORD *)(a1 + 416) & 6) != 2 )
        return 3221225506LL;
      if ( !v8 )
        return 3221225506LL;
      v9 = *(_DWORD *)(v8 + 416);
      if ( (v9 & 6) != 4 )
        return 3221225506LL;
      if ( (v9 & 0x400) != 0 )
      {
        v10 = *(_QWORD *)(a2 + 32);
        if ( v10 )
        {
          v11 = 0;
          v12 = 0;
          v30 = 0;
          v25[0] = 0;
          SourceSid = 0LL;
          CurrentThread = KeGetCurrentThread();
          v14 = (PEPROCESS *)(v10 + 544);
          if ( (struct _KTHREAD *)v10 == CurrentThread )
            Process = CurrentThread->ApcState.Process;
          else
            Process = *v14;
          if ( (*(_DWORD *)(v10 + 1440) & 8) == 0 )
            goto LABEL_21;
          v26 = *v14;
          v29 = KeGetCurrentThread();
          --v29->KernelApcDisable;
          v15 = (LegacyAutoBoost *)KeAbPreAcquire(v10 + 1424, 0LL, 0LL, (struct _KLOCK_ENTRIES *)a4);
          v16 = 17LL;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 1424), 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((signed __int64 *)(v10 + 1424), 0, v15, (struct _KTHREAD *)(v10 + 1424));
          if ( v15 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v15, (void *)v16);
            else
              *((_BYTE *)v15 + 10) = 1;
          }
          if ( (*(_DWORD *)(v10 + 1440) & 8) != 0 )
          {
            v17 = (__int64 *)(*(_QWORD *)(v10 + 1336) & 0xFFFFFFFFFFFFFFF8uLL);
            ObfReferenceObjectWithTag(v17, 0x63436553u);
            v12 = *(_DWORD *)(v10 + 1336) & 3;
            v11 = (*(_BYTE *)(v10 + 1336) & 4) != 0;
            v30 = BYTE2(v26[3].ActiveGroupsMask.Masks[1]);
          }
          else
          {
            v17 = 0LL;
          }
          v18 = (signed __int64 *)(v10 + 1424);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 1424), 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared(v18);
            v18 = (signed __int64 *)(v10 + 1424);
          }
          KeAbPostRelease((unsigned __int64)v18);
          KeLeaveCriticalRegionThread((__int64)v29, v19, v20);
          if ( v17 )
          {
            LODWORD(v26) = 2;
          }
          else
          {
LABEL_21:
            v17 = (__int64 *)PsReferencePrimaryTokenWithTag(
                               (__int64)Process,
                               0x63436553u,
                               (__int64)a3,
                               (struct _KLOCK_ENTRIES *)a4);
            LODWORD(v26) = 1;
            v11 = 0;
            v30 = BYTE2(Process[3].ActiveGroupsMask.Masks[1]);
          }
          SepReconcileTrustSidWithProcessProtection(v17[138], &v30, v25, (unsigned __int64 *)&SourceSid);
          ClientSecurity = SepCreateClientSecurityEx((int)v17, v11, v12, 1, v10, v25[0], SourceSid, a4);
          if ( ClientSecurity >= 0 && *(_BYTE *)(a4 + 8) )
          {
            if ( *v14 == PsInitialSystemProcess )
            {
              CurrentServerSilo = PsGetCurrentServerSilo();
              if ( !PsIsHostSilo(CurrentServerSilo) )
              {
                ClientSecurity = SepUpdateSiloInClientSecurity(a4, CurrentServerSilo);
                if ( ClientSecurity < 0 )
                {
                  ObfDereferenceObjectWithTag(v17, 0x63436553u);
                  return (unsigned int)ClientSecurity;
                }
              }
            }
          }
          else
          {
            ObfDereferenceObjectWithTag(v17, 0x63436553u);
            if ( ClientSecurity < 0 )
              return (unsigned int)ClientSecurity;
          }
          *a3 = *(_QWORD *)(a4 + 16);
          *a5 = 1;
          return 0LL;
        }
        return 3221225506LL;
      }
      v23 = *(_QWORD *)(v8 + 80);
      if ( !v23 )
        return 3221225506LL;
    }
    *a3 = v23;
    *a5 = 0;
    return 0LL;
  }
  return 3221227267LL;
}
