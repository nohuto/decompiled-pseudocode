/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_874ff214a0b646fdadc64ee948f17e8a__void_::_scalar_deleting_destructor_ @ 0x180681B50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_874ff214a0b646fdadc64ee948f17e8a__void_::___abi_FunctorCapture__lambda_874ff214a0b646fdadc64ee948f17e8a__void_ @ 0x180681A54 (Platform--Details--__abi_FunctorCapture__lambda_874ff214a0b646fdadc64ee948f17e8a__void_--___abi_.c)
 */

_QWORD *__fastcall Platform::Details::__abi_FunctorCapture__lambda_874ff214a0b646fdadc64ee948f17e8a__void_::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  Platform::Details::__abi_FunctorCapture__lambda_874ff214a0b646fdadc64ee948f17e8a__void_::___abi_FunctorCapture__lambda_874ff214a0b646fdadc64ee948f17e8a__void_(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
  return a1;
}
