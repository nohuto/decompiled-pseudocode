/*
 * XREFs of PopWnfAudioCallback @ 0x140946B50
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     PopGetDozeTimerSource @ 0x14060CAA8 (PopGetDozeTimerSource.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14077C938 (PopUpdateSmartUserPresencePredictions.c)
 *     PopAudioAccountingCallback @ 0x140946740 (PopAudioAccountingCallback.c)
 *     PopPowerRequestNotifyAudioStateChanged @ 0x140946794 (PopPowerRequestNotifyAudioStateChanged.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140948918 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExpWnfReadStateData @ 0x14094A158 (ExpWnfReadStateData.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
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
          byte_140F1070D = 1;
          PopAudioAccountingCallback(1);
          if ( (unsigned int)PopGetDozeTimerSource() == 2 )
            PopUpdateSmartUserPresencePredictions(0LL, 5u);
        }
        else
        {
          byte_140F1070D = 0;
          PopAudioAccountingCallback(0);
        }
        PopPowerRequestNotifyAudioStateChanged(byte_140F1070D, v10, v11, v12);
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
