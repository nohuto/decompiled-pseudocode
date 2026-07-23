/*
 * XREFs of SshpTracingRundownCollectionState @ 0x140B15A34
 * Callers:
 *     SshpEtwEnableCallback @ 0x140B158E0 (SshpEtwEnableCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     SSHSupportEtwEventEnabled @ 0x1404A885C (SSHSupportEtwEventEnabled.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404AC97C (SSHSupportReleasePushLockExclusive.c)
 *     SSHSupportEtwWrite @ 0x1404D54FC (SSHSupportEtwWrite.c)
 *     SSHSupportQueryInterruptTime @ 0x1404E2358 (SSHSupportQueryInterruptTime.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall SshpTracingRundownCollectionState(__int64 a1)
{
  struct _KLOCK_ENTRIES *v1; // r9
  struct _KTHREAD *v2; // rbx
  __int64 v3; // rsi
  AutoBoost *v4; // rax
  void *v5; // rdx
  AutoBoost *v6; // rdi
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // [rsp+38h] [rbp-19h] BYREF
  int v12; // [rsp+3Ch] [rbp-15h] BYREF
  __int64 InterruptTime; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+48h] [rbp-9h] BYREF
  __int64 *p_InterruptTime; // [rsp+58h] [rbp+7h]
  __int64 v16; // [rsp+60h] [rbp+Fh]
  int *v17; // [rsp+68h] [rbp+17h]
  __int64 v18; // [rsp+70h] [rbp+1Fh]
  int *v19; // [rsp+78h] [rbp+27h]
  __int64 v20; // [rsp+80h] [rbp+2Fh]
  struct _LIST_ENTRY *v21; // [rsp+88h] [rbp+37h]
  int v22; // [rsp+90h] [rbp+3Fh]
  int v23; // [rsp+94h] [rbp+43h]

  v12 = 0;
  v11 = 0;
  InterruptTime = 0LL;
  if ( SSHSupportEtwEventEnabled(a1, (const EVENT_DESCRIPTOR *)SLEEPSTUDY_EVT_COLLECTION_STATE_RUNDOWN) )
  {
    v2 = &SshpBlockerCollections;
    v3 = 9LL;
    do
    {
      v4 = (AutoBoost *)KeAbPreAcquire((__int64)v2, 0LL, 0LL, v1);
      v6 = v4;
      if ( _interlockedbittestandset64(&v2->Header.Lock, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v2, v4, (__int64)v2);
      if ( v6 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v6, v5);
        else
          *((_BYTE *)v6 + 10) = 1;
      }
      Blink = v2->Header.WaitListHead.Blink;
      v12 = HIDWORD(v2->SListFaultAddress) & 1;
      v8 = -1LL;
      do
        ++v8;
      while ( *((_WORD *)&Blink->Flink + v8) );
      v11 = v8;
      InterruptTime = SSHSupportQueryInterruptTime();
      v14.Ptr = (ULONGLONG)v2->Header.WaitListHead.Flink;
      p_InterruptTime = &InterruptTime;
      v17 = &v12;
      v19 = &v11;
      v21 = v2->Header.WaitListHead.Blink;
      *(_QWORD *)&v14.Size = 16LL;
      v22 = 2 * v11;
      v16 = 8LL;
      v18 = 4LL;
      v20 = 4LL;
      v23 = 0;
      SSHSupportEtwWrite(v9, (const EVENT_DESCRIPTOR *)SLEEPSTUDY_EVT_COLLECTION_STATE_RUNDOWN, v10, 5u, &v14);
      SSHSupportReleasePushLockExclusive(v2);
      v2 = (struct _KTHREAD *)((char *)v2 + 48);
      --v3;
    }
    while ( v3 );
  }
}
