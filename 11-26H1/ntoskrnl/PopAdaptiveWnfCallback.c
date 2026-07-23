/*
 * XREFs of PopAdaptiveWnfCallback @ 0x140B4F200
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     PopAdaptiveConsoleSessionOverrideClear @ 0x1407E2104 (PopAdaptiveConsoleSessionOverrideClear.c)
 *     PopAdaptiveConsoleSessionOverrideTrigger @ 0x1407E2184 (PopAdaptiveConsoleSessionOverrideTrigger.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1409C4288 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExpWnfReadStateData @ 0x1409C5AC8 (ExpWnfReadStateData.c)
 *     PopReleaseAdaptiveLock @ 0x1409F9104 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x140ABAFAC (PopAcquireAdaptiveLock.c)
 */

__int64 __fastcall PopAdaptiveWnfCallback(__int64 a1, const void *a2, __int64 a3, int a4)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v9; // rdi
  int v10; // edi
  int v11; // ebx
  int v12; // r8d
  int v13; // r9d
  unsigned int v15; // [rsp+30h] [rbp-30h] BYREF
  int v16; // [rsp+38h] [rbp-28h] BYREF
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF

  v16 = a4;
  v17 = 0LL;
  if ( memcmp(a2, &WNF_HPM_GLOBAL_HUMAN_PRESENCE_STATE, 8uLL) )
    return (unsigned int)-1073741637;
  v15 = 16;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = (struct _EX_RUNDOWN_REF *)ExpWnfAcquireSubscriptionNameInstance(v5, a1, v6, v7);
  if ( !v9 )
  {
    KeLeaveCriticalRegion();
    return (unsigned int)-1073741772;
  }
  v11 = ExpWnfReadStateData((__int64)v9, 0, &v16, (struct _KLOCK_ENTRIES *)&v17, v15, (int *)&v15);
  ExReleaseRundownProtection_0(v9 + 1);
  v10 = 0;
  if ( v11 < 0 )
    v10 = v11;
  KeLeaveCriticalRegion();
  if ( v10 >= 0 )
  {
    if ( v15 < 0x10 )
      return (unsigned int)-1073741811;
    if ( !PopConsoleSession || !DWORD2(v17) || SDWORD2(v17) >= 3 )
      return 0;
    PopAcquireAdaptiveLock(0);
    if ( DWORD2(v17) == 2 )
    {
      v12 = PopAdaptiveSensorInattentiveDisplayTimeout;
      if ( PopAdaptiveSensorInattentiveDisplayTimeout || PopAdaptiveSensorInattentiveDimTimeout )
      {
        v13 = PopAdaptiveSensorInattentiveDimTimeout;
LABEL_20:
        PopAdaptiveConsoleSessionOverrideTrigger(v17, 0, v12, v13);
LABEL_22:
        PopReleaseAdaptiveLock();
        return 0;
      }
    }
    else if ( DWORD2(v17) == 1 )
    {
      v12 = PopAdaptiveSensorAwayDisplayTimeout;
      if ( PopAdaptiveSensorAwayDisplayTimeout || PopAdaptiveSensorAwayDimTimeout )
      {
        v13 = PopAdaptiveSensorAwayDimTimeout;
        goto LABEL_20;
      }
    }
    PopAdaptiveConsoleSessionOverrideClear(0, 2);
    goto LABEL_22;
  }
  return (unsigned int)v10;
}
