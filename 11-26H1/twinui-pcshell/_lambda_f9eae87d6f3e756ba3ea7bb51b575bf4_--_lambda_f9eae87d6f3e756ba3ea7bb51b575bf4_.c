/*
 * XREFs of _lambda_f9eae87d6f3e756ba3ea7bb51b575bf4_::_lambda_f9eae87d6f3e756ba3ea7bb51b575bf4_ @ 0x1802EBFD0
 * Callers:
 *     ?EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHWND__@@@Z @ 0x1802EC6D0 (-EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHW.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_QWORD *__fastcall lambda_f9eae87d6f3e756ba3ea7bb51b575bf4_::_lambda_f9eae87d6f3e756ba3ea7bb51b575bf4_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 *v5; // rcx
  _QWORD *result; // rax

  *a1 = a2;
  v5 = a1 + 1;
  *v5 = *a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v5);
  result = a1;
  a1[2] = a4;
  return result;
}
