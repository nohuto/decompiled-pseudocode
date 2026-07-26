/*
 * XREFs of ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x14015FCA0
 * Callers:
 *     ndisBindReadFilterDriverSettingsFromV3Registry @ 0x14014B908 (ndisBindReadFilterDriverSettingsFromV3Registry.c)
 *     ndisIsBindPathEnabled @ 0x14014E564 (ndisIsBindPathEnabled.c)
 *     ?ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x14014EA5C (-ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 *     ?ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x14014EDB4 (-ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 *     ndisReplaceBindTokens @ 0x14014EF58 (ndisReplaceBindTokens.c)
 *     ?ReadKnobFromKey@NetSetupKnobCollection@@EEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x140150540 (-ReadKnobFromKey@NetSetupKnobCollection@@EEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x14015F2A0 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x14015F9C0 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ndisIfReadHiddenFlag @ 0x140160000 (ndisIfReadHiddenFlag.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140056870 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     KRegKey::QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___ @ 0x14014A79C (KRegKey--QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___.c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x14015FD70 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     netsetupIsImpliedProperty @ 0x14015FFB0 (netsetupIsImpliedProperty.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadBoolean(
        NetSetupPropertyBag *this,
        const struct _NETSETUPPROPKEY *a2,
        bool *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  HANDLE v8; // rcx
  _UNICODE_STRING v9; // [rsp+20h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+20h] BYREF

  Handle = 0LL;
  v5 = NetSetupPropertyBag::OpenPropertyKey(this, a2, (struct KRegKey *)&Handle);
  v6 = v5;
  if ( v5 != -1073741772 )
  {
    if ( !v5 )
    {
      v9 = 0LL;
      v6 = KRegKey::QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___(&Handle, &v9, (char *)a3);
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
      return v6;
    }
LABEL_3:
    if ( Handle )
      ZwClose(Handle);
    return v6;
  }
  if ( !(unsigned __int8)netsetupIsImpliedProperty(a2) )
    goto LABEL_3;
  v8 = Handle;
  *a3 = 0;
  if ( v8 )
    ZwClose(v8);
  return 0LL;
}
