/*
 * XREFs of NdisConvertNtStatusToNdisStatus @ 0x14005C970
 * Callers:
 *     NdisOpenConfiguration @ 0x14007B230 (NdisOpenConfiguration.c)
 *     NdisLWMRegisterMiniportDriver @ 0x140094F30 (NdisLWMRegisterMiniportDriver.c)
 *     ndisRegisterFilterTriageData @ 0x14009A5D0 (ndisRegisterFilterTriageData.c)
 *     ndisRegisterFilterDriverTriageData @ 0x14009CB5C (ndisRegisterFilterDriverTriageData.c)
 *     ?ndisOidPreRcvFilterSetFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400AE0F0 (-ndisOidPreRcvFilterSetFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@PEAU_NDIS_SRIOV_CAPABILITIES@@@Z @ 0x1400AE400 (-ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_.c)
 *     ?ndisXlateAddPacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B9680 (-ndisXlateAddPacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ndisRegisterCommonOpenTriageData @ 0x1400BB678 (ndisRegisterCommonOpenTriageData.c)
 *     ndisRegisterProtocolTriageData @ 0x1400BB718 (ndisRegisterProtocolTriageData.c)
 *     ?ndisSetTaskOffloadValidate@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400C27B4 (-ndisSetTaskOffloadValidate@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_.c)
 *     ndisWdfOpenConfiguration @ 0x1401396AC (ndisWdfOpenConfiguration.c)
 *     NdisRegisterPoll @ 0x140145F10 (NdisRegisterPoll.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14015F7C0 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisConvertNtStatusToNdisStatus(int a1)
{
  __int64 result; // rax

  if ( a1 < 0 )
  {
    result = 3221291030LL;
    if ( a1 != -1073741789 )
      return (unsigned int)a1;
  }
  else
  {
    if ( a1 != 259 && a1 != 1076035585 )
      return 0;
    return (unsigned int)a1;
  }
  return result;
}
