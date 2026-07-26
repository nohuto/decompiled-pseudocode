/*
 * XREFs of ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x140182FE0
 * Callers:
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140166F10 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 * Callees:
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140007140 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_qZ @ 0x14000D3F0 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001BA50 (-ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x140042CF0 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140042E50 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x140048740 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055160 (-ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMRestartComplete @ 0x140064780 (NdisMRestartComplete.c)
 *     ?ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140088460 (-ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisLWM5RestartMinport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_RESTART_PARAMETERS@@@Z @ 0x14008EB20 (-ndisLWM5RestartMinport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_RESTART_PARAMETERS@@@Z.c)
 *     ?NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z @ 0x14008EC90 (-NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMInvokeRestart@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_RESTART_PARAMETERS@@@Z @ 0x140167280 (-ndisMInvokeRestart@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_RESTART_PARAMETERS@@@Z.c)
 *     ?ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x14016E0F0 (-ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 */

__int64 __fastcall ndisMRestartMiniportInner(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_RESTART_ATTRIBUTES *a2)
{
  _NDIS_RESTART_ATTRIBUTES *v2; // rdi
  unsigned int AsyncOpCompletionStatus; // edi
  KIRQL v5; // al
  KIRQL v6; // r14
  bool v7; // zf
  __int64 v8; // rdx
  struct _NDIS_MINIPORT_RESTART_PARAMETERS *v9; // rdx
  bool v10; // cf
  NDIS_STATUS restarted; // eax
  char v13[8]; // [rsp+30h] [rbp-58h]
  struct _NDIS_MINIPORT_RESTART_PARAMETERS v14; // [rsp+40h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-30h] BYREF

  memset(&v14, 0, sizeof(v14));
  v2 = a2;
  memset(&Event, 0, sizeof(Event));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      15,
      (struct _GUID *)&WPP_3fb51d2a25013f49ddb89c1ce982f6d4_Traceguids,
      (char)a1);
  }
  if ( (unsigned __int8)ndisReferenceMiniportByHandle(a1, 0, 0x1Bu) )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    v6 = v5;
    v7 = a1->State == NdisMiniportPaused;
    a1->MiniportThread = KeGetCurrentThread();
    if ( v7 )
    {
      ndisSetupLwfMiniportHandlers(a1);
      a1->State = NdisMiniportRestarting;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v6);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v8,
          9u,
          0x10u,
          (struct _GUID *)&WPP_3fb51d2a25013f49ddb89c1ce982f6d4_Traceguids,
          (char)a1,
          &a1->pAdapterInstanceName->Length);
      v14.Header = (_NDIS_OBJECT_HEADER)1573248;
      v14.RestartAttributes = v2;
      if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x80u) == 0LL )
      {
        if ( a1->SelectiveSuspend )
          ndisSetBusySync((__int64)a1, 35LL, 0LL);
      }
      else if ( a1->SelectiveSuspend )
      {
        ndisSetBusyAsync((__int64)a1, 1u, 0x23u, 0LL, 0);
      }
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v10 = a1->MajorNdisVersion < 6u;
      a1->AsyncOpCompletionEvent = &Event;
      if ( v10 )
        restarted = ndisLWM5RestartMinport(a1, v9);
      else
        restarted = ndisMInvokeRestart(a1, &v14);
      AsyncOpCompletionStatus = restarted;
      if ( restarted == 259 )
      {
        ndisWaitForKernelObject(&Event);
        AsyncOpCompletionStatus = a1->AsyncOpCompletionStatus;
      }
      else
      {
        NdisMRestartComplete(a1, restarted);
      }
      if ( a1->SelectiveSuspend )
        ndisClearBusy(a1, 1, 35);
      if ( AsyncOpCompletionStatus )
      {
        a1->State = NdisMiniportPaused;
        ndisMiniportFatalError(a1, NdisMEventErr_FailedRestart);
        NdisTraceLoggingRareMiniportPath();
      }
      else
      {
        a1->State = NdisMiniportRunning;
        ndisLogMiniportEvent(a1, NdisMEvent_MiniportRestarted);
        ndisUpdateOperationalStatus(a1);
      }
    }
    else
    {
      a1->MiniportThread = 0LL;
      AsyncOpCompletionStatus = -1073741808;
      KeReleaseSpinLock(&a1->Lock, v5);
    }
    ndisDereferenceMiniport(a1, 0x1Bu);
  }
  else
  {
    AsyncOpCompletionStatus = -1073676282;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v13 = AsyncOpCompletionStatus;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x11u,
      (struct _GUID *)&WPP_3fb51d2a25013f49ddb89c1ce982f6d4_Traceguids,
      (char)a1,
      *(_QWORD *)v13);
  }
  return AsyncOpCompletionStatus;
}
