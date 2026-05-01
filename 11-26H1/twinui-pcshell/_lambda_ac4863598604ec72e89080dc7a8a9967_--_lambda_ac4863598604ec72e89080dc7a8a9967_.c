/*
 * XREFs of _lambda_ac4863598604ec72e89080dc7a8a9967_::_lambda_ac4863598604ec72e89080dc7a8a9967_ @ 0x180304420
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_3c3f7fc14656b421e82e3329d2a90f9b___ @ 0x1800B1C60 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_3c3f7fc14656b421e82e3329d2a90f9b___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall lambda_ac4863598604ec72e89080dc7a8a9967_::_lambda_ac4863598604ec72e89080dc7a8a9967_(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4)
{
  *a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  a1[1] = a3;
  a1[2] = *a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1 + 2);
  return a1;
}
