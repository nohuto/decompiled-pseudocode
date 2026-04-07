/*
 * XREFs of std::_Func_impl_no_alloc__lambda_545816354afdfcb0efb7a4f85f5e27cb__void_::_Delete_this @ 0x180087770
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_545816354afdfcb0efb7a4f85f5e27cb_::__lambda_545816354afdfcb0efb7a4f85f5e27cb_ @ 0x180062804 (_lambda_545816354afdfcb0efb7a4f85f5e27cb_--__lambda_545816354afdfcb0efb7a4f85f5e27cb_.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_545816354afdfcb0efb7a4f85f5e27cb__void_::_Delete_this(
        _QWORD *a1,
        char a2)
{
  const struct std::nothrow_t *v4; // rdx

  lambda_545816354afdfcb0efb7a4f85f5e27cb_::__lambda_545816354afdfcb0efb7a4f85f5e27cb_(a1 + 1);
  if ( a2 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(a1, v4);
}
