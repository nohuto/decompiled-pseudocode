/*
 * XREFs of PopWnfSprActiveSessionChangeCallback @ 0x1409C3520
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1409C4288 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExpWnfReadStateData @ 0x1409C5AC8 (ExpWnfReadStateData.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409F9E70 (PopSetPowerSettingValueAcDc.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopWnfSprActiveSessionChangeCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v5; // rdi
  int v6; // ebx
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // [rsp+20h] [rbp-40h]
  unsigned int v17; // [rsp+30h] [rbp-30h] BYREF
  int v18; // [rsp+38h] [rbp-28h] BYREF
  __int128 v19; // [rsp+40h] [rbp-20h] BYREF
  char v20; // [rsp+50h] [rbp-10h]

  v18 = a4;
  v20 = 0;
  v19 = 0LL;
  v17 = 20;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (struct _EX_RUNDOWN_REF *)ExpWnfAcquireSubscriptionNameInstance(a1, a1);
  if ( v5 )
  {
    v6 = ((__int64 (__fastcall *)(struct _EX_RUNDOWN_REF *, _QWORD, int *, __int128 *, unsigned int, unsigned int *))ExpWnfReadStateData)(
           v5,
           0LL,
           &v18,
           &v19,
           v17,
           &v17);
    ExReleaseRundownProtection_0(v5 + 1);
    v7 = 0;
    if ( v6 < 0 )
      v7 = v6;
    KeLeaveCriticalRegion();
    v10 = v7;
    if ( v7 >= 0 && v17 == 20 )
    {
      PopAcquirePolicyLock(v9, v8);
      PopSetPowerSettingValueAcDc(&GUID_SPR_ACTIVE_SESSION_CHANGE, v17, &v19);
      PopReleasePolicyLock(v13, v12, v14, v15, v16);
    }
  }
  else
  {
    v10 = -1073741772;
    KeLeaveCriticalRegion();
  }
  return v10;
}
