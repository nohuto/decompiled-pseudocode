/*
 * XREFs of ?Init@CImmersiveOrPrimaryMonitor@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800530C8
 * Callers:
 *     ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x180052AC4 (-GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?GetScalingInfoForMonitor@@YAJPEAUHMONITOR__@@PEAUSCALINGINFO@@@Z @ 0x180053038 (-GetScalingInfoForMonitor@@YAJPEAUHMONITOR__@@PEAUSCALINGINFO@@@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18005278C (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?InitImpl@CImmersiveOrPrimaryMonitor@@CAXAEBU_DPI_INFORMATION@@PEAUSCALINGINFO@@@Z @ 0x18005316C (-InitImpl@CImmersiveOrPrimaryMonitor@@CAXAEBU_DPI_INFORMATION@@PEAUSCALINGINFO@@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     memset_0 @ 0x18009B730 (memset_0.c)
 */

__int64 __fastcall CImmersiveOrPrimaryMonitor::Init(CImmersiveOrPrimaryMonitor *this, HMONITOR a2)
{
  bool v4; // bl
  signed int Error; // edi
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
