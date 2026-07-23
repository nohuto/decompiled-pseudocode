/*
 * XREFs of AlpcpGetEffectiveTokenMessage @ 0x1409058A0
 * Callers:
 *     AlpcpQueryTokenModifiedIdMessage @ 0x1407C32F4 (AlpcpQueryTokenModifiedIdMessage.c)
 *     AlpcpExposeAttributes @ 0x1409B93B0 (AlpcpExposeAttributes.c)
 *     AlpcpQuerySidMessage @ 0x140AA39E0 (AlpcpQuerySidMessage.c)
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
  int ClientSecurity; // ebx
  __int64 v21; // rax
  unsigned __int64 CurrentServerSilo; // rbx
  char v23[8]; // [rsp+60h] [rbp-58h] BYREF
  PEPROCESS v24; // [rsp+68h] [rbp-50h]
  PEPROCESS Process; // [rsp+70h] [rbp-48h]
  PSID SourceSid; // [rsp+78h] [rbp-40h] BYREF
  struct _KTHREAD *v27; // [rsp+80h] [rbp-38h]
  unsigned __int8 v28; // [rsp+C8h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(a2 + 40) & 0x80u) == 0 )
  {
    v7 = *(_QWORD *)(a2 + 136);
    if ( v7 )
    {
      if ( *(int *)(v7 + 36) < 1 )
        return 3221225506LL;
      v21 = *(_QWORD *)(v7 + 48);
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
          v28 = 0;
          v23[0] = 0;
          SourceSid = 0LL;
          CurrentThread = KeGetCurrentThread();
          v14 = (PEPROCESS *)(v10 + 544);
          if ( (struct _KTHREAD *)v10 == CurrentThread )
            Process = CurrentThread->ApcState.Process;
          else
            Process = *v14;
          if ( (*(_DWORD *)(v10 + 1440) & 8) == 0 )
            goto LABEL_21;
          v24 = *v14;
          v27 = KeGetCurrentThread();
          --v27->KernelApcDisable;
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
            v28 = BYTE2(v24[3].ActiveGroupsMask.Masks[1]);
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
          KeLeaveCriticalRegionThread((__int64)v27);
          if ( v17 )
          {
            LODWORD(v24) = 2;
          }
          else
          {
LABEL_21:
            v17 = (__int64 *)PsReferencePrimaryTokenWithTag(
                               (__int64)Process,
                               0x63436553u,
                               (__int64)a3,
                               (struct _KLOCK_ENTRIES *)a4);
            LODWORD(v24) = 1;
            v11 = 0;
            v28 = BYTE2(Process[3].ActiveGroupsMask.Masks[1]);
          }
          SepReconcileTrustSidWithProcessProtection(v17[138], &v28, v23, &SourceSid);
          ClientSecurity = SepCreateClientSecurityEx((int)v17, v11, v12, 1, v10, v23[0], SourceSid, a4);
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
      v21 = *(_QWORD *)(v8 + 80);
      if ( !v21 )
        return 3221225506LL;
    }
    *a3 = v21;
    *a5 = 0;
    return 0LL;
  }
  return 3221227267LL;
}
