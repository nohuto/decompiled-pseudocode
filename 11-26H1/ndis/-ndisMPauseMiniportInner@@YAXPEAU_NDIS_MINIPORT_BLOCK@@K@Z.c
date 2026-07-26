/*
 * XREFs of ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140182D00
 * Callers:
 *     ?ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140157170 (-ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140007140 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x140042CF0 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140042E50 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     WPP_RECORDER_SF_LqZ @ 0x140044940 (WPP_RECORDER_SF_LqZ.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x140048740 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     NdisMPauseComplete @ 0x140066AD0 (NdisMPauseComplete.c)
 *     ?ndisLWM5PauseMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_PAUSE_PARAMETERS@@@Z @ 0x14007ED50 (-ndisLWM5PauseMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_PAUSE_PARAMETERS@@@Z.c)
 *     ?ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140088460 (-ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x140155470 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ?ndisAllocateArmedWatchdog@@YAPEAUNDISWATCHDOG__@@PEAXK0K_K@Z @ 0x1401557E0 (-ndisAllocateArmedWatchdog@@YAPEAUNDISWATCHDOG__@@PEAXK0K_K@Z.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1401564C0 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisMInvokePause@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_PAUSE_PARAMETERS@@@Z @ 0x140167D70 (-ndisMInvokePause@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_PAUSE_PARAMETERS@@@Z.c)
 */

void __fastcall ndisMPauseMiniportInner(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  unsigned int v2; // esi
  int v4; // edx
  KIRQL v5; // al
  unsigned __int64 *p_Lock; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  bool v9; // cf
  int (__fastcall *PauseHandler)(void *, _NDIS_MINIPORT_PAUSE_PARAMETERS *); // r8
  struct _NDIS_MINIPORT_PAUSE_PARAMETERS *v11; // rdx
  struct NDISWATCHDOG__ *ArmedWatchdog; // rbx
  int v13; // eax
  struct _KEVENT Event; // [rsp+40h] [rbp-58h] BYREF
  struct _NDIS_MINIPORT_PAUSE_PARAMETERS v15; // [rsp+58h] [rbp-40h] BYREF

  *(_QWORD *)&v15.Header.Revision = 0LL;
  *(_WORD *)((char *)&v15.PauseReason + 1) = 0;
  v2 = a2;
  HIBYTE(v15.PauseReason) = 0;
  memset(&Event, 0, sizeof(Event));
  v15.Header.Type = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      1,
      10,
      (struct _GUID *)&WPP_3fb51d2a25013f49ddb89c1ce982f6d4_Traceguids,
      (char)a1);
  }
  if ( (unsigned __int8)ndisReferenceMiniportByHandle(a1, 0, 0x1Au) )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = 0LL;
    p_Lock = &a1->Lock;
    if ( a1->State == NdisMiniportRunning )
    {
      a1->State = NdisMiniportPausing;
      KeReleaseSpinLock(p_Lock, v5);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_LqZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v7,
          v8,
          0xBu,
          (struct _GUID *)&WPP_3fb51d2a25013f49ddb89c1ce982f6d4_Traceguids,
          v2,
          (char)a1,
          &a1->pAdapterInstanceName->Length);
      v15.Header = (_NDIS_OBJECT_HEADER)786816;
      v15.PauseReason = v2;
      if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x80u) == 0LL )
      {
        if ( a1->SelectiveSuspend )
          ndisSetBusySync((__int64)a1, 34LL, 0LL);
      }
      else if ( a1->SelectiveSuspend )
      {
        ndisSetBusyAsync((__int64)a1, 1u, 0x22u, 0LL, 0);
      }
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v9 = a1->MajorNdisVersion < 6u;
      a1->AsyncOpCompletionEvent = &Event;
      if ( v9 )
        PauseHandler = 0LL;
      else
        PauseHandler = a1->DriverHandle->MiniportDriverCharacteristics.PauseHandler;
      ArmedWatchdog = ndisAllocateArmedWatchdog(a1, 0x21u, PauseHandler, ndisWatchdogPnPTimeout, 0LL);
      if ( a1->MajorNdisVersion < 6u )
        v13 = ndisLWM5PauseMiniport(a1, v11);
      else
        v13 = ndisMInvokePause(a1, &v15);
      if ( v13 == 259 )
        ndisWaitForEventThenDisarmWatchdog(ArmedWatchdog, &Event);
      else
        NdisMPauseComplete(a1);
      if ( ArmedWatchdog != (struct NDISWATCHDOG__ *)-1LL )
        ndisFreeWatchdog(ArmedWatchdog);
      ndisLogMiniportEvent(a1, NdisMEvent_MiniportPaused);
      if ( a1->SelectiveSuspend )
        ndisClearBusy(a1, 1, 34);
      a1->State = NdisMiniportPaused;
    }
    else
    {
      KeReleaseSpinLock(p_Lock, v5);
    }
    ndisDereferenceMiniport(a1, 0x1Au);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      1,
      12,
      (struct _GUID *)&WPP_3fb51d2a25013f49ddb89c1ce982f6d4_Traceguids,
      (char)a1);
  }
}
