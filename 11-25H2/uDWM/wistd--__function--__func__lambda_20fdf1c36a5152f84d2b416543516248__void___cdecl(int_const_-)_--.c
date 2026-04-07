/*
 * XREFs of wistd::__function::__func__lambda_20fdf1c36a5152f84d2b416543516248__void___cdecl(int_const_&)_::_scalar_deleting_destructor_ @ 0x1800A21D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall wistd::__function::__func__lambda_20fdf1c36a5152f84d2b416543516248__void___cdecl_int_const____::_scalar_deleting_destructor_(
        _QWORD *a1,
        const struct std::nothrow_t *a2)
{
  *a1 = &wistd::__function::__base<void (int const &)>::`vftable';
  if ( ((unsigned __int8)a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(a1, a2);
  return a1;
}
