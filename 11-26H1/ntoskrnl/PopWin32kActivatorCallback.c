/*
 * XREFs of PopWin32kActivatorCallback @ 0x1407CCC90
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopWin32kActivatorCallback(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v5; // ebx
  int v6; // ebx
  __int64 result; // rax
  _OWORD v8[3]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]
  int v10; // [rsp+78h] [rbp+10h] BYREF

  if ( (_DWORD)a2 == 100 )
  {
    v10 = 0;
    v5 = (unsigned int)a4;
    PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12420.SchedulerAssistPriorityFloor, a2, a3, a4);
    v6 = *((_DWORD *)&stru_140F12420.KernelShadowStackBase + v5);
    result = PopReleaseRwLock((struct _KTHREAD *)&stru_140F12420.SchedulerAssistPriorityFloor);
    if ( v6 )
    {
      v8[0] = 0x12C00000001uLL;
      v9 = 0LL;
      memset(&v8[1], 0, 32);
      return Pdcv2ActivationClientRenewActivation(a1, v8, &v10);
    }
  }
  return result;
}
