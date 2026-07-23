/*
 * XREFs of AlpcpReceiveLegacyMessage @ 0x140ACE0BC
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x1407C2FD0 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ObReferenceObjectSafe @ 0x140441D40 (ObReferenceObjectSafe.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     AlpcpGetDataFromMessage @ 0x1408EC974 (AlpcpGetDataFromMessage.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x140925A30 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 *     AlpcpReceiveMessagePort @ 0x140ACE424 (AlpcpReceiveMessagePort.c)
 *     AlpcpCancelMessage @ 0x140ACF05C (AlpcpCancelMessage.c)
 */

__int64 __fastcall AlpcpReceiveLegacyMessage(_QWORD *a1, unsigned __int64 a2, __int64 *a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 *p_ULong64FromUser; // r13
  int v7; // r10d
  struct _KTHREAD *CurrentThread; // rdx
  void *v9; // r15
  __int64 v10; // rax
  void *v11; // rsi
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  unsigned int v14; // r13d
  void **v16; // r15
  volatile signed __int64 *v17; // rdi
  void *v18; // rdx
  LegacyAutoBoost *v19; // rsi
  ULONG_PTR v20; // rdi
  void *v21; // rdx
  char PreviousMode; // [rsp+30h] [rbp-98h]
  bool v23; // [rsp+34h] [rbp-94h]
  ULONG_PTR v24; // [rsp+38h] [rbp-90h] BYREF
  __int64 *v25; // [rsp+40h] [rbp-88h]
  void *v26; // [rsp+48h] [rbp-80h]
  _QWORD *v27; // [rsp+58h] [rbp-70h]
  __int64 ULong64FromUser; // [rsp+60h] [rbp-68h] BYREF
  void *v29; // [rsp+68h] [rbp-60h]
  unsigned __int64 v30; // [rsp+70h] [rbp-58h]
  struct _KTHREAD *v31; // [rsp+78h] [rbp-50h]
  struct _KLOCK_ENTRIES *v32; // [rsp+80h] [rbp-48h]
  __int64 *v33; // [rsp+88h] [rbp-40h]

  v32 = a4;
  LODWORD(p_ULong64FromUser) = (_DWORD)a3;
  v25 = a3;
  v7 = (int)a1;
  v27 = a1;
  v30 = a2;
  v24 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v31 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v23 = PreviousMode;
  ULong64FromUser = 0LL;
  v9 = (void *)*a1;
  v26 = (void *)*a1;
  if ( PreviousMode )
  {
    if ( a3 )
    {
      ULong64FromUser = RtlReadULong64FromUser(a3);
      p_ULong64FromUser = &ULong64FromUser;
      v25 = &ULong64FromUser;
      v33 = &ULong64FromUser;
    }
    if ( a2 )
      AlpcpProbeForWriteMessageHeader(a2, 0);
    if ( a4 )
    {
      v10 = RtlReadULong64FromUser(a4);
      RtlWriteULong64ToUser(a4, v10);
    }
    v7 = (int)v27;
  }
  else
  {
    v23 = (CurrentThread->MiscFlags & 0x400) != 0;
  }
  v11 = 0LL;
  v29 = 0LL;
  if ( (*((_BYTE *)v9 + 416) & 6) == 6 )
  {
    v16 = (void **)*((_QWORD *)v9 + 2);
    v17 = (volatile signed __int64 *)(v16 - 2);
    v19 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v16 - 2), 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v16 - 2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)v16 - 2, 0, v19, (struct _KTHREAD *)(v16 - 2));
    if ( v19 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v19, v18);
      else
        *((_BYTE *)v19 + 10) = 1;
    }
    v11 = *v16;
    v29 = v11;
    if ( v11 && ObReferenceObjectSafe((__int64)v11) )
    {
      if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v16 - 2);
      KeAbPostRelease((unsigned __int64)(v16 - 2));
      v9 = v11;
      v26 = v11;
      v7 = (int)v27;
      *v27 = v11;
      goto LABEL_10;
    }
    if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v16 - 2);
    KeAbPostRelease((unsigned __int64)(v16 - 2));
    return 3221225527LL;
  }
  else
  {
    while ( 1 )
    {
LABEL_10:
      LOBYTE(CurrentThread) = v23;
      v14 = AlpcpReceiveMessagePort(v7, (_DWORD)CurrentThread, (_DWORD)p_ULong64FromUser, (unsigned int)&v24, 0);
      if ( v14 )
      {
        v24 = 0LL;
        goto LABEL_12;
      }
      v20 = v24;
      if ( (*(_DWORD *)(v24 + 40) & 0x80u) != 0 )
      {
        if ( *(void **)(v24 + 64) == v9 )
        {
          *(_QWORD *)(v24 + 64) = 0LL;
          *(_QWORD *)(v20 + 56) = 0LL;
        }
        AlpcpCancelMessage(v9, v20, 0x10000LL);
        v20 = 0LL;
        v24 = 0LL;
      }
      if ( v20 )
        break;
      LODWORD(p_ULong64FromUser) = (_DWORD)v25;
      v7 = (int)v27;
    }
    v25 = (__int64 *)(v20 + 200);
    *(_QWORD *)(v20 + 200) = v31;
    if ( a2 )
    {
      v21 = (void *)(v20 + 240);
      if ( PreviousMode )
        RtlCopyToUser((void *)a2, v21, 0x28uLL);
      else
        RtlCopyVolatileMemory((void *)a2, v21, 0x28uLL);
      if ( (*((_DWORD *)v9 + 64) & 0x1000) != 0 )
        *(_WORD *)(a2 + 4) = *(_WORD *)(v20 + 244) & 0xC00F;
      AlpcpGetDataFromMessage(v20, (char *)(a2 + 40), PreviousMode);
    }
    if ( v32 )
    {
      if ( PreviousMode )
        RtlWriteULong64ToUser(v32, *(_QWORD *)(v20 + 120));
      else
        v32->Thread = *(_KTHREAD **)(v20 + 120);
    }
    if ( a2 )
    {
      AlpcpUnlockMessage(v20, (__int64)CurrentThread, v12, v13);
    }
    else
    {
      *(_QWORD *)(v20 + 200) = 0LL;
      AlpcpCancelMessage(v9, v20, 0x10000LL);
    }
LABEL_12:
    if ( v11 )
      ObfDereferenceObject(v11);
    return v14;
  }
}
