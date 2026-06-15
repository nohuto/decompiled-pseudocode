/*
 * XREFs of ??1CriticalSection@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18002B700
 * Callers:
 *     _CDuckingManager::CDuckingManager_::_1_::dtor$1 @ 0x18004BCD5 (_CDuckingManager--CDuckingManager_--_1_--dtor$1.c)
 *     _ApplicationSpecificEndpointInfo::ApplicationSpecificEndpointInfo_::_1_::dtor$1 @ 0x18004BD44 (_ApplicationSpecificEndpointInfo--ApplicationSpecificEndpointInfo_--_1_--dtor$1.c)
 *     _CApplication::CApplication_::_1_::dtor$2 @ 0x18004C94E (_CApplication--CApplication_--_1_--dtor$2.c)
 *     _CApplication::CApplication_::_1_::dtor$5 @ 0x18004C990 (_CApplication--CApplication_--_1_--dtor$5.c)
 *     _CApplication::CApplication_::_1_::dtor$6 @ 0x18004C9A9 (_CApplication--CApplication_--_1_--dtor$6.c)
 *     _CApplication::CApplication_::_1_::dtor$7 @ 0x18004C9C2 (_CApplication--CApplication_--_1_--dtor$7.c)
 *     _CApplication::CApplication_::_1_::dtor$8 @ 0x18004C9DB (_CApplication--CApplication_--_1_--dtor$8.c)
 *     _CApplication::CApplication_::_1_::dtor$9 @ 0x18004C9F4 (_CApplication--CApplication_--_1_--dtor$9.c)
 *     _CApplication::CApplication_::_1_::dtor$10 @ 0x18004CA0D (_CApplication--CApplication_--_1_--dtor$10.c)
 *     _CApplication::CApplication_::_1_::dtor$11 @ 0x18004CA26 (_CApplication--CApplication_--_1_--dtor$11.c)
 *     _CDuckingManager::CDuckingManager_::_1_::dtor$4 @ 0x18004E4AB (_CDuckingManager--CDuckingManager_--_1_--dtor$4.c)
 *     _CEndpointVolumeStateManager::CEndpointVolumeStateManager_::_1_::dtor$1 @ 0x18004E55C (_CEndpointVolumeStateManager--CEndpointVolumeStateManager_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
