/*
 * XREFs of RaidAdapterDeferredRoutine @ 0x140028880
 * Callers:
 *     <none>
 * Callees:
 *     RaidResumeAdapterQueue @ 0x140010650 (RaidResumeAdapterQueue.c)
 *     RaidAdapterRestartQueues @ 0x140010F40 (RaidAdapterRestartQueues.c)
 *     RaidAdapterResumeUnit @ 0x140028A9C (RaidAdapterResumeUnit.c)
 *     RaidAdapterPauseUnit @ 0x140028B48 (RaidAdapterPauseUnit.c)
 *     RaidAdapterRequestTimer @ 0x1400299B0 (RaidAdapterRequestTimer.c)
 *     RaidAdapterCancelPauseTimer @ 0x1400495EC (RaidAdapterCancelPauseTimer.c)
 *     RaidFreeDeferredItem @ 0x140049E20 (RaidFreeDeferredItem.c)
 *     RaidAdapterDeviceBusy @ 0x140060A68 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x140060B5C (RaidAdapterDeviceReady.c)
 *     RaidAdapterLogIoError @ 0x140062D44 (RaidAdapterLogIoError.c)
 *     RaidAdapterSetPauseTimer @ 0x140068E50 (RaidAdapterSetPauseTimer.c)
 *     RaidUnitProcessAsyncNotification @ 0x1400A8A68 (RaidUnitProcessAsyncNotification.c)
 *     StorSetIoGatewayBusy @ 0x1400AFB5C (StorSetIoGatewayBusy.c)
 *     StorSetIoGatewayNotBusy @ 0x1400AFC74 (StorSetIoGatewayNotBusy.c)
 */

void __fastcall RaidAdapterDeferredRoutine(__int64 a1, LARGE_INTEGER *a2, char a3)
{
  __int64 v3; // rdi
  LARGE_INTEGER *v5; // rbx
  int LowPart; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // r9

  v3 = *(_QWORD *)(a1 + 64);
  v5 = a2;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 4184));
  LowPart = a2[4].LowPart;
  if ( LowPart == 7 )
  {
    StorSetIoGatewayBusy(*(PKSPIN_LOCK *)(v3 + 1024));
    goto LABEL_9;
  }
  if ( LowPart > 7 )
  {
    v12 = LowPart - 8;
    if ( !v12 )
    {
      LOBYTE(a2) = 1;
      StorSetIoGatewayNotBusy(*(_QWORD *)(v3 + 1024), a2);
      goto LABEL_33;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 == 1 )
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))RaidUnitProcessAsyncNotification)(
              v3,
              (unsigned int)a2[4].HighPart,
              (LARGE_INTEGER)a2[5].QuadPart);
        }
        else
        {
          KeSetCoalescableTimer((PKTIMER)(a2[5].QuadPart + 8), a2[6], 0, a2[7].LowPart, (PKDPC)(a2[5].QuadPart + 72));
        }
      }
      else
      {
        RaidAdapterDeviceReady(v3, (unsigned int)a2[4].HighPart);
      }
    }
    else
    {
      RaidAdapterDeviceBusy(v3, (unsigned int)a2[4].HighPart, a2[5].LowPart);
    }
  }
  else
  {
    v7 = LowPart - 1;
    if ( !v7 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))RaidAdapterRequestTimer)(
        v3,
        (LARGE_INTEGER)a2[5].QuadPart,
        a2[6].LowPart);
      goto LABEL_9;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      RaidAdapterLogIoError(v3, (unsigned int)a2[4].HighPart, a2[6].LowPart, (unsigned int)a2[6].HighPart);
      goto LABEL_9;
    }
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
            RaidAdapterResumeUnit(v3, (unsigned int)a2[4].HighPart);
        }
        else
        {
          RaidAdapterPauseUnit(v3, (unsigned int)a2[4].HighPart, a2[5].LowPart);
        }
      }
      else
      {
        RaidFreeDeferredItem(v3 + 1072);
        v5 = 0LL;
        if ( !*(_DWORD *)(v3 + 1444) )
          RaidAdapterCancelPauseTimer(v3, v3 + 1840);
      }
      goto LABEL_9;
    }
    RaidFreeDeferredItem(v3 + 1072);
    v5 = 0LL;
    if ( *(_DWORD *)(v3 + 1444) == 1 )
    {
      RaidAdapterSetPauseTimer(v3, v3 + 1840, v3 + 1712, *(unsigned int *)(v3 + 1440));
      goto LABEL_9;
    }
    LOBYTE(v16) = a3;
    if ( !(unsigned int)RaidResumeAdapterQueue(v3, 0LL, v16, v17) )
LABEL_33:
      RaidAdapterRestartQueues(v3, a3);
  }
LABEL_9:
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 4184));
  if ( v5 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)&v5[2], 134684677, 134684676) != 134684676 )
    {
      v5[2].LowPart = 134684675;
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v3 + 1152), (PSLIST_ENTRY)v5);
    }
  }
}
