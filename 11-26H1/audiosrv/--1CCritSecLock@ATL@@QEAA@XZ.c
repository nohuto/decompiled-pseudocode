/*
 * XREFs of ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18006110C
 * Callers:
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z @ 0x18005F424 (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z.c)
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x1800601A8 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ @ 0x180060D14 (-ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x1800AEB68 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x1800F16B0 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescri.c)
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800F1D7C (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU.c)
 *     ?DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800F26C4 (-DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo.c)
 *     ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800F2A54 (-DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleI.c)
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z @ 0x1800F31A0 (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z.c)
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800F4378 (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?ReleaseAllResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800F4CC0 (-ReleaseAllResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x1800F4D50 (-ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@@Z @ 0x1800F5054 (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@@Z.c)
 *     ?RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z @ 0x1800F5180 (-RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z.c)
 *     ?Shutdown@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800F5594 (-Shutdown@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x18011C154 (-CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ.c)
 *     ?Continue@CMonitorManager@@QEAAXXZ @ 0x18011C2A4 (-Continue@CMonitorManager@@QEAAXXZ.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18011C8F8 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x18011D0AC (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18011DC34 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?InitializeMonitorRestartTimer@CMonitorManager@@AEAAJK_KPEBK@Z @ 0x18011E89C (-InitializeMonitorRestartTimer@CMonitorManager@@AEAAJK_KPEBK@Z.c)
 *     ?OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ @ 0x18011F098 (-OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ.c)
 *     ?Pause@CMonitorManager@@QEAAXXZ @ 0x18011F648 (-Pause@CMonitorManager@@QEAAXXZ.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x18011FB6C (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 *     ?ScheduleMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x18011FD00 (-ScheduleMonitorRestartTimer@CMonitorManager@@AEAAXXZ.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x18012007C (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 *     ?StopIfRunning@CMonitor@@QEAAXXZ @ 0x180120210 (-StopIfRunning@CMonitor@@QEAAXXZ.c)
 *     ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x1801202A0 (-UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z @ 0x180121240 (-HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z.c)
 *     ?OnDeviceDescriptionChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x1801216C0 (-OnDeviceDescriptionChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?OnDeviceIconChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x180121824 (-OnDeviceIconChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x180121A78 (-OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x1801221D8 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x18012253C (-Stop@CMonitor@@QEAAXXZ.c)
 *     ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x1801537BC (-GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z.c)
 *     _CMonitorManager::QueueDeviceStateChanged_::_1_::dtor$2 @ 0x180164C0A (_CMonitorManager--QueueDeviceStateChanged_--_1_--dtor$2.c)
 *     _CMonitor::Terminate_::_1_::dtor$0 @ 0x1801656C5 (_CMonitor--Terminate_--_1_--dtor$0.c)
 *     _CMonitor::OnPauseOnBatteryChanged_::_1_::dtor$1 @ 0x1801656D7 (_CMonitor--OnPauseOnBatteryChanged_--_1_--dtor$1.c)
 *     _CMonitor::Initialize_::_1_::dtor$1 @ 0x180165DB8 (_CMonitor--Initialize_--_1_--dtor$1.c)
 *     _CMonitorManager::DoHandleDefaultDeviceChanged_::_1_::dtor$0 @ 0x180165DDC (_CMonitorManager--DoHandleDefaultDeviceChanged_--_1_--dtor$0.c)
 *     _CMonitorManager::DoHandleDefaultDeviceChanged_::_1_::dtor$1 @ 0x180165DEE (_CMonitorManager--DoHandleDefaultDeviceChanged_--_1_--dtor$1.c)
 *     _CConstraintModelResourceManager::AddWorkItemToQueue_::_1_::dtor$0 @ 0x180166090 (_CConstraintModelResourceManager--AddWorkItemToQueue_--_1_--dtor$0.c)
 *     _CConstraintModelResourceManager::AssignResourceGroup_::_1_::dtor$4 @ 0x180169AA1 (_CConstraintModelResourceManager--AssignResourceGroup_--_1_--dtor$4.c)
 *     _CConstraintModelResourceManager::ProcessRevokedResources_::_1_::dtor$1 @ 0x180169AFB (_CConstraintModelResourceManager--ProcessRevokedResources_--_1_--dtor$1.c)
 *     _CConstraintModelResourceManager::DoReacquireSaDeviceResource_::_1_::dtor$4 @ 0x180169B1F (_CConstraintModelResourceManager--DoReacquireSaDeviceResource_--_1_--dtor$4.c)
 *     _CConstraintModelResourceManager::DoReacquireSaDeviceResource_::_1_::dtor$8 @ 0x180169B31 (_CConstraintModelResourceManager--DoReacquireSaDeviceResource_--_1_--dtor$8.c)
 *     _CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate_::_1_::dtor$2 @ 0x18016AE95 (_CMonitorManager--DoCreateMonitorForCaptureDeviceIfAppropriate_--_1_--dtor$2.c)
 *     _CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate_::_1_::dtor$5 @ 0x18016AEA7 (_CMonitorManager--DoCreateMonitorForCaptureDeviceIfAppropriate_--_1_--dtor$5.c)
 *     _CMonitorManager::Initialize_::_1_::dtor$3 @ 0x18016AF77 (_CMonitorManager--Initialize_--_1_--dtor$3.c)
 *     _CMonitor::Start_::_1_::dtor$0 @ 0x18016B0CD (_CMonitor--Start_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CCritSecLock::~CCritSecLock(LPCRITICAL_SECTION *this)
{
  if ( *((_BYTE *)this + 8) )
  {
    LeaveCriticalSection(*this);
    *((_BYTE *)this + 8) = 0;
  }
}
