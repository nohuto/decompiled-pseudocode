/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140056870
 * Callers:
 *     ??1NDIS_MINIPORT_CREATION_CONFIG@@QEAA@XZ @ 0x1400567D0 (--1NDIS_MINIPORT_CREATION_CONFIG@@QEAA@XZ.c)
 *     ??1KnobTransaction@@QEAA@XZ @ 0x140056840 (--1KnobTransaction@@QEAA@XZ.c)
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x140071F80 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 *     ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x140074670 (-ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z.c)
 *     ndisEtwCaptureMiniportDriverData @ 0x140098584 (ndisEtwCaptureMiniportDriverData.c)
 *     ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x140139988 (-ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401417B0 (-ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x140146BD8 (ndisIfUpdateIfBlockFromPersistedState.c)
 *     GetModuleParameters @ 0x14014829C (GetModuleParameters.c)
 *     ?ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z @ 0x14014AB7C (-ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z.c)
 *     ?ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@@Z @ 0x14014AC28 (-ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$KArray@V-$unique_ptr@UKSt.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x14014B540 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ndisBindReadFilterDriverFromV3Registry @ 0x14014B680 (ndisBindReadFilterDriverFromV3Registry.c)
 *     ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x14014B9A8 (-ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___ @ 0x14014C594 (netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___.c)
 *     _lambda_3ed15a572a362cb111cc1d3010d8268d_::operator() @ 0x14014C6EC (_lambda_3ed15a572a362cb111cc1d3010d8268d_--operator().c)
 *     netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___ @ 0x14014CB5C (netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___.c)
 *     netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09___ @ 0x14014CCB4 (netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09___.c)
 *     netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___ @ 0x14014CE0C (netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___.c)
 *     netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___ @ 0x14014CF64 (netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___.c)
 *     ndisIsBindPathEnabled @ 0x14014E564 (ndisIsBindPathEnabled.c)
 *     ndisLoadNamedFilterAltitudes @ 0x14014E884 (ndisLoadNamedFilterAltitudes.c)
 *     ?ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x14014EA5C (-ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 *     ndisReadNicBindProperties @ 0x14014EC40 (ndisReadNicBindProperties.c)
 *     ?ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x14014EDB4 (-ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x14015DA60 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ndisWdfOpenConfigurationKey @ 0x14015DF30 (ndisWdfOpenConfigurationKey.c)
 *     ?Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x14015E360 (-Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ndisLWMBuildConfigurationKeyPath @ 0x14015ECA0 (ndisLWMBuildConfigurationKeyPath.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14015F700 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14015F7C0 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x14015F9C0 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x14015FCA0 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x14015FEF0 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ndisIfReadHiddenFlag @ 0x140160000 (ndisIfReadHiddenFlag.c)
 *     ?ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z @ 0x1401601E0 (-ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z.c)
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x140160770 (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 *     ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x140164E70 (-BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z.c)
 *     ?ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x140167C50 (-ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwEnableAlwaysOnCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016B1B0 (-ndisPcwEnableAlwaysOnCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z @ 0x14016C370 (-ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z.c)
 *     ndisBindBuilderLoadSettings @ 0x1401919DC (ndisBindBuilderLoadSettings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
        void **a1)
{
  void *v1; // rcx
  NTSTATUS result; // eax

  v1 = *a1;
  if ( v1 )
    return ZwClose(v1);
  return result;
}
