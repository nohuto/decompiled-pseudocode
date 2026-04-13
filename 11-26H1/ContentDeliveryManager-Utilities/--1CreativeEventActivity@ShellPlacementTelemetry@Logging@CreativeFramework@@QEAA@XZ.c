/*
 * XREFs of ??1CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x18004D064
 * Callers:
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@W4EventNotificationType@2@@Z @ 0x1800558F0 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEvent_::_1_::dtor$0 @ 0x1800BAEFB (_ContentManagement--ContentManagementService--ProcessCreativeEvent_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18004F040 (-Destroy@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgRef.c)
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::~CreativeEventActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity *this)
{
  *(_QWORD *)this = &CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::`vftable';
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
