/*
 * XREFs of SeCreateClientSecurity @ 0x140905390
 * Callers:
 *     AlpcpCreateClientPort @ 0x1408F0020 (AlpcpCreateClientPort.c)
 *     EtwpUpdateTrace @ 0x140AB081C (EtwpUpdateTrace.c)
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 *     NtImpersonateThread @ 0x140AE0D70 (NtImpersonateThread.c)
 *     EtwpFixBootLoggers @ 0x140CE814C (EtwpFixBootLoggers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockThreadSecurityShared @ 0x140271330 (PspUnlockThreadSecurityShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x1403ABEF0 (SepReconcileTrustSidWithProcessProtection.c)
 *     SepCreateClientSecurityEx @ 0x140905C50 (SepCreateClientSecurityEx.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall SeCreateClientSecurity(
        PETHREAD ClientThread,
        PSECURITY_QUALITY_OF_SERVICE ClientSecurityQos,
        BOOLEAN RemoteSession,
        PSECURITY_CLIENT_CONTEXT ClientContext)
{
  int v7; // r15d
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rbp
  void *v10; // rdx
  LegacyAutoBoost *v11; // rsi
  __int64 *v12; // rsi
  __int64 v13; // r14
  __int64 v14; // r14
  NTSTATUS result; // eax
  NTSTATUS v16; // ebx
  char v17[8]; // [rsp+60h] [rbp-48h] BYREF
  struct _KTHREAD *v18; // [rsp+68h] [rbp-40h]
  PSID SourceSid[2]; // [rsp+70h] [rbp-38h] BYREF
  _KPROCESS *v20; // [rsp+B0h] [rbp+8h] BYREF

  v7 = 0;
  v17[0] = 0;
  SourceSid[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( ClientThread == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = ClientThread->Process;
  if ( (*(_DWORD *)(&ClientThread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v20 = ClientThread->Process;
    v18 = KeGetCurrentThread();
    --v18->KernelApcDisable;
    v11 = (LegacyAutoBoost *)KeAbPreAcquire(
                               (__int64)&ClientThread[1].WaitBlockList,
                               0LL,
                               0LL,
                               (struct _KLOCK_ENTRIES *)ClientContext);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ClientThread[1].WaitBlockList, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&ClientThread[1].WaitBlockList,
        0,
        v11,
        (PETHREAD)((char *)ClientThread + 1424));
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v11, v10);
      else
        *((_BYTE *)v11 + 10) = 1;
    }
    if ( (*(_DWORD *)(&ClientThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v12 = (__int64 *)(*(_QWORD *)((char *)&ClientThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      ObfReferenceObjectWithTag(v12, 0x63436553u);
      v7 = *((_DWORD *)&ClientThread[1].0 + 1) & 3;
      v13 = *((_BYTE *)&ClientThread[1].MiscFlags + 4) >> 2;
      LOBYTE(v20) = BYTE2(v20[3].ActiveGroupsMask.Masks[1]);
      v14 = v13 & 1;
      PspUnlockThreadSecurityShared((__int64)ClientThread, v18);
      if ( v12 )
        goto LABEL_12;
    }
    else
    {
      PspUnlockThreadSecurityShared((__int64)ClientThread, v18);
    }
  }
  v12 = (__int64 *)PsReferencePrimaryTokenWithTag(
                     (__int64)Process,
                     0x63436553u,
                     RemoteSession,
                     (struct _KLOCK_ENTRIES *)ClientContext);
  LOBYTE(v20) = BYTE2(Process[3].ActiveGroupsMask.Masks[1]);
  LOBYTE(v14) = 0;
LABEL_12:
  SepReconcileTrustSidWithProcessProtection(v12[138], (unsigned __int8 *)&v20, v17, SourceSid);
  result = SepCreateClientSecurityEx((int)v12, v14, v7, 0, 0LL, v17[0], SourceSid[0], (__int64)ClientContext);
  v16 = result;
  if ( result < 0 || !ClientSecurityQos->ContextTrackingMode )
  {
    ObfDereferenceObjectWithTag(v12, 0x63436553u);
    return v16;
  }
  return result;
}
