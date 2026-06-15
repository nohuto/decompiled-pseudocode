/*
 * XREFs of ??1CHandle@ATL@@QEAA@XZ @ 0x1800AF3C4
 * Callers:
 *     ??0AtmosCheck@@QEAA@XZ @ 0x180092F64 (--0AtmosCheck@@QEAA@XZ.c)
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEBU_tlgProvider_t@@@Z @ 0x18009DEA0 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEB.c)
 *     ??1CEvent@ATL@@QEAA@XZ @ 0x18011BB4C (--1CEvent@ATL@@QEAA@XZ.c)
 *     ??1CaptureMonitor@CMonitorManager@@IEAA@XZ @ 0x18011BCB8 (--1CaptureMonitor@CMonitorManager@@IEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CHandle::~CHandle(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    CloseHandle(v2);
    *this = 0LL;
  }
}
