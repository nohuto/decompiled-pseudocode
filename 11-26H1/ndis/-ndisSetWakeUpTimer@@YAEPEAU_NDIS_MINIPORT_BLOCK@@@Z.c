/*
 * XREFs of ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140057C30
 * Callers:
 *     ?ndisMWakeUpDpcX@@YAXPEAX000@Z @ 0x14007ABE0 (-ndisMWakeUpDpcX@@YAXPEAX000@Z.c)
 *     ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x14007AE20 (-ndisQueuedCheckForHang@@YAXPEAX@Z.c)
 *     ?ndisMWakeUpDpc@@YAXPEAX000@Z @ 0x140092B40 (-ndisMWakeUpDpc@@YAXPEAX000@Z.c)
 *     ?ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1400C65F4 (-ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1401847E0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140185800 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisCheckForHangSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140057CF0 (-ndisCheckForHangSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

unsigned __int8 __fastcall ndisSetWakeUpTimer(struct _NDIS_MINIPORT_BLOCK *a1)
{
  ULONG v2; // esi
  __int64 v3; // rcx
  int v4; // r8d
  __int64 v5; // rbx

  v2 = (signed int)(1000 * a1->CheckForHangSeconds) / 5;
  if ( !ndisCheckForHangSupported(a1) )
    return 0;
  if ( *(_BYTE *)(v3 + 32) > 6u || *(_BYTE *)(v3 + 32) == 6 && *(_BYTE *)(v3 + 33) >= 0x1Eu )
    v2 = 4000;
  *(_DWORD *)(v3 + 124) &= ~0x20000000u;
  v5 = -10000LL * v4;
  KeClearEvent((PRKEVENT)(v3 + 1912));
  KeSetCoalescableTimer(&a1->WakeUpDpcTimer.Timer, (LARGE_INTEGER)v5, 0, v2, &a1->WakeUpDpcTimer.Dpc);
  return 1;
}
