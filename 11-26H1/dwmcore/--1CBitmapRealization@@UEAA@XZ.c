/*
 * XREFs of ??1CBitmapRealization@@UEAA@XZ @ 0x1800F5844
 * Callers:
 *     ??1?$CDeviceResourceT@V?$IBitmapRealizationMethodsT@VCBitmapRealization@@VIYUVSwapChainRealization@@@@@@MEAA@XZ @ 0x1800FB0FC (--1-$CDeviceResourceT@V-$IBitmapRealizationMethodsT@VCBitmapRealization@@VIYUVSwapChainRealizati.c)
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x1801B3AEC (--1CSectionBitmapRealization@@MEAA@XZ.c)
 *     ??_ECBitmapRealization@@UEAAPEAXI@Z @ 0x1802AA740 (--_ECBitmapRealization@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDxHandleStereoBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800F586C (--1-$com_ptr_t@VCDxHandleStereoBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CBitmapRealization::~CBitmapRealization(CBitmapRealization *this)
{
  wil::com_ptr_t<CDxHandleStereoBitmapRealization,wil::err_returncode_policy>::~com_ptr_t<CDxHandleStereoBitmapRealization,wil::err_returncode_policy>((char *)this + 288);
  CD2DBitmapCache::~CD2DBitmapCache(this);
}
