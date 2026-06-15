/*
 * XREFs of ??0CVolumeControlBase@@IEAA@PEAUIControlChangeNotify@@@Z @ 0x1800771E8
 * Callers:
 *     ?Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolumeControlHandler@@@Z @ 0x180118EDC (-Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolum.c)
 *     ?Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIVolumeControlHandler@@@Z @ 0x1801190A8 (-Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIVolumeControlHandler@.c)
 * Callees:
 *     ??0AudioSrvVolumeTelemetry@@QEAA@XZ @ 0x1800772D4 (--0AudioSrvVolumeTelemetry@@QEAA@XZ.c)
 *     ??0IVolumeControlHandler@@QEAA@XZ @ 0x1800B0F1C (--0IVolumeControlHandler@@QEAA@XZ.c)
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 */

CVolumeControlBase *__fastcall CVolumeControlBase::CVolumeControlBase(
        CVolumeControlBase *this,
        struct IControlChangeNotify *a2)
{
  IVolumeControlHandler::IVolumeControlHandler(this);
  *(_QWORD *)this = &CVolumeControlBase::`vftable';
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 8), 0, 0);
  *((_DWORD *)this + 12) = 51;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 16) = a2;
  *((_QWORD *)this + 14) = 0LL;
  AudioSrvVolumeTelemetry::AudioSrvVolumeTelemetry((CVolumeControlBase *)((char *)this + 136));
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 17) = &AudioSrvVolumeTelemetryEndpointVolume::`vftable';
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 58) = 0;
  *((_DWORD *)this + 60) = 1;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_d2cd8b4ef06a3deb09d49ba9c3c05c3d_Traceguids, this);
  }
  return this;
}
