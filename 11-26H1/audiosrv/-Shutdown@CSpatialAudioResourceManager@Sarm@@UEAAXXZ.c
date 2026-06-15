/*
 * XREFs of ?Shutdown@CSpatialAudioResourceManager@Sarm@@UEAAXXZ @ 0x180126E90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x18005CDC4 (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 *     ?GetFirst@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sarm@@XZ @ 0x1801250C0 (-GetFirst@-$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResourc.c)
 *     ?GetFirst@?$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResourcePool@Sarm@@XZ @ 0x180125100 (-GetFirst@-$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointR.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1801269C0 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 *     ?Shutdown@CWorkFifo@@QEAAXXZ @ 0x180126F54 (-Shutdown@CWorkFifo@@QEAAXXZ.c)
 */

void __fastcall Sarm::CSpatialAudioResourceManager::Shutdown(Sarm::CSpatialAudioResourceManager *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  struct Sarm::CStreamResource *First; // rax
  __int64 *v4; // rax
  std::_Ref_count_base *v5; // rcx

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  CWorkFifo::Shutdown((Sarm::CSpatialAudioResourceManager *)((char *)this + 304));
  while ( 1 )
  {
    First = (struct Sarm::CStreamResource *)util::InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>::GetFirst((__int64)this + 192);
    if ( !First )
      break;
    Sarm::CSpatialAudioResourceManager::RemoveStream(this, First);
  }
  while ( 1 )
  {
    v4 = (__int64 *)util::InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>::GetFirst((__int64)this + 112);
    if ( !v4 )
      break;
    if ( *v4 )
      ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos(
        (__int64)this + 112,
        *v4);
  }
  v5 = qword_1801D7D90;
  Sarm::CEndpointResourcePool::s_sharedPool = 0LL;
  qword_1801D7D90 = 0LL;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  *((_BYTE *)this + 104) = 0;
  if ( v1 )
    LeaveCriticalSection(v1);
}
