/*
 * XREFs of ?__clone@?$__func@V_lambda_2c577decc83877f534c94bb911f7d14a_@@$$A6AJK@Z@__function@wistd@@UEBAXPEAV?$__base@$$A6AJK@Z@23@@Z @ 0x1802E78B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall wistd::__function::__func<_lambda_2c577decc83877f534c94bb911f7d14a_,long (unsigned long)>::__clone(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax

  v2 = a2 + 1;
  *a2 = &wistd::__function::__func<_lambda_019925418f2d790c604ba5ca6109c73f_,long (unsigned long)>::`vftable';
  a2[1] = *(_QWORD *)(a1 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2 + 1);
  result = *(_QWORD *)(a1 + 16);
  v2[1] = result;
  return result;
}
