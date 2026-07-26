/*
 * XREFs of NdisIMDeInitializeDeviceInstance @ 0x140050310
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14000AC50 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x140013E50 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x140016370 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140019F20 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140050280 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140163D10 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140179FD0 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x14017A440 (-ndisDeQueueMiniportOnDriver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 */

NDIS_STATUS __stdcall NdisIMDeInitializeDeviceInstance(NDIS_HANDLE NdisMiniportHandle)
{
  NDIS_STATUS v2; // edi
  struct _NDIS_M_DRIVER_BLOCK **v3; // rsi
  struct _NDIS_M_DRIVER_BLOCK *v4; // rbp
  bool v5; // cf
  char v7[4]; // [rsp+30h] [rbp-38h]
  int v8; // [rsp+70h] [rbp+8h] BYREF

  v2 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      16,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)NdisMiniportHandle);
  v3 = (struct _NDIS_M_DRIVER_BLOCK **)((char *)NdisMiniportHandle + 3760);
  v4 = (struct _NDIS_M_DRIVER_BLOCK *)*((_QWORD *)NdisMiniportHandle + 470);
  if ( (unsigned __int8)ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, 0x16u) )
  {
    v2 = 0;
    v8 = 0;
    ndisReferenceRefEx(&v4->Ref.SpinLock, 0, (enum _NDIS_REFERENCE_STATUS *)&v8);
    v5 = *((_BYTE *)NdisMiniportHandle + 32) < 6u;
    *((_DWORD *)NdisMiniportHandle + 380) = 3;
    if ( v5 )
      *((_BYTE *)NdisMiniportHandle + 5281) = 1;
    ndisPnPRemoveDevice((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, 0);
    *((_BYTE *)NdisMiniportHandle + 5281) = 0;
    *((_DWORD *)NdisMiniportHandle + 967) = 0;
    *((_DWORD *)NdisMiniportHandle + 970) = 0;
    *((_QWORD *)NdisMiniportHandle + 508) = 7LL;
    if ( ndisMReferenceIfBlock((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, 0) )
    {
      *(_DWORD *)(*((_QWORD *)NdisMiniportHandle + 505) + 1112LL) = 7;
      *(_DWORD *)(*((_QWORD *)NdisMiniportHandle + 505) + 1116LL) = 0;
      ndisNsiSyncMiniportOperStatusNotification((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle);
      ndisMDereferenceIfBlock((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, 0);
      v3 = (struct _NDIS_M_DRIVER_BLOCK **)((char *)NdisMiniportHandle + 3760);
    }
    if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle) )
    {
      ndisDeQueueMiniportOnDriver((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, *v3);
      ndisDereferenceDriver(*v3, 0, 2u);
    }
    ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, 0x16u);
    ndisDereferenceDriver(v4, 0, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = v2;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x11u,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)NdisMiniportHandle,
      *(_DWORD *)v7);
  }
  return v2;
}
