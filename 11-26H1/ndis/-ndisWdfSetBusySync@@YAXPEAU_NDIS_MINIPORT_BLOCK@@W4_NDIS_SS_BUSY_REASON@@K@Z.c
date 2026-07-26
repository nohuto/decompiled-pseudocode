/*
 * XREFs of ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140088490
 * Callers:
 *     ?ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x14007C2A0 (-ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@.c)
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x14007D9D0 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 *     ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x140081590 (-ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z.c)
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140086480 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140088460 (-ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 * Callees:
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x140008430 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140008810 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x140008FF0 (McTemplateK0qq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140058D10 (-ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@.c)
 */

void __fastcall ndisWdfSetBusySync(__int64 a1, unsigned int a2, int a3)
{
  char v3; // bp
  __int64 v4; // rbx
  KIRQL v8; // r15
  __int64 v9; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-38h]

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 4448);
  if ( (*(_DWORD *)(a1 + 120) & 0x80u) == 0 )
    NT_ASSERT("(MINIPORT_TEST_FLAG(Miniport, 0x00000080))");
  v8 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 4448));
  if ( (*(_DWORD *)(v4 + 512)
     || *(_DWORD *)(v4 + 516)
     || *(_DWORD *)(v4 + 528)
     || *(_DWORD *)(v4 + 532)
     || *(_DWORD *)(v4 + 520)
     || *(_DWORD *)(v4 + 524)
     || *(_DWORD *)(v4 + 576)
     || *(_DWORD *)(v4 + 508))
    && KeReadStateEvent((PRKEVENT)(v4 + 272)) )
  {
    ndisIncrementSyncIdleCountersLocked(v4, a2, a3);
    ndisSelectiveSuspendSetResumeBusyReason((_DWORD *)v4, 0, a2, a3);
    KeReleaseSpinLock((PKSPIN_LOCK)v4, v8);
  }
  else
  {
    if ( !*(_DWORD *)(v4 + 512)
      && !*(_DWORD *)(v4 + 516)
      && !*(_DWORD *)(v4 + 528)
      && !*(_DWORD *)(v4 + 532)
      && !*(_DWORD *)(v4 + 520)
      && !*(_DWORD *)(v4 + 524)
      && !*(_DWORD *)(v4 + 576)
      && !*(_DWORD *)(v4 + 508) )
    {
      v3 = 1;
      KeClearEvent((PRKEVENT)(v4 + 272));
    }
    ndisIncrementSyncIdleCountersLocked(v4, a2, a3);
    KeReleaseSpinLock((PKSPIN_LOCK)v4, v8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xFu,
        0x26u,
        (struct _GUID *)&WPP_63e371e5a248373aa5c809d99c379eef_Traceguids,
        a1,
        a2);
    if ( (byte_14011D041 & 8) != 0 )
    {
      LODWORD(Timeout) = a2;
      McTemplateK0qq_EtwWriteTransfer(
        v9,
        (__int64)">(",
        a1 + 4008,
        (*(_QWORD *)(a1 + 4024) >> 24) & 0xFFFFFF,
        (__int64)Timeout);
    }
    if ( v3 )
      ndisWdfAcquirePowerReferenceHelper((struct _NDIS_MINIPORT_BLOCK *)a1, 1, 0);
    else
      KeWaitForSingleObject((PVOID)(v4 + 272), Executive, 0, 0, 0LL);
  }
}
