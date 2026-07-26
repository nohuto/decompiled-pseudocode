/*
 * XREFs of ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x140155860
 * Callers:
 *     ?ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14000D9E0 (-ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z @ 0x140044F30 (-ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1400886C0 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140178D10 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14017A580 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14017E510 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     ?WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z @ 0x140057400 (-WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z.c)
 *     ndisReduceTimeoutFor9FBugcheck @ 0x1401561F0 (ndisReduceTimeoutFor9FBugcheck.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x140156270 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 *     ?Arm@NdisWatchdogState@@QEAAXXZ @ 0x140156400 (-Arm@NdisWatchdogState@@QEAAXXZ.c)
 *     ndisGetMiniportFromObject @ 0x140156480 (ndisGetMiniportFromObject.c)
 */

struct NDISWATCHDOG__ **__fastcall ndisMakeWatchdog(
        struct NDISWATCHDOG__ **a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  struct NDISWATCHDOG__ *Watchdog; // rax
  struct NDISWATCHDOG__ *v11; // rdi
  struct NDISWATCHDOG__ *v12; // rbx
  __int64 MiniportFromObject; // rax
  int v14; // r10d
  char v15; // al
  struct NDISWATCHDOG__ **result; // rax

  Watchdog = ndisAllocateWatchdog();
  v11 = Watchdog;
  if ( Watchdog != (struct NDISWATCHDOG__ *)-1LL )
  {
    v12 = WatchdogFromHandle(Watchdog);
    *((_DWORD *)v12 + 50) = 846677070;
    MiniportFromObject = ndisGetMiniportFromObject(a2);
    if ( MiniportFromObject )
    {
      v15 = ndisReduceTimeoutFor9FBugcheck(MiniportFromObject, &a5);
      v14 = a5;
      *((_BYTE *)v12 + 248) = v15;
    }
    *((_DWORD *)v12 + 51) = v14;
    *((_QWORD *)v12 + 26) = &ndisGlobalTriageBlock;
    *((_QWORD *)v12 + 27) = a2;
    *((_QWORD *)v12 + 28) = MEMORY[0xFFFFF78000000008];
    *((_QWORD *)v12 + 29) = KeGetCurrentThread();
    *((_QWORD *)v12 + 30) = a6;
    *((_QWORD *)v12 + 32) = a4;
    *((_DWORD *)v12 + 48) = a3;
    NdisWatchdogState::Arm((PKDPC)v12);
  }
  result = a1;
  *a1 = v11;
  return result;
}
