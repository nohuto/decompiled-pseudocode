/*
 * XREFs of RtlpHpSegMgrCommitInitiate @ 0x140468900
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x140350BD0 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     RtlpHpReleaseLockExclusive @ 0x14034F380 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x140468B24 (RtlpHpSegMgrApplyLargePagePolicy.c)
 */

__int64 __fastcall RtlpHpSegMgrCommitInitiate(
        __int64 a1,
        volatile signed __int16 *a2,
        int a3,
        char a4,
        struct _KTHREAD *SpinLock,
        KIRQL *a6)
{
  unsigned __int16 v6; // bx
  int v7; // esi
  int v8; // r14d
  KIRQL v9; // bp
  char i; // r11
  struct _KLOCK_ENTRIES *v12; // r9
  __int16 v13; // di
  __int16 v14; // r13
  signed __int16 v15; // di
  __int16 v16; // r12
  struct _KTHREAD *CurrentThread; // rax
  void *v18; // rdx
  AutoBoost *v19; // rbp
  signed __int16 v20; // ax
  unsigned int v21; // esi
  bool v23; // zf
  int v24; // eax
  __int64 v25; // [rsp+70h] [rbp+8h]
  volatile signed __int16 *v26; // [rsp+78h] [rbp+10h]

  v26 = a2;
  v25 = a1;
  v6 = *a2;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  for ( i = a4; ; i = a4 )
  {
    while ( 1 )
    {
      v12 = (struct _KLOCK_ENTRIES *)v6;
      v13 = v6;
      v14 = v6;
      if ( a3 <= 0 )
        break;
      if ( (v6 & 0x4000) == 0 )
      {
        if ( (v6 & 0x7FF) == 0 )
        {
          if ( (i & 3) != 0 )
          {
            v23 = (i & 2) == 0;
          }
          else
          {
            v24 = RtlpHpSegMgrApplyLargePagePolicy(a1, a2, v6, v6);
            a2 = v26;
            v23 = v24 == 0;
            a1 = v25;
          }
          if ( !v23 )
            v13 = v6 | 0x4000;
        }
LABEL_5:
        v15 = a3 + v13;
        goto LABEL_6;
      }
      _mm_pause();
      v6 = *a2;
    }
    if ( (v6 & 0x8000u) == 0 )
    {
      v21 = -1073741567;
      goto LABEL_21;
    }
    v12 = (struct _KLOCK_ENTRIES *)(a3 + (v6 & 0x7FFu));
    if ( (_DWORD)v12 )
      goto LABEL_5;
    v15 = v6 | 0x4000;
LABEL_6:
    v16 = v15 & 0x4000;
    if ( (v15 & 0x4000) != 0 )
    {
      v8 = 1;
      if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
      {
        v9 = ExAcquireSpinLockExclusive(&SpinLock->Header.Lock);
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        v19 = (AutoBoost *)KeAbPreAcquire((__int64)SpinLock, 0LL, 0LL, v12);
        if ( _interlockedbittestandset64(&SpinLock->Header.Lock, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)SpinLock, v19, (__int64)SpinLock);
        if ( v19 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v19, v18);
          else
            *((_BYTE *)v19 + 10) = 1;
        }
        v9 = -1;
      }
      a2 = v26;
    }
    v20 = _InterlockedCompareExchange16(a2, v15, v6);
    v23 = v6 == (unsigned __int16)v20;
    v6 = v20;
    if ( v23 )
      break;
    if ( v8 )
    {
      RtlpHpReleaseLockExclusive(SpinLock, *(_DWORD *)(v25 + 40) & 1, v9);
      a2 = v26;
      v8 = 0;
    }
    a1 = v25;
  }
  if ( a3 <= 0 )
  {
    v21 = -1073741568;
    if ( v16 )
      v21 = -1073741566;
  }
  else if ( v14 < 0 )
  {
    v21 = -1073741568;
  }
  else
  {
    LOBYTE(v7) = v16 != 0;
    v21 = v7 - 1073741567;
  }
LABEL_21:
  if ( v8 )
    *a6 = v9;
  return v21;
}
