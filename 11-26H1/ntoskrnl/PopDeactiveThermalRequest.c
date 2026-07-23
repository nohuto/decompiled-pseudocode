/*
 * XREFs of PopDeactiveThermalRequest @ 0x1407CEB98
 * Callers:
 *     PoDeleteThermalRequest @ 0x1407CE710 (PoDeleteThermalRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     PopPropogateCoolingChange @ 0x140424D08 (PopPropogateCoolingChange.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalRequestActiveActivity @ 0x1404255AC (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1404258E0 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopGetDope @ 0x140427090 (PopGetDope.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x14060A834 (PopThermalUpdateTelemetryClientCount.c)
 *     PopCleanCoolingExtension @ 0x1407CEA70 (PopCleanCoolingExtension.c)
 *     PopDiagTraceCoolingExtension @ 0x140AC37E0 (PopDiagTraceCoolingExtension.c)
 *     PopDiagTraceThermalRequest @ 0x140AC398C (PopDiagTraceThermalRequest.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140B31158 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140B43630 (PopThermalUpdateActiveTimeTracking.c)
 */

void __fastcall PopDeactiveThermalRequest(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  _QWORD *v4; // rbx
  char v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  struct _KLOCK_ENTRIES *v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  struct _KLOCK_ENTRIES *v27; // r9
  __int64 v28; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v4 = *(_QWORD **)(a1 + 32);
  memset(&Event, 0, sizeof(Event));
  v6 = 0;
  PopAcquireRwLockExclusive(v4 + 4, a2, a3, a4);
  if ( *(_BYTE *)(a1 + 18) )
  {
    if ( v4[17] )
    {
      LOBYTE(v7) = *(_BYTE *)(a1 + 16);
      PopThermalUpdatePassiveTimeTracking(a1 + 40, v7);
      PopTraceThermalRequestPassiveHistogram(a1);
      PopThermalUpdateTelemetryClientCount(0, v8, v9, v10);
    }
    if ( v4[16] )
    {
      LOBYTE(v7) = *(_BYTE *)(a1 + 17) == 0;
      PopThermalUpdateActiveTimeTracking(a1 + 40, v7);
      PopTraceThermalRequestActiveActivity(a1);
    }
    PopDiagTraceThermalRequest(a1, POP_ETW_EVENT_THERMAL_REQUEST_REMOVE);
    *(_BYTE *)(a1 + 18) = 0;
    PopPropogateCoolingChange((__int64)v4);
  }
  PopReleaseRwLock((struct _KTHREAD *)(v4 + 4));
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopCoolingExtensionLock, v11, v12, v13);
  PopAcquireRwLockExclusive(v4 + 4, v14, v15, v16);
  v17 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 )
    goto LABEL_22;
  v18 = *(_QWORD **)(a1 + 8);
  if ( *v18 != a1 )
    goto LABEL_22;
  *v18 = v17;
  *(_QWORD *)(v17 + 8) = v18;
  if ( (_QWORD *)v4[2] != v4 + 2 )
    goto LABEL_17;
  v19 = v4[6];
  if ( v19 )
  {
    *(_QWORD *)(PopGetDope(v19) + 64) = 0LL;
    if ( *((_BYTE *)v4 + 64) )
      PopDiagTraceCoolingExtension(v4, POP_ETW_EVENT_COOLING_EXTENSION_REMOVE);
    v20 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) == v4 )
    {
      v21 = (_QWORD *)v4[1];
      if ( (_QWORD *)*v21 == v4 )
      {
        *v21 = v20;
        *(_QWORD *)(v20 + 8) = v21;
        *v4 = 0LL;
        goto LABEL_16;
      }
    }
LABEL_22:
    __fastfail(3u);
  }
LABEL_16:
  v6 = 1;
LABEL_17:
  PopReleaseRwLock((struct _KTHREAD *)(v4 + 4));
  PopReleaseRwLock((struct _KTHREAD *)&PopCoolingExtensionLock);
  if ( v6 )
  {
    PopAcquireRwLockExclusive(v4 + 4, v22, v23, v24);
    if ( *((_BYTE *)v4 + 67) )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v4[9] = &Event;
      PopReleaseRwLock((struct _KTHREAD *)(v4 + 4));
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      PopAcquireRwLockExclusive(v4 + 4, v25, v26, v27);
      v4[9] = 0LL;
    }
    PopReleaseRwLock((struct _KTHREAD *)(v4 + 4));
    PopCleanCoolingExtension(v4, v28);
  }
}
