/*
 * XREFs of PopWnfAudioCallback @ 0x1409C24C0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PopGetDozeTimerSource @ 0x14060FC08 (PopGetDozeTimerSource.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14077F42C (PopUpdateSmartUserPresencePredictions.c)
 *     PopAudioAccountingCallback @ 0x1409C20B0 (PopAudioAccountingCallback.c)
 *     PopPowerRequestNotifyAudioStateChanged @ 0x1409C2104 (PopPowerRequestNotifyAudioStateChanged.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1409C4288 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExpWnfReadStateData @ 0x1409C5AC8 (ExpWnfReadStateData.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopWnfAudioCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v5; // rdi
  int v6; // ebx
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // [rsp+20h] [rbp-38h]
  unsigned int v19; // [rsp+30h] [rbp-28h] BYREF
  int v20; // [rsp+38h] [rbp-20h] BYREF
  _BYTE v21[8]; // [rsp+40h] [rbp-18h] BYREF

  v20 = a4;
  v19 = 8;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (struct _EX_RUNDOWN_REF *)ExpWnfAcquireSubscriptionNameInstance(a1, a1);
  if ( v5 )
  {
    v6 = ((__int64 (__fastcall *)(struct _EX_RUNDOWN_REF *, _QWORD, int *, _BYTE *, unsigned int, unsigned int *))ExpWnfReadStateData)(
           v5,
           0LL,
           &v20,
           v21,
           v19,
           &v19);
    ExReleaseRundownProtection_0(v5 + 1);
    v7 = 0;
    if ( v6 < 0 )
      v7 = v6;
    KeLeaveCriticalRegion();
    if ( v7 >= 0 )
    {
      if ( v19 < 8 )
      {
        return 0;
      }
      else
      {
        PopAcquirePolicyLock(v9, v8);
        if ( (v21[0] & 2) != 0 )
        {
          *((_BYTE *)&PpmIdlePolicyLock.ForegroundLossTime + 5) = 1;
          PopAudioAccountingCallback(1);
          if ( (unsigned int)PopGetDozeTimerSource() == 2 )
            PopUpdateSmartUserPresencePredictions(0LL, 5u);
        }
        else
        {
          *((_BYTE *)&PpmIdlePolicyLock.ForegroundLossTime + 5) = 0;
          PopAudioAccountingCallback(0);
        }
        PopPowerRequestNotifyAudioStateChanged(*((char *)&PpmIdlePolicyLock.ForegroundLossTime + 5), v10, v11, v12);
        PopReleasePolicyLock(v14, v13, v15, v16, v18);
      }
    }
  }
  else
  {
    KeLeaveCriticalRegion();
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v7;
}
