/*
 * XREFs of ?Init@CImmersiveOrPrimaryMonitor@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800615BC
 * Callers:
 *     ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1800612C8 (-GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?GetScalingInfoForMonitor@@YAJPEAUHMONITOR__@@PEAUSCALINGINFO@@@Z @ 0x180061530 (-GetScalingInfoForMonitor@@YAJPEAUHMONITOR__@@PEAUSCALINGINFO@@@Z.c)
 * Callees:
 *     ?InitImpl@CImmersiveOrPrimaryMonitor@@CAXAEBU_DPI_INFORMATION@@PEAUSCALINGINFO@@@Z @ 0x180061660 (-InitImpl@CImmersiveOrPrimaryMonitor@@CAXAEBU_DPI_INFORMATION@@PEAUSCALINGINFO@@@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800618A8 (-ResultFromKnownLastError@@YAJXZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 */

__int64 __fastcall CImmersiveOrPrimaryMonitor::Init(CImmersiveOrPrimaryMonitor *this, HMONITOR a2)
{
  bool v4; // bl
  int Error; // edi
  _BYTE v7[96]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v7, 0, sizeof(v7));
  v4 = 0;
  if ( (unsigned int)GetCurrentDpiInfo(a2, v7) )
  {
    Error = 0;
  }
  else
  {
    Error = ResultFromKnownLastError();
    if ( Error < 0 )
      goto LABEL_4;
  }
  CImmersiveOrPrimaryMonitor::InitImpl((const struct _DPI_INFORMATION *)v7, this);
  v4 = a2 != 0LL;
LABEL_4:
  *((_BYTE *)this + 32) = v4;
  return (unsigned int)Error;
}
