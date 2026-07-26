/*
 * XREFs of ?ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1400834E0
 * Callers:
 *     NdisWdfMiniportSetPower @ 0x140005240 (NdisWdfMiniportSetPower.c)
 * Callees:
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x140009060 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qDD @ 0x140022F40 (WPP_RECORDER_SF_qDD_ea_140022F40.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x14004CB00 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x140057E90 (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140088080 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline @ 0x140091624 (Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1400AB8DC (-ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z.c)
 *     WPP_RECORDER_SF_DqZ @ 0x1400B3264 (WPP_RECORDER_SF_DqZ.c)
 *     ?ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400C67A4 (-ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1401555D0 (-ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

void __fastcall ndisWdfNotifySystemPower(__int64 a1, int a2, enum _NDIS_DEVICE_POWER_STATE a3)
{
  struct _NDIS_MINIPORT_BLOCK *v5; // rbx
  int v6; // edi
  __int64 v7; // rdx
  int v8; // ebp
  struct _GUID *v9; // [rsp+20h] [rbp-38h]
  __int64 v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+38h] [rbp-20h]

  v5 = (struct _NDIS_MINIPORT_BLOCK *)a1;
  if ( (*(_DWORD *)(a1 + 120) & 0x80u) == 0 )
    NT_ASSERT("(MINIPORT_TEST_FLAG(Miniport, 0x00000080))");
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      9,
      18,
      (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
      a2,
      a1,
      *(_QWORD *)(a1 + 3856));
  v6 = 0;
  if ( !a2 )
    goto LABEL_17;
  if ( a3 == NdisDeviceStateD0 )
  {
    v6 = 1;
    if ( byte_14011D043 < 0 )
    {
      LODWORD(v10) = 65537;
      LODWORD(v9) = v5->IfIndex;
      McTemplateK0jqxd_EtwWriteTransfer(
        a1,
        (__int64)&PowerWakeUpDevice,
        (__int64)&v5->InterfaceGuid,
        (__int64)&v5->InterfaceGuid,
        (__int64)v9,
        v5->NetLuid.Value,
        v10);
    }
    v5->PnPFlags &= ~0x800u;
    a1 = MEMORY[0xFFFFF78000000014] - v5->LastSystemSleepTime.QuadPart;
    v7 = a1 / 10000;
    v5->TotalSystemSleepTimeMs += a1 / 10000;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        14,
        19,
        (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
        (char)v5);
    }
    goto LABEL_32;
  }
  if ( (unsigned int)(a2 - 4) <= 2 )
  {
    v6 = 6;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v10) = a2;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x15u,
        (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
        (char)v5,
        v10);
    }
    if ( (byte_14011D043 & 4) != 0 )
    {
      LODWORD(v11) = 6;
      LODWORD(v10) = 6;
      LODWORD(v9) = v5->IfIndex;
      McTemplateK0jqxqq_EtwWriteTransfer(
        a1,
        &MiniportPowerSystemState,
        &v5->InterfaceGuid,
        (__int64)&v5->InterfaceGuid,
        (__int64)v9,
        v5->NetLuid.Value,
        v10,
        v11);
    }
    ndisSendSystemPowerStateIndication(v5, PowerSystemShutdown);
  }
  else
  {
LABEL_17:
    if ( a2 == 3 )
    {
      v8 = 5;
    }
    else
    {
      if ( a2 != 2 )
        goto LABEL_32;
      v8 = 4;
    }
    if ( (unsigned int)Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v5->SelectiveSuspend )
      {
        if ( (v5->Flags & 0x80u) == 0 )
          ndisSelectiveSuspendStop(v5, 6LL);
        else
          ndisSelectiveSuspendStopWdf(v5, 6LL);
      }
      v6 = v8;
    }
    else
    {
      v6 = v8;
      if ( v5->SelectiveSuspend )
        ndisSelectiveSuspendStop(v5, 6LL);
    }
    v5->PnPFlags |= 0x800u;
    v5->LastSystemSleepTime.QuadPart = MEMORY[0xFFFFF78000000014];
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v11) = a3;
      WPP_RECORDER_SF_qDD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x14u,
        (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
        (char)v5,
        a2,
        v11);
    }
    KeClearEvent(&v5->OpenReadyEvent.Event);
    ndisCancelInitModeTimeoutTimer(v5, 1u);
    ndisPrepForLowPowerCommon(v5, a3);
  }
LABEL_32:
  if ( (byte_14011D043 & 4) != 0 )
  {
    LODWORD(v11) = a3;
    LODWORD(v10) = v6;
    LODWORD(v9) = v5->IfIndex;
    McTemplateK0jqxqq_EtwWriteTransfer(
      a1,
      &MiniportPowerStates,
      &v5->InterfaceGuid,
      (__int64)&v5->InterfaceGuid,
      (__int64)v9,
      v5->NetLuid.Value,
      v10,
      v11);
  }
}
