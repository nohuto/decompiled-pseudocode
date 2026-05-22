/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRemoteHotKeyProcessor@@UIMessageProxyListener@@@WRL@Microsoft@@UEAA@XZ @ 0x18006C528
 * Callers:
 *     ??1PTPProcessor@@UEAA@XZ @ 0x1801CA1C0 (--1PTPProcessor@@UEAA@XZ.c)
 *     _ShellGesturesProcessor::ShellGesturesProcessor_::_1_::dtor$0 @ 0x1801DA347 (_ShellGesturesProcessor--ShellGesturesProcessor_--_1_--dtor$0.c)
 *     _NonBamoInputDeliveryServer::NonBamoInputDeliveryServer_::_1_::dtor$0 @ 0x1801DBCD6 (_NonBamoInputDeliveryServer--NonBamoInputDeliveryServer_--_1_--dtor$0.c)
 *     _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$0 @ 0x1801DD752 (_HotKeyProcessor--HotKeyProcessor_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRemoteHotKeyProcessor,IMessageProxyListener>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRemoteHotKeyProcessor,IMessageProxyListener>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 20) = -1073741823;
}
