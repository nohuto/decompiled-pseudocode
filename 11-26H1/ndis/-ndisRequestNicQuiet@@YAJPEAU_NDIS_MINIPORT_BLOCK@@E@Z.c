/*
 * XREFs of ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1401645B0
 * Callers:
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140048990 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006DC30 (-ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x140006B10 (WPP_RECORDER_SF_Lq.c)
 *     WPP_RECORDER_SF_qDL @ 0x140022DF0 (WPP_RECORDER_SF_qDL.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x140046D40 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140048230 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z4W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140082530 (-ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_.c)
 *     ?ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z@Z @ 0x1400826E0 (-ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXP.c)
 *     ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x14008C240 (-NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMInvokeDevicePowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1401647C0 (-ndisMInvokeDevicePowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisWdmSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401648B0 (-ndisWdmSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisRequestNicQuiet(struct _NDIS_MINIPORT_BLOCK *a1, char a2)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbp
  _DEVICE_POWER_STATE v5; // edi
  enum _DEVICE_POWER_STATE DeviceWake; // edx
  char v7; // cl
  int v8; // eax
  unsigned int v9; // edi
  int v11; // eax
  char v12; // r14

  AoAc = a1->AoAc;
  v5 = PowerDeviceD3;
  ndisCancelWaitWake(a1);
  if ( (a1->PnPFlags & 0x60) != 0x60
    || (DeviceWake = a1->DeviceCaps.DeviceWake, DeviceWake != PowerDeviceD1) && (unsigned int)(DeviceWake - 3) > 1 )
  {
    v7 = 0;
LABEL_4:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        DeviceWake,
        0xEu,
        0x21u,
        (struct _GUID *)&WPP_64b491f4d22c35747c5821aad1f382d9_Traceguids,
        (char)a1,
        v7,
        *((unsigned __int8 *)AoAc + 386));
    goto LABEL_6;
  }
  v7 = 1;
  if ( !*((_BYTE *)AoAc + 386) )
    goto LABEL_4;
  v5 = a1->DeviceCaps.DeviceWake;
  ndisMInvokeDevicePowerNotify(a1, DeviceWake);
  ndisWdmSendOidPmParametersForAoAc(a1);
  v11 = ndisRequestWaitWake(a1, (PREQUEST_POWER_COMPLETE)ndisNicQuietWaitWakeCallback);
  v12 = v11;
  if ( v11 != 259 )
  {
    NdisUnexpectedAoAcError(a1, 5u, v11);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x20u,
        (struct _GUID *)&WPP_64b491f4d22c35747c5821aad1f382d9_Traceguids,
        v12,
        a1);
  }
LABEL_6:
  ndisUpdateMiniportCsTrafficStatistics(a1, 1);
  v8 = ndisRequestDeviceLowPower(
         a1,
         (POWER_STATE)v5,
         (PREQUEST_POWER_COMPLETE)ndisNicQuietRequestComplete,
         a1,
         NdisMEventDx_NicQuiet);
  v9 = v8;
  if ( v8 == 259 )
  {
    if ( a2 )
      ndisWaitForKernelObject((char *)AoAc + 392);
    return 0LL;
  }
  else
  {
    NdisUnexpectedAoAcError(a1, 6u, v8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x22u,
        (struct _GUID *)&WPP_64b491f4d22c35747c5821aad1f382d9_Traceguids,
        v9,
        a1);
    return v9;
  }
}
