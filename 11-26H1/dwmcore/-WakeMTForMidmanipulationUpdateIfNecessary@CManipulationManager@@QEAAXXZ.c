/*
 * XREFs of ?WakeMTForMidmanipulationUpdateIfNecessary@CManipulationManager@@QEAAXXZ @ 0x1800E5F9C
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18002D828 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1800E6080 (-SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionCo.c)
 * Callees:
 *     <none>
 */

void __fastcall CManipulationManager::WakeMTForMidmanipulationUpdateIfNecessary(CManipulationManager *this)
{
  if ( dword_1803DCB40 )
    SetEvent(CManipulationManager::s_rghWaitEvents);
}
