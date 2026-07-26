/*
 * XREFs of ?ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x14016E0F0
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140010100 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x14009B800 (NdisIMInitializeDeviceInstanceEx.c)
 *     ?ndisSetPowerResumeComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1400C6AD0 (-ndisSetPowerResumeComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x140182FE0 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x140183FD0 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1401847E0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140019F20 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140050280 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?NdisMRemoveMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x14007B420 (-NdisMRemoveMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMiniportFatalError(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_MINIPORT_EVENT a2)
{
  unsigned __int8 v4; // si
  struct _NDIS_IF_BLOCK *v5; // rax
  _NDIS_M_DRIVER_BLOCK **p_DriverHandle; // rdi
  _DEVICE_RESET_INTERFACE_STANDARD *ReenumerateSelfInterface; // rax

  v4 = 1;
  v5 = ndisMReferenceIfBlock(a1, 0x13u);
  if ( !v5 )
  {
    p_DriverHandle = &a1->DriverHandle;
LABEL_9:
    v4 = 0;
    goto LABEL_10;
  }
  v5->LastMiniportFatalErrorReason = a2;
  _InterlockedOr((volatile signed __int32 *)&v5->InterlockedFlags, 1u);
  ndisMDereferenceIfBlock(a1, 0x13u);
  p_DriverHandle = &a1->DriverHandle;
  if ( !a1->DriverHandle->ReenumerateFailedAdapterHandler )
    goto LABEL_9;
  ReenumerateSelfInterface = a1->ReenumerateSelfInterface;
  if ( !ReenumerateSelfInterface
    || !ReenumerateSelfInterface->DeviceReset
    || (a1->PnPFlags & 0x1080000) != 0
    || (int)mem::ReadNoFence<unsigned long,void>(&a1->Flags) < 0
    || a1->PnPDeviceState != NdisPnPDeviceStarted )
  {
    goto LABEL_9;
  }
LABEL_10:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xDu,
      0x40u,
      (struct _GUID *)&WPP_a0375633690b3eae5e161e1c8b2d1e08_Traceguids,
      (char)a1,
      v4);
  if ( v4 )
    (*p_DriverHandle)->ReenumerateFailedAdapterHandler(a1->MiniportAdapterContext);
  else
    NdisMRemoveMiniportInternal(a1, a2);
}
