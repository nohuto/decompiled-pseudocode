/*
 * XREFs of ??1?$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAA@XZ @ 0x1801246E4
 * Callers:
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$3 @ 0x18016B1F4 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 util::InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>::~InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>()
{
  return ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAll();
}
