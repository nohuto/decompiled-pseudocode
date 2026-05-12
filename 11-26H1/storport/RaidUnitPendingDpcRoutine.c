/*
 * XREFs of RaidUnitPendingDpcRoutine @ 0x140034050
 * Callers:
 *     <none>
 * Callees:
 *     DbgLogRequest @ 0x14002A5C0 (DbgLogRequest.c)
 *     StorTickEventQueue @ 0x1400341D0 (StorTickEventQueue.c)
 *     RaidUnitRequestTimeout @ 0x1400346C8 (RaidUnitRequestTimeout.c)
 *     RaUnitRequestPowerUp @ 0x140034934 (RaUnitRequestPowerUp.c)
 *     RaidAdapterResetBus @ 0x1400349BC (RaidAdapterResetBus.c)
 *     WPP_SF_q @ 0x14005C1C0 (WPP_SF_q.c)
 *     RaidUnitIsRegisteredForIdleDetection @ 0x140078484 (RaidUnitIsRegisteredForIdleDetection.c)
 *     RaUnitRequestPowerDown @ 0x14007F000 (RaUnitRequestPowerDown.c)
 *     McTemplateK0zqjujssstq_EtwWriteTransfer @ 0x1400980E4 (McTemplateK0zqjujssstq_EtwWriteTransfer.c)
 *     McTemplateK0zqjuuujsssq_EtwWriteTransfer @ 0x140098274 (McTemplateK0zqjuuujsssq_EtwWriteTransfer.c)
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x1400A6A10 (RaidUnitAbortHierarchicalResetWorkItem.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1400BD510 (StorpTelemetryMarkUnitUnresponsive.c)
 */

void __fastcall RaidUnitPendingDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool v6; // bp
  unsigned int v7; // edi
  bool v8; // r14
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // rdx
  int v16; // edi
  __int64 v17; // [rsp+70h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-30h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+10h] BYREF

  v4 = DeferredContext[8];
  v5 = *(_QWORD *)(v4 + 560);
  if ( v5 )
  {
    if ( *(int *)(v4 + 1904) > 0 )
    {
      memset(&LockHandle, 0, sizeof(LockHandle));
      v6 = 0;
      v7 = *(_DWORD *)(v5 + 4);
      v8 = 0;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1920), &LockHandle);
      v9 = *(_DWORD *)(v4 + 1904);
      if ( v9 > 0 )
      {
        v10 = 0;
        if ( v9 >= v7 )
          v10 = v9 - v7;
        *(_DWORD *)(v4 + 1904) = v10;
        v6 = v10 == 0;
      }
      v11 = *(_DWORD *)(v4 + 1908);
      if ( v11 > 0 && !v6 )
      {
        v12 = 0;
        if ( v11 >= v7 )
          v12 = v11 - v7;
        *(_DWORD *)(v4 + 1908) = v12;
        v8 = v12 == 0;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( *(_BYTE *)(v4 + 3368) )
      {
        if ( (*(_BYTE *)(v4 + 506) & 2) == 0 )
        {
          v13 = *(_DWORD *)(v4 + 3376);
          if ( v13 != -1 )
          {
            v14 = *(_DWORD *)(v4 + 1392);
            if ( v14 < 0x1E )
              v14 = 30;
            v15 = 4 * v14 - *(_DWORD *)(v4 + 1904) + 42;
            if ( !v13 || v13 < (unsigned int)v15 )
            {
              v16 = *(_DWORD *)(v4 + 104);
              LODWORD(v19) = v16;
              StorpTelemetryMarkUnitUnresponsive(v4, v15);
              *(_BYTE *)(v4 + 506) |= 2u;
              if ( (byte_140173444 & 2) != 0 )
                McTemplateK0zqjuuujsssq_EtwWriteTransfer(
                  v4 + 177,
                  (unsigned int)&EventUnitUnresponsive,
                  v4 + 2104,
                  *(_QWORD *)(*(_QWORD *)(v4 + 24) + 4784LL),
                  *(_DWORD *)(*(_QWORD *)(v4 + 24) + 56LL),
                  *(_QWORD *)(v4 + 24) + 5128LL,
                  v16,
                  SBYTE1(v19),
                  SBYTE2(v19),
                  v4 + 2104,
                  v4 + 168,
                  v4 + 177,
                  v4 + 242,
                  1);
              if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
              {
                WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 62LL, &WPP_25fa594137633db1985de5dda85c818b_Traceguids, v4);
              }
            }
          }
        }
      }
      if ( v6 )
      {
        if ( (qword_140172448 & 0x400) != 0 )
          DbgLogRequest(*(_QWORD *)(v4 + 24), 10, v4, 0LL, 0LL, 0LL, 0LL);
        RaidUnitAbortHierarchicalResetWorkItem(v4);
      }
      else if ( v8 )
      {
        if ( (byte_140173444 & 1) != 0 )
          McTemplateK0zqjujssstq_EtwWriteTransfer(
            v4 + 177,
            v4 + 168,
            v4 + 2104,
            *(_QWORD *)(*(_QWORD *)(v4 + 24) + 4784LL),
            *(_DWORD *)(*(_QWORD *)(v4 + 24) + 56LL),
            *(_QWORD *)(v4 + 24) + 5128LL,
            *(_BYTE *)(v4 + 104),
            v4 + 2104,
            v4 + 168,
            v4 + 177,
            v4 + 242,
            *(_BYTE *)(v4 + 506) & 1,
            3);
        RaidAdapterResetBus(*(_QWORD *)(v4 + 24), *(unsigned __int8 *)(v4 + 104));
      }
    }
    else
    {
      v17 = 0LL;
      v19 = 0LL;
      if ( (int)StorTickEventQueue(v4, v5, &v17, &v19) < 0 )
      {
        if ( (qword_140172448 & 0x400) != 0 )
          DbgLogRequest(*(_QWORD *)(v4 + 24), 9, v4, v17, v19, 0LL, 0LL);
        RaidUnitRequestTimeout(v4);
      }
      else
      {
        if ( ((unsigned __int8)RaidUnitIsRegisteredForIdleDetection(v4) || *(_QWORD *)(*(_QWORD *)(v4 + 24) + 5024LL))
          && (*(_DWORD *)(v4 + 512) & 4) == 0 )
        {
          memset(&LockHandle, 0, sizeof(LockHandle));
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 48), &LockHandle);
          if ( (((*(_BYTE *)(v4 + 512) & 4) == 0) & (unsigned __int8)~(*(_BYTE *)(v4 + 505) >> 5)) != 0 )
          {
            KeCancelTimer((PKTIMER)(v4 + 1056));
            _interlockedbittestandset((volatile signed __int32 *)(v4 + 504), 0xDu);
          }
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
        if ( _InterlockedExchange((volatile __int32 *)(v4 + 1888), 0) )
        {
          RaUnitRequestPowerUp(v4);
        }
        else if ( _InterlockedExchange((volatile __int32 *)(v4 + 1892), 0) )
        {
          RaUnitRequestPowerDown(v4);
        }
      }
    }
  }
}
