/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x18007B8B4
 * Callers:
 *     _CResourcePriorityTracker::CResourcePriorityTracker_::_1_::dtor$0 @ 0x180164AE5 (_CResourcePriorityTracker--CResourcePriorityTracker_--_1_--dtor$0.c)
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$2 @ 0x1801667F5 (_AtmosCheck--AtmosCheck_--_1_--dtor$2.c)
 *     _CAudioSessionManager::CAudioSessionManager_::_1_::dtor$0 @ 0x180167160 (_CAudioSessionManager--CAudioSessionManager_--_1_--dtor$0.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$0 @ 0x180169970 (_CMonitorManager--CMonitorManager_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::CExclusiveModeListener_::_1_::dtor$2 @ 0x18016999C (_CExclusiveModeListener--CExclusiveModeListener_--_1_--dtor$2.c)
 *     _CBtAudioResourceManagerBase::CBtAudioResourceManagerBase_::_1_::dtor$6 @ 0x180169CA8 (_CBtAudioResourceManagerBase--CBtAudioResourceManagerBase_--_1_--dtor$6.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$4 @ 0x180169CD7 (_CMonitorManager--CMonitorManager_--_1_--dtor$4.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$2 @ 0x18016AD03 (_CMonitorManager--CMonitorManager_--_1_--dtor$2.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$1 @ 0x18016B1C8 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$1.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$2 @ 0x18016B1DE (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
