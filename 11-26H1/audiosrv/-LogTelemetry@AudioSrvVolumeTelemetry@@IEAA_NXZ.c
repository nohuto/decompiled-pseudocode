/*
 * XREFs of ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x180043F34
 * Callers:
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x180043EAC (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     ??1AudioSrvVolumeTelemetrySessionVolume@@QEAA@XZ @ 0x1800449DC (--1AudioSrvVolumeTelemetrySessionVolume@@QEAA@XZ.c)
 *     ??1AudioSrvVolumeTelemetryEndpointVolume@@QEAA@XZ @ 0x18008437C (--1AudioSrvVolumeTelemetryEndpointVolume@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall AudioSrvVolumeTelemetry::LogTelemetry(AudioSrvVolumeTelemetry *this)
{
  __int64 v1; // rsi
  char v2; // di

  v1 = *((_QWORD *)this + 1);
  v2 = 0;
  if ( v1 && GetTickCount64() - v1 > 0x3E8 )
  {
    (**(void (__fastcall ***)(AudioSrvVolumeTelemetry *, _QWORD, _QWORD))this)(
      this,
      *((_QWORD *)this + 1) - *((_QWORD *)this + 2),
      *((unsigned int *)this + 6));
    return 1;
  }
  return v2;
}
