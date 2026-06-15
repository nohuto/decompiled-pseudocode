/*
 * XREFs of std::_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_::_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void___lambda_0a934de8e0ca018258fd518f6b914e8b__0_ @ 0x1800F8590
 * Callers:
 *     ?DeleteAuxiliaryInputForStreamGroupInternal@CSharedStreamGroupProxy@@IEAAXPEBG@Z @ 0x1800FCA94 (-DeleteAuxiliaryInputForStreamGroupInternal@CSharedStreamGroupProxy@@IEAAXPEBG@Z.c)
 *     std::_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_::_Move @ 0x1801007E0 (std--_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_--_Move.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_::_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void___lambda_0a934de8e0ca018258fd518f6b914e8b__0_(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *result; // rax

  *a1 = off_180176F50;
  a1[1] = 0LL;
  if ( a1 + 1 != a2 )
  {
    a1[1] = *a2;
    *a2 = 0LL;
  }
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[2] = a2[1];
  a1[3] = a2[2];
  result = a1;
  a2[1] = 0LL;
  a2[2] = 0LL;
  return result;
}
