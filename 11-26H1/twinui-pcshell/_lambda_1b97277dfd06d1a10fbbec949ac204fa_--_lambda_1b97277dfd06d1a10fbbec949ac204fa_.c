/*
 * XREFs of _lambda_1b97277dfd06d1a10fbbec949ac204fa_::_lambda_1b97277dfd06d1a10fbbec949ac204fa_ @ 0x1803EE07C
 * Callers:
 *     ?GetScreenCaptureAsWicBitmapSource@DDAScreenCapture@@QEAAJPEAUIWICImagingFactory@@PEAPEAUIWICBitmapSource@@@Z @ 0x1803EE20C (-GetScreenCaptureAsWicBitmapSource@DDAScreenCapture@@QEAAJPEAUIWICImagingFactory@@PEAPEAUIWICBit.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall lambda_1b97277dfd06d1a10fbbec949ac204fa_::_lambda_1b97277dfd06d1a10fbbec949ac204fa_(
        __int64 *a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v5; // rcx

  v5 = *a2;
  *a1 = *a2;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  a1[1] = a3;
  return a1;
}
