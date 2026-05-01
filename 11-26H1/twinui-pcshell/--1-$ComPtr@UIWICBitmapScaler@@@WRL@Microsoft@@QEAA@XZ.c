/*
 * XREFs of ??1?$ComPtr@UIWICBitmapScaler@@@WRL@Microsoft@@QEAA@XZ @ 0x1802BA1F8
 * Callers:
 *     __ScaleBitmap_::_1_::dtor$2 @ 0x1806D4AFB (__ScaleBitmap_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IWICBitmapScaler>::~ComPtr<IWICBitmapScaler>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<IWICBitmapScaler>::InternalRelease(a1);
}
