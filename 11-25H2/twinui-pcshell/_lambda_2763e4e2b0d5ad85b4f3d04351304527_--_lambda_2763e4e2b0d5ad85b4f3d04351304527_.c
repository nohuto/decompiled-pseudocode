/*
 * XREFs of _lambda_2763e4e2b0d5ad85b4f3d04351304527_::_lambda_2763e4e2b0d5ad85b4f3d04351304527_ @ 0x180322904
 * Callers:
 *     ?PrivateVisibleFullScreenViewChangedEvent@FullScreenPositioner@@AEAAJPEAUIApplicationView@@0@Z @ 0x1803245B0 (-PrivateVisibleFullScreenViewChangedEvent@FullScreenPositioner@@AEAAJPEAUIApplicationView@@0@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall lambda_2763e4e2b0d5ad85b4f3d04351304527_::_lambda_2763e4e2b0d5ad85b4f3d04351304527_(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  *a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  a1[1] = *a3;
  a1[2] = *a4;
  return a1;
}
