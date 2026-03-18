/*
 * XREFs of ?GetRequestedVBlankDurationHns@RefreshRateInfo@@QEBAIXZ @ 0x1801CDC2C
 * Callers:
 *     ?ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@PEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800350DC (-ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@PEBUD.c)
 *     ?SetVBlankDuration@CLegacySwapChain@@UEAA_NI_K@Z @ 0x1801CDA60 (-SetVBlankDuration@CLegacySwapChain@@UEAA_NI_K@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RefreshRateInfo::GetRequestedVBlankDurationHns(RefreshRateInfo *this)
{
  if ( *((_QWORD *)this + 4) )
    return (unsigned __int64)(10000000LL * *((_QWORD *)this + 4)) / g_qpcFrequency.QuadPart;
  else
    return 0LL;
}
