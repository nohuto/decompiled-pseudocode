/*
 * XREFs of PopFreePowerLimitRequest @ 0x1407CDE7C
 * Callers:
 *     PoCreatePowerLimitRequest @ 0x1407CD340 (PoCreatePowerLimitRequest.c)
 *     PoDeletePowerLimitRequest @ 0x1407CD420 (PoDeletePowerLimitRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopGetDope @ 0x140427090 (PopGetDope.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     PoDestroyReasonContext @ 0x140503E30 (PoDestroyReasonContext.c)
 *     PopCleanPowerLimitExtension @ 0x140606490 (PopCleanPowerLimitExtension.c)
 *     PopUpdatePowerLimitTimeTracking @ 0x140606528 (PopUpdatePowerLimitTimeTracking.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x14060A834 (PopThermalUpdateTelemetryClientCount.c)
 *     PopTracePowerLimitHistogram @ 0x14060C8BC (PopTracePowerLimitHistogram.c)
 *     PopEvaluatePowerLimitChange @ 0x1407CDC04 (PopEvaluatePowerLimitChange.c)
 *     PopDiagTracePowerLimitRequest @ 0x1407D74B0 (PopDiagTracePowerLimitRequest.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFreePowerLimitRequest(_QWORD *P, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  unsigned int i; // ebp
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  char v13; // bp
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9
  _QWORD *v20; // rcx
  PVOID *v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 **v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  struct _KLOCK_ENTRIES *v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  struct _KLOCK_ENTRIES *v30; // r9
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  void *v33; // rcx
  void *v34; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerLimitExtensionLock, a2, a3, a4);
  v5 = (unsigned __int64 *)P[8];
  if ( !v5 )
    goto LABEL_23;
  PopReleaseRwLock((struct _KTHREAD *)&PopPowerLimitExtensionLock);
  PopAcquireRwLockExclusive(v5 + 4, v6, v7, v8);
  if ( *((_BYTE *)P + 16) )
  {
    *((_BYTE *)P + 16) = 0;
    PopDiagTracePowerLimitRequest(P, POP_ETW_EVENT_POWER_LIMIT_REQUEST_REMOVE);
    if ( *((_BYTE *)P + 48) )
    {
      for ( i = 0; i < *((_DWORD *)P + 8); ++i )
        PopUpdatePowerLimitTimeTracking((__int64)P, i);
      PopTracePowerLimitHistogram((__int64)P);
      PopThermalUpdateTelemetryClientCount(0, v10, v11, v12);
      *((_BYTE *)P + 48) = 0;
    }
    PopEvaluatePowerLimitChange((__int64)v5);
  }
  PopReleaseRwLock((struct _KTHREAD *)(v5 + 4));
  v13 = 0;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerLimitExtensionLock, v14, v15, v16);
  PopAcquireRwLockExclusive(v5 + 4, v17, v18, v19);
  if ( P[8] )
  {
    v20 = (_QWORD *)*P;
    if ( *(_QWORD **)(*P + 8LL) != P )
      goto LABEL_30;
    v21 = (PVOID *)P[1];
    if ( *v21 != P )
      goto LABEL_30;
    *v21 = v20;
    v20[1] = v21;
    P[8] = 0LL;
    if ( (unsigned __int64 *)v5[2] == v5 + 2 )
    {
      v22 = v5[7];
      if ( !v22 )
      {
LABEL_16:
        v13 = 1;
        goto LABEL_17;
      }
      *(_QWORD *)(PopGetDope(v22) + 72) = 0LL;
      v23 = *v5;
      if ( *(unsigned __int64 **)(*v5 + 8) == v5 )
      {
        v24 = (unsigned __int64 **)v5[1];
        if ( *v24 == v5 )
        {
          *v24 = (unsigned __int64 *)v23;
          *(_QWORD *)(v23 + 8) = v24;
          *v5 = 0LL;
          goto LABEL_16;
        }
      }
LABEL_30:
      __fastfail(3u);
    }
  }
LABEL_17:
  PopReleaseRwLock((struct _KTHREAD *)(v5 + 4));
  PopReleaseRwLock((struct _KTHREAD *)&PopPowerLimitExtensionLock);
  if ( v13 )
  {
    PopAcquireRwLockExclusive(v5 + 4, v25, v26, v27);
    if ( *((_DWORD *)v5 + 44) || *((_DWORD *)v5 + 45) )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v5[23] = (unsigned __int64)&Event;
      PopReleaseRwLock((struct _KTHREAD *)(v5 + 4));
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      PopAcquireRwLockExclusive(v5 + 4, v28, v29, v30);
      v5[23] = 0LL;
    }
    PopReleaseRwLock((struct _KTHREAD *)(v5 + 4));
    PopCleanPowerLimitExtension(v5, v31);
  }
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerLimitExtensionLock, v25, v26, v27);
LABEL_23:
  v32 = (_QWORD *)P[3];
  if ( v32 )
  {
    PoDestroyReasonContext(v32);
    P[3] = 0LL;
  }
  v33 = (void *)P[7];
  if ( v33 )
  {
    ExFreePoolWithTag(v33, 0x6D6C5050u);
    P[7] = 0LL;
  }
  v34 = (void *)P[5];
  if ( v34 )
  {
    ExFreePoolWithTag(v34, 0x6D6C5050u);
    P[5] = 0LL;
  }
  ExFreePoolWithTag(P, 0x6D6C5050u);
  return PopReleaseRwLock((struct _KTHREAD *)&PopPowerLimitExtensionLock);
}
