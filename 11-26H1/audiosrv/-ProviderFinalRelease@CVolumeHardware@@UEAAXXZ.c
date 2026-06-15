/*
 * XREFs of ?ProviderFinalRelease@CVolumeHardware@@UEAAXXZ @ 0x1801192A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 *     ?Cleanup@VolumeHardwareLogger@@QEAAXXZ @ 0x180117838 (-Cleanup@VolumeHardwareLogger@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVolumeHardware::ProviderFinalRelease(CVolumeHardware *this)
{
  VolumeHardwareLogger::Cleanup((CVolumeHardware *)((char *)this + 296));
  if ( *((_QWORD *)this + 31) && *((_DWORD *)this + 70) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Bu,
        (__int64)&WPP_d2cd8b4ef06a3deb09d49ba9c3c05c3d_Traceguids,
        this);
    }
    (*(void (__fastcall **)(_QWORD, CVolumeHardware *))(**((_QWORD **)this + 31) + 120LL))(*((_QWORD *)this + 31), this);
    *((_DWORD *)this + 70) = 0;
  }
  ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 31);
}
