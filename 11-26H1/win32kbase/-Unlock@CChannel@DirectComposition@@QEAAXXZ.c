/*
 * XREFs of ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1400A6398
 * Callers:
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x140055258 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1400A625C (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle@@@Z @ 0x1400A62C8 (-EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle.c)
 *     ?BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z @ 0x1400A97E0 (-BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1400A9A0C (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     ?Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z @ 0x1400B1A60 (-Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ @ 0x1400E54A0 (-UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x14012B768 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJXZ @ 0x1401353AC (-ForceRender@CConnection@DirectComposition@@QEAAJXZ.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x140163454 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?ReevaluateMPOCapabilities@CConnection@DirectComposition@@QEAAJXZ @ 0x14016923C (-ReevaluateMPOCapabilities@CConnection@DirectComposition@@QEAAJXZ.c)
 *     ?ReevaluateDDA@CConnection@DirectComposition@@QEAAJXZ @ 0x14018DF0C (-ReevaluateDDA@CConnection@DirectComposition@@QEAAJXZ.c)
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1401B2890 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     DCompositionEnableHwProtectionTeardown @ 0x140228790 (DCompositionEnableHwProtectionTeardown.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z @ 0x140229D3C (-Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?DesktopCaptureBits@CConnection@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x140229FC0 (-DesktopCaptureBits@CConnection@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z.c)
 *     ?UnlockAndUnreference@CChannel@DirectComposition@@UEAAXXZ @ 0x14022AF50 (-UnlockAndUnreference@CChannel@DirectComposition@@UEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A6750 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A901C (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x14012B8DC (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CChannel::Unlock(DirectComposition::CChannel *this)
{
  DirectComposition::CConnection **v2; // rdi

  ExReleaseResourceLite(*((PERESOURCE *)this + 4));
  KeLeaveCriticalRegion();
  do
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 6, 2, 1) == 1 )
    {
      DirectComposition::CCriticalSection::AcquireExclusive(*((PERESOURCE *)this + 4));
      (*(void (__fastcall **)(DirectComposition::CChannel *, _QWORD))(*(_QWORD *)this + 48LL))(this, 0LL);
      v2 = (DirectComposition::CConnection **)((char *)this + 40);
      DirectComposition::CCriticalSection::AcquireShared(*(PERESOURCE *)(*((_QWORD *)this + 5) + 16LL));
      if ( DirectComposition::CConnection::IsConnected(*((DirectComposition::CConnection **)this + 5)) )
        *((_DWORD *)this + 6) = 4;
      ExReleaseResourceLite(*((PERESOURCE *)this + 4));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*((PERESOURCE *)*v2 + 2));
      KeLeaveCriticalRegion();
    }
    else
    {
      v2 = (DirectComposition::CConnection **)((char *)this + 40);
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 6, 5, 4) == 4 )
    {
      DirectComposition::CCriticalSection::AcquireExclusive(*((PERESOURCE *)this + 4));
      (*(void (__fastcall **)(DirectComposition::CChannel *))(*(_QWORD *)this + 56LL))(this);
      DirectComposition::CCriticalSection::AcquireShared(*((PERESOURCE *)*v2 + 2));
      if ( !DirectComposition::CConnection::IsConnected(*v2) )
        *((_DWORD *)this + 6) = 1;
      ExReleaseResourceLite(*((PERESOURCE *)this + 4));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*((PERESOURCE *)*v2 + 2));
      KeLeaveCriticalRegion();
    }
  }
  while ( *((_DWORD *)this + 6) == 1 );
}
