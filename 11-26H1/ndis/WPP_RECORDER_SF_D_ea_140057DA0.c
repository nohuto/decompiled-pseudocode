/*
 * XREFs of WPP_RECORDER_SF_D @ 0x140057DA0
 * Callers:
 *     ndisLwmIoctlIrpHandler @ 0x14000CEA0 (ndisLwmIoctlIrpHandler.c)
 *     ?ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400214B0 (-ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     NdisAllocatePacketPoolEx @ 0x14002BE50 (NdisAllocatePacketPoolEx.c)
 *     ?ndisSetMiniportPacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400351C0 (-ndisSetMiniportPacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     NdisGetVersion @ 0x140057D40 (NdisGetVersion.c)
 *     NdisAllocateNetBufferListPool @ 0x14005B160 (NdisAllocateNetBufferListPool.c)
 *     NdisFRegisterFilterDriver @ 0x14009D990 (NdisFRegisterFilterDriver.c)
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x14009F9E0 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ndisCpuHotAddHandler @ 0x1400A56B0 (ndisCpuHotAddHandler.c)
 *     ndisDriverSystemDispatch @ 0x1400A59D8 (ndisDriverSystemDispatch.c)
 *     ndisEtwRegisterGuids @ 0x1400A5BAC (ndisEtwRegisterGuids.c)
 *     ?ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B62F4 (-ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B85CC (-ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z @ 0x1400C3C84 (-ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z.c)
 *     ndisValidateSGDmaDescription @ 0x1400CABB8 (ndisValidateSGDmaDescription.c)
 *     ?ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ @ 0x1400D44B0 (-ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ.c)
 *     NdisOpenFile @ 0x1400D9B70 (NdisOpenFile.c)
 *     ?ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400E011C (-ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CA.c)
 *     ?ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E1BC0 (-ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E3A90 (-ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     NdisSetAoAcOptions @ 0x140139420 (NdisSetAoAcOptions.c)
 *     ?ndisEnableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140143D20 (-ndisEnableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_CHARACTERISTICS@@@Z @ 0x140148514 (-RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_C.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x140165C40 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ?DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z @ 0x14016A9D0 (-DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z.c)
 *     NdisMapFile @ 0x1401762B0 (NdisMapFile.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     DriverEntry @ 0x14018E240 (DriverEntry.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400236B0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_D(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, struct _GUID *a5, ...)
{
  unsigned __int64 v7; // r11
  unsigned int v9; // edi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  v7 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v10 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v7 + 41) >= a2 )
    ndisWppFastTraceMessage(a5, a4, va, 4LL, 0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v12, va, 4LL, 0LL);
}
