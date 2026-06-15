/*
 * XREFs of std::_Func_impl_no_alloc__lambda_44597a977486aefe783c27e19919ac62__void_::_Func_impl_no_alloc__lambda_44597a977486aefe783c27e19919ac62__void___lambda_44597a977486aefe783c27e19919ac62__0_ @ 0x1800F85E0
 * Callers:
 *     ?OnEndpointAvailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800FE940 (-OnEndpointAvailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 *     std::_Func_impl_no_alloc__lambda_44597a977486aefe783c27e19919ac62__void_::_Move @ 0x180100820 (std--_Func_impl_no_alloc__lambda_44597a977486aefe783c27e19919ac62__void_--_Move.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_44597a977486aefe783c27e19919ac62__void_::_Func_impl_no_alloc__lambda_44597a977486aefe783c27e19919ac62__void___lambda_44597a977486aefe783c27e19919ac62__0_(
        _QWORD *a1,
        _QWORD *a2)
{
  *a1 = off_180176EF0;
  a1[1] = 0LL;
  if ( a1 + 1 != a2 )
  {
    a1[1] = *a2;
    *a2 = 0LL;
  }
  return a1;
}
