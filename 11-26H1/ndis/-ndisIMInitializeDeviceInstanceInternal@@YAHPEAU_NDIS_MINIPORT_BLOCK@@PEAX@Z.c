/*
 * XREFs of ?ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x14009B2C4
 * Callers:
 *     ?ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1400053C0 (-ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x14009B800 (NdisIMInitializeDeviceInstanceEx.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x14000D540 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_Zq @ 0x14005F000 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14007B620 (-ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014C3E8 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x140157970 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140157B40 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1401583F0 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140158AB0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1401625B0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140164950 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisReinitializeMiniportBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401736D0 (-ndisReinitializeMiniportBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisIMInitializeDeviceInstanceInternal(struct _NDIS_MINIPORT_BLOCK *a1, void *a2)
{
  int v4; // edx
  unsigned int v5; // edi
  char v7[160]; // [rsp+40h] [rbp-A8h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x2Eu,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1,
      a2);
  ndisReinitializeMiniportBlock(a1);
  if ( a1->MajorNdisVersion < 6u )
  {
    a1->CurrentDevicePowerState = PowerDeviceUnspecified;
    a1->DriverPowerState = PowerDeviceUnspecified;
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(&a1->MiniportOwner);
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    if ( Ndis::BindState::SetPause(&a1->Bindings.Miniport, DatapathRunning, PauseReason_LowPower) )
    {
      memset(v7, 0, sizeof(v7));
      if ( (unsigned __int8)byte_14011EAD3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v7);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v4,
            0x1Cu,
            0x2Fu,
            (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
            *(unsigned __int16 **)&v7[8],
            *(_QWORD *)v7);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
    Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunSynchronous, 0);
  }
  a1->DeviceContext = a2;
  v5 = ndisPnPStartDevice(a1, 0LL);
  if ( v5 )
    v5 = -1073741823;
  else
    ndisMSetMiniportReadyForBinding(a1, 1, Reason_RemovingMiniport|Reason_DriverNotReady, RunSynchronous);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x30u,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1,
      (char)a2,
      v5);
  return v5;
}
