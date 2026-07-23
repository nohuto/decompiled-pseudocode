/*
 * XREFs of AlpcpImpersonateMessage @ 0x140903CB0
 * Callers:
 *     NtAlpcImpersonateClientOfPort @ 0x140992370 (NtAlpcImpersonateClientOfPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockThreadSecurityShared @ 0x140271330 (PspUnlockThreadSecurityShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x1403ABEF0 (SepReconcileTrustSidWithProcessProtection.c)
 *     PsImpersonateClient @ 0x140904330 (PsImpersonateClient.c)
 *     AlpcpReferenceConnectedPort @ 0x140905270 (AlpcpReferenceConnectedPort.c)
 *     SeCreateClientSecurityEx @ 0x1409055F0 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x140905C50 (SepCreateClientSecurityEx.c)
 */

__int64 __fastcall AlpcpImpersonateMessage(
        __int64 a1,
        __int64 a2,
        int a3,
        struct _KLOCK_ENTRIES *a4,
        SECURITY_IMPERSONATION_LEVEL a5)
{
  int v5; // r14d
  int v6; // eax
  int v7; // r13d
  _BYTE *v9; // rdi
  __int64 *v10; // rsi
  __int64 v11; // rdx
  NTSTATUS ClientSecurity; // ebx
  __int64 v14; // r15
  SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // r12d
  _DWORD *v16; // rax
  __int64 v17; // r8
  struct _KLOCK_ENTRIES *v18; // r9
  __int64 v19; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v21; // rcx
  __int64 v22; // rdx
  __int64 *v23; // rbx
  __int128 v24; // xmm1
  BOOLEAN v25; // r9^1
  _DWORD *v26; // rcx
  AutoBoost *v27; // rax
  void *v28; // rdx
  AutoBoost *v29; // rsi
  int v30; // eax
  unsigned __int8 v31; // [rsp+60h] [rbp-A0h] BYREF
  char v32; // [rsp+61h] [rbp-9Fh] BYREF
  char v33; // [rsp+62h] [rbp-9Eh]
  int v34; // [rsp+64h] [rbp-9Ch]
  struct _KTHREAD *v35; // [rsp+68h] [rbp-98h]
  PVOID Object; // [rsp+70h] [rbp-90h]
  _KPROCESS *Process; // [rsp+78h] [rbp-88h]
  PSID SourceSid; // [rsp+80h] [rbp-80h] BYREF
  __int64 v39; // [rsp+88h] [rbp-78h]
  SECURITY_IMPERSONATION_LEVEL v40[4]; // [rsp+90h] [rbp-70h]
  PACCESS_TOKEN Token[2]; // [rsp+A0h] [rbp-60h]
  __int64 v42[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v43; // [rsp+100h] [rbp+0h]
  __int128 v44; // [rsp+110h] [rbp+10h]
  __int128 v45; // [rsp+120h] [rbp+20h]
  int v46; // [rsp+130h] [rbp+30h]

  LODWORD(v35) = a3;
  v46 = 0;
  v5 = 0;
  v6 = *(_DWORD *)(a2 + 40) & 7;
  v7 = (int)a4;
  v9 = 0LL;
  v10 = 0LL;
  *(_OWORD *)v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  if ( (_BYTE)v6 != 3 )
    return (unsigned int)-1073741790;
  if ( _bittest16((const signed __int16 *)(a2 + 244), 0xEu) )
    return (unsigned int)-1073741790;
  v11 = *(_QWORD *)(a2 + 16);
  if ( v11 != a1 && ((*(_BYTE *)(a1 + 416) & 6) != 6 || v11 != **(_QWORD **)(a1 + 16)) )
    return (unsigned int)-1073741790;
  v14 = *(_QWORD *)(a2 + 136);
  ImpersonationLevel = a5;
  if ( !v14 )
  {
    v16 = (_DWORD *)AlpcpReferenceConnectedPort();
    v9 = v16;
    if ( !v16 )
      return (unsigned int)-1073741790;
    if ( (v16[64] & 0x10000) == 0 )
    {
      ClientSecurity = -1073741790;
      goto LABEL_36;
    }
    if ( (v16[104] & 0x400) == 0 )
    {
      v10 = (__int64 *)(v16 + 16);
      goto LABEL_30;
    }
    v19 = *(_QWORD *)(a2 + 32);
    if ( !v19 )
    {
      ClientSecurity = -1073741790;
      goto LABEL_36;
    }
    if ( v7 && v16[66] < a5 )
    {
      ClientSecurity = -1073741790;
      goto LABEL_36;
    }
    if ( (_DWORD)v35 )
    {
      ClientSecurity = SeCreateClientSecurityEx(v19);
LABEL_28:
      if ( ClientSecurity < 0 )
        goto LABEL_36;
      v10 = v42;
      v5 = 1;
LABEL_30:
      v24 = *((_OWORD *)v10 + 1);
      *(_OWORD *)v40 = *(_OWORD *)v10;
      *(_OWORD *)Token = v24;
      if ( v7 )
      {
        if ( a5 > *((_DWORD *)v10 + 1) )
        {
          ClientSecurity = -1073741790;
          goto LABEL_35;
        }
      }
      else
      {
        ImpersonationLevel = v40[1];
      }
      v25 = BYTE1(Token[1]);
      if ( !LOBYTE(Token[1]) )
        v25 = BYTE1(v40[2]);
      ClientSecurity = PsImpersonateClient(KeGetCurrentThread(), Token[0], 1u, v25, ImpersonationLevel);
LABEL_35:
      if ( !v9 )
      {
LABEL_37:
        if ( v5 )
        {
          v26 = (_DWORD *)v10[2];
          if ( v26[48] == 1 || v26 )
            ObfDereferenceObjectWithTag(v26, 0x63436553u);
        }
        return (unsigned int)ClientSecurity;
      }
LABEL_36:
      ObfDereferenceObject(v9);
      goto LABEL_37;
    }
    CurrentThread = KeGetCurrentThread();
    v34 = 0;
    v32 = 0;
    SourceSid = 0LL;
    if ( (struct _KTHREAD *)v19 == CurrentThread )
      Process = CurrentThread->ApcState.Process;
    else
      Process = *(_KPROCESS **)(v19 + 544);
    if ( (*(_DWORD *)(v19 + 1440) & 8) != 0 )
    {
      v39 = *(_QWORD *)(v19 + 544);
      v35 = KeGetCurrentThread();
      --v35->KernelApcDisable;
      v21 = (_BYTE *)KeAbPreAcquire(v19 + 1424, 0LL, 0LL, v18);
      Object = v21;
      v22 = 17LL;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 1424), 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx(
          (signed __int64 *)(v19 + 1424),
          0,
          (LegacyAutoBoost *)v21,
          (struct _KTHREAD *)(v19 + 1424));
        v21 = Object;
      }
      if ( v21 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire((AutoBoost *)v21, (void *)v22);
        else
          v21[10] = 1;
      }
      if ( (*(_DWORD *)(v19 + 1440) & 8) != 0 )
      {
        Object = (PVOID)(*(_QWORD *)(v19 + 1336) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(Object, 0x63436553u);
        v34 = *(_DWORD *)(v19 + 1336) & 3;
        v31 = *(_BYTE *)(v39 + 1530);
        v33 = (*(_BYTE *)(v19 + 1336) & 4) != 0;
        PspUnlockThreadSecurityShared(v19, v35);
        v23 = (__int64 *)Object;
        if ( Object )
        {
          LODWORD(v35) = 2;
          goto LABEL_26;
        }
      }
      else
      {
        PspUnlockThreadSecurityShared(v19, v35);
      }
    }
    v23 = (__int64 *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x63436553u, v17, v18);
    Object = v23;
    LODWORD(v35) = 1;
    v33 = 0;
    v31 = BYTE2(Process[3].ActiveGroupsMask.Masks[1]);
LABEL_26:
    SepReconcileTrustSidWithProcessProtection(v23[138], &v31, &v32, &SourceSid);
    ClientSecurity = SepCreateClientSecurityEx((int)v23, v33, v34, 0, 0LL, v32, SourceSid, (__int64)v42);
    if ( ClientSecurity < 0 || !v9[268] )
      ObfDereferenceObjectWithTag(Object, 0x63436553u);
    goto LABEL_28;
  }
  v27 = (AutoBoost *)KeAbPreAcquire(v14 - 16, 0LL, 0LL, a4);
  v29 = v27;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 - 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v14 - 16), v27, v14 - 16);
  if ( v29 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v29, v28);
    else
      *((_BYTE *)v29 + 10) = 1;
  }
  v30 = *(_DWORD *)(v14 + 104);
  if ( (v30 & 1) == 0 )
  {
    *(_DWORD *)(v14 + 104) = v30 | 2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v14 - 16));
    KeAbPostRelease(v14 - 16);
    v10 = (__int64 *)(v14 + 32);
    goto LABEL_30;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v14 - 16));
  KeAbPostRelease(v14 - 16);
  return 3221225506LL;
}
