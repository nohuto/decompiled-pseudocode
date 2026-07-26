/*
 * XREFs of ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14001E520
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z @ 0x140006E90 (-ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x14001B4C0 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisIfGetRcvAddressFromMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001E020 (-ndisIfGetRcvAddressFromMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qqqL @ 0x14001E380 (WPP_RECORDER_SF_qqqL.c)
 *     NdisOpenConfigurationEx @ 0x140020570 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x140020B40 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x140020C40 (NdisReadConfiguration.c)
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memcmp @ 0x1400EA9E0 (memcmp.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x140138920 (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x14015DA60 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ndisNsiSyncMiniportMediaConnectStateNotification @ 0x140163CC0 (ndisNsiSyncMiniportMediaConnectStateNotification.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140163D10 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z @ 0x1401693D0 (-ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceOnInitialize(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_IF_BLOCK *a2,
        struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *a3)
{
  unsigned int IntegerData; // edi
  struct _NDIS_IF_BLOCK *v5; // rbx
  NDIS_STATUS v7; // eax
  int v8; // edx
  PVOID v9; // r13
  unsigned int updated; // r15d
  int v11; // ecx
  unsigned int MacAddressLength; // edi
  size_t v13; // rsi
  size_t v14; // r8
  size_t v15; // r8
  __int16 v16; // ax
  size_t v17; // r8
  unsigned __int16 v18; // ax
  _NDIS_MEDIUM MediaType; // eax
  char v20; // si
  _NDIS_PHYSICAL_MEDIUM PhysicalMediumType; // eax
  KIRQL v22; // dl
  KIRQL v23; // di
  unsigned __int8 *p_NetLuid; // rax
  char v26; // [rsp+30h] [rbp-88h]
  unsigned __int8 ifDeviceWakeUpEnable; // [rsp+50h] [rbp-68h]
  PVOID ConfigurationHandle; // [rsp+58h] [rbp-60h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+60h] [rbp-58h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+68h] [rbp-50h] BYREF
  char v31; // [rsp+C0h] [rbp+8h]
  int Status; // [rsp+D8h] [rbp+20h] BYREF

  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  LOBYTE(IntegerData) = 0;
  *(&ConfigObject.Flags + 1) = 0;
  v5 = a2;
  ConfigurationHandle = 0LL;
  ParameterValue = 0LL;
  v31 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      22,
      16,
      (struct _GUID *)&WPP_3d61bbabecaa38aa84130e7e4a2da4d6_Traceguids,
      (char)a1,
      v26,
      (char)a3);
  }
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = 0;
  v7 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v9 = ConfigurationHandle;
  updated = v7;
  Status = v7;
  if ( !v7 )
  {
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NdisDeviceTypeStr, NdisParameterInteger);
    if ( !Status )
      IntegerData = ParameterValue->ParameterData.IntegerData;
    updated = 0;
    LOBYTE(Status) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
    v11 = 0;
    v5->AccessType = a3->AccessType;
    v5->DirectionType = a3->DirectionType;
    v5->ifConnectorPresent = a3->IfConnectorPresent;
    v5->ConnectionType = a3->ConnectionType;
    v5->ifMtu = a3->MtuSize;
    v5->Flags = 0;
    if ( (a1->PnPFlags & 0x200000) != 0 )
    {
      v5->Flags = 1;
      v11 = 1;
    }
    if ( (a1->PnPFlags & 0x8000000) != 0 )
    {
      v11 |= 2u;
      v5->Flags = v11;
    }
    if ( (a1->PnPFlags & 0x400000) != 0 )
    {
      v11 |= 0x20u;
      v5->Flags = v11;
    }
    if ( (IntegerData & 1) != 0 )
    {
      v11 |= 0x40u;
      v5->Flags = v11;
    }
    if ( (a1->PnPFlags & 0x200000) != 0 && ndisAoAcCapable || (a1->FilterPnPFlags & 0x200) != 0 )
    {
      v11 |= 0x100u;
      v5->Flags = v11;
    }
    v5->ifFlags = v11;
    MacAddressLength = a3->MacAddressLength;
    v13 = 32LL;
    if ( v5->ifPhysAddress.Length != (_WORD)MacAddressLength )
      goto LABEL_23;
    v14 = 32LL;
    if ( MacAddressLength < 0x20 )
      v14 = a3->MacAddressLength;
    if ( memcmp(v5->ifPhysAddress.Address, a3->CurrentMacAddress, v14) )
      goto LABEL_23;
    v15 = 32LL;
    if ( MacAddressLength < 0x20 )
      v15 = MacAddressLength;
    if ( memcmp(v5->PermanentPhysAddress.Address, a3->PermanentMacAddress, v15) )
LABEL_23:
      v31 = 1;
    v16 = 32;
    if ( MacAddressLength < 0x20 )
      v16 = MacAddressLength;
    v5->ifPhysAddress.Length = v16;
    if ( a3->MacAddressLength >= 0x20u )
      v17 = 32LL;
    else
      v17 = a3->MacAddressLength;
    memmove(v5->ifPhysAddress.Address, a3->CurrentMacAddress, v17);
    v18 = 32;
    if ( a3->MacAddressLength < 0x20u )
      v18 = a3->MacAddressLength;
    v5->PermanentPhysAddress.Length = v18;
    if ( a3->MacAddressLength < 0x20u )
      v13 = a3->MacAddressLength;
    memmove(v5->PermanentPhysAddress.Address, a3->PermanentMacAddress, v13);
    v5->XmitLinkSpeed = a3->XmitLinkSpeed;
    v5->RcvLinkSpeed = a3->RcvLinkSpeed;
    v5->MediaConnectState = a3->MediaConnectState;
    v5->MediaDuplexState = a3->MediaDuplexState;
    v5->SupportedStatistics = a3->SupportedStatistics;
    MediaType = a3->MediaType;
    if ( v5->MediaType == MediaType )
    {
      v20 = 0;
    }
    else
    {
      v5->MediaType = MediaType;
      v20 = 1;
    }
    PhysicalMediumType = a3->PhysicalMediumType;
    if ( v5->PhysicalMediumType != PhysicalMediumType )
    {
      v5->PhysicalMediumType = PhysicalMediumType;
      v20 = 1;
    }
    v22 = Status;
    ifDeviceWakeUpEnable = v5->ifDeviceWakeUpEnable;
    v5->ifDeviceWakeUpEnable = a1->PMCapabilities61.Flags & 1;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved, v22);
    ndisIfUpdateInterfaceHiddenFlag(v5, (a1->PnPFlags & 0x1000) != 0);
    if ( v5->Source == NdisIfBlockSourcePersistedNetSetup )
    {
      if ( (v20 || v31) && (int)ndisIfWriteBackPersistedInterface(v5) < 0 )
      {
        updated = -1073741823;
        goto LABEL_41;
      }
LABEL_39:
      v23 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      a1->MiniportThread = KeGetCurrentThread();
      ndisIfSetInterfaceState(a1, 0, v23);
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v23);
      ndisNsiSyncMiniportOperStatusNotification(a1);
      ndisNsiSyncMiniportMediaConnectStateNotification(a1);
      ndisIfGetRcvAddressFromMiniport(a1);
      if ( ifDeviceWakeUpEnable != v5->ifDeviceWakeUpEnable )
        ndisNsiScheduleIfBlockRodChangeNotification(v5, &v5->ifDeviceWakeUpEnable, 1, 641);
      goto LABEL_41;
    }
    p_NetLuid = (unsigned __int8 *)&v5->NetLuid;
    if ( v20 )
    {
      updated = ndisIfUpdatePersistedInterfaceInfo(
                  (unsigned __int8 *)&v5->NetLuid,
                  8u,
                  0x434u,
                  (unsigned __int8 *)&v5->MediaType);
      if ( updated )
        goto LABEL_41;
      p_NetLuid = (unsigned __int8 *)&v5->NetLuid;
    }
    if ( !v31 )
      goto LABEL_39;
    updated = ndisIfUpdatePersistedInterfaceInfo(p_NetLuid, 0x44u, 0x440u, (unsigned __int8 *)&v5->ifPhysAddress);
    if ( !updated )
      goto LABEL_39;
  }
LABEL_41:
  if ( v9 )
    NdisCloseConfiguration(v9);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      0x16u,
      0x11u,
      (struct _GUID *)&WPP_3d61bbabecaa38aa84130e7e4a2da4d6_Traceguids,
      (char)a1,
      (char)v5,
      (char)a3,
      updated);
  return updated;
}
