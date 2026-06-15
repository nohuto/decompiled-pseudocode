/*
 * XREFs of ??0AudioSrvVolumeTelemetry@@QEAA@XZ @ 0x1800772D4
 * Callers:
 *     ??0AudioSrvVolumeTelemetrySessionVolume@@QEAA@XZ @ 0x180041304 (--0AudioSrvVolumeTelemetrySessionVolume@@QEAA@XZ.c)
 *     ??0CVolumeControlBase@@IEAA@PEAUIControlChangeNotify@@@Z @ 0x1800771E8 (--0CVolumeControlBase@@IEAA@PEAUIControlChangeNotify@@@Z.c)
 * Callees:
 *     <none>
 */

AudioSrvVolumeTelemetry *__fastcall AudioSrvVolumeTelemetry::AudioSrvVolumeTelemetry(AudioSrvVolumeTelemetry *this)
{
  *(_QWORD *)this = &AudioSrvVolumeTelemetry::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 32), 0, 0);
  return this;
}
