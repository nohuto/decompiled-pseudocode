/*
 * XREFs of NdisFSetAttributes @ 0x140054EF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055160 (-ndisSetupLwfMiniportHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

NDIS_STATUS __stdcall NdisFSetAttributes(
        NDIS_HANDLE NdisFilterHandle,
        NDIS_HANDLE FilterModuleContext,
        PNDIS_FILTER_ATTRIBUTES FilterAttributes)
{
  struct _NDIS_MINIPORT_BLOCK *v3; // rbp
  NDIS_HANDLE v4; // rdi
  KIRQL v6; // al
  KIRQL v7; // di
  int v8; // edx

  v3 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisFilterHandle + 4);
  v4 = FilterModuleContext;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(FilterModuleContext) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)FilterModuleContext,
      1,
      33,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)NdisFilterHandle);
  }
  *((_QWORD *)NdisFilterHandle + 3) = v4;
  v6 = KeAcquireSpinLockRaiseToDpc(&v3->Lock);
  v3->MiniportThread = KeGetCurrentThread();
  v7 = v6;
  ndisSetupLwfMiniportHandlers(v3);
  v3->MiniportThread = 0LL;
  KeReleaseSpinLock(&v3->Lock, v7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      1,
      34,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)NdisFilterHandle);
  }
  return 0;
}
