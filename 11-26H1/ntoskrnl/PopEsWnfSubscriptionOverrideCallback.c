/*
 * XREFs of PopEsWnfSubscriptionOverrideCallback @ 0x140947CB0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopEsWorkItemSchedule @ 0x140947B64 (PopEsWorkItemSchedule.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140948918 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExpWnfReadStateData @ 0x14094A158 (ExpWnfReadStateData.c)
 */

__int64 __fastcall PopEsWnfSubscriptionOverrideCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v5; // rdi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  int v10; // ecx
  int v12[6]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = a4;
  v13 = 0;
  v12[0] = 4;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (struct _EX_RUNDOWN_REF *)ExpWnfAcquireSubscriptionNameInstance(a1, a1);
  if ( v5 )
  {
    v6 = ((__int64 (__fastcall *)(struct _EX_RUNDOWN_REF *, _QWORD, int *, unsigned int *, int, int *))ExpWnfReadStateData)(
           v5,
           0LL,
           &v14,
           &v13,
           v12[0],
           v12);
    ExReleaseRundownProtection_0(v5 + 1);
    KeLeaveCriticalRegion();
    v10 = 0;
    if ( v6 < 0 )
      v10 = v6;
    if ( v10 >= 0 && v13 <= 2 )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopModernStandbyStateNotify.MutantListHead.Blink, v7, v8, v9);
      PopEsMode = v13;
      PopReleaseRwLock((struct _KTHREAD *)&PopModernStandbyStateNotify.MutantListHead.Blink);
      PopEsWorkItemSchedule(2);
    }
  }
  else
  {
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
