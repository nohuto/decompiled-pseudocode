/*
 * XREFs of PspReturnQuota @ 0x1403C7860
 * Callers:
 *     PsReturnProcessQuota @ 0x1403C716C (PsReturnProcessQuota.c)
 *     ObSetSecurityDescriptorInfo @ 0x1408FCFF0 (ObSetSecurityDescriptorInfo.c)
 *     SeDefaultObjectMethod @ 0x1408FD750 (SeDefaultObjectMethod.c)
 *     ObpFreeObject @ 0x1408FF7D0 (ObpFreeObject.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObpIncrementHandleCountEx @ 0x14090A400 (ObpIncrementHandleCountEx.c)
 *     PsReturnSharedPoolQuota @ 0x1409B8E10 (PsReturnSharedPoolQuota.c)
 *     PsChargeSharedPoolQuota @ 0x1409B9190 (PsChargeSharedPoolQuota.c)
 *     PsReturnProcessPageFileQuota @ 0x140A7C890 (PsReturnProcessPageFileQuota.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PspUnlockQuotaExpansion @ 0x1403C7A7C (PspUnlockQuotaExpansion.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

signed __int64 __fastcall PspReturnQuota(__int64 *a1, ULONG_PTR a2, unsigned int a3, ULONG_PTR a4)
{
  __int64 v6; // r14
  ULONG_PTR v8; // r12
  volatile signed __int64 *v9; // rdi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  _KDPC **v12; // r15
  unsigned __int64 v13; // rdx
  __int64 *v14; // r8
  ULONG_PTR BugCheckParameter4; // rcx
  signed __int64 v16; // rdx
  signed __int64 result; // rax
  KSPIN_LOCK *v18; // rcx
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v20; // rax
  AutoBoost *v21; // rdx
  unsigned __int8 v22; // [rsp+30h] [rbp-58h]
  AutoBoost *v23; // [rsp+38h] [rbp-50h]
  __int64 v24; // [rsp+40h] [rbp-48h]
  KIRQL v26; // [rsp+A0h] [rbp+18h]

  v6 = (__int64)(int)a3 << 7;
  v8 = (int)a3;
  v9 = (__int64 *)((char *)a1 + v6);
  v22 = stru_140FC11F0.SchedulerApcFill3[8 * a3 + 40];
  _m_prefetchw((char *)a1 + v6);
  v10 = *(__int64 *)((char *)a1 + v6);
  v11 = *(__int64 *)((char *)a1 + v6 + 64);
  if ( *(__int64 *)((char *)a1 + v6 + 80) )
  {
    v12 = &PsAltSystemCallRegistrationLock.Timer.Dpc + 7 * (int)a3;
    if ( v11 > v10 )
    {
      v13 = (unsigned __int64)v12[1];
      if ( v11 - v10 > v13 )
      {
        if ( v13 > a4 )
          v13 = a4;
        if ( v11 == _InterlockedCompareExchange64(v9 + 8, v11 - v13, v11)
          && v13 + _InterlockedExchangeAdd64(v9 + 9, v13) > (unsigned __int64)v12[1] )
        {
          v24 = _InterlockedExchange64(v9 + 9, 0LL);
          if ( v24 )
          {
            v18 = (KSPIN_LOCK *)(v12 + 2);
            if ( *(_DWORD *)v12 )
            {
              v26 = KeAcquireSpinLockRaiseToDpc(v18);
            }
            else
            {
              CurrentThread = KeGetCurrentThread();
              v26 = 0;
              --CurrentThread->SpecialApcDisable;
              v20 = (AutoBoost *)KeAbPreAcquire((__int64)v18, 0LL, 0LL, (struct _KLOCK_ENTRIES *)a4);
              v23 = v20;
              v21 = v20;
              if ( _interlockedbittestandset64((volatile signed __int32 *)v12 + 4, 0LL) )
              {
                ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v12 + 2, v20, (__int64)(v12 + 2));
                v21 = v23;
              }
              if ( v21 )
              {
                if ( (KiAbpGlobalState & 1) != 0 )
                  AutoBoost::KiAbpPostAcquire(v21, v21);
                else
                  *((_BYTE *)v21 + 10) = 1;
              }
            }
            guard_dispatch_icall_no_overrides(a3, v24);
            PspUnlockQuotaExpansion(&PsAltSystemCallRegistrationLock.Timer.Dpc + 7 * v8, v26);
          }
        }
      }
    }
  }
  v14 = a1;
  BugCheckParameter4 = a4;
  while ( 1 )
  {
    while ( 1 )
    {
      v16 = 0LL;
      if ( BugCheckParameter4 < v10 )
        v16 = v10 - BugCheckParameter4;
      result = _InterlockedCompareExchange64(v9, v16, v10);
      if ( v10 == result )
        break;
      v10 = result;
    }
    if ( BugCheckParameter4 < v10 )
      v10 = BugCheckParameter4;
    BugCheckParameter4 -= v10;
    if ( !BugCheckParameter4 )
      break;
    if ( v14 == &PspSystemQuotaBlock )
      KeBugCheckEx(0x21u, a2, v8, a4, BugCheckParameter4);
    v14 = &PspSystemQuotaBlock;
    v9 = (__int64 *)((char *)&PspSystemQuotaBlock + v6);
    _m_prefetchw((char *)&PspSystemQuotaBlock + v6);
    v10 = *(__int64 *)((char *)&PspSystemQuotaBlock + v6);
  }
  if ( a2 )
  {
    if ( (v22 & 4) != 0 )
      _InterlockedAdd64((volatile signed __int64 *)(a2 + 8 * v8 + 512), -(__int64)a4);
  }
  return result;
}
