/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@UIPrivilegedOperationsConsumer@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180325F58
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@UIPrivilegedOperationsConsumer@@@WRL@Microsoft@@WBI@EAAPEAXI@Z @ 0x180325F00 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UI.c)
 * Callees:
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801B3620 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarke_ea_1801B3620.c)
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,IFullScreenManager,IFullScreenManagerPriv,IFullScreenNotificationService,IFullScreenPositionerNotification,IImmersiveMonitorNotification,IPrivilegedOperationsConsumer>::`vector deleting destructor'(
        _DWORD *Block,
        char a2)
{
  Block[35] = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CImmersiveShellComponent>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CImmersiveShellComponent>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
