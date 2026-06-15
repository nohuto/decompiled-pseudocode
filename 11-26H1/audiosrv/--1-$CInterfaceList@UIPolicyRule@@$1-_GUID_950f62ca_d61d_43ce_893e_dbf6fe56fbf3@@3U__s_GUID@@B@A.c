/*
 * XREFs of ??1?$CInterfaceList@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@QEAA@XZ @ 0x1800D3270
 * Callers:
 *     _DynamicAudioEndpointManager::DynamicAudioEndpointManager_::_1_::dtor$2 @ 0x180168469 (_DynamicAudioEndpointManager--DynamicAudioEndpointManager_--_1_--dtor$2.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$3 @ 0x18016AD19 (_CMonitorManager--CMonitorManager_--_1_--dtor$3.c)
 *     _CMonitorManager::Initialize_::_1_::dtor$1 @ 0x18016AF65 (_CMonitorManager--Initialize_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CInterfaceList<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>::~CInterfaceList<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>(
        void *a1)
{
  ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::RemoveAll(a1);
}
