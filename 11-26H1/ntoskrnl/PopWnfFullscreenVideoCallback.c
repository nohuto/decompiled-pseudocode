/*
 * XREFs of PopWnfFullscreenVideoCallback @ 0x140B4A430
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1403960E8 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1409C4288 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExpWnfReadStateData @ 0x1409C5AC8 (ExpWnfReadStateData.c)
 */

__int64 __fastcall PopWnfFullscreenVideoCallback(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v5; // rdi
  int v6; // edi
  int v7; // ebx
  __int64 v8; // rdx
  unsigned int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  unsigned int v15; // [rsp+30h] [rbp-28h] BYREF
  int v16; // [rsp+38h] [rbp-20h] BYREF
  __int64 v17; // [rsp+40h] [rbp-18h] BYREF

  v16 = (int)a4;
  v15 = 8;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (struct _EX_RUNDOWN_REF *)ExpWnfAcquireSubscriptionNameInstance(a1, a1, a3, a4);
  if ( !v5 )
  {
    KeLeaveCriticalRegion();
    return (unsigned int)-1073741772;
  }
  v7 = ExpWnfReadStateData((__int64)v5, 0, &v16, (struct _KLOCK_ENTRIES *)&v17, v15, (int *)&v15);
  ExReleaseRundownProtection_0(v5 + 1);
  v6 = 0;
  if ( v7 < 0 )
    v6 = v7;
  KeLeaveCriticalRegion();
  if ( v6 >= 0 )
  {
    if ( v15 < 8 )
      return 0;
    PpmAcquireLock((struct _KTHREAD **)&qword_140F12AA0, v8, v9);
    if ( *((_BYTE *)&PpmIdlePolicyLock.ForegroundLossTime + 6) )
    {
      if ( (v17 & 2) == 0 )
      {
LABEL_12:
        *((_BYTE *)&PpmIdlePolicyLock.ForegroundLossTime + 6) = (v17 & 2) != 0;
        PoFxSendSystemLatencyUpdate(v11, v10, v12, v13);
      }
    }
    else if ( (v17 & 2) != 0 )
    {
      goto LABEL_12;
    }
    PpmReleaseLock(&qword_140F12AA0);
  }
  return (unsigned int)v6;
}
