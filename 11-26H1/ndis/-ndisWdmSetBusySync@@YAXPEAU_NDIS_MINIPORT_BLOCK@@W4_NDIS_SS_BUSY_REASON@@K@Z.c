/*
 * XREFs of ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1400886C0
 * Callers:
 *     ?ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x14007C2A0 (-ndisDevicePnPEventNotifyMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@.c)
 *     ?ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z @ 0x14007D9D0 (-ndisFDevicePnPEventNotifyInternal@@YAXPEAX@Z.c)
 *     ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x140081590 (-ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z.c)
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140086480 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140088460 (-ndisSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 * Callees:
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x140008430 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x140008FF0 (McTemplateK0qq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisCancelIdleRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x140045020 (-ndisCancelIdleRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 *     ?ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140058D10 (-ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x140155470 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x140155860 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1401564C0 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisWdmSetBusySync(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, int a3)
{
  __int64 SelectiveSuspend; // rbp
  __int16 v4; // r14
  KIRQL v8; // al
  int v9; // ecx
  KIRQL v10; // bl
  __int64 v11; // rcx
  struct _NDIS_SELECTIVE_SUSPEND *v12; // rdi
  struct NDISWATCHDOG__ *v13; // rbx
  KIRQL v14; // dl
  struct _GUID *v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+30h] [rbp-38h]
  struct NDISWATCHDOG__ *v17; // [rsp+70h] [rbp+8h] BYREF

  SelectiveSuspend = (__int64)a1->SelectiveSuspend;
  v4 = 0;
  if ( (a1->Flags & 0x80u) != 0 )
    NT_ASSERT("(!(MINIPORT_TEST_FLAG(Miniport, 0x00000080)))");
  while ( 1 )
  {
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
    v9 = *(_DWORD *)(SelectiveSuspend + 504);
    v10 = v8;
    if ( (v9 & 0x14) == 0 || (v9 & 0x200) != 0 )
      break;
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v8);
    if ( !v4 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v16) = a2;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xFu,
          0x25u,
          (struct _GUID *)&WPP_63e371e5a248373aa5c809d99c379eef_Traceguids,
          (char)a1,
          v16);
      }
      if ( (byte_14011D041 & 8) != 0 )
      {
        LODWORD(v15) = a2;
        McTemplateK0qq_EtwWriteTransfer(
          v11,
          (__int64)">(",
          (__int64)&a1->InterfaceGuid,
          (a1->NetLuid.Value >> 24) & 0xFFFFFF,
          (__int64)v15);
      }
    }
    v12 = a1->SelectiveSuspend;
    ndisMakeWatchdog((unsigned int)&v17, (_DWORD)a1, 38, a1->DriverHandle->CancelIdleNotificationHandler, 10000, 0LL);
    ndisCancelIdleRequest(a1, a2, a3);
    v13 = v17;
    ndisWaitForEventThenDisarmWatchdog(v17, (struct _KEVENT *)((char *)v12 + 200));
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v12);
    if ( (*((_DWORD *)v12 + 126) & 0x410) == 0x10 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v12, v14);
      ndisWaitForKernelObject((char *)v12 + 248);
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v12, v14);
    }
    if ( v13 != (struct NDISWATCHDOG__ *)-1LL )
      ndisFreeWatchdog(v13);
    ++v4;
  }
  ndisIncrementSyncIdleCountersLocked(SelectiveSuspend, a2, a3);
  ndisSelectiveSuspendSetResumeBusyReason((_DWORD *)SelectiveSuspend, 0, a2, a3);
  KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v10);
}
