/*
 * XREFs of ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1401847E0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x140005820 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x140009060 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14000AC50 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140019F20 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x14001B4C0 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x140045170 (-ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14004C230 (-ndisMRestoreOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x14004CB00 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qLL @ 0x14004CC70 (WPP_RECORDER_SF_qLL.c)
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x14004CD50 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140050280 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1400513F0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     NdisMIndicateStatusEx @ 0x140052A20 (NdisMIndicateStatusEx.c)
 *     NdisSetEvent @ 0x140055FC0 (NdisSetEvent.c)
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140057C30 (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x140058320 (-ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140058680 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     WPP_RECORDER_SF_Zq @ 0x14005F000 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006AF00 (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReturnQueuedLowPowerNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14006C610 (-ndisReturnQueuedLowPowerNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x140077A80 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x14008DF80 (-ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisQueryMediaStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400AB7B4 (-ndisQueryMediaStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014C3E8 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x140157970 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140157B40 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1401583F0 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140158AB0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1401625B0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140163D10 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140164950 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z @ 0x140167060 (-ndisIssueNetEventSetPowerEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140167360 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x14016E0F0 (-ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1401790B0 (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140185800 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisDevicePowerOn(struct _NDIS_EVENT *a1, __int16 a2)
{
  struct _NDIS_MINIPORT_BLOCK *p_Blink; // r14
  char v3; // bl
  char v4; // di
  unsigned int *v6; // r15
  __int16 v7; // dx
  _IRP *Flink; // r13
  __int64 Status; // rcx
  enum _DEVICE_POWER_STATE DeviceState; // r12d
  __int16 v11; // dx
  __int64 v12; // rcx
  _DEVICE_OBJECT *v13; // rcx
  POWER_STATE v14; // r8d
  __int16 v15; // dx
  int v16; // edi
  int Blink_high; // edx
  KIRQL v18; // al
  KIRQL v19; // bl
  int v20; // edx
  int SetMiniportDeviceState; // r15d
  KIRQL v22; // al
  KIRQL v23; // bl
  KSPIN_LOCK *v24; // rdi
  KIRQL v25; // bl
  __int64 v26; // rax
  KIRQL v27; // bl
  int v28; // edx
  signed __int32 Lock; // eax
  signed __int32 v30; // ett
  __int64 v31; // rcx
  KIRQL v32; // al
  KIRQL v33; // bl
  __int64 v34; // rcx
  char No; // al
  KIRQL v36; // di
  int SignalState; // eax
  __int16 v38; // dx
  int Flink_high; // eax
  int v40; // edx
  __int64 v41; // rcx
  int v42; // eax
  struct _GUID *v43; // [rsp+20h] [rbp-E0h]
  __int64 v44; // [rsp+30h] [rbp-D0h]
  __int64 v45; // [rsp+38h] [rbp-C8h]
  char v46; // [rsp+50h] [rbp-B0h]
  char v47; // [rsp+51h] [rbp-AFh]
  char v48; // [rsp+52h] [rbp-AEh]
  int v49; // [rsp+54h] [rbp-ACh]
  int v50; // [rsp+58h] [rbp-A8h]
  BOOL v51; // [rsp+5Ch] [rbp-A4h] BYREF
  char v52[160]; // [rsp+60h] [rbp-A0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+100h] [rbp+0h] BYREF
  __int64 v54; // [rsp+170h] [rbp+70h] BYREF
  int v55; // [rsp+178h] [rbp+78h]
  __int128 v56; // [rsp+180h] [rbp+80h] BYREF
  __int128 v57; // [rsp+190h] [rbp+90h]
  __int64 v58; // [rsp+1A0h] [rbp+A0h]

  p_Blink = (struct _NDIS_MINIPORT_BLOCK *)&a1[-225].Event.Header.WaitListHead.Blink;
  v3 = 0;
  v51 = 0;
  v4 = 0;
  v46 = 0;
  v47 = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  v50 = 0;
  v54 = 0LL;
  v55 = 0;
  v58 = 0LL;
  v48 = 0;
  v56 = 0LL;
  v57 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      14,
      67,
      (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
      (char)p_Blink);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v6 = (unsigned int *)&a1[-220].Event.Header.WaitListHead.Blink;
  if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)&a1[-220].Event.Header.WaitListHead.Blink) & 0x80u) != 0LL )
  {
    Flink = 0LL;
    Status = 0LL;
    DeviceState = PowerDeviceD0;
  }
  else
  {
    Flink = (_IRP *)a1[1].Event.Header.WaitListHead.Flink;
    Status = (unsigned int)Flink->IoStatus.Status;
    DeviceState = Flink->Tail.Overlay.CurrentStackLocation->Parameters.Power.State.DeviceState;
  }
  a1[1].Event.Header.WaitListHead.Flink = 0LL;
  v49 = Status;
  if ( a1[-161].Event.Header.LockNV != 1 )
  {
    mem::ReadNoFence<unsigned long,void>((unsigned int *)&a1[-220].Event.Header.WaitListHead.Blink);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v11,
        14,
        68,
        (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
        (char)p_Blink);
    }
    if ( (byte_14011D041 & 8) != 0 )
    {
      LODWORD(v44) = 65537;
      LODWORD(v43) = a1[-56].Event.Header.WaitListHead.Blink;
      McTemplateK0jqxd_EtwWriteTransfer(
        v12,
        (__int64)&PowerOnMiniportNotStarted,
        (__int64)&a1[-58].Event.Header.WaitListHead.Blink,
        (__int64)&a1[-58].Event.Header.WaitListHead.Blink,
        (__int64)v43,
        (__int64)a1[-57].Event.Header.WaitListHead.Flink,
        v44);
    }
    v13 = *(_DEVICE_OBJECT **)&a1[-65].Event.Header.Lock;
    v14.SystemState = (_SYSTEM_POWER_STATE)Flink->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
    HIDWORD(a1[-64].Event.Header.WaitListHead.Blink) = v14;
    PoSetPowerState(v13, DevicePowerState, v14);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)&a1[-6]);
    ndisScheduleD0CompleteSignalWorkItem(p_Blink, 0);
    IofCompleteRequest(Flink, 0);
LABEL_115:
    ndisDereferenceMiniport(p_Blink, 0xCu);
    ndisDereferencePackage((PVOID *)&ndisPkgs);
    return;
  }
  if ( (HIDWORD(a1[-220].Event.Header.WaitListHead.Blink) & 0x10) == 0 )
  {
    if ( (int)Status < 0 )
    {
      v16 = Status;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x47u,
          (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
          (char)p_Blink,
          Status);
      goto LABEL_78;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        14,
        72,
        (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
        (char)p_Blink);
    }
    if ( HIDWORD(a1[-64].Event.Header.WaitListHead.Blink) == 1 )
    {
      mem::ReadNoFence<unsigned long,void>((unsigned int *)&a1[-220].Event.Header.WaitListHead.Blink);
      if ( ndisIsMiniportStarted(p_Blink) && a1[-161].Event.Header.LockNV == 1 )
      {
        NdisSetEvent(a1 - 69);
        v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a1[-221].Event.Header.WaitListHead.Blink);
        a1[-203].Event.Header.WaitListHead.Flink = (_LIST_ENTRY *)KeGetCurrentThread();
        v33 = v32;
        ndisMRestoreOpenHandlers(p_Blink, 4u);
        a1[-203].Event.Header.WaitListHead.Flink = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&a1[-221].Event.Header.WaitListHead.Blink, v33);
        v3 = 1;
        v46 = 0;
      }
      goto LABEL_77;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        14,
        73,
        (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
        (char)p_Blink);
    }
    if ( (byte_14011D041 & 8) != 0 )
    {
      LODWORD(v44) = 65538;
      LODWORD(v43) = a1[-56].Event.Header.WaitListHead.Blink;
      McTemplateK0jqxd_EtwWriteTransfer(
        Status,
        (__int64)&MiniportPoweringUp,
        (__int64)&a1[-58].Event.Header.WaitListHead.Blink,
        (__int64)&a1[-58].Event.Header.WaitListHead.Blink,
        (__int64)v43,
        (__int64)a1[-57].Event.Header.WaitListHead.Flink,
        v44);
    }
    Blink_high = HIDWORD(a1[-220].Event.Header.WaitListHead.Blink);
    if ( (Blink_high & 0x20) != 0 )
    {
      if ( (ndisAoAcCapable || ndisAoAcTest)
        && (a1[-223].Event.Header.Type > 6u
         || a1[-223].Event.Header.Type == 6 && a1[-223].Event.Header.Signalling >= 0x1Eu) )
      {
        v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a1[-221].Event.Header.WaitListHead.Blink);
        a1[-203].Event.Header.WaitListHead.Flink = (_LIST_ENTRY *)KeGetCurrentThread();
        v19 = v18;
        ndisMRestoreOpenHandlers(p_Blink, 4u);
        a1[-203].Event.Header.WaitListHead.Flink = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&a1[-221].Event.Header.WaitListHead.Blink, v19);
        v4 = 1;
        v47 = 1;
      }
      SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(p_Blink, DeviceState, -50265855, 1);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v20,
          0xEu,
          0x4Au,
          (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
          (char)p_Blink,
          DeviceState,
          SetMiniportDeviceState);
      if ( SetMiniportDeviceState )
      {
        if ( v4 )
        {
          v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a1[-221].Event.Header.WaitListHead.Blink);
          a1[-203].Event.Header.WaitListHead.Flink = (_LIST_ENTRY *)KeGetCurrentThread();
          v23 = v22;
          ndisMSwapOpenHandlers(p_Blink, 4u);
          a1[-203].Event.Header.WaitListHead.Flink = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)&a1[-221].Event.Header.WaitListHead.Blink, v23);
          v47 = 0;
        }
      }
      else
      {
        HIDWORD(a1[-64].Event.Header.WaitListHead.Blink) = DeviceState;
      }
      v24 = (KSPIN_LOCK *)&a1[-221].Event.Header.WaitListHead.Blink;
      v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a1[-221].Event.Header.WaitListHead.Blink);
      a1[-203].Event.Header.WaitListHead.Flink = (_LIST_ENTRY *)KeGetCurrentThread();
      ndisSetWakeUpTimer(p_Blink);
      a1[-203].Event.Header.WaitListHead.Flink = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&a1[-221].Event.Header.WaitListHead.Blink, v25);
    }
    else
    {
      if ( (BYTE2(a1[-68].Event.Header.WaitListHead.Flink[1].Blink) & 1) != 0 || (Blink_high & 0x4000) == 0 )
      {
        v24 = (KSPIN_LOCK *)&a1[-221].Event.Header.WaitListHead.Blink;
        goto LABEL_58;
      }
      SetMiniportDeviceState = ndisPmInitializeMiniport(p_Blink);
      v24 = (KSPIN_LOCK *)&a1[-221].Event.Header.WaitListHead.Blink;
    }
    if ( SetMiniportDeviceState )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v44) = SetMiniportDeviceState;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x4Cu,
          (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
          (char)p_Blink,
          v44);
      }
      v6 = (unsigned int *)&a1[-220].Event.Header.WaitListHead.Blink;
      if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)&a1[-220].Event.Header.WaitListHead.Blink) & 0x80u) != 0LL )
        v49 = -1073741823;
      else
        Flink->IoStatus.Status = -1073741823;
      *(_QWORD *)&a1[-55].Event.Header.Lock = 2LL;
      if ( ndisMReferenceIfBlock(p_Blink, 0xCu) )
      {
        v26 = *(_QWORD *)&a1[-56].Event.Header.Lock;
        if ( *(_DWORD *)(v26 + 1112) != 2 )
        {
          *(_DWORD *)(v26 + 1112) = 2;
          *(_DWORD *)(*(_QWORD *)&a1[-56].Event.Header.Lock + 1116LL) = 0;
          ndisNsiSyncMiniportOperStatusNotification(p_Blink);
          v50 = 1;
        }
        ndisMDereferenceIfBlock(p_Blink, 0xCu);
        v3 = 0;
        goto LABEL_77;
      }
LABEL_73:
      v3 = v46;
LABEL_77:
      v16 = v49;
LABEL_78:
      if ( (mem::ReadNoFence<unsigned long,void>(v6) & 0x80u) == 0LL )
      {
        v16 = Flink->IoStatus.Status;
        v49 = v16;
        IofCompleteRequest(Flink, 0);
      }
      if ( v16 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v44) = v16;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xEu,
            0x4Du,
            (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
            (char)p_Blink,
            v44);
        }
        if ( (byte_14011D043 & 2) != 0 )
          McTemplateK0jqxddq_EtwWriteTransfer(
            v34,
            &DevicePowerOnFailed,
            (const GUID *)&a1[-58].Event.Header.WaitListHead.Blink,
            (__int64)&a1[-58].Event.Header.WaitListHead.Blink,
            (char)a1[-56].Event.Header.WaitListHead.Blink,
            (char)a1[-57].Event.Header.WaitListHead.Flink,
            v16,
            1,
            0);
        ndisMiniportFatalError(p_Blink, NdisMEventErr_FailedPowerD0);
      }
      if ( SLODWORD(a1[-147].Event.Header.WaitListHead.Blink) < 0 )
        ndisReturnQueuedLowPowerNbls(p_Blink, 0);
      Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)&a1[-6]);
      if ( v3 )
      {
        No = mem::ReadNoFence<unsigned long,void>(v6);
        ndisIssueNetEventSetPowerEvent(p_Blink, DeviceState, (No & 0x80) == 0);
        ndisNotifyDevicePowerStateChange(p_Blink, (enum _NDIS_DEVICE_POWER_STATE)DeviceState);
        if ( (HIDWORD(a1[-220].Event.Header.WaitListHead.Blink) & 0x10000000) != 0
          && (mem::ReadNoFence<unsigned long,void>(v6) & 0x20000000) != 0 )
        {
          v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a1[-221].Event.Header.WaitListHead.Blink);
          for ( a1[-203].Event.Header.WaitListHead.Flink = (_LIST_ENTRY *)KeGetCurrentThread();
                BYTE1(a1[-221].Event.Header.WaitListHead.Flink);
                a1[-203].Event.Header.WaitListHead.Flink = (_LIST_ENTRY *)KeGetCurrentThread() )
          {
            a1[-203].Event.Header.WaitListHead.Flink = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)&a1[-221].Event.Header.WaitListHead.Blink, v36);
            KeStallExecutionProcessor(1u);
            v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a1[-221].Event.Header.WaitListHead.Blink);
          }
          BYTE1(a1[-221].Event.Header.WaitListHead.Flink) = 1;
          a1[-147].Event.Header.WaitListHead.Flink = (_LIST_ENTRY *)KeGetCurrentThread();
          a1[-203].Event.Header.WaitListHead.Flink = 0LL;
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&a1[-221].Event.Header.WaitListHead.Blink);
          _InterlockedAnd((volatile signed __int32 *)v6, 0xDFFFFFFF);
          SignalState = a1[-210].Event.Header.SignalState;
          StatusIndication.Flags |= 8u;
          DWORD2(v56) = SignalState;
          v57 = *(_OWORD *)&a1[-110].Event.Header.WaitListHead.Blink;
          v58 = *(__int64 *)((char *)&a1[-191].Event.Header.WaitListHead.Flink + 4);
          StatusIndication.StatusBufferSize = 40;
          StatusIndication.StatusBuffer = &v56;
          *(_QWORD *)&v56 = 0x100280180LL;
          StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
          StatusIndication.SourceHandle = p_Blink;
          StatusIndication.StatusCode = 1073807383;
          NdisMIndicateStatusEx(p_Blink, &StatusIndication);
          BYTE1(a1[-221].Event.Header.WaitListHead.Flink) = 0;
          a1[-147].Event.Header.WaitListHead.Flink = 0LL;
          if ( v36 != 2 )
            KeLowerIrql(v36);
          v16 = v49;
        }
        if ( (mem::ReadNoFence<unsigned long,void>(v6) & 0x20000000) == 0 && v46 )
          ndisSetMediaDisconnectTimer(p_Blink);
      }
      ndisSignalD0RequestComplete(p_Blink, v16);
      ndisMSetMiniportReadyForBinding(p_Blink, 1, Reason_MiniportLowPower, RunAsynchronous);
      if ( v48 )
      {
        Flink_high = HIDWORD(a1[-113].Event.Header.WaitListHead.Flink);
        if ( (Flink_high & 0x100) != 0 )
        {
          HIDWORD(a1[-113].Event.Header.WaitListHead.Flink) = Flink_high & 0xFFFFFEFF;
          Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)&a1[-11]);
          if ( Ndis::BindState::SetPause((Ndis::BindState *)&a1[-14], DatapathRunning, PauseReason_LowPower) )
          {
            memset(v52, 0, sizeof(v52));
            if ( (unsigned __int8)byte_14011EAD3 >= 4u )
            {
              ndisGetBindLinkNameForTracing(p_Blink, (struct NDIS_PNPTRACE_LOCALS *)v52);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Zq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v40,
                  0x1Cu,
                  0x4Eu,
                  (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
                  *(unsigned __int16 **)&v52[8],
                  *(_QWORD *)v52);
            }
          }
          Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)&a1[-11]);
          Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)&a1[-11], RunSynchronous, 1);
        }
      }
      if ( (!ndisAoAcCapable && !ndisAoAcTest || v50)
        && ndisIsMiniportStarted(p_Blink)
        && a1[-161].Event.Header.LockNV == 1
        && ndisMReferenceIfBlock(p_Blink, 0xDu) )
      {
        v41 = *(_QWORD *)&a1[-56].Event.Header.Lock;
        LODWORD(v54) = 786816;
        HIDWORD(v54) = *(_DWORD *)(v41 + 1112);
        v42 = *(_DWORD *)(v41 + 1116);
        memset(&StatusIndication.Guid, 0, 52);
        v55 = v42;
        *((_DWORD *)&StatusIndication.Header + 1) = 0;
        StatusIndication.StatusBufferSize = 12;
        memset(&StatusIndication.PortNumber, 0, 32);
        StatusIndication.StatusBuffer = &v54;
        StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
        StatusIndication.SourceHandle = p_Blink;
        StatusIndication.StatusCode = 1073807395;
        NdisMIndicateStatusEx(p_Blink, &StatusIndication);
        ndisMDereferenceIfBlock(p_Blink, 0xDu);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v38) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v38,
          14,
          79,
          (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
          (char)p_Blink);
      }
      goto LABEL_115;
    }
    v6 = (unsigned int *)&a1[-220].Event.Header.WaitListHead.Blink;
LABEL_58:
    v48 = 1;
    if ( ndisIsMiniportStarted(p_Blink) )
    {
      NdisSetEvent(a1 - 69);
      v27 = KeAcquireSpinLockRaiseToDpc(v24);
      a1[-203].Event.Header.WaitListHead.Flink = (_LIST_ENTRY *)KeGetCurrentThread();
      if ( !v47 )
        ndisMRestoreOpenHandlers(p_Blink, 4u);
      v50 = (unsigned __int8)ndisIfSetInterfaceState(p_Blink, 1, v27);
      a1[-203].Event.Header.WaitListHead.Flink = 0LL;
      KeReleaseSpinLock(v24, v27);
      _m_prefetchw(&a1[-40]);
      Lock = a1[-40].Event.Header.Lock;
      do
      {
        v30 = Lock;
        Lock = _InterlockedCompareExchange(&a1[-40].Event.Header.Lock, Lock, Lock);
      }
      while ( v30 != Lock );
      if ( (Lock & 0x10) != 0 )
      {
        ndisSetDeviceInterfaceState(p_Blink, 1u);
        _InterlockedAnd(&a1[-40].Event.Header.Lock, 0xFFFFFFEF);
      }
      v46 = 1;
      v51 = (_BYTE)ndisAcOnLine == 1;
      ndisNotifyMiniports(p_Blink, v28, &v51);
      if ( a1[-223].Event.Header.Type < 6u )
        ndisQueryMediaStatus(p_Blink);
    }
    HIDWORD(a1[-64].Event.Header.WaitListHead.Blink) = DeviceState;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v44) = DeviceState;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x4Bu,
        (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
        (char)p_Blink,
        v44);
    }
    NDIS_COUNT_POWER_TRANSITION(p_Blink, DeviceState);
    if ( (byte_14011D041 & 8) != 0 )
    {
      LODWORD(v45) = DeviceState;
      LODWORD(v44) = 1;
      LODWORD(v43) = a1[-56].Event.Header.WaitListHead.Blink;
      McTemplateK0jqxqq_EtwWriteTransfer(
        v31,
        &DevicePowerStateChange,
        (const GUID *)&a1[-58].Event.Header.WaitListHead.Blink,
        (__int64)&a1[-58].Event.Header.WaitListHead.Blink,
        (__int64)v43,
        (__int64)a1[-57].Event.Header.WaitListHead.Flink,
        v44,
        v45);
    }
    if ( (mem::ReadNoFence<unsigned long,void>(v6) & 0x80u) == 0LL )
      PoSetPowerState(*(PDEVICE_OBJECT *)&a1[-65].Event.Header.Lock, DevicePowerState, (POWER_STATE)DeviceState);
    goto LABEL_73;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      14,
      69,
      (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
      (char)p_Blink);
  }
  if ( (byte_14011D041 & 8) != 0 )
  {
    LODWORD(v44) = 65537;
    LODWORD(v43) = a1[-56].Event.Header.WaitListHead.Blink;
    McTemplateK0jqxd_EtwWriteTransfer(
      Status,
      (__int64)&PowerOnMiniportRemoved,
      (__int64)&a1[-58].Event.Header.WaitListHead.Blink,
      (__int64)&a1[-58].Event.Header.WaitListHead.Blink,
      (__int64)v43,
      (__int64)a1[-57].Event.Header.WaitListHead.Flink,
      v44);
  }
  IofCompleteRequest(Flink, 0);
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)&a1[-6]);
  ndisSignalD0RequestComplete(p_Blink, 0);
  ndisDereferenceMiniport(p_Blink, 0xCu);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v15,
      14,
      70,
      (struct _GUID *)&WPP_03f6276072d53ed3c04a8bf70663e8f8_Traceguids,
      (char)p_Blink);
  }
}
