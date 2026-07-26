/*
 * XREFs of ?ndisDriverVerifierNdisFlagEnabled@@YA_NXZ @ 0x140144E40
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x14009D990 (NdisFRegisterFilterDriver.c)
 *     ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1400A48E0 (-ndisNblTrackerReadConfiguration@@YAXXZ.c)
 *     ?ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A9A3C (-ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDriverVerifierNdisFlagEnabledForCaller@@YA_NPEAX@Z @ 0x140169430 (-ndisDriverVerifierNdisFlagEnabledForCaller@@YA_NPEAX@Z.c)
 *     NdisOpenAdapterEx @ 0x1401758D0 (NdisOpenAdapterEx.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14017C1A0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     <none>
 */

bool ndisDriverVerifierNdisFlagEnabled(void)
{
  ULONG VerifierFlags; // [rsp+30h] [rbp+8h] BYREF

  VerifierFlags = 0;
  return !MmIsVerifierEnabled(&VerifierFlags) && (VerifierFlags & 0x200000) != 0;
}
