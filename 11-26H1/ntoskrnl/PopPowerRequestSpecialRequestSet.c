/*
 * XREFs of PopPowerRequestSpecialRequestSet @ 0x140AF4534
 * Callers:
 *     PopPowerRequestActionInfo @ 0x140AF441C (PopPowerRequestActionInfo.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     PsReleaseProcessWakeCounter @ 0x14098F1E0 (PsReleaseProcessWakeCounter.c)
 *     PsChargeProcessWakeCounter @ 0x14098F230 (PsChargeProcessWakeCounter.c)
 *     PopAcquirePowerRequestPushLock @ 0x140AEFCB4 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopPowerRequestSpecialRequestSet(__int64 a1, int a2, ULONG_PTR a3)
{
  char v3; // r14
  int v5; // ebx
  PVOID v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  Object = 0LL;
  if ( a2 == 3 && *(_BYTE *)(a1 + 152) )
  {
    v5 = ObpReferenceObjectByHandleWithTag(a3, 0x2000, (__int64)PsProcessType, 1, 0x72506F50u, &Object, 0LL, 0LL);
    if ( v5 >= 0 )
    {
      v6 = Object;
      v7 = PsChargeProcessWakeCounter(Object);
      PopAcquirePowerRequestPushLock(1, v8, v9, v10);
      if ( *(_QWORD *)(a1 + 136) )
      {
        v3 = 1;
        v5 = -1073741811;
      }
      else
      {
        *(_QWORD *)(a1 + 136) = v6;
        v5 = 0;
        *(_QWORD *)(a1 + 144) = v7;
      }
      PopReleaseRwLock((struct _KTHREAD *)stru_140F12EA0.TracingPrivate);
      if ( v3 )
      {
        if ( v7 )
          PsReleaseProcessWakeCounter(v7);
        ObfDereferenceObjectWithTag(v6, 0x72506F50u);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
