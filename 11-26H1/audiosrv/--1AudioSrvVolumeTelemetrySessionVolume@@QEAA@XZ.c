/*
 * XREFs of ??1AudioSrvVolumeTelemetrySessionVolume@@QEAA@XZ @ 0x1800449DC
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x18004456C (--1CAudioSession@@MEAA@XZ.c)
 * Callees:
 *     ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x180043F34 (-LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ.c)
 */

void __fastcall AudioSrvVolumeTelemetrySessionVolume::~AudioSrvVolumeTelemetrySessionVolume(
        AudioSrvVolumeTelemetrySessionVolume *this)
{
  *(_QWORD *)this = &AudioSrvVolumeTelemetrySessionVolume::`vftable';
  AudioSrvVolumeTelemetry::LogTelemetry(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
}
